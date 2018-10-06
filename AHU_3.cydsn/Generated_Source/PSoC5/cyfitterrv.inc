;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; AC
AC__0__INTTYPE EQU CYREG_PICU2_INTTYPE7
AC__0__MASK EQU 0x80
AC__0__PC EQU CYREG_PRT2_PC7
AC__0__PORT EQU 2
AC__0__SHIFT EQU 7
AC__AG EQU CYREG_PRT2_AG
AC__AMUX EQU CYREG_PRT2_AMUX
AC__BIE EQU CYREG_PRT2_BIE
AC__BIT_MASK EQU CYREG_PRT2_BIT_MASK
AC__BYP EQU CYREG_PRT2_BYP
AC__CTL EQU CYREG_PRT2_CTL
AC__DM0 EQU CYREG_PRT2_DM0
AC__DM1 EQU CYREG_PRT2_DM1
AC__DM2 EQU CYREG_PRT2_DM2
AC__DR EQU CYREG_PRT2_DR
AC__INP_DIS EQU CYREG_PRT2_INP_DIS
AC__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
AC__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
AC__LCD_EN EQU CYREG_PRT2_LCD_EN
AC__MASK EQU 0x80
AC__PORT EQU 2
AC__PRT EQU CYREG_PRT2_PRT
AC__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
AC__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
AC__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
AC__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
AC__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
AC__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
AC__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
AC__PS EQU CYREG_PRT2_PS
AC__SHIFT EQU 7
AC__SLW EQU CYREG_PRT2_SLW

; Rx
Rx__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx__0__MASK EQU 0x40
Rx__0__PC EQU CYREG_PRT12_PC6
Rx__0__PORT EQU 12
Rx__0__SHIFT EQU 6
Rx__AG EQU CYREG_PRT12_AG
Rx__BIE EQU CYREG_PRT12_BIE
Rx__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx__BYP EQU CYREG_PRT12_BYP
Rx__DM0 EQU CYREG_PRT12_DM0
Rx__DM1 EQU CYREG_PRT12_DM1
Rx__DM2 EQU CYREG_PRT12_DM2
Rx__DR EQU CYREG_PRT12_DR
Rx__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx__MASK EQU 0x40
Rx__PORT EQU 12
Rx__PRT EQU CYREG_PRT12_PRT
Rx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx__PS EQU CYREG_PRT12_PS
Rx__SHIFT EQU 6
Rx__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx__SLW EQU CYREG_PRT12_SLW
Rx_Int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Rx_Int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Rx_Int__INTC_MASK EQU 0x01
Rx_Int__INTC_NUMBER EQU 0
Rx_Int__INTC_PRIOR_NUM EQU 7
Rx_Int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
Rx_Int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Rx_Int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; Tx
Tx__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx__0__MASK EQU 0x80
Tx__0__PC EQU CYREG_PRT12_PC7
Tx__0__PORT EQU 12
Tx__0__SHIFT EQU 7
Tx__AG EQU CYREG_PRT12_AG
Tx__BIE EQU CYREG_PRT12_BIE
Tx__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx__BYP EQU CYREG_PRT12_BYP
Tx__DM0 EQU CYREG_PRT12_DM0
Tx__DM1 EQU CYREG_PRT12_DM1
Tx__DM2 EQU CYREG_PRT12_DM2
Tx__DR EQU CYREG_PRT12_DR
Tx__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx__MASK EQU 0x80
Tx__PORT EQU 12
Tx__PRT EQU CYREG_PRT12_PRT
Tx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx__PS EQU CYREG_PRT12_PS
Tx__SHIFT EQU 7
Tx__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx__SLW EQU CYREG_PRT12_SLW

