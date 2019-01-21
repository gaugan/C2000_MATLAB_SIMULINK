/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Blinky_ADC_SCI.c
 *
 * Code generated for Simulink model 'Blinky_ADC_SCI'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Feb 06 22:59:39 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Blinky_ADC_SCI.h"
#include "Blinky_ADC_SCI_private.h"

/* Block signals (auto storage) */
B_Blinky_ADC_SCI_T Blinky_ADC_SCI_B;

/* Real-time model */
RT_MODEL_Blinky_ADC_SCI_T Blinky_ADC_SCI_M_;
RT_MODEL_Blinky_ADC_SCI_T *const Blinky_ADC_SCI_M = &Blinky_ADC_SCI_M_;

/* Model step function */
void Blinky_ADC_SCI_step(void)
{
  /* S-Function (c2802xadc): '<Root>/ADC' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    Blinky_ADC_SCI_B.ADC = (AdcResult.ADCRESULT0);
  }

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  Blinky_ADC_SCI_B.Compare = (uint16_T)(Blinky_ADC_SCI_B.ADC <=
    Blinky_ADC_SCI_P.Samplelessthanmidvalue_const);

  /* S-Function (c280xgpio_do): '<Root>/LED0' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO0 = (Blinky_ADC_SCI_B.Compare != 0);
  }

  /* S-Function (c280xgpio_do): '<Root>/LED1' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO1 = (Blinky_ADC_SCI_B.Compare != 0);
  }

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  Blinky_ADC_SCI_B.Compare_i = (uint16_T)(Blinky_ADC_SCI_B.ADC >
    Blinky_ADC_SCI_P.Samplegreaterthanmidvalue_const);

  /* S-Function (c280xgpio_do): '<Root>/LED2' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO2 = (Blinky_ADC_SCI_B.Compare_i != 0);
  }

  /* S-Function (c280xgpio_do): '<Root>/LED3' */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO3 = (Blinky_ADC_SCI_B.Compare_i != 0);
  }

  /* SignalConversion: '<Root>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
   *  Constant: '<Root>/Display  'L''
   *  Constant: '<Root>/Display  'M''
   *  Product: '<Root>/Product1'
   *  Product: '<Root>/Product2'
   */
  Blinky_ADC_SCI_B.TmpSignalConversionAtSCITransmi[0] = (uint32_T)((uint64_T)
    Blinky_ADC_SCI_B.Compare * Blinky_ADC_SCI_P.DisplayL_Value);
  Blinky_ADC_SCI_B.TmpSignalConversionAtSCITransmi[1] = (uint32_T)((uint64_T)
    Blinky_ADC_SCI_B.Compare_i * Blinky_ADC_SCI_P.DisplayM_Value);

  /* S-Function (c28xsci_tx): '<Root>/SCI Transmit' */
  {
    scia_xmit((char*)&Blinky_ADC_SCI_B.TmpSignalConversionAtSCITransmi[0], 8, 4);
  }
}

/* Model initialize function */
void Blinky_ADC_SCI_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Blinky_ADC_SCI_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Blinky_ADC_SCI_B), 0,
                sizeof(B_Blinky_ADC_SCI_T));

  /* Start for S-Function (c2802xadc): '<Root>/ADC' */
  InitAdc();
  config_ADC_SOC0 ();
  AdcRegs.ADCSOCFRC1.bit.SOC0 = 1;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED0' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all |= 0x1;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPADIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED2' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFCF;
  GpioCtrlRegs.GPADIR.all |= 0x4;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/LED3' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFF3F;
  GpioCtrlRegs.GPADIR.all |= 0x8;
  EDIS;
}

/* Model terminate function */
void Blinky_ADC_SCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
