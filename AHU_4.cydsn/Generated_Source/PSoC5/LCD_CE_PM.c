/*******************************************************************************
* File Name: LCD_CE_PM.c
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

#include "LCD_CE.h"

/* Check for removal by optimization */
#if !defined(LCD_CE_Sync_ctrl_reg__REMOVED)

static LCD_CE_BACKUP_STRUCT  LCD_CE_backup = {0u};

    
/*******************************************************************************
* Function Name: LCD_CE_SaveConfig
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
void LCD_CE_SaveConfig(void) 
{
    LCD_CE_backup.controlState = LCD_CE_Control;
}


/*******************************************************************************
* Function Name: LCD_CE_RestoreConfig
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
void LCD_CE_RestoreConfig(void) 
{
     LCD_CE_Control = LCD_CE_backup.controlState;
}


/*******************************************************************************
* Function Name: LCD_CE_Sleep
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
void LCD_CE_Sleep(void) 
{
    LCD_CE_SaveConfig();
}


/*******************************************************************************
* Function Name: LCD_CE_Wakeup
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
void LCD_CE_Wakeup(void)  
{
    LCD_CE_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
