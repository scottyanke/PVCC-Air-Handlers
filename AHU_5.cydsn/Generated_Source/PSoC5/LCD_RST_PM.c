/*******************************************************************************
* File Name: LCD_RST_PM.c
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

#include "LCD_RST.h"

/* Check for removal by optimization */
#if !defined(LCD_RST_Sync_ctrl_reg__REMOVED)

static LCD_RST_BACKUP_STRUCT  LCD_RST_backup = {0u};

    
/*******************************************************************************
* Function Name: LCD_RST_SaveConfig
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
void LCD_RST_SaveConfig(void) 
{
    LCD_RST_backup.controlState = LCD_RST_Control;
}


/*******************************************************************************
* Function Name: LCD_RST_RestoreConfig
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
void LCD_RST_RestoreConfig(void) 
{
     LCD_RST_Control = LCD_RST_backup.controlState;
}


/*******************************************************************************
* Function Name: LCD_RST_Sleep
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
void LCD_RST_Sleep(void) 
{
    LCD_RST_SaveConfig();
}


/*******************************************************************************
* Function Name: LCD_RST_Wakeup
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
void LCD_RST_Wakeup(void)  
{
    LCD_RST_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