; AC2
AC2__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
AC2__0__MASK EQU 0x40
AC2__0__PC EQU CYREG_PRT2_PC6
AC2__0__PORT EQU 2
AC2__0__SHIFT EQU 6
AC2__AG EQU CYREG_PRT2_AG
AC2__AMUX EQU CYREG_PRT2_AMUX
AC2__BIE EQU CYREG_PRT2_BIE
AC2__BIT_MASK EQU CYREG_PRT2_BIT_MASK
AC2__BYP EQU CYREG_PRT2_BYP
AC2__CTL EQU CYREG_PRT2_CTL
AC2__DM0 EQU CYREG_PRT2_DM0
AC2__DM1 EQU CYREG_PRT2_DM1
AC2__DM2 EQU CYREG_PRT2_DM2
AC2__DR EQU CYREG_PRT2_DR
AC2__INP_DIS EQU CYREG_PRT2_INP_DIS
AC2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
AC2__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
AC2__LCD_EN EQU CYREG_PRT2_LCD_EN
AC2__MASK EQU 0x40
AC2__PORT EQU 2
AC2__PRT EQU CYREG_PRT2_PRT
AC2__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
AC2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
AC2__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
AC2__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
AC2__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
AC2__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
AC2__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
AC2__PS EQU CYREG_PRT2_PS
AC2__SHIFT EQU 6
AC2__SLW EQU CYREG_PRT2_SLW

; LED
LED__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
LED__0__MASK EQU 0x02
LED__0__PC EQU CYREG_PRT2_PC1
LED__0__PORT EQU 2
LED__0__SHIFT EQU 1
LED__AG EQU CYREG_PRT2_AG
LED__AMUX EQU CYREG_PRT2_AMUX
LED__BIE EQU CYREG_PRT2_BIE
LED__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED__BYP EQU CYREG_PRT2_BYP
LED__CTL EQU CYREG_PRT2_CTL
LED__DM0 EQU CYREG_PRT2_DM0
LED__DM1 EQU CYREG_PRT2_DM1
LED__DM2 EQU CYREG_PRT2_DM2
LED__DR EQU CYREG_PRT2_DR
LED__INP_DIS EQU CYREG_PRT2_INP_DIS
LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED__LCD_EN EQU CYREG_PRT2_LCD_EN
LED__MASK EQU 0x02
LED__PORT EQU 2
LED__PRT EQU CYREG_PRT2_PRT
LED__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED__PS EQU CYREG_PRT2_PS
LED__SHIFT EQU 1
LED__SLW EQU CYREG_PRT2_SLW

