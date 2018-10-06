/*******************************************************************************
* File Name: Pressure.h  
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

#if !defined(CY_PINS_Pressure_H) /* Pins Pressure_H */
#define CY_PINS_Pressure_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pressure_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pressure__PORT == 15 && ((Pressure__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Pressure_Write(uint8 value);
void    Pressure_SetDriveMode(uint8 mode);
uint8   Pressure_ReadDataReg(void);
uint8   Pressure_Read(void);
void    Pressure_SetInterruptMode(uint16 position, uint16 mode);
uint8   Pressure_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Pressure_SetDriveMode() function.
     *  @{
     */
        #define Pressure_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Pressure_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Pressure_DM_RES_UP          PIN_DM_RES_UP
        #define Pressure_DM_RES_DWN         PIN_DM_RES_DWN
        #define Pressure_DM_OD_LO           PIN_DM_OD_LO
        #define Pressure_DM_OD_HI           PIN_DM_OD_HI
        #define Pressure_DM_STRONG          PIN_DM_STRONG
        #define Pressure_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Pressure_MASK               Pressure__MASK
#define Pressure_SHIFT              Pressure__SHIFT
#define Pressure_WIDTH              1u

/* Interrupt constants */
#if defined(Pressure__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Pressure_SetInterruptMode() function.
     *  @{
     */
        #define Pressure_INTR_NONE      (uint16)(0x0000u)
        #define Pressure_INTR_RISING    (uint16)(0x0001u)
        #define Pressure_INTR_FALLING   (uint16)(0x0002u)
        #define Pressure_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Pressure_INTR_MASK      (0x01u) 
#endif /* (Pressure__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pressure_PS                     (* (reg8 *) Pressure__PS)
/* Data Register */
#define Pressure_DR                     (* (reg8 *) Pressure__DR)
/* Port Number */
#define Pressure_PRT_NUM                (* (reg8 *) Pressure__PRT) 
/* Connect to Analog Globals */                                                  
#define Pressure_AG                     (* (reg8 *) Pressure__AG)                       
/* Analog MUX bux enable */
#define Pressure_AMUX                   (* (reg8 *) Pressure__AMUX) 
/* Bidirectional Enable */                                                        
#define Pressure_BIE                    (* (reg8 *) Pressure__BIE)
/* Bit-mask for Aliased Register Access */
#define Pressure_BIT_MASK               (* (reg8 *) Pressure__BIT_MASK)
/* Bypass Enable */
#define Pressure_BYP                    (* (reg8 *) Pressure__BYP)
/* Port wide control signals */                                                   
#define Pressure_CTL                    (* (reg8 *) Pressure__CTL)
/* Drive Modes */
#define Pressure_DM0                    (* (reg8 *) Pressure__DM0) 
#define Pressure_DM1                    (* (reg8 *) Pressure__DM1)
#define Pressure_DM2                    (* (reg8 *) Pressure__DM2) 
/* Input Buffer Disable Override */
#define Pressure_INP_DIS                (* (reg8 *) Pressure__INP_DIS)
/* LCD Common or Segment Drive */
#define Pressure_LCD_COM_SEG            (* (reg8 *) Pressure__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pressure_LCD_EN                 (* (reg8 *) Pressure__LCD_EN)
/* Slew Rate Control */
#define Pressure_SLW                    (* (reg8 *) Pressure__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pressure_PRTDSI__CAPS_SEL       (* (reg8 *) Pressure__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pressure_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pressure__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pressure_PRTDSI__OE_SEL0        (* (reg8 *) Pressure__PRTDSI__OE_SEL0) 
#define Pressure_PRTDSI__OE_SEL1        (* (reg8 *) Pressure__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pressure_PRTDSI__OUT_SEL0       (* (reg8 *) Pressure__PRTDSI__OUT_SEL0) 
#define Pressure_PRTDSI__OUT_SEL1       (* (reg8 *) Pressure__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pressure_PRTDSI__SYNC_OUT       (* (reg8 *) Pressure__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Pressure__SIO_CFG)
    #define Pressure_SIO_HYST_EN        (* (reg8 *) Pressure__SIO_HYST_EN)
    #define Pressure_SIO_REG_HIFREQ     (* (reg8 *) Pressure__SIO_REG_HIFREQ)
    #define Pressure_SIO_CFG            (* (reg8 *) Pressure__SIO_CFG)
    #define Pressure_SIO_DIFF           (* (reg8 *) Pressure__SIO_DIFF)
#endif /* (Pressure__SIO_CFG) */

/* Interrupt Registers */
#if defined(Pressure__INTSTAT)
    #define Pressure_INTSTAT            (* (reg8 *) Pressure__INTSTAT)
    #define Pressure_SNAP               (* (reg8 *) Pressure__SNAP)
    
	#define Pressure_0_INTTYPE_REG 		(* (reg8 *) Pressure__0__INTTYPE)
#endif /* (Pressure__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pressure_H */


/* [] END OF FILE */
