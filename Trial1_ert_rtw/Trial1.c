/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Trial1.c
 *
 * Code generated for Simulink model 'Trial1'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jan 12 17:36:28 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Trial1.h"
#include "Trial1_private.h"

/* Block signals (auto storage) */
B_Trial1_T Trial1_B;

/* Real-time model */
RT_MODEL_Trial1_T Trial1_M_;
RT_MODEL_Trial1_T *const Trial1_M = &Trial1_M_;

/* Model step function */
void Trial1_step(void)
{
  /* local block i/o variables */
  real_T rtb_Sum;

  /* S-Function (c2802xadc): '<Root>/ADCINA3 - Vout F//B' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    Trial1_B.ADCINA3VoutFB = (AdcaResultRegs.ADCRESULT0);
  }

  /* S-Function (c280xcanxmt): '<Root>/Vout_eCAN_XMIT' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12000001;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[2];
    ucTXMsgData[0] = (Trial1_B.ADCINA3VoutFB & 0xFF);
    ucTXMsgData[1] = (Trial1_B.ADCINA3VoutFB >> 8);
    sTXCANMessage.ui32MsgLen = 2;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANA_BASE + CAN_O_TXRQ_21) & (2)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANA_BASE, 2, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }

  /* S-Function (c2802xadc): '<Root>/ADCINB3 - Vin F//B' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    Trial1_B.ADCINB3VinFB = (AdcbResultRegs.ADCRESULT1);
  }

  /* S-Function (c280xcanxmt): '<Root>/Vin_eCAN_XMIT' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12000005;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[2];
    ucTXMsgData[0] = (Trial1_B.ADCINB3VinFB & 0xFF);
    ucTXMsgData[1] = (Trial1_B.ADCINB3VinFB >> 8);
    sTXCANMessage.ui32MsgLen = 2;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANA_BASE + CAN_O_TXRQ_21) & (4)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANA_BASE, 3, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<Root>/Vout_Set'
   *  Constant: '<S1>/Duty'
   *  Gain: '<S1>/Gain'
   */
  rtb_Sum = Trial1_P.Gain_Gain * Trial1_P.Vout_Set_Value + Trial1_P.Duty_Value;

  /* S-Function (c2802xpwm): '<Root>/High-Low Side Driver Signal' */

  /*-- Update CMPA value for ePWM2 --*/
  {
    EPwm2Regs.CMPA.bit.CMPA = (uint16_T)(rtb_Sum);
  }
}

