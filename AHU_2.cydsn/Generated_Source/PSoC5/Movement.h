/*******************************************************************************
* File Name: Movement.h  
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

#if !defined(CY_PINS_Movement_H) /* Pins Movement_H */
#define CY_PINS_Movement_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Movement_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Movement__PORT == 15 && ((Movement__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Movement_Write(uint8 value);
void    Movement_SetDriveMode(uint8 mode);
uint8   Movement_ReadDataReg(void);
uint8   Movement_Read(void);
void    Movement_SetInterruptMode(uint16 position, uint16 mode);
uint8   Movement_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Movement_SetDriveMode() function.
     *  @{
     */
        #define Movement_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Movement_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Movement_DM_RES_UP          PIN_DM_RES_UP
        #define Movement_DM_RES_DWN         PIN_DM_RES_DWN
        #define Movement_DM_OD_LO           PIN_DM_OD_LO
        #define Movement_DM_OD_HI           PIN_DM_OD_HI
        #define Movement_DM_STRONG          PIN_DM_STRONG
        #define Movement_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Movement_MASK               Movement__MASK
#define Movement_SHIFT              Movement__SHIFT
#define Movement_WIDTH              1u

/* Interrupt constants */
#if defined(Movement__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Movement_SetInterruptMode() function.
     *  @{
     */
        #define Movement_INTR_NONE      (uint16)(0x0000u)
        #define Movement_INTR_RISING    (uint16)(0x0001u)
        #define Movement_INTR_FALLING   (uint16)(0x0002u)
        #define Movement_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Movement_INTR_MASK      (0x01u) 
#endif /* (Movement__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Movement_PS                     (* (reg8 *) Movement__PS)
/* Data Register */
#define Movement_DR                     (* (reg8 *) Movement__DR)
/* Port Number */
#define Movement_PRT_NUM                (* (reg8 *) Movement__PRT) 
/* Connect to Analog Globals */                                                  
#define Movement_AG                     (* (reg8 *) Movement__AG)                       
/* Analog MUX bux enable */
#define Movement_AMUX                   (* (reg8 *) Movement__AMUX) 
/* Bidirectional Enable */                                                        
#define Movement_BIE                    (* (reg8 *) Movement__BIE)
/* Bit-mask for Aliased Register Access */
#define Movement_BIT_MASK               (* (reg8 *) Movement__BIT_MASK)
/* Bypass Enable */
#define Movement_BYP                    (* (reg8 *) Movement__BYP)
/* Port wide control signals */                                                   
#define Movement_CTL                    (* (reg8 *) Movement__CTL)
/* Drive Modes */
#define Movement_DM0                    (* (reg8 *) Movement__DM0) 
#define Movement_DM1                    (* (reg8 *) Movement__DM1)
#define Movement_DM2                    (* (reg8 *) Movement__DM2) 
/* Input Buffer Disable Override */
#define Movement_INP_DIS                (* (reg8 *) Movement__INP_DIS)
/* LCD Common or Segment Drive */
#define Movement_LCD_COM_SEG            (* (reg8 *) Movement__LCD_COM_SEG)
/* Enable Segment LCD */
#define Movement_LCD_EN                 (* (reg8 *) Movement__LCD_EN)
/* Slew Rate Control */
#define Movement_SLW                    (* (reg8 *) Movement__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Movement_PRTDSI__CAPS_SEL       (* (reg8 *) Movement__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Movement_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Movement__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Movement_PRTDSI__OE_SEL0        (* (reg8 *) Movement__PRTDSI__OE_SEL0) 
#define Movement_PRTDSI__OE_SEL1        (* (reg8 *) Movement__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Movement_PRTDSI__OUT_SEL0       (* (reg8 *) Movement__PRTDSI__OUT_SEL0) 
#define Movement_PRTDSI__OUT_SEL1       (* (reg8 *) Movement__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Movement_PRTDSI__SYNC_OUT       (* (reg8 *) Movement__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Movement__SIO_CFG)
    #define Movement_SIO_HYST_EN        (* (reg8 *) Movement__SIO_HYST_EN)
    #define Movement_SIO_REG_HIFREQ     (* (reg8 *) Movement__SIO_REG_HIFREQ)
    #define Movement_SIO_CFG            (* (reg8 *) Movement__SIO_CFG)
    #define Movement_SIO_DIFF           (* (reg8 *) Movement__SIO_DIFF)
#endif /* (Movement__SIO_CFG) */

/* Interrupt Registers */
#if defined(Movement__INTSTAT)
    #define Movement_INTSTAT            (* (reg8 *) Movement__INTSTAT)
    #define Movement_SNAP               (* (reg8 *) Movement__SNAP)
    
	#define Movement_0_INTTYPE_REG 		(* (reg8 *) Movement__0__INTTYPE)
#endif /* (Movement__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Movement_H */


/* [] END OF FILE */