; PSI
PSI_DEC__COHER EQU CYREG_DEC_COHER
PSI_DEC__CR EQU CYREG_DEC_CR
PSI_DEC__DR1 EQU CYREG_DEC_DR1
PSI_DEC__DR2 EQU CYREG_DEC_DR2
PSI_DEC__DR2H EQU CYREG_DEC_DR2H
PSI_DEC__GCOR EQU CYREG_DEC_GCOR
PSI_DEC__GCORH EQU CYREG_DEC_GCORH
PSI_DEC__GVAL EQU CYREG_DEC_GVAL
PSI_DEC__OCOR EQU CYREG_DEC_OCOR
PSI_DEC__OCORH EQU CYREG_DEC_OCORH
PSI_DEC__OCORM EQU CYREG_DEC_OCORM
PSI_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
PSI_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
PSI_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
PSI_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
PSI_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
PSI_DEC__PM_ACT_MSK EQU 0x01
PSI_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
PSI_DEC__PM_STBY_MSK EQU 0x01
PSI_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
PSI_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
PSI_DEC__SR EQU CYREG_DEC_SR
PSI_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
PSI_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
PSI_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
PSI_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
PSI_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
PSI_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
PSI_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
PSI_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8
PSI_DSM__BUF0 EQU CYREG_DSM0_BUF0
PSI_DSM__BUF1 EQU CYREG_DSM0_BUF1
PSI_DSM__BUF2 EQU CYREG_DSM0_BUF2
PSI_DSM__BUF3 EQU CYREG_DSM0_BUF3
PSI_DSM__CLK EQU CYREG_DSM0_CLK
PSI_DSM__CR0 EQU CYREG_DSM0_CR0
PSI_DSM__CR1 EQU CYREG_DSM0_CR1
PSI_DSM__CR10 EQU CYREG_DSM0_CR10
PSI_DSM__CR11 EQU CYREG_DSM0_CR11
PSI_DSM__CR12 EQU CYREG_DSM0_CR12
PSI_DSM__CR13 EQU CYREG_DSM0_CR13
PSI_DSM__CR14 EQU CYREG_DSM0_CR14
PSI_DSM__CR15 EQU CYREG_DSM0_CR15
PSI_DSM__CR16 EQU CYREG_DSM0_CR16
PSI_DSM__CR17 EQU CYREG_DSM0_CR17
PSI_DSM__CR2 EQU CYREG_DSM0_CR2
PSI_DSM__CR3 EQU CYREG_DSM0_CR3
PSI_DSM__CR4 EQU CYREG_DSM0_CR4
PSI_DSM__CR5 EQU CYREG_DSM0_CR5
PSI_DSM__CR6 EQU CYREG_DSM0_CR6
PSI_DSM__CR7 EQU CYREG_DSM0_CR7
PSI_DSM__CR8 EQU CYREG_DSM0_CR8
PSI_DSM__CR9 EQU CYREG_DSM0_CR9
PSI_DSM__DEM0 EQU CYREG_DSM0_DEM0
PSI_DSM__DEM1 EQU CYREG_DSM0_DEM1
PSI_DSM__MISC EQU CYREG_DSM0_MISC
PSI_DSM__OUT0 EQU CYREG_DSM0_OUT0
PSI_DSM__OUT1 EQU CYREG_DSM0_OUT1
PSI_DSM__REF0 EQU CYREG_DSM0_REF0
PSI_DSM__REF1 EQU CYREG_DSM0_REF1
PSI_DSM__REF2 EQU CYREG_DSM0_REF2
PSI_DSM__REF3 EQU CYREG_DSM0_REF3
PSI_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
PSI_DSM__SW0 EQU CYREG_DSM0_SW0
PSI_DSM__SW2 EQU CYREG_DSM0_SW2
PSI_DSM__SW3 EQU CYREG_DSM0_SW3
PSI_DSM__SW4 EQU CYREG_DSM0_SW4
PSI_DSM__SW6 EQU CYREG_DSM0_SW6
PSI_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
PSI_DSM__TST0 EQU CYREG_DSM0_TST0
PSI_DSM__TST1 EQU CYREG_DSM0_TST1
PSI_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
PSI_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
PSI_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
PSI_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
PSI_Ext_CP_Clk__INDEX EQU 0x00
PSI_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
PSI_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
PSI_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
PSI_Ext_CP_Clk__PM_STBY_MSK EQU 0x01
PSI_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
PSI_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
PSI_IRQ__INTC_MASK EQU 0x20000000
PSI_IRQ__INTC_NUMBER EQU 29
PSI_IRQ__INTC_PRIOR_NUM EQU 7
PSI_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
PSI_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
PSI_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
PSI_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
PSI_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
PSI_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
PSI_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
PSI_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
PSI_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
PSI_theACLK__INDEX EQU 0x00
PSI_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
PSI_theACLK__PM_ACT_MSK EQU 0x01
PSI_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
PSI_theACLK__PM_STBY_MSK EQU 0x01

; Pin_1
Pin_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE5
Pin_1__0__MASK EQU 0x20
Pin_1__0__PC EQU CYREG_PRT12_PC5
Pin_1__0__PORT EQU 12
Pin_1__0__SHIFT EQU 5
Pin_1__AG EQU CYREG_PRT12_AG
Pin_1__BIE EQU CYREG_PRT12_BIE
Pin_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Pin_1__BYP EQU CYREG_PRT12_BYP
Pin_1__DM0 EQU CYREG_PRT12_DM0
Pin_1__DM1 EQU CYREG_PRT12_DM1
Pin_1__DM2 EQU CYREG_PRT12_DM2
Pin_1__DR EQU CYREG_PRT12_DR
Pin_1__INP_DIS EQU CYREG_PRT12_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Pin_1__MASK EQU 0x20
Pin_1__PORT EQU 12
Pin_1__PRT EQU CYREG_PRT12_PRT
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Pin_1__PS EQU CYREG_PRT12_PS
Pin_1__SHIFT EQU 5
Pin_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Pin_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Pin_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Pin_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Pin_1__SLW EQU CYREG_PRT12_SLW

