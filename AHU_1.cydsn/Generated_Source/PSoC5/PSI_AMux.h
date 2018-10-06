/*******************************************************************************
* File Name: PSI_AMux.h
* Version 1.80
*
*  Description:
*    This file contains the constants and function prototypes for the Analog
*    Multiplexer User Module AMux.
*
*   Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_AMUX_PSI_AMux_H)
#define CY_AMUX_PSI_AMux_H

#include "cyfitter.h"
#include "cyfitter_cfg.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
         (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
         (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))    
    #include "cytypes.h"
#else
    #include "syslib/cy_syslib.h"
#endif /* ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) */


/***************************************
*        Function Prototypes
***************************************/

void PSI_AMux_Start(void) ;
#define PSI_AMux_Init() PSI_AMux_Start()
void PSI_AMux_FastSelect(uint8 channel) ;
/* The Stop, Select, Connect, Disconnect and DisconnectAll functions are declared elsewhere */
/* void PSI_AMux_Stop(void); */
/* void PSI_AMux_Select(uint8 channel); */
/* void PSI_AMux_Connect(uint8 channel); */
/* void PSI_AMux_Disconnect(uint8 channel); */
/* void PSI_AMux_DisconnectAll(void) */


/***************************************
*         Parameter Constants
***************************************/

#define PSI_AMux_CHANNELS  2u
#define PSI_AMux_MUXTYPE   1
#define PSI_AMux_ATMOSTONE 0

/***************************************
*             API Constants
***************************************/

#define PSI_AMux_NULL_CHANNEL 0xFFu
#define PSI_AMux_MUX_SINGLE   1
#define PSI_AMux_MUX_DIFF     2


/***************************************
*        Conditional Functions
***************************************/

#if PSI_AMux_MUXTYPE == PSI_AMux_MUX_SINGLE
# if !PSI_AMux_ATMOSTONE
#  define PSI_AMux_Connect(channel) PSI_AMux_Set(channel)
# endif
# define PSI_AMux_Disconnect(channel) PSI_AMux_Unset(channel)
#else
# if !PSI_AMux_ATMOSTONE
void PSI_AMux_Connect(uint8 channel) ;
# endif
void PSI_AMux_Disconnect(uint8 channel) ;
#endif

#if PSI_AMux_ATMOSTONE
# define PSI_AMux_Stop() PSI_AMux_DisconnectAll()
# define PSI_AMux_Select(channel) PSI_AMux_FastSelect(channel)
void PSI_AMux_DisconnectAll(void) ;
#else
# define PSI_AMux_Stop() PSI_AMux_Start()
void PSI_AMux_Select(uint8 channel) ;
# define PSI_AMux_DisconnectAll() PSI_AMux_Start()
#endif

#endif /* CY_AMUX_PSI_AMux_H */


/* [] END OF FILE */
