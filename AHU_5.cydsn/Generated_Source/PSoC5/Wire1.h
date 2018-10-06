/*******************************************************************************
* File Name: Wire1.h  
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

#if !defined(CY_PINS_Wire1_H) /* Pins Wire1_H */
#define CY_PINS_Wire1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Wire1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Wire1__PORT == 15 && ((Wire1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Wire1_Write(uint8 value);
void    Wire1_SetDriveMode(uint8 mode);
uint8   Wire1_ReadDataReg(void);
uint8   Wire1_Read(void);
void    Wire1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Wire1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Wire1_SetDriveMode() function.
     *  @{
     */
        #define Wire1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Wire1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Wire1_DM_RES_UP          PIN_DM_RES_UP
        #define Wire1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Wire1_DM_OD_LO           PIN_DM_OD_LO
        #define Wire1_DM_OD_HI           PIN_DM_OD_HI
        #define Wire1_DM_STRONG          PIN_DM_STRONG
        #define Wire1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Wire1_MASK               Wire1__MASK
#define Wire1_SHIFT              Wire1__SHIFT
#define Wire1_WIDTH              1u

/* Interrupt constants */
#if defined(Wire1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Wire1_SetInterruptMode() function.
     *  @{
     */
        #define Wire1_INTR_NONE      (uint16)(0x0000u)
        #define Wire1_INTR_RISING    (uint16)(0x0001u)
        #define Wire1_INTR_FALLING   (uint16)(0x0002u)
        #define Wire1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Wire1_INTR_MASK      (0x01u) 
#endif /* (Wire1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Wire1_PS                     (* (reg8 *) Wire1__PS)
/* Data Register */
#define Wire1_DR                     (* (reg8 *) Wire1__DR)
/* Port Number */
#define Wire1_PRT_NUM                (* (reg8 *) Wire1__PRT) 
/* Connect to Analog Globals */                                                  
#define Wire1_AG                     (* (reg8 *) Wire1__AG)                       
/* Analog MUX bux enable */
#define Wire1_AMUX                   (* (reg8 *) Wire1__AMUX) 
/* Bidirectional Enable */                                                        
#define Wire1_BIE                    (* (reg8 *) Wire1__BIE)
/* Bit-mask for Aliased Register Access */
#define Wire1_BIT_MASK               (* (reg8 *) Wire1__BIT_MASK)
/* Bypass Enable */
#define Wire1_BYP                    (* (reg8 *) Wire1__BYP)
/* Port wide control signals */                                                   
#define Wire1_CTL                    (* (reg8 *) Wire1__CTL)
/* Drive Modes */
#define Wire1_DM0                    (* (reg8 *) Wire1__DM0) 
#define Wire1_DM1                    (* (reg8 *) Wire1__DM1)
#define Wire1_DM2                    (* (reg8 *) Wire1__DM2) 
/* Input Buffer Disable Override */
#define Wire1_INP_DIS                (* (reg8 *) Wire1__INP_DIS)
/* LCD Common or Segment Drive */
#define Wire1_LCD_COM_SEG            (* (reg8 *) Wire1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Wire1_LCD_EN                 (* (reg8 *) Wire1__LCD_EN)
/* Slew Rate Control */
#define Wire1_SLW                    (* (reg8 *) Wire1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Wire1_PRTDSI__CAPS_SEL       (* (reg8 *) Wire1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Wire1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Wire1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Wire1_PRTDSI__OE_SEL0        (* (reg8 *) Wire1__PRTDSI__OE_SEL0) 
#define Wire1_PRTDSI__OE_SEL1        (* (reg8 *) Wire1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Wire1_PRTDSI__OUT_SEL0       (* (reg8 *) Wire1__PRTDSI__OUT_SEL0) 
#define Wire1_PRTDSI__OUT_SEL1       (* (reg8 *) Wire1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Wire1_PRTDSI__SYNC_OUT       (* (reg8 *) Wire1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Wire1__SIO_CFG)
    #define Wire1_SIO_HYST_EN        (* (reg8 *) Wire1__SIO_HYST_EN)
    #define Wire1_SIO_REG_HIFREQ     (* (reg8 *) Wire1__SIO_REG_HIFREQ)
    #define Wire1_SIO_CFG            (* (reg8 *) Wire1__SIO_CFG)
    #define Wire1_SIO_DIFF           (* (reg8 *) Wire1__SIO_DIFF)
#endif /* (Wire1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Wire1__INTSTAT)
    #define Wire1_INTSTAT            (* (reg8 *) Wire1__INTSTAT)
    #define Wire1_SNAP               (* (reg8 *) Wire1__SNAP)
    
	#define Wire1_0_INTTYPE_REG 		(* (reg8 *) Wire1__0__INTTYPE)
#endif /* (Wire1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Wire1_H */


/* [] END OF FILE */
