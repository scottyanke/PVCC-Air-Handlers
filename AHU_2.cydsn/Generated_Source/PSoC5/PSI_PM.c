/*******************************************************************************
* File Name: PSI_PM.c
* Version 3.30
*
* Description:
*  This file provides the power manager source code to the API for the
*  Delta-Sigma ADC Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PSI.h"

static PSI_BACKUP_STRUCT PSI_backup =
{
    PSI_DISABLED,
    PSI_CFG1_DEC_CR
};


/*******************************************************************************
* Function Name: PSI_SaveConfig
********************************************************************************
*
* Summary:
*  Save the register configuration which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PSI_backup:  This global structure variable is used to store
*  configuration registers which are non retention whenever user wants to go
*  sleep mode by calling Sleep() API.
*
*******************************************************************************/
void PSI_SaveConfig(void) 
{
    PSI_backup.deccr = PSI_DEC_CR_REG;
}


/*******************************************************************************
* Function Name: PSI_RestoreConfig
********************************************************************************
*
* Summary:
*  Restore the register configurations which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PSI_backup:  This global structure variable is used to restore
*  configuration registers which are non retention whenever user wants to switch
*  to active power mode by calling Wakeup() API.
*
*******************************************************************************/
void PSI_RestoreConfig(void) 
{
    PSI_DEC_CR_REG = PSI_backup.deccr;
}


/*******************************************************************************
* Function Name: PSI_Sleep
********************************************************************************
*
* Summary:
*  Stops the operation of the block and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PSI_backup:  The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void PSI_Sleep(void) 
{
    /* Save ADC enable state */
    if((PSI_ACT_PWR_DEC_EN == (PSI_PWRMGR_DEC_REG & PSI_ACT_PWR_DEC_EN)) &&
       (PSI_ACT_PWR_DSM_EN == (PSI_PWRMGR_DSM_REG & PSI_ACT_PWR_DSM_EN)))
    {
        /* Component is enabled */
        PSI_backup.enableState = PSI_ENABLED;
        if((PSI_DEC_CR_REG & PSI_DEC_START_CONV) != 0u)
        {   
            /* Conversion is started */
            PSI_backup.enableState |= PSI_STARTED;
        }
		
        /* Stop the configuration */
        PSI_Stop();
    }
    else
    {
        /* Component is disabled */
        PSI_backup.enableState = PSI_DISABLED;
    }

    /* Save the user configuration */
    PSI_SaveConfig();
}


/*******************************************************************************
* Function Name: PSI_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and enables the power to the block.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PSI_backup:  The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void PSI_Wakeup(void) 
{
    /* Restore the configuration */
    PSI_RestoreConfig();

    /* Enables the component operation */
    if(PSI_backup.enableState != PSI_DISABLED)
    {
        PSI_Enable();
        if((PSI_backup.enableState & PSI_STARTED) != 0u)
        {
            PSI_StartConvert();
        }
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