; RS485
RS485_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
RS485_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
RS485_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
RS485_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB09_10_CTL
RS485_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB09_10_CTL
RS485_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB09_10_MSK
RS485_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
RS485_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB09_10_MSK
RS485_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB09_10_MSK
RS485_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
RS485_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB09_CTL
RS485_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB09_ST_CTL
RS485_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB09_CTL
RS485_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB09_ST_CTL
RS485_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB09_MSK
RS485_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
RS485_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB09_10_ST
RS485_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB09_MSK
RS485_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
RS485_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB09_ST_CTL
RS485_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB09_ST_CTL
RS485_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB09_ST
RS485_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB09_10_A0
RS485_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB09_10_A1
RS485_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB09_10_D0
RS485_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB09_10_D1
RS485_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_10_ACTL
RS485_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB09_10_F0
RS485_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB09_10_F1
RS485_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB09_A0_A1
RS485_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB09_A0
RS485_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB09_A1
RS485_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB09_D0_D1
RS485_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB09_D0
RS485_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB09_D1
RS485_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB09_ACTL
RS485_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB09_F0_F1
RS485_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB09_F0
RS485_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB09_F1
RS485_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB09_MSK_ACTL
RS485_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
RS485_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
RS485_BUART_sRX_RxSts__3__MASK EQU 0x08
RS485_BUART_sRX_RxSts__3__POS EQU 3
RS485_BUART_sRX_RxSts__4__MASK EQU 0x10
RS485_BUART_sRX_RxSts__4__POS EQU 4
RS485_BUART_sRX_RxSts__5__MASK EQU 0x20
RS485_BUART_sRX_RxSts__5__POS EQU 5
RS485_BUART_sRX_RxSts__MASK EQU 0x38
RS485_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB09_MSK
RS485_BUART_sRX_RxSts__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
RS485_BUART_sRX_RxSts__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
RS485_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
RS485_BUART_sRX_RxSts__STATUS_CNT_REG EQU CYREG_B1_UDB09_ST_CTL
RS485_BUART_sRX_RxSts__STATUS_CONTROL_REG EQU CYREG_B1_UDB09_ST_CTL
RS485_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB09_ST
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B1_UDB08_09_A0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B1_UDB08_09_A1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B1_UDB08_09_D0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B1_UDB08_09_D1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B1_UDB08_09_F0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B1_UDB08_09_F1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B1_UDB08_A0_A1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B1_UDB08_A0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B1_UDB08_A1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B1_UDB08_D0_D1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B1_UDB08_D0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B1_UDB08_D1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
RS485_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B1_UDB08_F0_F1
RS485_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B1_UDB08_F0
RS485_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B1_UDB08_F1
RS485_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB09_10_A0
RS485_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB09_10_A1
RS485_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB09_10_D0
RS485_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB09_10_D1
RS485_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
RS485_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB09_10_F0
RS485_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB09_10_F1
RS485_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB09_A0_A1
RS485_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B1_UDB09_A0
RS485_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B1_UDB09_A1
RS485_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB09_D0_D1
RS485_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B1_UDB09_D0
RS485_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B1_UDB09_D1
RS485_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
RS485_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB09_F0_F1
RS485_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B1_UDB09_F0
RS485_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B1_UDB09_F1
RS485_BUART_sTX_TxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
RS485_BUART_sTX_TxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
RS485_BUART_sTX_TxSts__0__MASK EQU 0x01
RS485_BUART_sTX_TxSts__0__POS EQU 0
RS485_BUART_sTX_TxSts__1__MASK EQU 0x02
RS485_BUART_sTX_TxSts__1__POS EQU 1
RS485_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
RS485_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
RS485_BUART_sTX_TxSts__2__MASK EQU 0x04
RS485_BUART_sTX_TxSts__2__POS EQU 2
RS485_BUART_sTX_TxSts__3__MASK EQU 0x08
RS485_BUART_sTX_TxSts__3__POS EQU 3
RS485_BUART_sTX_TxSts__MASK EQU 0x0F
RS485_BUART_sTX_TxSts__MASK_REG EQU CYREG_B1_UDB10_MSK
RS485_BUART_sTX_TxSts__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
RS485_BUART_sTX_TxSts__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
RS485_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
RS485_BUART_sTX_TxSts__STATUS_CNT_REG EQU CYREG_B1_UDB10_ST_CTL
RS485_BUART_sTX_TxSts__STATUS_CONTROL_REG EQU CYREG_B1_UDB10_ST_CTL
RS485_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B1_UDB10_ST
RS485_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
RS485_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
RS485_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
RS485_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
RS485_IntClock__INDEX EQU 0x01
RS485_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
RS485_IntClock__PM_ACT_MSK EQU 0x02
RS485_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
RS485_IntClock__PM_STBY_MSK EQU 0x02

