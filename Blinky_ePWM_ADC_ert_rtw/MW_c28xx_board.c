#include "F2802x_Device.h"
#include "f2802x_examples.h"
#include "f2802x_globalprototypes.h"
#include "rtwtypes.h"
#include "Blinky_ePWM_ADC.h"
#include "Blinky_ePWM_ADC_private.h"

void init_board ()
{
  DisableDog();
  EALLOW;
  SysCtrlRegs.PCLKCR0.bit.ADCENCLK = 1;/* Enable ADC peripheral clock*/
  (*Device_cal)();
  SysCtrlRegs.PCLKCR0.bit.ADCENCLK = 0;/* Return ADC clock to original state*/
  EDIS;

  /* Select Internal Oscillator 1 as Clock Source (default), and turn off all unused clocks to
   * conserve power.
   */
  IntOsc1Sel();

  /* Initialize the PLL control: PLLCR and DIVSEL
   * DSP28_PLLCR and DSP28_DIVSEL are defined in DSP2802x_Examples.h
   */
  InitPll(12,2);
  InitPeripheralClocks();
  EALLOW;

  /* Configure low speed peripheral clocks */
  SysCtrlRegs.LOSPCP.all = 0U;
  EDIS;

  /* Disable and clear all CPU interrupts */
  DINT;
  IER = 0x0000;
  IFR = 0x0000;
  InitPieCtrl();
  InitPieVectTable();
  init_SCI();
  init_SCI_GPIO();
  InitCpuTimers();

  /* initial GPIO qualification settings.... */
  EALLOW;
  GpioCtrlRegs.GPAQSEL1.all = 0x2000000;
  GpioCtrlRegs.GPAQSEL2.all = 0x0;
  GpioCtrlRegs.GPBQSEL1.all = 0x0;

  /* Initialize qualification sampling period */
  // GpioCtrlRegs.GPACTRL.bit.QUALPRD1 = 0;          // GPIO Port A Qualification Control Register Field: Sampling period for pins GPIO8 to GPIO15
  GpioCtrlRegs.GPACTRL.all = (GpioCtrlRegs.GPACTRL.all & ~0xFF00) | 0x0;
  EDIS;
}
