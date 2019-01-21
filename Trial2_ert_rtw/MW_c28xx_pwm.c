#include "F2837xS_device.h"
#include "F2837xS_Examples.h"
#include "F2837xS_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "Trial2.h"
#include "Trial2_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;
  ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 1;

  /*-- Configure pin assignments for ePWM10 --*/
  GpioCtrlRegs.GPAGMUX2.bit.GPIO18 = 1;
  GpioCtrlRegs.GPAMUX2.bit.GPIO18 = 1; /* Configure GPIOGPIO18 as EPWM10A*/

  /*-- Configure pin assignments for ePWM2 --*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO2 = 0;
  GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1;  /* Configure GPIOGPIO2 as EPWM2A*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO3 = 0;
  GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1;  /* Configure GPIOGPIO3 as EPWM2B*/

  /*--- Configure pin assignments for TZn ---*/
  EDIS;
}
