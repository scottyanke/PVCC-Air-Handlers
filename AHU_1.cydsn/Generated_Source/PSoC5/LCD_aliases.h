/*******************************************************************************
* File Name: LCD.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LCD_ALIASES_H) /* Pins LCD_ALIASES_H */
#define CY_PINS_LCD_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define LCD_0			(LCD__0__PC)
#define LCD_0_INTR	((uint16)((uint16)0x0001u << LCD__0__SHIFT))

#define LCD_1			(LCD__1__PC)
#define LCD_1_INTR	((uint16)((uint16)0x0001u << LCD__1__SHIFT))

#define LCD_2			(LCD__2__PC)
#define LCD_2_INTR	((uint16)((uint16)0x0001u << LCD__2__SHIFT))

#define LCD_3			(LCD__3__PC)
#define LCD_3_INTR	((uint16)((uint16)0x0001u << LCD__3__SHIFT))

#define LCD_4			(LCD__4__PC)
#define LCD_4_INTR	((uint16)((uint16)0x0001u << LCD__4__SHIFT))

#define LCD_INTR_ALL	 ((uint16)(LCD_0_INTR| LCD_1_INTR| LCD_2_INTR| LCD_3_INTR| LCD_4_INTR))
#define LCD_SPI_MOSI			(LCD__SPI_MOSI__PC)
#define LCD_SPI_MOSI_INTR	((uint16)((uint16)0x0001u << LCD__0__SHIFT))

#define LCD_SPI_CLK			(LCD__SPI_CLK__PC)
#define LCD_SPI_CLK_INTR	((uint16)((uint16)0x0001u << LCD__1__SHIFT))

#define LCD_RST			(LCD__RST__PC)
#define LCD_RST_INTR	((uint16)((uint16)0x0001u << LCD__2__SHIFT))

#define LCD_CE			(LCD__CE__PC)
#define LCD_CE_INTR	((uint16)((uint16)0x0001u << LCD__3__SHIFT))

#define LCD_DC			(LCD__DC__PC)
#define LCD_DC_INTR	((uint16)((uint16)0x0001u << LCD__4__SHIFT))

#endif /* End Pins LCD_ALIASES_H */


/* [] END OF FILE */
