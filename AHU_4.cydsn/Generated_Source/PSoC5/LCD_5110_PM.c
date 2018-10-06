/*******************************************************************************
* File Name: LCD_5110_PM.c
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

#include "LCD_5110.h"

/* Check for removal by optimization */
#if !defined(LCD_5110_Sync_ctrl_reg__REMOVED)

static LCD_5110_BACKUP_STRUCT  LCD_5110_backup = {0u};

    
/*******************************************************************************
* Function Name: LCD_5110_SaveConfig
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
void LCD_5110_SaveConfig(void) 
{
    LCD_5110_backup.controlState = LCD_5110_Control;
}


/*******************************************************************************
* Function Name: LCD_5110_RestoreConfig
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
void LCD_5110_RestoreConfig(void) 
{
     LCD_5110_Control = LCD_5110_backup.controlState;
}


/*******************************************************************************
* Function Name: LCD_5110_Sleep
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
void LCD_5110_Sleep(void) 
{
    LCD_5110_SaveConfig();
}


/*******************************************************************************
* Function Name: LCD_5110_Wakeup
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
void LCD_5110_Wakeup(void)  
{
    LCD_5110_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
