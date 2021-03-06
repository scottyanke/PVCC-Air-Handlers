/*******************************************************************************
* File Name: MAX31865_CS.h  
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

#if !defined(CY_PINS_MAX31865_CS_ALIASES_H) /* Pins MAX31865_CS_ALIASES_H */
#define CY_PINS_MAX31865_CS_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define MAX31865_CS_0			(MAX31865_CS__0__PC)
#define MAX31865_CS_0_INTR	((uint16)((uint16)0x0001u << MAX31865_CS__0__SHIFT))

#define MAX31865_CS_1			(MAX31865_CS__1__PC)
#define MAX31865_CS_1_INTR	((uint16)((uint16)0x0001u << MAX31865_CS__1__SHIFT))

#define MAX31865_CS_2			(MAX31865_CS__2__PC)
#define MAX31865_CS_2_INTR	((uint16)((uint16)0x0001u << MAX31865_CS__2__SHIFT))

#define MAX31865_CS_INTR_ALL	 ((uint16)(MAX31865_CS_0_INTR| MAX31865_CS_1_INTR| MAX31865_CS_2_INTR))

#endif /* End Pins MAX31865_CS_ALIASES_H */


/* [] END OF FILE */
