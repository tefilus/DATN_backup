#include "c2000BoardSupport.h"
#include "F2806x_Device.h"
#include "F2806x_Examples.h"
#include "F2806x_GlobalPrototypes.h"
#include "rtwtypes.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;

  /*-- Configure pin assignments for ePWM1 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1U; /* Configure GPIOGPIO0 as EPWM1A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1U; /* Configure GPIOGPIO1 as EPWM1B*/

  /*-- Configure pin assignments for ePWM2 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 1U; /* Configure GPIOGPIO2 as EPWM2A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 1U; /* Configure GPIOGPIO3 as EPWM2B*/

  /*-- Configure pin assignments for ePWM3 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1U; /* Configure GPIOGPIO4 as EPWM3A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1U; /* Configure GPIOGPIO5 as EPWM3B*/

  /*-- Configure pin assignments for ePWM4 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO6 = 1U; /* Configure GPIOGPIO6 as EPWM4A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 1U; /* Configure GPIOGPIO7 as EPWM4B*/

  /*-- Configure pin assignments for ePWM5 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO8 = 1U; /* Configure GPIOGPIO8 as EPWM5A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 1U; /* Configure GPIOGPIO9 as EPWM5B*/

  /*-- Configure pin assignments for ePWM6 --*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 1U;/* Configure GPIOGPIO10 as EPWM6A*/
  GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 1U;/* Configure GPIOGPIO11 as EPWM6B*/
  EDIS;
}

void config_ePWM_TBSync (void)
{
  /* Enable TBCLK within the EPWM*/
  /* Enable TBCLK after the ePWM configurations */
  EALLOW;
  SysCtrlRegs.PCLKCR0.bit.TBCLKSYNC = 1U;
  EDIS;
}

void config_ePWMSyncSource (void)
{
}
