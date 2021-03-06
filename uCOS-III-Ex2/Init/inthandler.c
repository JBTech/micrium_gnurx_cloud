/***********************************************************************/
/*                                                                     */
/*  FILE        :inthandler.c                                          */
/*  DATE        :Mon, Jun 28, 2010                                     */
/*  DESCRIPTION :Interrupt Handler                                     */
/*  CPU TYPE    :Other                                                 */
/*                                                                     */
/*  This file is generated by KPIT GNU Project Generator.              */
/*                                                                     */
/***********************************************************************/
                



#include "inthandler.h"

// Exception(Supervisor Instruction)
void INT_Excep_SuperVisorInst(void){/* brk(); */}

// Exception(Undefined Instruction)
void INT_Excep_UndefinedInst(void){/* brk(); */}

// Exception(Floating Point)
void INT_Excep_FloatingPoint(void){/* brk(); */}

// NMI
void INT_NonMaskableInterrupt(void){/* brk(); */}

// Dummy
void Dummy(void){/* brk(); */}

// BRK
void INT_Excep_BRK(void){ /*wait(); */}

// BUSERR
void INT_Excep_BUSERR(void){ }

// FCU_FCUERR
void INT_Excep_FCU_FCUERR(void){ }

// FCU_FRDYI
void INT_Excep_FCU_FRDYI(void){ }

// ICU_SWINT
void INT_Excep_ICU_SWINT(void){ }

// CMTU0_CMT0
void INT_Excep_CMTU0_CMT0(void){ }

// CMTU0_CMT1
void INT_Excep_CMTU0_CMT1(void){ }

// CMTU1_CMT2
void INT_Excep_CMTU1_CMT2(void){ }

// CMTU1_CMT3
void INT_Excep_CMTU1_CMT3(void){ }

// Ether_EINT
void INT_Excep_Ether_EINT(void){ }

// USB0_D0FIFO0
void INT_Excep_USB0_D0FIFO0(void){ }

// USB0_D1FIFO0
void INT_Excep_USB0_D1FIFO0(void){ }

// USB0_USBI0
void INT_Excep_USB0_USBI0(void){ }

// USB1_D0FIFO1
void INT_Excep_USB1_D0FIFO1(void){ }

// USB1_D1FIFO1
void INT_Excep_USB1_D1FIFO1(void){ }

// USB1_USBI1
void INT_Excep_USB1_USBI1(void){ }

// RSPI0_SPEI0
void INT_Excep_RSPI0_SPEI0(void){ }

// RSPI0_SPRI0
void INT_Excep_RSPI0_SPRI0(void){ }

// RSPI0_SPTI0
void INT_Excep_RSPI0_SPTI0(void){ }

// RSPI0_SPII0
void INT_Excep_RSPI0_SPII0(void){ }

// RSPI1_SPEI1
void INT_Excep_RSPI1_SPEI1(void){ }

// RSPI1_SPRI1
void INT_Excep_RSPI1_SPRI1(void){ }

// RSPI1_SPTI1
void INT_Excep_RSPI1_SPTI1(void){ }

// RSPI1_SPII1
void INT_Excep_RSPI1_SPII1(void){ }

// CAN0_ERS0
void INT_Excep_CAN0_ERS0(void){ }

// CAN0_RXF0
void INT_Excep_CAN0_RXF0(void){ }

// CAN0_TXF0
void INT_Excep_CAN0_TXF0(void){ }

// CAN0_RXM0
void INT_Excep_CAN0_RXM0(void){ }

// CAN0_TXM0
void INT_Excep_CAN0_TXM0(void){ }

// RTC_PRD
void INT_Excep_RTC_PRD(void){ }

// RTC_CUP
void INT_Excep_RTC_CUP(void){ }

// IRQ0
void INT_Excep_IRQ0(void){ }

// IRQ1
void INT_Excep_IRQ1(void){ }

// IRQ2
void INT_Excep_IRQ2(void){ }

// IRQ3
void INT_Excep_IRQ3(void){ }

// IRQ4
void INT_Excep_IRQ4(void){ }

// IRQ5
void INT_Excep_IRQ5(void){ }

// IRQ6
void INT_Excep_IRQ6(void){ }

// IRQ7
void INT_Excep_IRQ7(void){ }

// IRQ8
void INT_Excep_IRQ8(void){ }

// IRQ9
void INT_Excep_IRQ9(void){ }

// IRQ10
void INT_Excep_IRQ10(void){ }

// IRQ11
void INT_Excep_IRQ11(void){ }

// IRQ12
void INT_Excep_IRQ12(void){ }

// IRQ13
void INT_Excep_IRQ13(void){ }

// IRQ14
void INT_Excep_IRQ14(void){ }

// IRQ15
void INT_Excep_IRQ15(void){ }

// USB_resume_USBR0
void INT_Excep_USB_resume_USBR0(void){ }

// USB_resume_USBR1
void INT_Excep_USB_resume_USBR1(void){ }

// RTC_ALM
void INT_Excep_RTC_ALM(void){ }

// WDT_WOVI
void INT_Excep_WDT_WOVI(void){ }