; Timer
Timer_Int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Timer_Int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Timer_Int__INTC_MASK EQU 0x02
Timer_Int__INTC_NUMBER EQU 1
Timer_Int__INTC_PRIOR_NUM EQU 7
Timer_Int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
Timer_Int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Timer_Int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
Timer_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_TimerHW__PM_ACT_MSK EQU 0x01
Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_TimerHW__PM_STBY_MSK EQU 0x01
Timer_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_TimerHW__SR0 EQU CYREG_TMR0_SR0

; Wire1
Wire1__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
Wire1__0__MASK EQU 0x10
Wire1__0__PC EQU CYREG_PRT12_PC4
Wire1__0__PORT EQU 12
Wire1__0__SHIFT EQU 4
Wire1__AG EQU CYREG_PRT12_AG
Wire1__BIE EQU CYREG_PRT12_BIE
Wire1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Wire1__BYP EQU CYREG_PRT12_BYP
Wire1__DM0 EQU CYREG_PRT12_DM0
Wire1__DM1 EQU CYREG_PRT12_DM1
Wire1__DM2 EQU CYREG_PRT12_DM2
Wire1__DR EQU CYREG_PRT12_DR
Wire1__INP_DIS EQU CYREG_PRT12_INP_DIS
Wire1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Wire1__MASK EQU 0x10
Wire1__PORT EQU 12
Wire1__PRT EQU CYREG_PRT12_PRT
Wire1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Wire1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Wire1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Wire1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Wire1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Wire1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Wire1__PS EQU CYREG_PRT12_PS
Wire1__SHIFT EQU 4
Wire1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Wire1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Wire1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Wire1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Wire1__SLW EQU CYREG_PRT12_SLW

; Temp_CS
Temp_CS_Sync_ctrl_reg__0__MASK EQU 0x01
Temp_CS_Sync_ctrl_reg__0__POS EQU 0
Temp_CS_Sync_ctrl_reg__1__MASK EQU 0x02
Temp_CS_Sync_ctrl_reg__1__POS EQU 1
Temp_CS_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
Temp_CS_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
Temp_CS_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
Temp_CS_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB09_10_CTL
Temp_CS_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB09_10_CTL
Temp_CS_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB09_10_MSK
Temp_CS_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
Temp_CS_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB09_10_MSK
Temp_CS_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB09_10_MSK
Temp_CS_Sync_ctrl_reg__2__MASK EQU 0x04
Temp_CS_Sync_ctrl_reg__2__POS EQU 2
Temp_CS_Sync_ctrl_reg__3__MASK EQU 0x08
Temp_CS_Sync_ctrl_reg__3__POS EQU 3
Temp_CS_Sync_ctrl_reg__4__MASK EQU 0x10
Temp_CS_Sync_ctrl_reg__4__POS EQU 4
Temp_CS_Sync_ctrl_reg__5__MASK EQU 0x20
Temp_CS_Sync_ctrl_reg__5__POS EQU 5
Temp_CS_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
Temp_CS_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B1_UDB09_CTL
Temp_CS_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B1_UDB09_ST_CTL
Temp_CS_Sync_ctrl_reg__COUNT_REG EQU CYREG_B1_UDB09_CTL
Temp_CS_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B1_UDB09_ST_CTL
Temp_CS_Sync_ctrl_reg__MASK EQU 0x3F
Temp_CS_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
Temp_CS_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB09_MSK_ACTL
Temp_CS_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B1_UDB09_MSK

