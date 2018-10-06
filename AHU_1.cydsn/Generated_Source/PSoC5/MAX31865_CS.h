/*******************************************************************************
* File Name: MAX31865_CS.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MAX31865_CS_H) /* Pins MAX31865_CS_H */
#define CY_PINS_MAX31865_CS_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MAX31865_CS_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MAX31865_CS__PORT == 15 && ((MAX31865_CS__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MAX31865_CS_Write(uint8 value);
void    MAX31865_CS_SetDriveMode(uint8 mode);
uint8   MAX31865_CS_ReadDataReg(void);
uint8   MAX31865_CS_Read(void);
void    MAX31865_CS_SetInterruptMode(uint16 position, uint16 mode);
uint8   MAX31865_CS_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MAX31865_CS_SetDriveMode() function.
     *  @{
     */
        #define MAX31865_CS_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MAX31865_CS_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MAX31865_CS_DM_RES_UP          PIN_DM_RES_UP
        #define MAX31865_CS_DM_RES_DWN         PIN_DM_RES_DWN
        #define MAX31865_CS_DM_OD_LO           PIN_DM_OD_LO
        #define MAX31865_CS_DM_OD_HI           PIN_DM_OD_HI
        #define MAX31865_CS_DM_STRONG          PIN_DM_STRONG
        #define MAX31865_CS_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MAX31865_CS_MASK               MAX31865_CS__MASK
#define MAX31865_CS_SHIFT              MAX31865_CS__SHIFT
#define MAX31865_CS_WIDTH              8u

/* Interrupt constants */
#if defined(MAX31865_CS__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MAX31865_CS_SetInterruptMode() function.
     *  @{
     */
        #define MAX31865_CS_INTR_NONE      (uint16)(0x0000u)
        #define MAX31865_CS_INTR_RISING    (uint16)(0x0001u)
        #define MAX31865_CS_INTR_FALLING   (uint16)(0x0002u)
        #define MAX31865_CS_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MAX31865_CS_INTR_MASK      (0x01u) 
#endif /* (MAX31865_CS__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MAX31865_CS_PS                     (* (reg8 *) MAX31865_CS__PS)
/* Data Register */
#define MAX31865_CS_DR                     (* (reg8 *) MAX31865_CS__DR)
/* Port Number */
#define MAX31865_CS_PRT_NUM                (* (reg8 *) MAX31865_CS__PRT) 
/* Connect to Analog Globals */                                                  
#define MAX31865_CS_AG                     (* (reg8 *) MAX31865_CS__AG)                       
/* Analog MUX bux enable */
#define MAX31865_CS_AMUX                   (* (reg8 *) MAX31865_CS__AMUX) 
/* Bidirectional Enable */                                                        
#define MAX31865_CS_BIE                    (* (reg8 *) MAX31865_CS__BIE)
/* Bit-mask for Aliased Register Access */
#define MAX31865_CS_BIT_MASK               (* (reg8 *) MAX31865_CS__BIT_MASK)
/* Bypass Enable */
#define MAX31865_CS_BYP                    (* (reg8 *) MAX31865_CS__BYP)
/* Port wide control signals */                                                   
#define MAX31865_CS_CTL                    (* (reg8 *) MAX31865_CS__CTL)
/* Drive Modes */
#define MAX31865_CS_DM0                    (* (reg8 *) MAX31865_CS__DM0) 
#define MAX31865_CS_DM1                    (* (reg8 *) MAX31865_CS__DM1)
#define MAX31865_CS_DM2                    (* (reg8 *) MAX31865_CS__DM2) 
/* Input Buffer Disable Override */
#define MAX31865_CS_INP_DIS                (* (reg8 *) MAX31865_CS__INP_DIS)
/* LCD Common or Segment Drive */
#define MAX31865_CS_LCD_COM_SEG            (* (reg8 *) MAX31865_CS__LCD_COM_SEG)
/* Enable Segment LCD */
#define MAX31865_CS_LCD_EN                 (* (reg8 *) MAX31865_CS__LCD_EN)
/* Slew Rate Control */
#define MAX31865_CS_SLW                    (* (reg8 *) MAX31865_CS__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MAX31865_CS_PRTDSI__CAPS_SEL       (* (reg8 *) MAX31865_CS__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MAX31865_CS_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MAX31865_CS__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MAX31865_CS_PRTDSI__OE_SEL0        (* (reg8 *) MAX31865_CS__PRTDSI__OE_SEL0) 
#define MAX31865_CS_PRTDSI__OE_SEL1        (* (reg8 *) MAX31865_CS__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MAX31865_CS_PRTDSI__OUT_SEL0       (* (reg8 *) MAX31865_CS__PRTDSI__OUT_SEL0) 
#define MAX31865_CS_PRTDSI__OUT_SEL1       (* (reg8 *) MAX31865_CS__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MAX31865_CS_PRTDSI__SYNC_OUT       (* (reg8 *) MAX31865_CS__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MAX31865_CS__SIO_CFG)
    #define MAX31865_CS_SIO_HYST_EN        (* (reg8 *) MAX31865_CS__SIO_HYST_EN)
    #define MAX31865_CS_SIO_REG_HIFREQ     (* (reg8 *) MAX31865_CS__SIO_REG_HIFREQ)
    #define MAX31865_CS_SIO_CFG            (* (reg8 *) MAX31865_CS__SIO_CFG)
    #define MAX31865_CS_SIO_DIFF           (* (reg8 *) MAX31865_CS__SIO_DIFF)
#endif /* (MAX31865_CS__SIO_CFG) */

/* Interrupt Registers */
#if defined(MAX31865_CS__INTSTAT)
    #define MAX31865_CS_INTSTAT            (* (reg8 *) MAX31865_CS__INTSTAT)
    #define MAX31865_CS_SNAP               (* (reg8 *) MAX31865_CS__SNAP)
    
	#define MAX31865_CS_0_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__0__INTTYPE)
	#define MAX31865_CS_1_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__1__INTTYPE)
	#define MAX31865_CS_2_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__2__INTTYPE)
	#define MAX31865_CS_3_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__3__INTTYPE)
	#define MAX31865_CS_4_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__4__INTTYPE)
	#define MAX31865_CS_5_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__5__INTTYPE)
	#define MAX31865_CS_6_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__6__INTTYPE)
	#define MAX31865_CS_7_INTTYPE_REG 		(* (reg8 *) MAX31865_CS__7__INTTYPE)
#endif /* (MAX31865_CS__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MAX31865_CS_H */


/* [] END OF FILE */