// AD0_ADI0
void INT_Excep_AD0_ADI0(void){ }

// AD1_ADI1
void INT_Excep_AD1_ADI1(void){ }

// S12AD_ADI12_0
void INT_Excep_S12AD_ADI12_0(void){ }

// MTU0_TGIA0
void INT_Excep_MTU0_TGIA0(void){ }

// MTU0_TGIB0
void INT_Excep_MTU0_TGIB0(void){ }

// MTU0_TGIC0
void INT_Excep_MTU0_TGIC0(void){ }

// MTU0_TGID0
void INT_Excep_MTU0_TGID0(void){ }

// MTU0_TGIV0
void INT_Excep_MTU0_TGIV0(void){ }

// MTU0_TGIE0
void INT_Excep_MTU0_TGIE0(void){ }

// MTU0_TGIF0
void INT_Excep_MTU0_TGIF0(void){ }

// MTU1_TGIA1
void INT_Excep_MTU1_TGIA1(void){ }

// MTU1_TGIB1
void INT_Excep_MTU1_TGIB1(void){ }

// MTU1_TGIV1
void INT_Excep_MTU1_TGIV1(void){ }

// MTU1_TGIU1
void INT_Excep_MTU1_TGIU1(void){ }

// MTU2_TGIA2
void INT_Excep_MTU2_TGIA2(void){ }

// MTU2_TGIB2
void INT_Excep_MTU2_TGIB2(void){ }

// MTU2_TGIV2
void INT_Excep_MTU2_TGIV2(void){ }

// MTU2_TGIU2
void INT_Excep_MTU2_TGIU2(void){ }

// MTU3_TGIA3
void INT_Excep_MTU3_TGIA3(void){ }

// MTU3_TGIB3
void INT_Excep_MTU3_TGIB3(void){ }

// MTU3_TGIC3
void INT_Excep_MTU3_TGIC3(void){ }

// MTU3_TGID3
void INT_Excep_MTU3_TGID3(void){ }

// MTU3_TGIV3
void INT_Excep_MTU3_TGIV3(void){ }

// MTU4_TGIA4
void INT_Excep_MTU4_TGIA4(void){ }

// MTU4_TGIB4
void INT_Excep_MTU4_TGIB4(void){ }

// MTU4_TGIC4
void INT_Excep_MTU4_TGIC4(void){ }

// MTU4_TGID4
void INT_Excep_MTU4_TGID4(void){ }

// MTU4_TGIV4
void INT_Excep_MTU4_TGIV4(void){ }

// MTU5_TGIU5
void INT_Excep_MTU5_TGIU5(void){ }

// MTU5_TGIV5
void INT_Excep_MTU5_TGIV5(void){ }

// MTU5_TGIW5
void INT_Excep_MTU5_TGIW5(void){ }

// MTU6_TGIA6
void INT_Excep_MTU6_TGIA6(void){ }

// MTU6_TGIB6
void INT_Excep_MTU6_TGIB6(void){ }

// MTU6_TGIC6
void INT_Excep_MTU6_TGIC6(void){ }

// MTU6_TGID6
void INT_Excep_MTU6_TGID6(void){ }

// MTU6_TGIV6
void INT_Excep_MTU6_TGIV6(void){ }

// MTU6_TGIE6
void INT_Excep_MTU6_TGIE6(void){ }

// MTU6_TGIF6
void INT_Excep_MTU6_TGIF6(void){ }

// MTU7_TGIA7
void INT_Excep_MTU7_TGIA7(void){ }

// MTU7_TGIB7
void INT_Excep_MTU7_TGIB7(void){ }

// MTU7_TGIV7
void INT_Excep_MTU7_TGIV7(void){ }

// MTU7_TGIU7
void INT_Excep_MTU7_TGIU7(void){ }

// MTU8_TGIA8
void INT_Excep_MTU8_TGIA8(void){ }

// MTU8_TGIB8
void INT_Excep_MTU8_TGIB8(void){ }

// MTU8_TGIV8
void INT_Excep_MTU8_TGIV8(void){ }

// MTU8_TGIU8
void INT_Excep_MTU8_TGIU8(void){ }

// MTU9_TGIA9
void INT_Excep_MTU9_TGIA9(void){ }

// MTU9_TGIB9
void INT_Excep_MTU9_TGIB9(void){ }

// MTU9_TGIC9
void INT_Excep_MTU9_TGIC9(void){ }

// MTU9_TGID9
void INT_Excep_MTU9_TGID9(void){ }

// MTU9_TGIV9
void INT_Excep_MTU9_TGIV9(void){ }

// MTU10_TGIA10
void INT_Excep_MTU10_TGIA10(void){ }

// MTU10_TGIB10
void INT_Excep_MTU10_TGIB10(void){ }

// MTU10_TGIC10
void INT_Excep_MTU10_TGIC10(void){ }

// MTU10_TGID10
void INT_Excep_MTU10_TGID10(void){ }

// MTU10_TGIV10
void INT_Excep_MTU10_TGIV10(void){ }

