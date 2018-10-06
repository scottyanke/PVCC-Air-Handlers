/*******************************************************************************
* File Name: kPA_PM.c
* Version 3.0
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "kPA.h"


/***************************************
* Local data allocation
***************************************/

static kPA_BACKUP_STRUCT  kPA_backup =
{
    kPA_DISABLED
};


/*******************************************************************************
* Function Name: kPA_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void kPA_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: kPA_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void kPA_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: kPA_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The kPA_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  kPA_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void kPA_Sleep(void)
{
    if((kPA_PWRMGR_SAR_REG  & kPA_ACT_PWR_SAR_EN) != 0u)
    {
        if((kPA_SAR_CSR0_REG & kPA_SAR_SOF_START_CONV) != 0u)
        {
            kPA_backup.enableState = kPA_ENABLED | kPA_STARTED;
        }
        else
        {
            kPA_backup.enableState = kPA_ENABLED;
        }
        kPA_Stop();
    }
    else
    {
        kPA_backup.enableState = kPA_DISABLED;
    }
}


/*******************************************************************************
* Function Name: kPA_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  kPA_Sleep() was called. If the component was enabled before the
*  kPA_Sleep() function was called, the
*  kPA_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  kPA_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void kPA_Wakeup(void)
{
    if(kPA_backup.enableState != kPA_DISABLED)
    {
        kPA_Enable();
        #if(kPA_DEFAULT_CONV_MODE != kPA__HARDWARE_TRIGGER)
            if((kPA_backup.enableState & kPA_STARTED) != 0u)
            {
                kPA_StartConvert();
            }
        #endif /* End kPA_DEFAULT_CONV_MODE != kPA__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
