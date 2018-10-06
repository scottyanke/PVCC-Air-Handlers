/*******************************************************************************
* File Name: kPA_theACLK.h
* Version 2.10
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_kPA_theACLK_H)
#define CY_CLOCK_kPA_theACLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void kPA_theACLK_Start(void) ;
void kPA_theACLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void kPA_theACLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void kPA_theACLK_StandbyPower(uint8 state) ;
void kPA_theACLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 kPA_theACLK_GetDividerRegister(void) ;
void kPA_theACLK_SetModeRegister(uint8 modeBitMask) ;
void kPA_theACLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 kPA_theACLK_GetModeRegister(void) ;
void kPA_theACLK_SetSourceRegister(uint8 clkSource) ;
uint8 kPA_theACLK_GetSourceRegister(void) ;
#if defined(kPA_theACLK__CFG3)
void kPA_theACLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 kPA_theACLK_GetPhaseRegister(void) ;
#endif /* defined(kPA_theACLK__CFG3) */

#define kPA_theACLK_Enable()                       kPA_theACLK_Start()
#define kPA_theACLK_Disable()                      kPA_theACLK_Stop()
#define kPA_theACLK_SetDivider(clkDivider)         kPA_theACLK_SetDividerRegister(clkDivider, 1u)
#define kPA_theACLK_SetDividerValue(clkDivider)    kPA_theACLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define kPA_theACLK_SetMode(clkMode)               kPA_theACLK_SetModeRegister(clkMode)
#define kPA_theACLK_SetSource(clkSource)           kPA_theACLK_SetSourceRegister(clkSource)
#if defined(kPA_theACLK__CFG3)
#define kPA_theACLK_SetPhase(clkPhase)             kPA_theACLK_SetPhaseRegister(clkPhase)
#define kPA_theACLK_SetPhaseValue(clkPhase)        kPA_theACLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(kPA_theACLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define kPA_theACLK_CLKEN              (* (reg8 *) kPA_theACLK__PM_ACT_CFG)
#define kPA_theACLK_CLKEN_PTR          ((reg8 *) kPA_theACLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define kPA_theACLK_CLKSTBY            (* (reg8 *) kPA_theACLK__PM_STBY_CFG)
#define kPA_theACLK_CLKSTBY_PTR        ((reg8 *) kPA_theACLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define kPA_theACLK_DIV_LSB            (* (reg8 *) kPA_theACLK__CFG0)
#define kPA_theACLK_DIV_LSB_PTR        ((reg8 *) kPA_theACLK__CFG0)
#define kPA_theACLK_DIV_PTR            ((reg16 *) kPA_theACLK__CFG0)

/* Clock MSB divider configuration register. */
#define kPA_theACLK_DIV_MSB            (* (reg8 *) kPA_theACLK__CFG1)
#define kPA_theACLK_DIV_MSB_PTR        ((reg8 *) kPA_theACLK__CFG1)

/* Mode and source configuration register */
#define kPA_theACLK_MOD_SRC            (* (reg8 *) kPA_theACLK__CFG2)
#define kPA_theACLK_MOD_SRC_PTR        ((reg8 *) kPA_theACLK__CFG2)

#if defined(kPA_theACLK__CFG3)
/* Analog clock phase configuration register */
#define kPA_theACLK_PHASE              (* (reg8 *) kPA_theACLK__CFG3)
#define kPA_theACLK_PHASE_PTR          ((reg8 *) kPA_theACLK__CFG3)
#endif /* defined(kPA_theACLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define kPA_theACLK_CLKEN_MASK         kPA_theACLK__PM_ACT_MSK
#define kPA_theACLK_CLKSTBY_MASK       kPA_theACLK__PM_STBY_MSK

/* CFG2 field masks */
#define kPA_theACLK_SRC_SEL_MSK        kPA_theACLK__CFG2_SRC_SEL_MASK
#define kPA_theACLK_MODE_MASK          (~(kPA_theACLK_SRC_SEL_MSK))

#if defined(kPA_theACLK__CFG3)
/* CFG3 phase mask */
#define kPA_theACLK_PHASE_MASK         kPA_theACLK__CFG3_PHASE_DLY_MASK
#endif /* defined(kPA_theACLK__CFG3) */

#endif /* CY_CLOCK_kPA_theACLK_H */


/* [] END OF FILE */
