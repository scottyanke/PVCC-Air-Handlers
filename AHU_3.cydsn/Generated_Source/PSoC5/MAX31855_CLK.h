/*******************************************************************************
* File Name: MAX31855_CLK.h  
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

#if !defined(CY_PINS_MAX31855_CLK_H) /* Pins MAX31855_CLK_H */
#define CY_PINS_MAX31855_CLK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MAX31855_CLK_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MAX31855_CLK__PORT == 15 && ((MAX31855_CLK__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    MAX31855_CLK_Write(uint8 value);
void    MAX31855_CLK_SetDriveMode(uint8 mode);
uint8   MAX31855_CLK_ReadDataReg(void);
uint8   MAX31855_CLK_Read(void);
void    MAX31855_CLK_SetInterruptMode(uint16 position, uint16 mode);
uint8   MAX31855_CLK_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the MAX31855_CLK_SetDriveMode() function.
     *  @{
     */
        #define MAX31855_CLK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define MAX31855_CLK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define MAX31855_CLK_DM_RES_UP          PIN_DM_RES_UP
        #define MAX31855_CLK_DM_RES_DWN         PIN_DM_RES_DWN
        #define MAX31855_CLK_DM_OD_LO           PIN_DM_OD_LO
        #define MAX31855_CLK_DM_OD_HI           PIN_DM_OD_HI
        #define MAX31855_CLK_DM_STRONG          PIN_DM_STRONG
        #define MAX31855_CLK_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define MAX31855_CLK_MASK               MAX31855_CLK__MASK
#define MAX31855_CLK_SHIFT              MAX31855_CLK__SHIFT
#define MAX31855_CLK_WIDTH              1u

/* Interrupt constants */
#if defined(MAX31855_CLK__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MAX31855_CLK_SetInterruptMode() function.
     *  @{
     */
        #define MAX31855_CLK_INTR_NONE      (uint16)(0x0000u)
        #define MAX31855_CLK_INTR_RISING    (uint16)(0x0001u)
        #define MAX31855_CLK_INTR_FALLING   (uint16)(0x0002u)
        #define MAX31855_CLK_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define MAX31855_CLK_INTR_MASK      (0x01u) 
#endif /* (MAX31855_CLK__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MAX31855_CLK_PS                     (* (reg8 *) MAX31855_CLK__PS)
/* Data Register */
#define MAX31855_CLK_DR                     (* (reg8 *) MAX31855_CLK__DR)
/* Port Number */
#define MAX31855_CLK_PRT_NUM                (* (reg8 *) MAX31855_CLK__PRT) 
/* Connect to Analog Globals */                                                  
#define MAX31855_CLK_AG                     (* (reg8 *) MAX31855_CLK__AG)                       
/* Analog MUX bux enable */
#define MAX31855_CLK_AMUX                   (* (reg8 *) MAX31855_CLK__AMUX) 
/* Bidirectional Enable */                                                        
#define MAX31855_CLK_BIE                    (* (reg8 *) MAX31855_CLK__BIE)
/* Bit-mask for Aliased Register Access */
#define MAX31855_CLK_BIT_MASK               (* (reg8 *) MAX31855_CLK__BIT_MASK)
/* Bypass Enable */
#define MAX31855_CLK_BYP                    (* (reg8 *) MAX31855_CLK__BYP)
/* Port wide control signals */                                                   
#define MAX31855_CLK_CTL                    (* (reg8 *) MAX31855_CLK__CTL)
/* Drive Modes */
#define MAX31855_CLK_DM0                    (* (reg8 *) MAX31855_CLK__DM0) 
#define MAX31855_CLK_DM1                    (* (reg8 *) MAX31855_CLK__DM1)
#define MAX31855_CLK_DM2                    (* (reg8 *) MAX31855_CLK__DM2) 
/* Input Buffer Disable Override */
#define MAX31855_CLK_INP_DIS                (* (reg8 *) MAX31855_CLK__INP_DIS)
/* LCD Common or Segment Drive */
#define MAX31855_CLK_LCD_COM_SEG            (* (reg8 *) MAX31855_CLK__LCD_COM_SEG)
/* Enable Segment LCD */
#define MAX31855_CLK_LCD_EN                 (* (reg8 *) MAX31855_CLK__LCD_EN)
/* Slew Rate Control */
#define MAX31855_CLK_SLW                    (* (reg8 *) MAX31855_CLK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MAX31855_CLK_PRTDSI__CAPS_SEL       (* (reg8 *) MAX31855_CLK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MAX31855_CLK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MAX31855_CLK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MAX31855_CLK_PRTDSI__OE_SEL0        (* (reg8 *) MAX31855_CLK__PRTDSI__OE_SEL0) 
#define MAX31855_CLK_PRTDSI__OE_SEL1        (* (reg8 *) MAX31855_CLK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MAX31855_CLK_PRTDSI__OUT_SEL0       (* (reg8 *) MAX31855_CLK__PRTDSI__OUT_SEL0) 
#define MAX31855_CLK_PRTDSI__OUT_SEL1       (* (reg8 *) MAX31855_CLK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MAX31855_CLK_PRTDSI__SYNC_OUT       (* (reg8 *) MAX31855_CLK__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(MAX31855_CLK__SIO_CFG)
    #define MAX31855_CLK_SIO_HYST_EN        (* (reg8 *) MAX31855_CLK__SIO_HYST_EN)
    #define MAX31855_CLK_SIO_REG_HIFREQ     (* (reg8 *) MAX31855_CLK__SIO_REG_HIFREQ)
    #define MAX31855_CLK_SIO_CFG            (* (reg8 *) MAX31855_CLK__SIO_CFG)
    #define MAX31855_CLK_SIO_DIFF           (* (reg8 *) MAX31855_CLK__SIO_DIFF)
#endif /* (MAX31855_CLK__SIO_CFG) */

/* Interrupt Registers */
#if defined(MAX31855_CLK__INTSTAT)
    #define MAX31855_CLK_INTSTAT            (* (reg8 *) MAX31855_CLK__INTSTAT)
    #define MAX31855_CLK_SNAP               (* (reg8 *) MAX31855_CLK__SNAP)
    
	#define MAX31855_CLK_0_INTTYPE_REG 		(* (reg8 *) MAX31855_CLK__0__INTTYPE)
#endif /* (MAX31855_CLK__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MAX31855_CLK_H */


/* [] END OF FILE */