/* Model initialize function */
void Trial1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Trial1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Trial1_B), 0,
                sizeof(B_Trial1_T));

  /* Start for S-Function (c2802xadc): '<Root>/ADCINA3 - Vout F//B' */
  InitAdcA();
  config_ADCA_SOC0 ();
  AdcaRegs.ADCSOCFRC1.bit.SOC0 = 1;

  /* Start for S-Function (c2802xadc): '<Root>/ADCINB3 - Vin F//B' */
  InitAdcB();
  config_ADCB_SOC1 ();
  AdcbRegs.ADCSOCFRC1.bit.SOC1 = 1;

  /* Start for S-Function (c2802xpwm): '<Root>/High-Low Side Driver Signal' */
  EALLOW;
  CpuSysRegs.PCLKCR2.bit.EPWM2 = 1;
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
  EDIS;

  /*** Initialize ePWM2 modules ***/
  {
    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm2Regs.TBPRD = 249;             // Time Base Period Register

    /*  // Time Base Control Register
       EPwm2Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm2Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select
       EPwm2Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select
       EPwm2Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm2Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm2Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm2Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm2Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FFF) | 0x32;

    /* // Time-Base Phase Register
       EPwm2Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm2Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register
       EPwm2Regs.CMPCTL.bit.SHDWAMODE           = 0;  // Compare A Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.SHDWBMODE           = 0;  // Compare B Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.LOADAMODE           = 0;          // Active Compare A Load
       EPwm2Regs.CMPCTL.bit.LOADBMODE           = 0;          // Active Compare B Load
     */
    EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x5F) | 0x0;

    /* EPwm2Regs.CMPCTL2.bit.SHDWCMODE           = 0;  // Compare C Register Block Operating Mode

       EPwm2Regs.CMPCTL2.bit.SHDWDMODE           = 0;  // Compare D Register Block Operating Mode
     */
    EPwm2Regs.CMPCTL2.all = (EPwm2Regs.CMPCTL2.all & ~0x50) | 0x0;
    EPwm2Regs.CMPA.bit.CMPA = 150;     // Counter Compare A Register
    EPwm2Regs.CMPB.bit.CMPB = 32000;   // Counter Compare B Register
    EPwm2Regs.CMPC = 50;               // Counter Compare C Register
    EPwm2Regs.CMPD = 124;              // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm2Regs.AQCTLA.all = 96;         // Action Qualifier Control Register For Output A
    EPwm2Regs.AQCTLB.all = 144;        // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm2Regs.AQSFRC.bit.RLDCSF              = 0;          // Reload from Shadow Options
     */
    EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0) | 0x0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm2Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm2Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm2Regs.DBCTL.bit.OUT_MODE             = 3;          // Dead Band Output Mode Control
       EPwm2Regs.DBCTL.bit.IN_MODE              = 0;          // Dead Band Input Select Mode Control
       EPwm2Regs.DBCTL.bit.POLSEL               = 2;          // Polarity Select Control
       EPwm2Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
     */
    EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x803F) | 0xB;
    EPwm2Regs.DBRED.bit.DBRED = 15;    // Dead-Band Generator Rising Edge Delay Count Register
    EPwm2Regs.DBFED.bit.DBFED = 15;    // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm2Regs.ETSEL.bit.SOCAEN               = 0;          // Start of Conversion A Enable
       EPwm2Regs.ETSEL.bit.SOCASELCMP = 0;
       EPwm2Regs.ETSEL.bit.SOCASEL              = 0 ;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCAPRD               = 1;          // EPWM2SOCA Period Select

       EPwm2Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable

       EPwm2Regs.ETSEL.bit.SOCBSELCMP = 0;
       EPwm2Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCBPRD               = 1;          // EPWM2SOCB Period Select
       EPwm2Regs.ETSEL.bit.INTEN                = 0;          // EPWM2INTn Enable
       EPwm2Regs.ETSEL.bit.INTSELCMP = 0;
       EPwm2Regs.ETSEL.bit.INTSEL              = 1;          // Start of Conversion A Select

       EPwm2Regs.ETPS.bit.INTPRD                = 1;          // EPWM2INTn Period Select
     */
    EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF7F) | 0x1001;
    EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm2Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm2Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm2Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm2Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm2Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm2Regs.TZCTL.bit.TZA                  = 3;          // TZ1 to TZ6 Trip Action On EPWM2A
       EPwm2Regs.TZCTL.bit.TZB                  = 3;          // TZ1 to TZ6 Trip Action On EPWM2B
       EPwm2Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM2A action on DCAEVT1
       EPwm2Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM2A action on DCAEVT2
       EPwm2Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM2B action on DCBEVT1
       EPwm2Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM2B action on DCBEVT2
     */
    EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xFFF) | 0xFFF;

    /*	// Trip Zone Enable Interrupt Register
       EPwm2Regs.TZEINT.bit.OST                 = 0;          // Trip Zones One Shot Int Enable
       EPwm2Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x7E) | 0x0;

    /*	// Digital Compare A Control Register
       EPwm2Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm2Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm2Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm2Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm2Regs.DCACTL.all = (EPwm2Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm2Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm2Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm2Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm2Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm2Regs.DCBCTL.all = (EPwm2Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm2Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm2Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1;          // Digital Compare A Low COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1;          // Digital Compare B Low COMP Input Select





     */
    EPwm2Regs.DCTRIPSEL.all = (EPwm2Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x1010;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm2Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm2Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm2Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm2Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm2Regs.TZDCSEL.all = (EPwm2Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm2Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm2Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm2Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm2Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm2Regs.DCFCTL.all = (EPwm2Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm2Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm2Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm2Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm2Regs.DCCAPCTL.all = (EPwm2Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm2Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm2Regs.HRCNFG.bit.SELOUTB             = 0;          // EPWMB Output Selection Bit
     */
    EPwm2Regs.HRCNFG.all = (EPwm2Regs.HRCNFG.all & ~0xA0) | 0x0;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm2Regs.EPWMXLINK.bit.TBPRDLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPALINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPBLINK = 0;
    EPwm2Regs.EPWMXLINK.bit.CMPCLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPDLINK = 1;
    EDIS;
    EALLOW;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<Root>/Duty control for Active Load ' */
  EALLOW;
  CpuSysRegs.PCLKCR2.bit.EPWM10 = 1;
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 0;
  EDIS;

  /*** Initialize ePWM10 modules ***/
  {
    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm10Regs.TBPRD = 1000;           // Time Base Period Register

    /*  // Time Base Control Register
       EPwm10Regs.TBCTL.bit.CTRMODE              = 0;          // Counter Mode
       EPwm10Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select
       EPwm10Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select
       EPwm10Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm10Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm10Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm10Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm10Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm10Regs.TBCTL.all = (EPwm10Regs.TBCTL.all & ~0x3FFF) | 0x30;

    /* // Time-Base Phase Register
       EPwm10Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm10Regs.TBPHS.all = (EPwm10Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm10Regs.TBCTR = 0x0000;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register
       EPwm10Regs.CMPCTL.bit.SHDWAMODE           = 0;  // Compare A Register Block Operating Mode
       EPwm10Regs.CMPCTL.bit.SHDWBMODE           = 0;  // Compare B Register Block Operating Mode
       EPwm10Regs.CMPCTL.bit.LOADAMODE           = 0;          // Active Compare A Load
       EPwm10Regs.CMPCTL.bit.LOADBMODE           = 0;          // Active Compare B Load
     */
    EPwm10Regs.CMPCTL.all = (EPwm10Regs.CMPCTL.all & ~0x5F) | 0x0;

    /* EPwm10Regs.CMPCTL2.bit.SHDWCMODE           = 0;  // Compare C Register Block Operating Mode

       EPwm10Regs.CMPCTL2.bit.SHDWDMODE           = 0;  // Compare D Register Block Operating Mode
     */
    EPwm10Regs.CMPCTL2.all = (EPwm10Regs.CMPCTL2.all & ~0x50) | 0x0;
    EPwm10Regs.CMPA.bit.CMPA = 0;      // Counter Compare A Register
    EPwm10Regs.CMPB.bit.CMPB = 32000;  // Counter Compare B Register
    EPwm10Regs.CMPC = 32000;           // Counter Compare C Register
    EPwm10Regs.CMPD = 32000;           // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm10Regs.AQCTLA.all = 18;        // Action Qualifier Control Register For Output A
    EPwm10Regs.AQCTLB.all = 2310;      // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm10Regs.AQSFRC.bit.RLDCSF              = 0;          // Reload from Shadow Options
     */
    EPwm10Regs.AQSFRC.all = (EPwm10Regs.AQSFRC.all & ~0xC0) | 0x0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm10Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm10Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm10Regs.AQCSFRC.all = (EPwm10Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm10Regs.DBCTL.bit.OUT_MODE             = 0;          // Dead Band Output Mode Control
       EPwm10Regs.DBCTL.bit.IN_MODE              = 0;          // Dead Band Input Select Mode Control
       EPwm10Regs.DBCTL.bit.POLSEL               = 0;          // Polarity Select Control
       EPwm10Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
     */
    EPwm10Regs.DBCTL.all = (EPwm10Regs.DBCTL.all & ~0x803F) | 0x0;
    EPwm10Regs.DBRED.bit.DBRED = 0;    // Dead-Band Generator Rising Edge Delay Count Register
    EPwm10Regs.DBFED.bit.DBFED = 0;    // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm10Regs.ETSEL.bit.SOCAEN               = 0;          // Start of Conversion A Enable
       EPwm10Regs.ETSEL.bit.SOCASELCMP = 0;
       EPwm10Regs.ETSEL.bit.SOCASEL              = 0 ;          // Start of Conversion A Select
       EPwm10Regs.ETPS.bit.SOCAPRD               = 1;          // EPWM10SOCA Period Select

       EPwm10Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable

       EPwm10Regs.ETSEL.bit.SOCBSELCMP = 0;
       EPwm10Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm10Regs.ETPS.bit.SOCBPRD               = 1;          // EPWM10SOCB Period Select
       EPwm10Regs.ETSEL.bit.INTEN                = 0;          // EPWM10INTn Enable
       EPwm10Regs.ETSEL.bit.INTSELCMP = 0;
       EPwm10Regs.ETSEL.bit.INTSEL              = 1;          // Start of Conversion A Select

       EPwm10Regs.ETPS.bit.INTPRD                = 1;          // EPWM10INTn Period Select
     */
    EPwm10Regs.ETSEL.all = (EPwm10Regs.ETSEL.all & ~0xFF7F) | 0x1001;
    EPwm10Regs.ETPS.all = (EPwm10Regs.ETPS.all & ~0x3303) | 0x1101;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm10Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm10Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm10Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm10Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm10Regs.PCCTL.all = (EPwm10Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm10Regs.TZSEL.all = 0;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm10Regs.TZCTL.bit.TZA                  = 3;          // TZ1 to TZ6 Trip Action On EPWM10A
       EPwm10Regs.TZCTL.bit.TZB                  = 3;          // TZ1 to TZ6 Trip Action On EPWM10B
       EPwm10Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM10A action on DCAEVT1
       EPwm10Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM10A action on DCAEVT2
       EPwm10Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM10B action on DCBEVT1
       EPwm10Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM10B action on DCBEVT2
     */
    EPwm10Regs.TZCTL.all = (EPwm10Regs.TZCTL.all & ~0xFFF) | 0xFFF;

    /*	// Trip Zone Enable Interrupt Register
       EPwm10Regs.TZEINT.bit.OST                 = 0;          // Trip Zones One Shot Int Enable
       EPwm10Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm10Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm10Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm10Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm10Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm10Regs.TZEINT.all = (EPwm10Regs.TZEINT.all & ~0x7E) | 0x0;

    /*	// Digital Compare A Control Register
       EPwm10Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm10Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm10Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm10Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm10Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm10Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm10Regs.DCACTL.all = (EPwm10Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm10Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm10Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm10Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm10Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm10Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm10Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm10Regs.DCBCTL.all = (EPwm10Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm10Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm10Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1;          // Digital Compare A Low COMP Input Select
       EPwm10Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm10Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1;          // Digital Compare B Low COMP Input Select





     */
    EPwm10Regs.DCTRIPSEL.all = (EPwm10Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x1010;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm10Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm10Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm10Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm10Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm10Regs.TZDCSEL.all = (EPwm10Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm10Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm10Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm10Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm10Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm10Regs.DCFCTL.all = (EPwm10Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm10Regs.DCFOFFSET = 0;          // Digital Compare Filter Offset Register
    EPwm10Regs.DCFWINDOW = 0;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm10Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm10Regs.DCCAPCTL.all = (EPwm10Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm10Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm10Regs.HRCNFG.bit.SELOUTB             = 0;          // EPWMB Output Selection Bit
     */
    EPwm10Regs.HRCNFG.all = (EPwm10Regs.HRCNFG.all & ~0xA0) | 0x0;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm10Regs.EPWMXLINK.bit.TBPRDLINK = 9;
    EPwm10Regs.EPWMXLINK.bit.CMPALINK = 9;
    EPwm10Regs.EPWMXLINK.bit.CMPBLINK = 9;
    EPwm10Regs.EPWMXLINK.bit.CMPCLINK = 9;
    EPwm10Regs.EPWMXLINK.bit.CMPDLINK = 9;
    EDIS;
    EALLOW;
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }
}

/* Model terminate function */
void Trial1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
