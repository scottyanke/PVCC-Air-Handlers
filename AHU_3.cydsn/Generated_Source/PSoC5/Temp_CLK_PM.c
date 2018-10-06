/*******************************************************************************
* File Name: Temp_CLK_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "Temp_CLK.h"

/* Check for removal by optimization */
#if !defined(Temp_CLK_Sync_ctrl_reg__REMOVED)

static Temp_CLK_BACKUP_STRUCT  Temp_CLK_backup = {0u};

    
/*******************************************************************************
* Function Name: Temp_CLK_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Temp_CLK_SaveConfig(void) 
{
    Temp_CLK_backup.controlState = Temp_CLK_Control;
}


/*******************************************************************************
* Function Name: Temp_CLK_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void Temp_CLK_RestoreConfig(void) 
{
     Temp_CLK_Control = Temp_CLK_backup.controlState;
}


/*******************************************************************************
* Function Name: Temp_CLK_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Temp_CLK_Sleep(void) 
{
    Temp_CLK_SaveConfig();
}


/*******************************************************************************
* Function Name: Temp_CLK_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Temp_CLK_Wakeup(void)  
{
    Temp_CLK_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