; Movement
Movement__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Movement__0__MASK EQU 0x01
Movement__0__PC EQU CYREG_PRT0_PC0
Movement__0__PORT EQU 0
Movement__0__SHIFT EQU 0
Movement__AG EQU CYREG_PRT0_AG
Movement__AMUX EQU CYREG_PRT0_AMUX
Movement__BIE EQU CYREG_PRT0_BIE
Movement__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Movement__BYP EQU CYREG_PRT0_BYP
Movement__CTL EQU CYREG_PRT0_CTL
Movement__DM0 EQU CYREG_PRT0_DM0
Movement__DM1 EQU CYREG_PRT0_DM1
Movement__DM2 EQU CYREG_PRT0_DM2
Movement__DR EQU CYREG_PRT0_DR
Movement__INP_DIS EQU CYREG_PRT0_INP_DIS
Movement__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Movement__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Movement__LCD_EN EQU CYREG_PRT0_LCD_EN
Movement__MASK EQU 0x01
Movement__PORT EQU 0
Movement__PRT EQU CYREG_PRT0_PRT
Movement__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Movement__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Movement__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Movement__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Movement__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Movement__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Movement__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Movement__PS EQU CYREG_PRT0_PS
Movement__SHIFT EQU 0
Movement__SLW EQU CYREG_PRT0_SLW

; Pressure
Pressure__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Pressure__0__MASK EQU 0x02
Pressure__0__PC EQU CYREG_PRT0_PC1
Pressure__0__PORT EQU 0
Pressure__0__SHIFT EQU 1
Pressure__AG EQU CYREG_PRT0_AG
Pressure__AMUX EQU CYREG_PRT0_AMUX
Pressure__BIE EQU CYREG_PRT0_BIE
Pressure__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pressure__BYP EQU CYREG_PRT0_BYP
Pressure__CTL EQU CYREG_PRT0_CTL
Pressure__DM0 EQU CYREG_PRT0_DM0
Pressure__DM1 EQU CYREG_PRT0_DM1
Pressure__DM2 EQU CYREG_PRT0_DM2
Pressure__DR EQU CYREG_PRT0_DR
Pressure__INP_DIS EQU CYREG_PRT0_INP_DIS
Pressure__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pressure__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pressure__LCD_EN EQU CYREG_PRT0_LCD_EN
Pressure__MASK EQU 0x02
Pressure__PORT EQU 0
Pressure__PRT EQU CYREG_PRT0_PRT
Pressure__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pressure__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pressure__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pressure__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pressure__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pressure__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pressure__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pressure__PS EQU CYREG_PRT0_PS
Pressure__SHIFT EQU 1
Pressure__SLW EQU CYREG_PRT0_SLW

; Temp_CLK
Temp_CLK_Sync_ctrl_reg__0__MASK EQU 0x01
Temp_CLK_Sync_ctrl_reg__0__POS EQU 0
Temp_CLK_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
Temp_CLK_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
Temp_CLK_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
Temp_CLK_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
Temp_CLK_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
Temp_CLK_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
Temp_CLK_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
Temp_CLK_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
Temp_CLK_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
Temp_CLK_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
Temp_CLK_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B1_UDB10_CTL
Temp_CLK_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
Temp_CLK_Sync_ctrl_reg__COUNT_REG EQU CYREG_B1_UDB10_CTL
Temp_CLK_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
Temp_CLK_Sync_ctrl_reg__MASK EQU 0x01
Temp_CLK_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Temp_CLK_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
Temp_CLK_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B1_UDB10_MSK

