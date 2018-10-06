/*******************************************************************************
* File Name: Temp_CS_PM.c
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

#include "Temp_CS.h"

/* Check for removal by optimization */
#if !defined(Temp_CS_Sync_ctrl_reg__REMOVED)

static Temp_CS_BACKUP_STRUCT  Temp_CS_backup = {0u};

    
/*******************************************************************************
* Function Name: Temp_CS_SaveConfig
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
void Temp_CS_SaveConfig(void) 
{
    Temp_CS_backup.controlState = Temp_CS_Control;
}


/*******************************************************************************
* Function Name: Temp_CS_RestoreConfig
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
void Temp_CS_RestoreConfig(void) 
{
     Temp_CS_Control = Temp_CS_backup.controlState;
}


/*******************************************************************************
* Function Name: Temp_CS_Sleep
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
void Temp_CS_Sleep(void) 
{
    Temp_CS_SaveConfig();
}


/*******************************************************************************
* Function Name: Temp_CS_Wakeup
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
void Temp_CS_Wakeup(void)  
{
    Temp_CS_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
