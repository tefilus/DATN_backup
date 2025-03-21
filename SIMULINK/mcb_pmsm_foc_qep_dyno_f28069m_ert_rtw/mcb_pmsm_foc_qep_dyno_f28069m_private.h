/*
 * File: mcb_pmsm_foc_qep_dyno_f28069m_private.h
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

#ifndef RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_private_h_
#define RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_private_h_
#include "rtwtypes.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m_types.h"

void config_QEP_eQEP1(uint32_T pcmaximumvalue, uint32_T pcInitialvalue, uint32_T
                      unittimerperiod, uint32_T comparevalue, uint16_T
                      watchdogtimer, uint16_T qdecctl, uint16_T qepctl, uint16_T
                      qposctl, uint16_T qcapctl, uint16_T qeint);
void config_QEP_eQEP2(uint32_T pcmaximumvalue, uint32_T pcInitialvalue, uint32_T
                      unittimerperiod, uint32_T comparevalue, uint16_T
                      watchdogtimer, uint16_T qdecctl, uint16_T qepctl, uint16_T
                      qposctl, uint16_T qcapctl, uint16_T qeint);

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFFFU) ) || ( SCHAR_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
void InitAdc (void);
void config_ADC_SOC0_SOC1 (void);
void config_ADC_SOC2_SOC3 (void);
void config_ADC_SOC4_SOC5 (void);
void config_ADC_SOC6_SOC7 (void);
extern uint16_T MW_adcInitFlag;
extern void mcb_pmsm_fo_TwophaseCRLwrap(real32_T rtu_a, real32_T rtu_b,
  rtB_TwophaseCRLwrap_mcb_pmsm_fo *localB);
extern void mcb_pmsm_foc_DQAxisPriority(real32_T rtu_dqRef, real32_T rtu_dqRef_d,
  real32_T rtu_satLim, real32_T rtu_satLimSq, uint16_T rtu_satMethod, real32_T
  rty_dqSat[2], rtB_DQAxisPriority_mcb_pmsm_foc *localB);
extern void mcb_pmsm_foc__DQEquivalence(real32_T rtu_dqRef, real32_T rtu_dqRef_p,
  real32_T rtu_magSquare, real32_T rtu_satLim, real32_T rtu_satLimSq, real32_T
  rty_dqSat[2], rtB_DQEquivalence_mcb_pmsm_foc_ *localB);
extern void mcb_pmsm_foc_q_TwoinputsCRL(real32_T rtu_Ds, real32_T rtu_Qs,
  real32_T rtu_sin, real32_T rtu_cos, rtB_TwoinputsCRL_mcb_pmsm_foc_q *localB);
extern void mcb_pmsm_foc_TwoinputsCRL_g(real32_T rtu_Alpha, real32_T rtu_Beta,
  real32_T rtu_sine, real32_T rtu_cos, rtB_TwoinputsCRL_mcb_pmsm_foc_o *localB);
extern void mcb_pmsm__IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  rtB_IfActionSubsystem_mcb_pmsm_ *localB);
extern void mcb_pmsm_IfActionSubsystem1(real32_T rtu_In1, real32_T *rty_Out1,
  rtB_IfActionSubsystem1_mcb_pmsm *localB);
extern void mcb_pmsm_foc_qe_IndexFinder(boolean_T rtu_Enable, uint16_T rtu_In1,
  rtB_IndexFinder_mcb_pmsm_foc_qe *localB, rtDW_IndexFinder_mcb_pmsm_foc_q
  *localDW);
extern void mcb_pms_IfActionSubsystem_g(real32_T rtu_m, real32_T rtu_Offset,
  real32_T *rty_m_out);
extern void mcb_pmsm_fo_PositionNoReset(uint16_T rtu_Index, uint16_T rtu_Count,
  uint16_T *rty_Position, rtB_PositionNoReset_mcb_pmsm_fo *localB);
extern void mcb_pm_IfActionSubsystem_gj(uint16_T rtu_In1, uint16_T rtu_In2,
  rtB_IfActionSubsystem_mcb_pm_hu *localB, rtDW_IfActionSubsystem_mcb_pm_a
  *localDW);
extern void mcb__SPIMasterTransfer_Init(rtDW_SPIMasterTransfer_mcb_pmsm *localDW);
extern void mcb_pmsm__SPIMasterTransfer(uint16_T rtu_0,
  rtB_SPIMasterTransfer_mcb_pmsm_ *localB, rtDW_SPIMasterTransfer_mcb_pmsm
  *localDW);
extern void mcb_SPIMasterTransfer2_Init(rtDW_SPIMasterTransfer2_mcb_pms *localDW);
extern void mcb_pmsm_SPIMasterTransfer2(uint16_T rtu_0,
  rtB_SPIMasterTransfer2_mcb_pmsm *localB, rtDW_SPIMasterTransfer2_mcb_pms
  *localDW);
extern void mcb_pms_SpeedLimitformotor2(real32_T rtu_Iq_Ref_PU,
  rtB_SpeedLimitformotor2_mcb_pms *localB, rtDW_SpeedLimitformotor2_mcb_pm
  *localDW);
extern void mcb_FOCAlgorithmMotor1_Init(void);
extern void mc_FOCAlgorithmMotor1_Reset(void);

#pragma CODE_SECTION (FOCAlgorithmMotor1_Disable, "ramfuncs")

extern void FOCAlgorithmMotor1_Disable(void);

#pragma CODE_SECTION (mcb_pmsm_FOCAlgorithmMotor1, "ramfuncs")

extern void mcb_pmsm_FOCAlgorithmMotor1(void);
extern void mcb_FOCAlgorithmMotor2_Init(void);
extern void mc_FOCAlgorithmMotor2_Reset(void);

#pragma CODE_SECTION (FOCAlgorithmMotor2_Disable, "ramfuncs")

extern void FOCAlgorithmMotor2_Disable(void);

#pragma CODE_SECTION (mcb_pmsm_FOCAlgorithmMotor2, "ramfuncs")

extern void mcb_pmsm_FOCAlgorithmMotor2(void);
extern void mcb__SPIMasterTransfer_Term(rtDW_SPIMasterTransfer_mcb_pmsm *localDW);
extern void mcb_SPIMasterTransfer2_Term(rtDW_SPIMasterTransfer2_mcb_pms *localDW);

#endif                 /* RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
