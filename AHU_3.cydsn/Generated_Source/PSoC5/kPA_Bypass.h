/*******************************************************************************
* File Name: kPA_Bypass.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_kPA_Bypass_H) /* Pins kPA_Bypass_H */
#define CY_PINS_kPA_Bypass_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "kPA_Bypass_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 kPA_Bypass__PORT == 15 && ((kPA_Bypass__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    kPA_Bypass_Write(uint8 value) ;
void    kPA_Bypass_SetDriveMode(uint8 mode) ;
uint8   kPA_Bypass_ReadDataReg(void) ;
uint8   kPA_Bypass_Read(void) ;
uint8   kPA_Bypass_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define kPA_Bypass_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define kPA_Bypass_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define kPA_Bypass_DM_RES_UP          PIN_DM_RES_UP
#define kPA_Bypass_DM_RES_DWN         PIN_DM_RES_DWN
#define kPA_Bypass_DM_OD_LO           PIN_DM_OD_LO
#define kPA_Bypass_DM_OD_HI           PIN_DM_OD_HI
#define kPA_Bypass_DM_STRONG          PIN_DM_STRONG
#define kPA_Bypass_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define kPA_Bypass_MASK               kPA_Bypass__MASK
#define kPA_Bypass_SHIFT              kPA_Bypass__SHIFT
#define kPA_Bypass_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define kPA_Bypass_PS                     (* (reg8 *) kPA_Bypass__PS)
/* Data Register */
#define kPA_Bypass_DR                     (* (reg8 *) kPA_Bypass__DR)
/* Port Number */
#define kPA_Bypass_PRT_NUM                (* (reg8 *) kPA_Bypass__PRT) 
/* Connect to Analog Globals */                                                  
#define kPA_Bypass_AG                     (* (reg8 *) kPA_Bypass__AG)                       
/* Analog MUX bux enable */
#define kPA_Bypass_AMUX                   (* (reg8 *) kPA_Bypass__AMUX) 
/* Bidirectional Enable */                                                        
#define kPA_Bypass_BIE                    (* (reg8 *) kPA_Bypass__BIE)
/* Bit-mask for Aliased Register Access */
#define kPA_Bypass_BIT_MASK               (* (reg8 *) kPA_Bypass__BIT_MASK)
/* Bypass Enable */
#define kPA_Bypass_BYP                    (* (reg8 *) kPA_Bypass__BYP)
/* Port wide control signals */                                                   
#define kPA_Bypass_CTL                    (* (reg8 *) kPA_Bypass__CTL)
/* Drive Modes */
#define kPA_Bypass_DM0                    (* (reg8 *) kPA_Bypass__DM0) 
#define kPA_Bypass_DM1                    (* (reg8 *) kPA_Bypass__DM1)
#define kPA_Bypass_DM2                    (* (reg8 *) kPA_Bypass__DM2) 
/* Input Buffer Disable Override */
#define kPA_Bypass_INP_DIS                (* (reg8 *) kPA_Bypass__INP_DIS)
/* LCD Common or Segment Drive */
#define kPA_Bypass_LCD_COM_SEG            (* (reg8 *) kPA_Bypass__LCD_COM_SEG)
/* Enable Segment LCD */
#define kPA_Bypass_LCD_EN                 (* (reg8 *) kPA_Bypass__LCD_EN)
/* Slew Rate Control */
#define kPA_Bypass_SLW                    (* (reg8 *) kPA_Bypass__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define kPA_Bypass_PRTDSI__CAPS_SEL       (* (reg8 *) kPA_Bypass__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define kPA_Bypass_PRTDSI__DBL_SYNC_IN    (* (reg8 *) kPA_Bypass__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define kPA_Bypass_PRTDSI__OE_SEL0        (* (reg8 *) kPA_Bypass__PRTDSI__OE_SEL0) 
#define kPA_Bypass_PRTDSI__OE_SEL1        (* (reg8 *) kPA_Bypass__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define kPA_Bypass_PRTDSI__OUT_SEL0       (* (reg8 *) kPA_Bypass__PRTDSI__OUT_SEL0) 
#define kPA_Bypass_PRTDSI__OUT_SEL1       (* (reg8 *) kPA_Bypass__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define kPA_Bypass_PRTDSI__SYNC_OUT       (* (reg8 *) kPA_Bypass__PRTDSI__SYNC_OUT) 


#if defined(kPA_Bypass__INTSTAT)  /* Interrupt Registers */

    #define kPA_Bypass_INTSTAT                (* (reg8 *) kPA_Bypass__INTSTAT)
    #define kPA_Bypass_SNAP                   (* (reg8 *) kPA_Bypass__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_kPA_Bypass_H */


/* [] END OF FILE */
