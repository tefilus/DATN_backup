/*
 * File: mcb_pmsm_foc_qep_dyno_f28069m_types.h
 *
 * Code generated for Simulink model 'mcb_pmsm_foc_qep_dyno_f28069m'.
 *
 * Model version                  : 7.4
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar 12 10:05:43 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_types_h_
#define RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_types_h_
#include "rtwtypes.h"
#include "MW_c2000SPI.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_9tIy2hpXIgA1EOi7WWu7i_
#define DEFINED_TYPEDEF_FOR_struct_9tIy2hpXIgA1EOi7WWu7i_

typedef struct {
  real_T nonLinear;
} struct_9tIy2hpXIgA1EOi7WWu7i;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_V5YZdwXAKsBZdOQPVLjDpE_
#define DEFINED_TYPEDEF_FOR_struct_V5YZdwXAKsBZdOQPVLjDpE_

typedef struct {
  real32_T Id_Ref;
  real32_T Id_fb;
  real32_T Vd_ref;
  real32_T Iq_Ref;
  real32_T Iq_fb;
  real32_T Vq_ref;
} struct_V5YZdwXAKsBZdOQPVLjDpE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_zFfNK2ERXzHeakTWhyupM_
#define DEFINED_TYPEDEF_FOR_struct_zFfNK2ERXzHeakTWhyupM_

typedef struct {
  real32_T mtr2_VI_debug[6];
  real32_T mtr2_Te_PU;
  real32_T mtr2_Pm_PU;
  real32_T mtr2_Speed_PU;
  real32_T mtr2_Iab_meas_PU[2];
  real32_T mtr2_Pos_PU;
} struct_zFfNK2ERXzHeakTWhyupM;

#endif

/* Custom Type definition for MATLABSystem: '<S426>/SPI Master Transfer' */
#include "MW_c2000SPI.h"
#ifndef struct_tag_RL3bf5VyBoZJTCiPpDuhAE
#define struct_tag_RL3bf5VyBoZJTCiPpDuhAE

struct tag_RL3bf5VyBoZJTCiPpDuhAE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_SPI_HANDLE;
};

#endif                                 /* struct_tag_RL3bf5VyBoZJTCiPpDuhAE */

#ifndef typedef_codertarget_tic2000_blocks_SPIM
#define typedef_codertarget_tic2000_blocks_SPIM

typedef struct tag_RL3bf5VyBoZJTCiPpDuhAE codertarget_tic2000_blocks_SPIM;

#endif                             /* typedef_codertarget_tic2000_blocks_SPIM */

/* Forward declaration for rtModel */
typedef struct tag_RTM_mcb_pmsm_foc_qep_dyno_f RT_MODEL_mcb_pmsm_foc_qep_dyno_;

#endif                   /* RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
