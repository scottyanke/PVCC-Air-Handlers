/*******************************************************************************
* File Name: Temp_CLK.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_Temp_CLK_H) /* CY_CONTROL_REG_Temp_CLK_H */
#define CY_CONTROL_REG_Temp_CLK_H

#include "cyfitter.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))
    #include "cytypes.h"
#else
    #include "syslib/cy_syslib.h"
#endif

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} Temp_CLK_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    Temp_CLK_Write(uint8 control) ;
uint8   Temp_CLK_Read(void) ;

void Temp_CLK_SaveConfig(void) ;
void Temp_CLK_RestoreConfig(void) ;
void Temp_CLK_Sleep(void) ; 
void Temp_CLK_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define Temp_CLK_Control        (* (reg8 *) Temp_CLK_Sync_ctrl_reg__CONTROL_REG )
#define Temp_CLK_Control_PTR    (  (reg8 *) Temp_CLK_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_Temp_CLK_H */


/* [] END OF FILE */