// MTU11_TGIU11
void INT_Excep_MTU11_TGIU11(void){ }

// MTU11_TGIV11
void INT_Excep_MTU11_TGIV11(void){ }

// MTU11_TGIW11
void INT_Excep_MTU11_TGIW11(void){ }

// POE_OEI1
void INT_Excep_POE_OEI1(void){ }

// POE_OEI2
void INT_Excep_POE_OEI2(void){ }

// POE_OEI3
void INT_Excep_POE_OEI3(void){ }

// POE_OEI4
void INT_Excep_POE_OEI4(void){ }

// TMR0_CMI0A
void INT_Excep_TMR0_CMI0A(void){ }

// TMR0_CMI0B
void INT_Excep_TMR0_CMI0B(void){ }

// TMR0_OV0I
void INT_Excep_TMR0_OV0I(void){ }

// TMR1_CMI1A
void INT_Excep_TMR1_CMI1A(void){ }

// TMR1_CMI1B
void INT_Excep_TMR1_CMI1B(void){ }

// TMR1_OV1I
void INT_Excep_TMR1_OV1I(void){ }

// TMR2_CMI2A
void INT_Excep_TMR2_CMI2A(void){ }

// TMR2_CMI2B
void INT_Excep_TMR2_CMI2B(void){ }

// TMR2_OV2I
void INT_Excep_TMR2_OV2I(void){ }

// TMR3_CMI3A
void INT_Excep_TMR3_CMI3A(void){ }

// TMR3_CMI3B
void INT_Excep_TMR3_CMI3B(void){ }

// TMR3_OV3I
void INT_Excep_TMR3_OV3I(void){ }

// DMACA_DMAC0I
void INT_Excep_DMACA_DMAC0I(void){ }

// DMACA_DMAC1I
void INT_Excep_DMACA_DMAC1I(void){ }

// DMACA_DMAC2I
void INT_Excep_DMACA_DMAC2I(void){ }

// DMACA_DMAC3I
void INT_Excep_DMACA_DMAC3I(void){ }

// EXDMAC_EXDMAC0I
void INT_Excep_EXDMAC_EXDMAC0I(void){ }

// EXDMAC_EXDMAC1I
void INT_Excep_EXDMAC_EXDMAC1I(void){ }

// SCI0_ERI0
void INT_Excep_SCI0_ERI0(void){ }

// SCI0_RXI0
void INT_Excep_SCI0_RXI0(void){ }

// SCI0_TXI0
void INT_Excep_SCI0_TXI0(void){ }

// SCI0_TEI0
void INT_Excep_SCI0_TEI0(void){ }

// SCI1_ERI1
void INT_Excep_SCI1_ERI1(void){ }

// SCI1_RXI1
void INT_Excep_SCI1_RXI1(void){ }

// SCI1_TXI1
void INT_Excep_SCI1_TXI1(void){ }

// SCI1_TEI1
void INT_Excep_SCI1_TEI1(void){ }

// SCI2_ERI2
void INT_Excep_SCI2_ERI2(void){ }

// SCI2_RXI2
void INT_Excep_SCI2_RXI2(void){ }

// SCI2_TXI2
void INT_Excep_SCI2_TXI2(void){ }

// SCI2_TEI2
void INT_Excep_SCI2_TEI2(void){ }

// SCI3_ERI3
void INT_Excep_SCI3_ERI3(void){ }

// SCI3_RXI3
void INT_Excep_SCI3_RXI3(void){ }

// SCI3_TXI3
void INT_Excep_SCI3_TXI3(void){ }

// SCI3_TEI3
void INT_Excep_SCI3_TEI3(void){ }

// SCI5_ERI5
void INT_Excep_SCI5_ERI5(void){ }

// SCI5_RXI5
void INT_Excep_SCI5_RXI5(void){ }

// SCI5_TXI5
void INT_Excep_SCI5_TXI5(void){ }

// SCI5_TEI5
void INT_Excep_SCI5_TEI5(void){ }

// SCI6_ERI6
void INT_Excep_SCI6_ERI6(void){ }

// SCI6_RXI6
void INT_Excep_SCI6_RXI6(void){ }

// SCI6_TXI6
void INT_Excep_SCI6_TXI6(void){ }

// SCI6_TEI6
void INT_Excep_SCI6_TEI6(void){ }

// RIIC0_ICEEI0
void INT_Excep_RIIC0_ICEEI0(void){ }

// RIIC0_ICRXI0
void INT_Excep_RIIC0_ICRXI0(void){ }

// RIIC0_ICTXI0
void INT_Excep_RIIC0_ICTXI0(void){ }

// RIIC0_ICTEI0
void INT_Excep_RIIC0_ICTEI0(void){ }

// RIIC1_EEI1
void INT_Excep_RIIC1_ICEEI1(void){ }

// RIIC1_RXI1
void INT_Excep_RIIC1_ICRXI1(void){ }

// RIIC1_TXI1
void INT_Excep_RIIC1_ICTXI1(void){ }

// RIIC1_TEI1
void INT_Excep_RIIC1_ICTEI1(void){ }

