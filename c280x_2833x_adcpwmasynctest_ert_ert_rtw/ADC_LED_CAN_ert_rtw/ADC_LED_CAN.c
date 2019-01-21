/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: ADC_LED_CAN.c
 *
 * Code generated for Simulink model 'ADC_LED_CAN'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Sep 23 15:46:02 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADC_LED_CAN.h"
#include "ADC_LED_CAN_private.h"

/* Block signals (auto storage) */
B_ADC_LED_CAN_T ADC_LED_CAN_B;

/* Real-time model */
RT_MODEL_ADC_LED_CAN_T ADC_LED_CAN_M_;
RT_MODEL_ADC_LED_CAN_T *const ADC_LED_CAN_M = &ADC_LED_CAN_M_;

/* Model step function */
void ADC_LED_CAN_step(void)
{
  /* S-Function (c2802xadc): '<Root>/ADCINA0' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    ADC_LED_CAN_B.ADCINA0 = (AdcaResultRegs.ADCRESULT0);
  }

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  ADC_LED_CAN_B.Compare = (uint16_T)(ADC_LED_CAN_B.ADCINA0 <=
    ADC_LED_CAN_P.Samplelessthanmidvalue_const);

  /* S-Function (c280xgpio_do): '<Root>/BLUE LED' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO31 = (ADC_LED_CAN_B.Compare != 0);
  }

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  ADC_LED_CAN_B.Compare_d = (uint16_T)(ADC_LED_CAN_B.ADCINA0 >
    ADC_LED_CAN_P.Samplegreaterthanmidvalue_const);

  /* S-Function (c280xgpio_do): '<Root>/RED LED' */
  {
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = (ADC_LED_CAN_B.Compare_d != 0);
  }

  /* Product: '<Root>/Product1' incorporates:
   *  Constant: '<Root>/CAN_MSG  BLUE LED'
   */
  ADC_LED_CAN_B.Product2 = (uint32_T)((uint64_T)ADC_LED_CAN_B.Compare *
    ADC_LED_CAN_P.CAN_MSGBLUELED_Value);

  /* S-Function (c280xcanxmt): '<Root>/eCAN Transmit1 - BLUE LED' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12002345;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[4];
    ucTXMsgData[0] = (ADC_LED_CAN_B.Product2 & 0xFF);
    ucTXMsgData[1] = (ADC_LED_CAN_B.Product2 >> 8) & 0xFF;
    ucTXMsgData[2] = (ADC_LED_CAN_B.Product2 >> 16) & 0xFF;
    ucTXMsgData[3] = (ADC_LED_CAN_B.Product2 >> 24) & 0xFF;
    sTXCANMessage.ui32MsgLen = 4;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANB_BASE + CAN_O_TXRQ_21) & (1)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANB_BASE, 1, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }

  /* Product: '<Root>/Product2' incorporates:
   *  Constant: '<Root>/CAN_MSG  RED LED'
   */
  ADC_LED_CAN_B.Product2 = (uint32_T)((uint64_T)ADC_LED_CAN_B.Compare_d *
    ADC_LED_CAN_P.CAN_MSGREDLED_Value);

  /* S-Function (c280xcanxmt): '<Root>/eCAN Transmit2 - RED LED ' */
  {
    tCANMsgObject sTXCANMessage;
    sTXCANMessage.ui32MsgID = 12002345;// CAN message ID - use 1
    sTXCANMessage.ui32MsgIDMask = 0;   // no mask needed for TX
    unsigned char ucTXMsgData[4];
    ucTXMsgData[0] = (ADC_LED_CAN_B.Product2 & 0xFF);
    ucTXMsgData[1] = (ADC_LED_CAN_B.Product2 >> 8) & 0xFF;
    ucTXMsgData[2] = (ADC_LED_CAN_B.Product2 >> 16) & 0xFF;
    ucTXMsgData[3] = (ADC_LED_CAN_B.Product2 >> 24) & 0xFF;
    sTXCANMessage.ui32MsgLen = 4;      // size of message
    sTXCANMessage.pucMsgData = ucTXMsgData;
    sTXCANMessage.ui32Flags = MSG_OBJ_TX_INT_ENABLE;// enable interrupt on TX
    sTXCANMessage.ui32Flags |= MSG_OBJ_EXTENDED_ID;
    while ((HWREG(CANB_BASE + CAN_O_TXRQ_21) & (2)) != 0) {
    }                                  /* check eCAN Transmit Request pending*/

    CANMessageSet(CANB_BASE, 2, &sTXCANMessage, MSG_OBJ_TYPE_TX);
  }
}

/* Model initialize function */
void ADC_LED_CAN_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ADC_LED_CAN_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ADC_LED_CAN_B), 0,
                sizeof(B_ADC_LED_CAN_T));

  /* Start for S-Function (c2802xadc): '<Root>/ADCINA0' */
  InitAdcA();
  config_ADCA_SOC0 ();
  AdcaRegs.ADCSOCFRC1.bit.SOC0 = 1;

  /* Start for S-Function (c280xgpio_do): '<Root>/BLUE LED' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFF;
  GpioCtrlRegs.GPADIR.all |= 0x80000000;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/RED LED' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPBDIR.all |= 0x4;
  EDIS;
}

/* Model terminate function */
void ADC_LED_CAN_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
