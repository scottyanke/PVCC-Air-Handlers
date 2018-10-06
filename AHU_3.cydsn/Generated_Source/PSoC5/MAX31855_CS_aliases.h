/*******************************************************************************
* File Name: MAX31855_CS.h  
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

#if !defined(CY_PINS_MAX31855_CS_ALIASES_H) /* Pins MAX31855_CS_ALIASES_H */
#define CY_PINS_MAX31855_CS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define MAX31855_CS_0			(MAX31855_CS__0__PC)
#define MAX31855_CS_0_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__0__SHIFT))

#define MAX31855_CS_1			(MAX31855_CS__1__PC)
#define MAX31855_CS_1_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__1__SHIFT))

#define MAX31855_CS_2			(MAX31855_CS__2__PC)
#define MAX31855_CS_2_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__2__SHIFT))

#define MAX31855_CS_3			(MAX31855_CS__3__PC)
#define MAX31855_CS_3_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__3__SHIFT))

#define MAX31855_CS_4			(MAX31855_CS__4__PC)
#define MAX31855_CS_4_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__4__SHIFT))

#define MAX31855_CS_5			(MAX31855_CS__5__PC)
#define MAX31855_CS_5_INTR	((uint16)((uint16)0x0001u << MAX31855_CS__5__SHIFT))

#define MAX31855_CS_INTR_ALL	 ((uint16)(MAX31855_CS_0_INTR| MAX31855_CS_1_INTR| MAX31855_CS_2_INTR| MAX31855_CS_3_INTR| MAX31855_CS_4_INTR| MAX31855_CS_5_INTR))

#endif /* End Pins MAX31855_CS_ALIASES_H */


/* [] END OF FILE */
