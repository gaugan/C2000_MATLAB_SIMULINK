#include "F2802x_Device.h"
#include "f2802x_examples.h"
#include "f2802x_globalprototypes.h"
#include "rtwtypes.h"
#include "Blinky_ePWM_ADC.h"
#include "Blinky_ePWM_ADC_private.h"

void config_ADC_SOC0()
{
  EALLOW;
  AdcRegs.ADCCTL2.bit.CLKDIV2EN = 0;   /* Set ADC clock division */
  AdcRegs.ADCCTL2.bit.ADCNONOVERLAP = 0;/* Set ADCNONOVERLAP contorl bit to  Allowed */
  AdcRegs.ADCSAMPLEMODE.bit.SIMULEN0 = 0;/* Single sample mode set for SOC0.*/
  AdcRegs.ADCSOC0CTL.bit.CHSEL = 0;    /* Set SOC0 channel select to ADCINA0*/
  AdcRegs.ADCSOC0CTL.bit.TRIGSEL = 1;
  AdcRegs.ADCSOC0CTL.bit.ACQPS = 6;    /* Set SOC0 S/H Window to 7 ADC Clock Cycles*/
  AdcRegs.ADCINTSOCSEL1.bit.SOC0 = 0;  /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcRegs.ADCOFFTRIM.bit.OFFTRIM = AdcRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcRegs.ADCCTL1.bit.ADCREFSEL = 0 ;  /* Set Reference Voltage*/
  AdcRegs.ADCCTL1.bit.INTPULSEPOS = 1; /* Late interrupt pulse trips AdcResults latch*/
  AdcRegs.SOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}
