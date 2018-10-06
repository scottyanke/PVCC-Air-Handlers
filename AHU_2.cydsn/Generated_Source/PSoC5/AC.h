/*******************************************************************************
* File Name: AC.h  
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

#if !defined(CY_PINS_AC_H) /* Pins AC_H */
#define CY_PINS_AC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "AC_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 AC__PORT == 15 && ((AC__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    AC_Write(uint8 value);
void    AC_SetDriveMode(uint8 mode);
uint8   AC_ReadDataReg(void);
uint8   AC_Read(void);
void    AC_SetInterruptMode(uint16 position, uint16 mode);
uint8   AC_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the AC_SetDriveMode() function.
     *  @{
     */
        #define AC_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define AC_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define AC_DM_RES_UP          PIN_DM_RES_UP
        #define AC_DM_RES_DWN         PIN_DM_RES_DWN
        #define AC_DM_OD_LO           PIN_DM_OD_LO
        #define AC_DM_OD_HI           PIN_DM_OD_HI
        #define AC_DM_STRONG          PIN_DM_STRONG
        #define AC_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define AC_MASK               AC__MASK
#define AC_SHIFT              AC__SHIFT
#define AC_WIDTH              1u

/* Interrupt constants */
#if defined(AC__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in AC_SetInterruptMode() function.
     *  @{
     */
        #define AC_INTR_NONE      (uint16)(0x0000u)
        #define AC_INTR_RISING    (uint16)(0x0001u)
        #define AC_INTR_FALLING   (uint16)(0x0002u)
        #define AC_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define AC_INTR_MASK      (0x01u) 
#endif /* (AC__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define AC_PS                     (* (reg8 *) AC__PS)
/* Data Register */
#define AC_DR                     (* (reg8 *) AC__DR)
/* Port Number */
#define AC_PRT_NUM                (* (reg8 *) AC__PRT) 
/* Connect to Analog Globals */                                                  
#define AC_AG                     (* (reg8 *) AC__AG)                       
/* Analog MUX bux enable */
#define AC_AMUX                   (* (reg8 *) AC__AMUX) 
/* Bidirectional Enable */                                                        
#define AC_BIE                    (* (reg8 *) AC__BIE)
/* Bit-mask for Aliased Register Access */
#define AC_BIT_MASK               (* (reg8 *) AC__BIT_MASK)
/* Bypass Enable */
#define AC_BYP                    (* (reg8 *) AC__BYP)
/* Port wide control signals */                                                   
#define AC_CTL                    (* (reg8 *) AC__CTL)
/* Drive Modes */
#define AC_DM0                    (* (reg8 *) AC__DM0) 
#define AC_DM1                    (* (reg8 *) AC__DM1)
#define AC_DM2                    (* (reg8 *) AC__DM2) 
/* Input Buffer Disable Override */
#define AC_INP_DIS                (* (reg8 *) AC__INP_DIS)
/* LCD Common or Segment Drive */
#define AC_LCD_COM_SEG            (* (reg8 *) AC__LCD_COM_SEG)
/* Enable Segment LCD */
#define AC_LCD_EN                 (* (reg8 *) AC__LCD_EN)
/* Slew Rate Control */
#define AC_SLW                    (* (reg8 *) AC__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define AC_PRTDSI__CAPS_SEL       (* (reg8 *) AC__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define AC_PRTDSI__DBL_SYNC_IN    (* (reg8 *) AC__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define AC_PRTDSI__OE_SEL0        (* (reg8 *) AC__PRTDSI__OE_SEL0) 
#define AC_PRTDSI__OE_SEL1        (* (reg8 *) AC__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define AC_PRTDSI__OUT_SEL0       (* (reg8 *) AC__PRTDSI__OUT_SEL0) 
#define AC_PRTDSI__OUT_SEL1       (* (reg8 *) AC__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define AC_PRTDSI__SYNC_OUT       (* (reg8 *) AC__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(AC__SIO_CFG)
    #define AC_SIO_HYST_EN        (* (reg8 *) AC__SIO_HYST_EN)
    #define AC_SIO_REG_HIFREQ     (* (reg8 *) AC__SIO_REG_HIFREQ)
    #define AC_SIO_CFG            (* (reg8 *) AC__SIO_CFG)
    #define AC_SIO_DIFF           (* (reg8 *) AC__SIO_DIFF)
#endif /* (AC__SIO_CFG) */

/* Interrupt Registers */
#if defined(AC__INTSTAT)
    #define AC_INTSTAT            (* (reg8 *) AC__INTSTAT)
    #define AC_SNAP               (* (reg8 *) AC__SNAP)
    
	#define AC_0_INTTYPE_REG 		(* (reg8 *) AC__0__INTTYPE)
#endif /* (AC__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_AC_H */


/* [] END OF FILE */