; MAX31855_CS
MAX31855_CS__0__INTTYPE EQU CYREG_PICU1_INTTYPE0
MAX31855_CS__0__MASK EQU 0x01
MAX31855_CS__0__PC EQU CYREG_PRT1_PC0
MAX31855_CS__0__PORT EQU 1
MAX31855_CS__0__SHIFT EQU 0
MAX31855_CS__1__INTTYPE EQU CYREG_PICU1_INTTYPE1
MAX31855_CS__1__MASK EQU 0x02
MAX31855_CS__1__PC EQU CYREG_PRT1_PC1
MAX31855_CS__1__PORT EQU 1
MAX31855_CS__1__SHIFT EQU 1
MAX31855_CS__2__INTTYPE EQU CYREG_PICU1_INTTYPE2
MAX31855_CS__2__MASK EQU 0x04
MAX31855_CS__2__PC EQU CYREG_PRT1_PC2
MAX31855_CS__2__PORT EQU 1
MAX31855_CS__2__SHIFT EQU 2
MAX31855_CS__3__INTTYPE EQU CYREG_PICU1_INTTYPE3
MAX31855_CS__3__MASK EQU 0x08
MAX31855_CS__3__PC EQU CYREG_PRT1_PC3
MAX31855_CS__3__PORT EQU 1
MAX31855_CS__3__SHIFT EQU 3
MAX31855_CS__4__INTTYPE EQU CYREG_PICU1_INTTYPE4
MAX31855_CS__4__MASK EQU 0x10
MAX31855_CS__4__PC EQU CYREG_PRT1_PC4
MAX31855_CS__4__PORT EQU 1
MAX31855_CS__4__SHIFT EQU 4
MAX31855_CS__5__INTTYPE EQU CYREG_PICU1_INTTYPE5
MAX31855_CS__5__MASK EQU 0x20
MAX31855_CS__5__PC EQU CYREG_PRT1_PC5
MAX31855_CS__5__PORT EQU 1
MAX31855_CS__5__SHIFT EQU 5
MAX31855_CS__AG EQU CYREG_PRT1_AG
MAX31855_CS__AMUX EQU CYREG_PRT1_AMUX
MAX31855_CS__BIE EQU CYREG_PRT1_BIE
MAX31855_CS__BIT_MASK EQU CYREG_PRT1_BIT_MASK
MAX31855_CS__BYP EQU CYREG_PRT1_BYP
MAX31855_CS__CTL EQU CYREG_PRT1_CTL
MAX31855_CS__DM0 EQU CYREG_PRT1_DM0
MAX31855_CS__DM1 EQU CYREG_PRT1_DM1
MAX31855_CS__DM2 EQU CYREG_PRT1_DM2
MAX31855_CS__DR EQU CYREG_PRT1_DR
MAX31855_CS__INP_DIS EQU CYREG_PRT1_INP_DIS
MAX31855_CS__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
MAX31855_CS__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
MAX31855_CS__LCD_EN EQU CYREG_PRT1_LCD_EN
MAX31855_CS__PORT EQU 1
MAX31855_CS__PRT EQU CYREG_PRT1_PRT
MAX31855_CS__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
MAX31855_CS__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
MAX31855_CS__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
MAX31855_CS__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
MAX31855_CS__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
MAX31855_CS__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
MAX31855_CS__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
MAX31855_CS__PS EQU CYREG_PRT1_PS
MAX31855_CS__SLW EQU CYREG_PRT1_SLW

; MAX31855_CLK
MAX31855_CLK__0__INTTYPE EQU CYREG_PICU1_INTTYPE6
MAX31855_CLK__0__MASK EQU 0x40
MAX31855_CLK__0__PC EQU CYREG_PRT1_PC6
MAX31855_CLK__0__PORT EQU 1
MAX31855_CLK__0__SHIFT EQU 6
MAX31855_CLK__AG EQU CYREG_PRT1_AG
MAX31855_CLK__AMUX EQU CYREG_PRT1_AMUX
MAX31855_CLK__BIE EQU CYREG_PRT1_BIE
MAX31855_CLK__BIT_MASK EQU CYREG_PRT1_BIT_MASK
MAX31855_CLK__BYP EQU CYREG_PRT1_BYP
MAX31855_CLK__CTL EQU CYREG_PRT1_CTL
MAX31855_CLK__DM0 EQU CYREG_PRT1_DM0
MAX31855_CLK__DM1 EQU CYREG_PRT1_DM1
MAX31855_CLK__DM2 EQU CYREG_PRT1_DM2
MAX31855_CLK__DR EQU CYREG_PRT1_DR
MAX31855_CLK__INP_DIS EQU CYREG_PRT1_INP_DIS
MAX31855_CLK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
MAX31855_CLK__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
MAX31855_CLK__LCD_EN EQU CYREG_PRT1_LCD_EN
MAX31855_CLK__MASK EQU 0x40
MAX31855_CLK__PORT EQU 1
MAX31855_CLK__PRT EQU CYREG_PRT1_PRT
MAX31855_CLK__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
MAX31855_CLK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
MAX31855_CLK__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
MAX31855_CLK__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
MAX31855_CLK__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
MAX31855_CLK__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
MAX31855_CLK__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
MAX31855_CLK__PS EQU CYREG_PRT1_PS
MAX31855_CLK__SHIFT EQU 6
MAX31855_CLK__SLW EQU CYREG_PRT1_SLW

; MAX31855_MISO
MAX31855_MISO__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
MAX31855_MISO__0__MASK EQU 0x80
MAX31855_MISO__0__PC EQU CYREG_PRT1_PC7
MAX31855_MISO__0__PORT EQU 1
MAX31855_MISO__0__SHIFT EQU 7
MAX31855_MISO__AG EQU CYREG_PRT1_AG
MAX31855_MISO__AMUX EQU CYREG_PRT1_AMUX
MAX31855_MISO__BIE EQU CYREG_PRT1_BIE
MAX31855_MISO__BIT_MASK EQU CYREG_PRT1_BIT_MASK
MAX31855_MISO__BYP EQU CYREG_PRT1_BYP
MAX31855_MISO__CTL EQU CYREG_PRT1_CTL
MAX31855_MISO__DM0 EQU CYREG_PRT1_DM0
MAX31855_MISO__DM1 EQU CYREG_PRT1_DM1
MAX31855_MISO__DM2 EQU CYREG_PRT1_DM2
MAX31855_MISO__DR EQU CYREG_PRT1_DR
MAX31855_MISO__INP_DIS EQU CYREG_PRT1_INP_DIS
MAX31855_MISO__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
MAX31855_MISO__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
MAX31855_MISO__LCD_EN EQU CYREG_PRT1_LCD_EN
MAX31855_MISO__MASK EQU 0x80
MAX31855_MISO__PORT EQU 1
MAX31855_MISO__PRT EQU CYREG_PRT1_PRT
MAX31855_MISO__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
MAX31855_MISO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
MAX31855_MISO__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
MAX31855_MISO__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
MAX31855_MISO__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
MAX31855_MISO__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
MAX31855_MISO__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
MAX31855_MISO__PS EQU CYREG_PRT1_PS
MAX31855_MISO__SHIFT EQU 7
MAX31855_MISO__SLW EQU CYREG_PRT1_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_Disable
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x1000
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO0_MV EQU 3300
CYDEV_VDDIO1_MV EQU 3300
CYDEV_VDDIO2_MV EQU 3300
CYDEV_VDDIO3_MV EQU 3300
CYDEV_VIO0_MV EQU 3300
CYDEV_VIO1_MV EQU 3300
CYDEV_VIO2_MV EQU 3300
CYDEV_VIO3_MV EQU 3300
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END