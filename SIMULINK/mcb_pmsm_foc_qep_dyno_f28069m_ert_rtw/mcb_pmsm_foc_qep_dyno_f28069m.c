/*
 * File: mcb_pmsm_foc_qep_dyno_f28069m.c
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

#include "mcb_pmsm_foc_qep_dyno_f28069m.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m_private.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>

/* Block signals (default storage) */
BlockIO_mcb_pmsm_foc_qep_dyno_f mcb_pmsm_foc_qep_dyno_f28069m_B;

/* Block states (default storage) */
D_Work_mcb_pmsm_foc_qep_dyno_f2 mcb_pmsm_foc_qep_dyno_f28_DWork;

/* Real-time model */
static RT_MODEL_mcb_pmsm_foc_qep_dyno_ mcb_pmsm_foc_qep_dyno_f28069_M_;
RT_MODEL_mcb_pmsm_foc_qep_dyno_ *const mcb_pmsm_foc_qep_dyno_f28069_M =
  &mcb_pmsm_foc_qep_dyno_f28069_M_;
static void rate_monotonic_scheduler(void);

#ifndef __TMS320C28XX_CLA__

uint16_T MW_adcInitFlag = 0;

#endif

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep(boolean_T
  *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(mcb_pmsm_foc_qep_dyno_f28069_M, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(mcb_pmsm_foc_qep_dyno_f28069_M, 2));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[1])++;
  if ((mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [0.001s, 0.0s] */
    mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[1] = 0;
  }

  (mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[2])++;
  if ((mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[2]) > 9999) {/* Sample time: [0.5s, 0.0s] */
    mcb_pmsm_foc_qep_dyno_f28069_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S36>/Two phase CRL wrap'
 *    '<S247>/Two phase CRL wrap'
 */
void mcb_pmsm_fo_TwophaseCRLwrap(real32_T rtu_a, real32_T rtu_b,
  rtB_TwophaseCRLwrap_mcb_pmsm_fo *localB)
{
  /* Sum: '<S37>/a_plus_2b' */
  localB->a_plus_2b = (rtu_a + rtu_b) + rtu_b;

  /* Gain: '<S37>/one_by_sqrt3' */
  localB->one_by_sqrt3 = 0.577350259F * localB->a_plus_2b;

  /* AlgorithmDescriptorDelegate generated from: '<S37>/a16' */
  localB->algDD_o1 = rtu_a;

  /* AlgorithmDescriptorDelegate generated from: '<S37>/a16' */
  localB->algDD_o2 = localB->one_by_sqrt3;
}

/*
 * Output and update for action system:
 *    '<S38>/D//Q Axis Priority'
 *    '<S249>/D//Q Axis Priority'
 */
void mcb_pmsm_foc_DQAxisPriority(real32_T rtu_dqRef, real32_T rtu_dqRef_d,
  real32_T rtu_satLim, real32_T rtu_satLimSq, uint16_T rtu_satMethod, real32_T
  rty_dqSat[2], rtB_DQAxisPriority_mcb_pmsm_foc *localB)
{
  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  localB->Compare = (rtu_satMethod == 1U);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  localB->Compare_f = (rtu_satMethod == 1U);

  /* Switch: '<S42>/Switch' */
  if (localB->Compare) {
    /* Switch: '<S42>/Switch' */
    localB->Switch[0] = rtu_dqRef;
    localB->Switch[1] = rtu_dqRef_d;
  } else {
    /* Switch: '<S42>/Switch' */
    localB->Switch[0] = rtu_dqRef_d;
    localB->Switch[1] = rtu_dqRef;
  }

  /* End of Switch: '<S42>/Switch' */

  /* RelationalOperator: '<S52>/LowerRelop1' */
  localB->LowerRelop1 = (localB->Switch[0] > rtu_satLim);

  /* Switch: '<S52>/Switch2' */
  if (localB->LowerRelop1) {
    /* Switch: '<S52>/Switch2' */
    localB->Switch2 = rtu_satLim;
  } else {
    /* Gain: '<S51>/Gain' */
    localB->Gain = -rtu_satLim;

    /* RelationalOperator: '<S52>/UpperRelop' */
    localB->UpperRelop = (localB->Switch[0] < localB->Gain);

    /* Switch: '<S52>/Switch' */
    if (localB->UpperRelop) {
      /* Switch: '<S52>/Switch' */
      localB->Switch_f = localB->Gain;
    } else {
      /* Switch: '<S52>/Switch' */
      localB->Switch_f = localB->Switch[0];
    }

    /* End of Switch: '<S52>/Switch' */

    /* Switch: '<S52>/Switch2' */
    localB->Switch2 = localB->Switch_f;
  }

  /* End of Switch: '<S52>/Switch2' */

  /* Product: '<S51>/Product' */
  localB->Product = localB->Switch2 * localB->Switch2;

  /* Sum: '<S51>/Sum' */
  localB->Sum = rtu_satLimSq - localB->Product;

  /* Product: '<S51>/Product2' */
  localB->Product2 = localB->Switch[1] * localB->Switch[1];

  /* RelationalOperator: '<S51>/Relational Operator' */
  localB->RelationalOperator = (localB->Sum >= localB->Product2);

  /* DataTypeConversion: '<S51>/Data Type Conversion' */
  localB->DataTypeConversion = localB->RelationalOperator;

  /* If: '<S51>/If' incorporates:
   *  Switch: '<S53>/Switch1'
   */
  if (localB->DataTypeConversion != 0U) {
    /* Outputs for IfAction SubSystem: '<S51>/passThrough' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    /* Merge: '<S51>/Merge' incorporates:
     *  SignalConversion generated from: '<S54>/ref2'
     */
    localB->Merge = localB->Switch[1];

    /* End of Outputs for SubSystem: '<S51>/passThrough' */
  } else {
    /* Outputs for IfAction SubSystem: '<S51>/limitRef2' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    if (localB->Sum > 0.0F) {
      /* Switch: '<S53>/Switch1' */
      localB->Switch1 = localB->Sum;
    } else {
      /* Switch: '<S53>/Switch1' incorporates:
       *  Constant: '<S53>/Constant'
       */
      localB->Switch1 = 0.0F;
    }

    /* Sqrt: '<S53>/Sqrt' */
    localB->Sqrt = (real32_T)sqrt(localB->Switch1);

    /* Switch: '<S53>/Switch' */
    if (localB->Switch[1] >= 0.0F) {
      /* Merge: '<S51>/Merge' */
      localB->Merge = localB->Sqrt;
    } else {
      /* Gain: '<S53>/Gain' */
      localB->Gain_j = -localB->Sqrt;

      /* Merge: '<S51>/Merge' */
      localB->Merge = localB->Gain_j;
    }

    /* End of Switch: '<S53>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/limitRef2' */
  }

  /* End of If: '<S51>/If' */

  /* Switch: '<S42>/Switch1' */
  if (localB->Compare_f) {
    rty_dqSat[0] = localB->Switch2;
    rty_dqSat[1] = localB->Merge;
  } else {
    rty_dqSat[0] = localB->Merge;
    rty_dqSat[1] = localB->Switch2;
  }

  /* End of Switch: '<S42>/Switch1' */
}

/*
 * Output and update for action system:
 *    '<S38>/D-Q Equivalence'
 *    '<S249>/D-Q Equivalence'
 */
void mcb_pmsm_foc__DQEquivalence(real32_T rtu_dqRef, real32_T rtu_dqRef_p,
  real32_T rtu_magSquare, real32_T rtu_satLim, real32_T rtu_satLimSq, real32_T
  rty_dqSat[2], rtB_DQEquivalence_mcb_pmsm_foc_ *localB)
{
  /* RelationalOperator: '<S41>/Relational Operator' */
  localB->RelationalOperator = (rtu_magSquare > rtu_satLimSq);

  /* DataTypeConversion: '<S41>/Data Type Conversion' */
  localB->DataTypeConversion = localB->RelationalOperator;

  /* If: '<S41>/If' */
  if (localB->DataTypeConversion != 0U) {
    /* Outputs for IfAction SubSystem: '<S41>/Limiter' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    /* Product: '<S45>/Product' */
    localB->Product[0] = rtu_dqRef * rtu_satLim;
    localB->Product[1] = rtu_dqRef_p * rtu_satLim;

    /* Sqrt: '<S45>/Square Root' */
    localB->SquareRoot = (real32_T)sqrt(rtu_magSquare);

    /* Switch: '<S45>/Switch' */
    if (localB->SquareRoot != 0.0F) {
      /* Switch: '<S45>/Switch' */
      localB->Switch = localB->SquareRoot;
    } else {
      /* Switch: '<S45>/Switch' incorporates:
       *  Constant: '<S45>/Constant'
       */
      localB->Switch = 1.0F;
    }

    /* End of Switch: '<S45>/Switch' */

    /* Product: '<S45>/Reciprocal' */
    localB->Reciprocal = 1.0F / localB->Switch;

    /* Product: '<S45>/Product1' */
    rty_dqSat[0] = localB->Product[0] * localB->Reciprocal;
    rty_dqSat[1] = localB->Product[1] * localB->Reciprocal;

    /* End of Outputs for SubSystem: '<S41>/Limiter' */
  } else {
    /* Outputs for IfAction SubSystem: '<S41>/Passthrough' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    /* SignalConversion generated from: '<S46>/dqRef' */
    rty_dqSat[0] = rtu_dqRef;
    rty_dqSat[1] = rtu_dqRef_p;

    /* End of Outputs for SubSystem: '<S41>/Passthrough' */
  }

  /* End of If: '<S41>/If' */
}

/*
 * Output and update for atomic system:
 *    '<S32>/Two inputs CRL'
 *    '<S177>/Two inputs CRL'
 *    '<S243>/Two inputs CRL'
 */
void mcb_pmsm_foc_q_TwoinputsCRL(real32_T rtu_Ds, real32_T rtu_Qs, real32_T
  rtu_sin, real32_T rtu_cos, rtB_TwoinputsCRL_mcb_pmsm_foc_q *localB)
{
  /* Product: '<S157>/qcos' */
  localB->qcos = rtu_Qs * rtu_cos;

  /* Product: '<S157>/dsin' */
  localB->dsin = rtu_Ds * rtu_sin;

  /* Sum: '<S157>/sum_beta' */
  localB->sum_beta = localB->qcos + localB->dsin;

  /* Product: '<S157>/dcos' */
  localB->dcos = rtu_Ds * rtu_cos;

  /* Product: '<S157>/qsin' */
  localB->qsin = rtu_Qs * rtu_sin;

  /* Sum: '<S157>/sum_alpha' */
  localB->sum_alpha = localB->dcos - localB->qsin;

  /* Switch: '<S158>/Switch' */
  localB->Switch[0] = localB->sum_alpha;
  localB->Switch[1] = localB->sum_beta;

  /* AlgorithmDescriptorDelegate generated from: '<S157>/a16' */
  localB->algDD_o1 = localB->Switch[0];

  /* AlgorithmDescriptorDelegate generated from: '<S157>/a16' */
  localB->algDD_o2 = localB->Switch[1];
}

/*
 * Output and update for atomic system:
 *    '<S33>/Two inputs CRL'
 *    '<S244>/Two inputs CRL'
 */
void mcb_pmsm_foc_TwoinputsCRL_g(real32_T rtu_Alpha, real32_T rtu_Beta, real32_T
  rtu_sine, real32_T rtu_cos, rtB_TwoinputsCRL_mcb_pmsm_foc_o *localB)
{
  /* Product: '<S159>/acos' */
  localB->acos_n = rtu_Alpha * rtu_cos;

  /* Product: '<S159>/bsin' */
  localB->bsin = rtu_Beta * rtu_sine;

  /* Sum: '<S159>/sum_Ds' */
  localB->sum_Ds = localB->acos_n + localB->bsin;

  /* Product: '<S159>/bcos' */
  localB->bcos = rtu_Beta * rtu_cos;

  /* Product: '<S159>/asin' */
  localB->asin_p = rtu_Alpha * rtu_sine;

  /* Sum: '<S159>/sum_Qs' */
  localB->sum_Qs = localB->bcos - localB->asin_p;

  /* Switch: '<S160>/Switch' */
  localB->Switch[0] = localB->sum_Ds;
  localB->Switch[1] = localB->sum_Qs;

  /* AlgorithmDescriptorDelegate generated from: '<S159>/a16' */
  localB->algDD_o1 = localB->Switch[0];

  /* AlgorithmDescriptorDelegate generated from: '<S159>/a16' */
  localB->algDD_o2 = localB->Switch[1];
}

/*
 * Output and update for action system:
 *    '<S162>/If Action Subsystem'
 *    '<S183>/If Action Subsystem'
 *    '<S373>/If Action Subsystem'
 */
void mcb_pmsm__IfActionSubsystem(real32_T rtu_In1, real32_T *rty_Out1,
  rtB_IfActionSubsystem_mcb_pmsm_ *localB)
{
  /* DataTypeConversion: '<S164>/Convert_uint16' */
  localB->Convert_uint16 = (int16_T)(real32_T)floor(rtu_In1);

  /* DataTypeConversion: '<S164>/Convert_back' */
  localB->Convert_back = localB->Convert_uint16;

  /* Sum: '<S164>/Sum' */
  *rty_Out1 = rtu_In1 - localB->Convert_back;
}

/*
 * Output and update for action system:
 *    '<S162>/If Action Subsystem1'
 *    '<S183>/If Action Subsystem1'
 *    '<S373>/If Action Subsystem1'
 */
void mcb_pmsm_IfActionSubsystem1(real32_T rtu_In1, real32_T *rty_Out1,
  rtB_IfActionSubsystem1_mcb_pmsm *localB)
{
  /* DataTypeConversion: '<S165>/Convert_uint16' */
  localB->Convert_uint16 = (int16_T)rtu_In1;

  /* DataTypeConversion: '<S165>/Convert_back' */
  localB->Convert_back = localB->Convert_uint16;

  /* Sum: '<S165>/Sum' */
  *rty_Out1 = rtu_In1 - localB->Convert_back;
}

/*
 * Output and update for enable system:
 *    '<S190>/IndexFinder'
 *    '<S389>/IndexFinder'
 */
void mcb_pmsm_foc_qe_IndexFinder(boolean_T rtu_Enable, uint16_T rtu_In1,
  rtB_IndexFinder_mcb_pmsm_foc_qe *localB, rtDW_IndexFinder_mcb_pmsm_foc_q
  *localDW)
{
  /* Outputs for Enabled SubSystem: '<S190>/IndexFinder' incorporates:
   *  EnablePort: '<S193>/Enable'
   */
  if (rtu_Enable) {
    /* Delay: '<S193>/Delay3' */
    localB->Delay3 = localDW->Delay3_DSTATE;

    /* RelationalOperator: '<S200>/Compare' incorporates:
     *  Constant: '<S200>/Constant'
     */
    localB->Compare = (localB->Delay3 == 0U);

    /* RelationalOperator: '<S201>/Compare' incorporates:
     *  Constant: '<S201>/Constant'
     */
    localB->Compare_k = (rtu_In1 > 0U);

    /* Logic: '<S193>/AND' */
    localB->AND = (localB->Compare && localB->Compare_k);

    /* Update for Delay: '<S193>/Delay3' */
    localDW->Delay3_DSTATE = rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S190>/IndexFinder' */
}

/*
 * Output and update for action system:
 *    '<S204>/If Action Subsystem'
 *    '<S403>/If Action Subsystem'
 */
void mcb_pms_IfActionSubsystem_g(real32_T rtu_m, real32_T rtu_Offset, real32_T
  *rty_m_out)
{
  /* Sum: '<S206>/Add' incorporates:
   *  Constant: '<S206>/Constant'
   */
  *rty_m_out = (rtu_m + 1.0F) - rtu_Offset;
}

/*
 * Output and update for action system:
 *    '<S195>/PositionNoReset'
 *    '<S394>/PositionNoReset'
 */
void mcb_pmsm_fo_PositionNoReset(uint16_T rtu_Index, uint16_T rtu_Count,
  uint16_T *rty_Position, rtB_PositionNoReset_mcb_pmsm_fo *localB)
{
  uint16_T u0;
  uint16_T u1;

  /* Sum: '<S211>/Sum3' */
  localB->Sum3 = rtu_Count - rtu_Index;

  /* Sum: '<S211>/Sum7' incorporates:
   *  Constant: '<S216>/Constant'
   */
  localB->Sum7 = localB->Sum3 + 4000U;

  /* MinMax: '<S211>/MinMax' */
  u0 = localB->Sum3;
  u1 = localB->Sum7;
  if (u0 <= u1) {
    u1 = u0;
  }

  *rty_Position = u1;

  /* End of MinMax: '<S211>/MinMax' */
}

/* System initialize for function-call system: '<Root>/FOC Algorithm Motor1' */
void mcb_FOCAlgorithmMotor1_Init(void)
{
  /* Start for S-Function (c280xqep): '<S189>/eQEP' */
  config_QEP_eQEP1((uint32_T)65535U,(uint32_T)0, (uint32_T)0, (uint32_T)0,
                   (uint16_T)0, (uint16_T)448, (uint16_T)8232, (uint16_T)32768,
                   (uint16_T)119,(uint16_T)0);

  /* Start for S-Function (c2802xadc): '<S189>/IA//IB Measurement' */
  if (MW_adcInitFlag == 0U) {
    InitAdc();
    MW_adcInitFlag = 1U;
  }

  config_ADC_SOC0_SOC1 ();

  /* Start for S-Function (c280xgpio_do): '<S22>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFFFFFCFU;
  GpioCtrlRegs.GPBDIR.all |= 0x40000U;
  EDIS;

  /* Start for S-Function (c2802xpwm): '<S22>/ePWM1' */

  /*** Initialize ePWM1 modules ***/
  {
    /*  // Time Base Control Register
       EPwm1Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm1Regs.TBCTL.bit.SYNCOSEL             = 1U;          // Sync Output Select

       EPwm1Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm1Regs.TBCTL.bit.PHSEN                = 0U;          // Phase Load Enable
       EPwm1Regs.TBCTL.bit.PHSDIR               = 0U;          // Phase Direction Bit
       EPwm1Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm1Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm1Regs.TBCTL.all = (EPwm1Regs.TBCTL.all & ~0x3FFFU) | 0x12U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm1Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm1Regs.TBPHS.half.TBPHS               = 0U;         // Phase offset register
     */
    EPwm1Regs.TBPHS.all = (EPwm1Regs.TBPHS.all & ~0xFFFF0000U) | 0x0U;

    // Time Base Counter Register
    EPwm1Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm1Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm1Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm1Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm1Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm1Regs.CMPCTL.all = (EPwm1Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm1Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm1Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm1Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm1Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm1Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm1Regs.AQSFRC.all = (EPwm1Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm1Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm1Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm1Regs.AQCSFRC.all = (EPwm1Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm1Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm1Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm1Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm1Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm1Regs.DBCTL.all = (EPwm1Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm1Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm1Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm1Regs.ETSEL.bit.SOCAEN               = 1U;          // Start of Conversion A Enable
       EPwm1Regs.ETSEL.bit.SOCASEL              = 2U;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM1SOCA Period Select
       EPwm1Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm1Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm1Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM1SOCB Period Select
       EPwm1Regs.ETSEL.bit.INTEN                = 0U;          // EPWM1INTn Enable
       EPwm1Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM1INTn Select
       EPwm1Regs.ETPS.bit.INTPRD                = 1U;          // EPWM1INTn Period Select
     */
    EPwm1Regs.ETSEL.all = (EPwm1Regs.ETSEL.all & ~0xFF0FU) | 0x1A01U;
    EPwm1Regs.ETPS.all = (EPwm1Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm1Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm1Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm1Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm1Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm1Regs.PCCTL.all = (EPwm1Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm1Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm1Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM1A
       EPwm1Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM1B
       EPwm1Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM1A action on DCAEVT1
       EPwm1Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM1A action on DCAEVT2
       EPwm1Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM1B action on DCBEVT1
       EPwm1Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM1B action on DCBEVT2
     */
    EPwm1Regs.TZCTL.all = (EPwm1Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm1Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm1Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm1Regs.TZEINT.all = (EPwm1Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm1Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm1Regs.DCACTL.bit.EVT1SOCE            = 0U;          // DCAEVT1 SOC Enable
       EPwm1Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm1Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm1Regs.DCACTL.all = (EPwm1Regs.DCACTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare B Control Register
       EPwm1Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm1Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm1Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm1Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm1Regs.DCBCTL.all = (EPwm1Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm1Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm1Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm1Regs.DCTRIPSEL.all = (EPwm1Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm1Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm1Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm1Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm1Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm1Regs.TZDCSEL.all = (EPwm1Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm1Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm1Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm1Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm1Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm1Regs.DCFCTL.all = (EPwm1Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm1Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm1Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm1Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm1Regs.DCCAPCTL.all = (EPwm1Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm1Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm1Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm1Regs.HRCNFG.all = (EPwm1Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S22>/ePWM2' */

  /*** Initialize ePWM2 modules ***/
  {
    /*  // Time Base Control Register
       EPwm2Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm2Regs.TBCTL.bit.SYNCOSEL             = 0U;          // Sync Output Select

       EPwm2Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm2Regs.TBCTL.bit.PHSEN                = 1U;          // Phase Load Enable
       EPwm2Regs.TBCTL.bit.PHSDIR               = 1U;          // Phase Direction Bit
       EPwm2Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm2Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FFFU) | 0x2006U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm2Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm2Regs.TBPHS.half.TBPHS               = 0U;         // Phase offset register
     */
    EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000U) | 0x0U;

    // Time Base Counter Register
    EPwm2Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm2Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm2Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm2Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm2Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm2Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm2Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm2Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm2Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm2Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm2Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm2Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm2Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm2Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm2Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm2Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm2Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm2Regs.ETSEL.bit.SOCAEN               = 0U;          // Start of Conversion A Enable
       EPwm2Regs.ETSEL.bit.SOCASEL              = 0U;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM2SOCA Period Select
       EPwm2Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm2Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm2Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM2SOCB Period Select
       EPwm2Regs.ETSEL.bit.INTEN                = 0U;          // EPWM2INTn Enable
       EPwm2Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM2INTn Select
       EPwm2Regs.ETPS.bit.INTPRD                = 1U;          // EPWM2INTn Period Select
     */
    EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF0FU) | 0x1001U;
    EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm2Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm2Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm2Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm2Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm2Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm2Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM2A
       EPwm2Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM2B
       EPwm2Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM2A action on DCAEVT1
       EPwm2Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM2A action on DCAEVT2
       EPwm2Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM2B action on DCBEVT1
       EPwm2Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM2B action on DCBEVT2
     */
    EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm2Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm2Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm2Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm2Regs.DCACTL.bit.EVT1SOCE            = 1U;          // DCAEVT1 SOC Enable
       EPwm2Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm2Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm2Regs.DCACTL.all = (EPwm2Regs.DCACTL.all & ~0x30FU) | 0x4U;

    /*	// Digital Compare B Control Register
       EPwm2Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm2Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm2Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm2Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm2Regs.DCBCTL.all = (EPwm2Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm2Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm2Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm2Regs.DCTRIPSEL.all = (EPwm2Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm2Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm2Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm2Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm2Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm2Regs.TZDCSEL.all = (EPwm2Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm2Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm2Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm2Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm2Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm2Regs.DCFCTL.all = (EPwm2Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm2Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm2Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm2Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm2Regs.DCCAPCTL.all = (EPwm2Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm2Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm2Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm2Regs.HRCNFG.all = (EPwm2Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S22>/ePWM3' */

  /*** Initialize ePWM3 modules ***/
  {
    /*  // Time Base Control Register
       EPwm3Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm3Regs.TBCTL.bit.SYNCOSEL             = 0U;          // Sync Output Select

       EPwm3Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm3Regs.TBCTL.bit.PHSEN                = 1U;          // Phase Load Enable
       EPwm3Regs.TBCTL.bit.PHSDIR               = 1U;          // Phase Direction Bit
       EPwm3Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm3Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm3Regs.TBCTL.all = (EPwm3Regs.TBCTL.all & ~0x3FFFU) | 0x2006U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm3Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm3Regs.TBPHS.half.TBPHS               = 0U;         // Phase offset register
     */
    EPwm3Regs.TBPHS.all = (EPwm3Regs.TBPHS.all & ~0xFFFF0000U) | 0x0U;

    // Time Base Counter Register
    EPwm3Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm3Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm3Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm3Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm3Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm3Regs.CMPCTL.all = (EPwm3Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm3Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm3Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm3Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm3Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm3Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm3Regs.AQSFRC.all = (EPwm3Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm3Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm3Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm3Regs.AQCSFRC.all = (EPwm3Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm3Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm3Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm3Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm3Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm3Regs.DBCTL.all = (EPwm3Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm3Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm3Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm3Regs.ETSEL.bit.SOCAEN               = 0U;          // Start of Conversion A Enable
       EPwm3Regs.ETSEL.bit.SOCASEL              = 0U;          // Start of Conversion A Select
       EPwm3Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM3SOCA Period Select
       EPwm3Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm3Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm3Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM3SOCB Period Select
       EPwm3Regs.ETSEL.bit.INTEN                = 0U;          // EPWM3INTn Enable
       EPwm3Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM3INTn Select
       EPwm3Regs.ETPS.bit.INTPRD                = 1U;          // EPWM3INTn Period Select
     */
    EPwm3Regs.ETSEL.all = (EPwm3Regs.ETSEL.all & ~0xFF0FU) | 0x1001U;
    EPwm3Regs.ETPS.all = (EPwm3Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm3Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm3Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm3Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm3Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm3Regs.PCCTL.all = (EPwm3Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm3Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm3Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM3A
       EPwm3Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM3B
       EPwm3Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM3A action on DCAEVT1
       EPwm3Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM3A action on DCAEVT2
       EPwm3Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM3B action on DCBEVT1
       EPwm3Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM3B action on DCBEVT2
     */
    EPwm3Regs.TZCTL.all = (EPwm3Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm3Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm3Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm3Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm3Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm3Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm3Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm3Regs.TZEINT.all = (EPwm3Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm3Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm3Regs.DCACTL.bit.EVT1SOCE            = 1U;          // DCAEVT1 SOC Enable
       EPwm3Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm3Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm3Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm3Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm3Regs.DCACTL.all = (EPwm3Regs.DCACTL.all & ~0x30FU) | 0x4U;

    /*	// Digital Compare B Control Register
       EPwm3Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm3Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm3Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm3Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm3Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm3Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm3Regs.DCBCTL.all = (EPwm3Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm3Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm3Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm3Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm3Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm3Regs.DCTRIPSEL.all = (EPwm3Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm3Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm3Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm3Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm3Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm3Regs.TZDCSEL.all = (EPwm3Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm3Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm3Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm3Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm3Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm3Regs.DCFCTL.all = (EPwm3Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm3Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm3Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm3Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm3Regs.DCCAPCTL.all = (EPwm3Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm3Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm3Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm3Regs.HRCNFG.all = (EPwm3Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* InitializeConditions for Delay: '<S196>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g = 0U;

  /* SystemInitialize for Enabled SubSystem: '<S19>/Closed loop Control' */
  /* Start for Constant: '<S40>/Kp1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1_m = 0.0F;

  /* Start for Constant: '<S39>/Ki1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1_a = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S140>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_c = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_pk = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S89>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_g = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_h = 0;

  /* End of SystemInitialize for SubSystem: '<S19>/Closed loop Control' */
}

/* System reset for function-call system: '<Root>/FOC Algorithm Motor1' */
void mc_FOCAlgorithmMotor1_Reset(void)
{
  /* InitializeConditions for Delay: '<S196>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g = 0U;
}

/* Disable for function-call system: '<Root>/FOC Algorithm Motor1' */
#pragma CODE_SECTION (FOCAlgorithmMotor1_Disable, "ramfuncs")

void FOCAlgorithmMotor1_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S19>/Open Loop Start-Up' */
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.OpenLoopStartUp_MODE) {
    /* Disable for DiscreteIntegrator: '<S175>/Ramp Generator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps;
    mcb_pmsm_foc_qep_dyno_f28_DWork.OpenLoopStartUp_MODE = false;
  }

  /* End of Disable for SubSystem: '<S19>/Open Loop Start-Up' */
}

/* Output and update for function-call system: '<Root>/FOC Algorithm Motor1' */
#pragma CODE_SECTION (mcb_pmsm_FOCAlgorithmMotor1, "ramfuncs")

void mcb_pmsm_FOCAlgorithmMotor1(void)
{
  int32_T Q17perunitconversion_h;
  real32_T Bias;
  real32_T u0;
  uint32_T Sum_d;
  int16_T i;
  uint16_T Data;

  /* S-Function (c280xqep): '<S189>/eQEP' */
  {
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o1_e = EQep1Regs.QPOSCNT;/*eQEP Position Counter*/
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2_b = EQep1Regs.QPOSILAT;
         /* The position-counter value is latched into this register on an IEL*/
  }

  /* Delay: '<S190>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_mk =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_o;

  /* Logic: '<S190>/NOT' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_m =
    !mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_mk;

  /* Outputs for Enabled SubSystem: '<S190>/IndexFinder' */
  mcb_pmsm_foc_qe_IndexFinder(mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_m,
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2_b,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder,
    &mcb_pmsm_foc_qep_dyno_f28_DWork.IndexFinder);

  /* End of Outputs for SubSystem: '<S190>/IndexFinder' */

  /* DataStoreWrite: '<S19>/Data Store Write' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.EnClosedLoop =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder.AND;

  /* DataStoreRead: '<S191>/Data Store Read' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_k =
    mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor1;

  /* DataStoreRead: '<S191>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_c =
    mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor1;

  /* S-Function (c2802xadc): '<S189>/IA//IB Measurement' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_c[0] = (AdcResult.ADCRESULT0);
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_c[1] = (AdcResult.ADCRESULT1);
  }

  /* DataTypeConversion: '<S191>/Data Type Conversion' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_f[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_c[0];
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_f[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_c[1];

  /* Sum: '<S191>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_as[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_f[0] -
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_k;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_as[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_f[1] -
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_c;

  /* ArithShift: '<S191>/Q17 per unit conversion' incorporates:
   *  Sum: '<S191>/Add'
   */
  Q17perunitconversion_h = mcb_pmsm_foc_qep_dyno_f28069m_B.Add_as[0] << 6U;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Q17perunitconversion_h[0] =
    Q17perunitconversion_h;

  /* DataTypeConversion: '<S191>/Data Type Conversion1' incorporates:
   *  ArithShift: '<S191>/Q17 per unit conversion'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[0] = (real32_T)
    Q17perunitconversion_h * 7.62939453E-6F;

  /* ArithShift: '<S191>/Q17 per unit conversion' incorporates:
   *  Sum: '<S191>/Add'
   */
  Q17perunitconversion_h = mcb_pmsm_foc_qep_dyno_f28069m_B.Add_as[1] << 6U;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Q17perunitconversion_h[1] =
    Q17perunitconversion_h;

  /* DataTypeConversion: '<S191>/Data Type Conversion1' incorporates:
   *  ArithShift: '<S191>/Q17 per unit conversion'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[1] = (real32_T)
    Q17perunitconversion_h * 7.62939453E-6F;

  /* Outputs for IfAction SubSystem: '<S195>/PositionNoReset' incorporates:
   *  ActionPort: '<S211>/Action Port'
   */
  /* If: '<S195>/If1' */
  mcb_pmsm_fo_PositionNoReset(mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2_b,
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o1_e,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_n,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.PositionNoReset);

  /* End of Outputs for SubSystem: '<S195>/PositionNoReset' */

  /* DataTypeConversion: '<S214>/DTC' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_c =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_n;

  /* Product: '<S195>/Product' incorporates:
   *  Constant: '<S217>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_c * 0.00025F;

  /* Switch: '<S203>/Switch' incorporates:
   *  Constant: '<S21>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ce = 0.165F;

  /* If: '<S204>/If' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp <= 0.165F) {
    /* Outputs for IfAction SubSystem: '<S204>/If Action Subsystem' incorporates:
     *  ActionPort: '<S206>/Action Port'
     */
    mcb_pms_IfActionSubsystem_g(mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp,
      0.165F, &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_c);

    /* End of Outputs for SubSystem: '<S204>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S204>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S207>/Action Port'
     */
    /* Merge: '<S204>/Merge' incorporates:
     *  Sum: '<S207>/Add'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp - 0.165F;

    /* End of Outputs for SubSystem: '<S204>/If Action Subsystem1' */
  }

  /* End of If: '<S204>/If' */

  /* Gain: '<S209>/Number of pole pairs' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs_d = 4.0F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_c;

  /* Rounding: '<S205>/Floor' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Floor_p = (real32_T)floor
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs_d);

  /* Sum: '<S205>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs_d -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Floor_p;

  /* DataStoreRead: '<S19>/Data Store Read' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_kj =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Enable;

  /* Outputs for Enabled SubSystem: '<S19>/Closed loop Control' incorporates:
   *  EnablePort: '<S27>/Enable'
   */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder.AND) {
    /* Outputs for Atomic SubSystem: '<S36>/Two phase CRL wrap' */
    mcb_pmsm_fo_TwophaseCRLwrap
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[0],
       mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[1],
       &mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap);

    /* End of Outputs for SubSystem: '<S36>/Two phase CRL wrap' */

    /* RelationalOperator: '<S163>/Compare' incorporates:
     *  Constant: '<S163>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_eh =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k < 0.0F);

    /* DataTypeConversion: '<S162>/Data Type Conversion' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_hf =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_eh;

    /* If: '<S162>/If' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_hf > 0U) {
      /* Outputs for IfAction SubSystem: '<S162>/If Action Subsystem' incorporates:
       *  ActionPort: '<S164>/Action Port'
       */
      mcb_pmsm__IfActionSubsystem(mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_b);

      /* End of Outputs for SubSystem: '<S162>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S162>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S165>/Action Port'
       */
      mcb_pmsm_IfActionSubsystem1(mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_b);

      /* End of Outputs for SubSystem: '<S162>/If Action Subsystem1' */
    }

    /* End of If: '<S162>/If' */

    /* Gain: '<S34>/indexing' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_j = 800.0F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g;

    /* DataTypeConversion: '<S34>/Get_Integer' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g = (uint16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_j;

    /* Sum: '<S34>/Sum' incorporates:
     *  Constant: '<S34>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g + 1UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_d[0] = Sum_d;

    /* Selector: '<S34>/Lookup' incorporates:
     *  Constant: '<S34>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[0] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S34>/Sum' */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_d[1] = Sum_d;

    /* Selector: '<S34>/Lookup' incorporates:
     *  Constant: '<S34>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[1] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S34>/Sum' incorporates:
     *  Constant: '<S34>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g + 201UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_d[2] = Sum_d;

    /* Selector: '<S34>/Lookup' incorporates:
     *  Constant: '<S34>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[2] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S34>/Sum' incorporates:
     *  Constant: '<S34>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g + 200UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_d[3] = Sum_d;

    /* Selector: '<S34>/Lookup' incorporates:
     *  Constant: '<S34>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[3] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S161>/Sum3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_a =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[0] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[1];

    /* DataTypeConversion: '<S34>/Data Type Conversion1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_cg =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_g;

    /* Sum: '<S34>/Sum2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_j -
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_cg;

    /* Product: '<S161>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dl =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_a *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_f;

    /* Sum: '<S161>/Sum4' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_e =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dl +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[1];

    /* Sum: '<S161>/Sum5' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_d =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[2] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[3];

    /* Product: '<S161>/Product1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_bt =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_d *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_f;

    /* Sum: '<S161>/Sum6' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_o =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_bt +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[3];

    /* Outputs for Atomic SubSystem: '<S33>/Two inputs CRL' */
    mcb_pmsm_foc_TwoinputsCRL_g
      (mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.algDD_o1,
       mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.algDD_o2,
       mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_e,
       mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_o,
       &mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g);

    /* End of Outputs for SubSystem: '<S33>/Two inputs CRL' */

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o1;

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S43>/ChosenMethod'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f0 = 3U;

    /* Sum: '<S40>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_c = mcb_pmsm_foc_qep_dyno_f28069m_B.RT2
      [1] - mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o2;

    /* Product: '<S145>/PProd Out' incorporates:
     *  Constant: '<S40>/Kp'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_c * 1.70112133F;

    /* Logic: '<S40>/Logical Operator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_h =
      !mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_kj;

    /* Constant: '<S40>/Kp1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1_m = 0.0F;

    /* DiscreteIntegrator: '<S140>/Integrator' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_h ||
        (mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_pk != 0)) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_c = 0.0F;
    }

    /* DiscreteIntegrator: '<S140>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_f =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_c;

    /* Sum: '<S149>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd =
      mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_c +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_f;

    /* Saturate: '<S147>/Saturation' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd;
    if (u0 > 1.0F) {
      /* Saturate: '<S147>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a = 1.0F;
    } else if (u0 < -1.0F) {
      /* Saturate: '<S147>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a = -1.0F;
    } else {
      /* Saturate: '<S147>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a = u0;
    }

    /* End of Saturate: '<S147>/Saturation' */

    /* Sum: '<S39>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_o = mcb_pmsm_foc_qep_dyno_f28069m_B.RT2
      [0] - mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o1;

    /* Product: '<S94>/PProd Out' incorporates:
     *  Constant: '<S39>/Kp'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_iz =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_o * 1.70112133F;

    /* Logic: '<S39>/Logical Operator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_e =
      !mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_kj;

    /* Constant: '<S39>/Ki1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1_a = 0.0F;

    /* DiscreteIntegrator: '<S89>/Integrator' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_e ||
        (mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_h != 0)) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_g = 0.0F;
    }

    /* DiscreteIntegrator: '<S89>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_m =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_g;

    /* Sum: '<S98>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt =
      mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_iz +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_m;

    /* Saturate: '<S96>/Saturation' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt;
    if (u0 > 1.0F) {
      /* Saturate: '<S96>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f = 1.0F;
    } else if (u0 < -1.0F) {
      /* Saturate: '<S96>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f = -1.0F;
    } else {
      /* Saturate: '<S96>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f = u0;
    }

    /* End of Saturate: '<S96>/Saturation' */

    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S43>/Constant3'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_m = 0.95F;

    /* Product: '<S43>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ng = 0.9025F;

    /* Product: '<S44>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hg =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f;

    /* Product: '<S44>/Product1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_d =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a;

    /* Sum: '<S44>/Sum1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hg +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_d;

    /* Outputs for IfAction SubSystem: '<S38>/D-Q Equivalence' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    /* If: '<S38>/If' */
    mcb_pmsm_foc__DQEquivalence(mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_c, 0.95F, 0.9025F,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence);

    /* End of Outputs for SubSystem: '<S38>/D-Q Equivalence' */

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref_i =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[0];

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o2;

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref_n =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[1];

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[0];

    /* SignalConversion generated from: '<S27>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref_a =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[1];

    /* DeadZone: '<S82>/DeadZone' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt > 1.0F) {
      /* DeadZone: '<S82>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt - 1.0F;
    } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt >= -1.0F) {
      /* DeadZone: '<S82>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d = 0.0F;
    } else {
      /* DeadZone: '<S82>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt - -1.0F;
    }

    /* End of DeadZone: '<S82>/DeadZone' */

    /* RelationalOperator: '<S80>/Relational Operator' incorporates:
     *  Constant: '<S80>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_c =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d != 0.0F);

    /* RelationalOperator: '<S80>/fix for DT propagation issue' incorporates:
     *  Constant: '<S80>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_k =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d > 0.0F);

    /* Switch: '<S80>/Switch1' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_k) {
      /* Switch: '<S80>/Switch1' incorporates:
       *  Constant: '<S80>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_p = 1;
    } else {
      /* Switch: '<S80>/Switch1' incorporates:
       *  Constant: '<S80>/Constant2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_p = -1;
    }

    /* End of Switch: '<S80>/Switch1' */

    /* Product: '<S86>/IProd Out' incorporates:
     *  Constant: '<S39>/Ki'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_e =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_o * 0.309887588F;

    /* RelationalOperator: '<S80>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S80>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_d =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_e > 0.0F);

    /* Switch: '<S80>/Switch2' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_d) {
      /* Switch: '<S80>/Switch2' incorporates:
       *  Constant: '<S80>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_g = 1;
    } else {
      /* Switch: '<S80>/Switch2' incorporates:
       *  Constant: '<S80>/Constant4'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_g = -1;
    }

    /* End of Switch: '<S80>/Switch2' */

    /* RelationalOperator: '<S80>/Equal1' incorporates:
     *  Switch: '<S80>/Switch1'
     *  Switch: '<S80>/Switch2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_k =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_p ==
       mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_g);

    /* Logic: '<S80>/AND3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_j =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_c &&
       mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_k);

    /* Switch: '<S80>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_j) {
      /* Switch: '<S80>/Switch' incorporates:
       *  Constant: '<S80>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_h = 0.0F;
    } else {
      /* Switch: '<S80>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_h =
        mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_e;
    }

    /* End of Switch: '<S80>/Switch' */

    /* DeadZone: '<S133>/DeadZone' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd > 1.0F) {
      /* DeadZone: '<S133>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd - 1.0F;
    } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd >= -1.0F) {
      /* DeadZone: '<S133>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n = 0.0F;
    } else {
      /* DeadZone: '<S133>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd - -1.0F;
    }

    /* End of DeadZone: '<S133>/DeadZone' */

    /* RelationalOperator: '<S131>/Relational Operator' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_g =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n != 0.0F);

    /* RelationalOperator: '<S131>/fix for DT propagation issue' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_mc =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n > 0.0F);

    /* Switch: '<S131>/Switch1' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_mc) {
      /* Switch: '<S131>/Switch1' incorporates:
       *  Constant: '<S131>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_dk = 1;
    } else {
      /* Switch: '<S131>/Switch1' incorporates:
       *  Constant: '<S131>/Constant2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_dk = -1;
    }

    /* End of Switch: '<S131>/Switch1' */

    /* Product: '<S137>/IProd Out' incorporates:
     *  Constant: '<S40>/Ki'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_o =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_c * 0.309887588F;

    /* RelationalOperator: '<S131>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S131>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_e =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_o > 0.0F);

    /* Switch: '<S131>/Switch2' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_e) {
      /* Switch: '<S131>/Switch2' incorporates:
       *  Constant: '<S131>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_a = 1;
    } else {
      /* Switch: '<S131>/Switch2' incorporates:
       *  Constant: '<S131>/Constant4'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_a = -1;
    }

    /* End of Switch: '<S131>/Switch2' */

    /* RelationalOperator: '<S131>/Equal1' incorporates:
     *  Switch: '<S131>/Switch1'
     *  Switch: '<S131>/Switch2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_h =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_dk ==
       mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_a);

    /* Logic: '<S131>/AND3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_k =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_g &&
       mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_h);

    /* Switch: '<S131>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_k) {
      /* Switch: '<S131>/Switch' incorporates:
       *  Constant: '<S131>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_g = 0.0F;
    } else {
      /* Switch: '<S131>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_g =
        mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_o;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Outputs for Atomic SubSystem: '<S32>/Two inputs CRL' */
    mcb_pmsm_foc_q_TwoinputsCRL(mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[0],
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[1],
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_e,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_o,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL);

    /* End of Outputs for SubSystem: '<S32>/Two inputs CRL' */

    /* Gain: '<S172>/one_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_k = 0.5F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o1;

    /* Gain: '<S172>/sqrt3_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_e = 0.866025388F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o2;

    /* Sum: '<S172>/add_b' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_ch =
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_e -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_k;

    /* Sum: '<S172>/add_c' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_e = (0.0F -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_k) -
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_e;

    /* MinMax: '<S169>/Max' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o1;
    Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_ch;
    if ((u0 >= Bias) || rtIsNaNF(Bias)) {
      Bias = u0;
    }

    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_e;
    if ((!(Bias >= u0)) && (!rtIsNaNF(u0))) {
      Bias = u0;
    }

    /* MinMax: '<S169>/Max' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Max_o = Bias;

    /* MinMax: '<S169>/Min' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o1;
    Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_ch;
    if ((u0 <= Bias) || rtIsNaNF(Bias)) {
      Bias = u0;
    }

    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_e;
    if ((!(Bias <= u0)) && (!rtIsNaNF(u0))) {
      Bias = u0;
    }

    /* MinMax: '<S169>/Min' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Min_k = Bias;

    /* Sum: '<S169>/Add' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_fm =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Max_o +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Min_k;

    /* Gain: '<S169>/one_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_i = -0.5F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add_fm;

    /* Sum: '<S168>/Add1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b3 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_ch +
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_i;

    /* Sum: '<S168>/Add2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add2_a =
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_i +
      mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_e;

    /* Sum: '<S168>/Add3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add3_e =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o1 +
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_i;

    /* Gain: '<S168>/Gain' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[0] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add3_e;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[1] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b3;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[2] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add2_a;

    /* Update for DiscreteIntegrator: '<S140>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_c +=
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_g;
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_pk = (int16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_h;

    /* Update for DiscreteIntegrator: '<S89>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_g +=
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_h;
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_h = (int16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_e;
  }

  /* End of Outputs for SubSystem: '<S19>/Closed loop Control' */

  /* Logic: '<S19>/NOT' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_dl =
    !mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder.AND;

  /* Outputs for Enabled SubSystem: '<S19>/Open Loop Start-Up' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_dl) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.OpenLoopStartUp_MODE = true;

    /* Gain: '<S28>/rpm2freq' incorporates:
     *  Constant: '<S28>/Speed_ref(rpm)'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.rpm2freq = 27.380003F;

    /* DataStoreRead: '<S28>/Data Store Read1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_n5 =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Enable;

    /* Logic: '<S175>/NOT' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_p =
      !mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_n5;

    /* DiscreteIntegrator: '<S175>/Ramp Generator' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_p) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE = 0.0F;
    }

    /* DiscreteIntegrator: '<S175>/Ramp Generator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Eps =
      mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE;

    /* Product: '<S28>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mc = 27.380003F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps;

    /* Abs: '<S28>/Abs' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Frequency = fabsf
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mc);

    /* Gain: '<S28>/V-by-f' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vbyf = 0.00365230092F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Frequency;

    /* Gain: '<S28>/Correction_Factor_sinePWM' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Correction_Factor_sinePWM = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Vbyf;

    /* Saturate: '<S28>/Saturation' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Correction_Factor_sinePWM;
    if (u0 > 0.95F) {
      /* Saturate: '<S28>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Amplitude = 0.95F;
    } else if (u0 < 0.15F) {
      /* Saturate: '<S28>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Amplitude = 0.15F;
    } else {
      /* Saturate: '<S28>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Amplitude = u0;
    }

    /* End of Saturate: '<S28>/Saturation' */

    /* UnaryMinus: '<S173>/Unary Minus' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnaryMinus =
      -mcb_pmsm_foc_qep_dyno_f28069m_B.Amplitude;

    /* Gain: '<S28>/position_increment' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.position_increment = 0.000628318521F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Frequency;

    /* Gain: '<S174>/scaleIn' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.scaleIn = 0.159154937F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.position_increment;

    /* UnitDelay: '<S174>/Unit Delay' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_h =
      mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_p;

    /* Logic: '<S174>/NOT' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_j = true;

    /* Outputs for Enabled SubSystem: '<S174>/Accumulate' incorporates:
     *  EnablePort: '<S187>/Enable'
     */
    /* Delay: '<S187>/Delay' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_n =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_j;

    /* Outputs for Enabled SubSystem: '<S187>/Subsystem' incorporates:
     *  EnablePort: '<S188>/Enable'
     */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_n) {
      /* SignalConversion generated from: '<S188>/Input' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Input =
        mcb_pmsm_foc_qep_dyno_f28069m_B.scaleIn;
    }

    /* End of Outputs for SubSystem: '<S187>/Subsystem' */

    /* Sum: '<S187>/Add' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_oe =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Input +
      mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_h;

    /* DataTypeConversion: '<S187>/Data Type Conversion' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_c = (int16_T)(real32_T)
      floor(mcb_pmsm_foc_qep_dyno_f28069m_B.Add_oe);

    /* DataTypeConversion: '<S187>/Data Type Conversion1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_k =
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_c;

    /* Sum: '<S187>/Add1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add_oe -
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_k;

    /* Update for Delay: '<S187>/Delay' incorporates:
     *  Constant: '<S187>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_j = true;

    /* End of Outputs for SubSystem: '<S174>/Accumulate' */

    /* Gain: '<S174>/scaleOut' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.scaleOut = 6.28318548F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_j;

    /* DataStoreRead: '<S28>/Data Store Read' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead =
      mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef;

    /* Switch: '<S28>/Direction' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead > 0.0F) {
      /* Switch: '<S28>/Direction' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps_i =
        mcb_pmsm_foc_qep_dyno_f28069m_B.scaleOut;
    } else {
      /* Sum: '<S28>/Sum' incorporates:
       *  Constant: '<S28>/ '
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k3 = 6.28318548F -
        mcb_pmsm_foc_qep_dyno_f28069m_B.scaleOut;

      /* Switch: '<S28>/Direction' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps_i =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k3;
    }

    /* End of Switch: '<S28>/Direction' */

    /* Gain: '<S183>/convert_pu' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.convert_pu = 0.159154937F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps_i;

    /* RelationalOperator: '<S184>/Compare' incorporates:
     *  Constant: '<S184>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_k =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.convert_pu < 0.0F);

    /* DataTypeConversion: '<S183>/Data Type Conversion' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_k;

    /* If: '<S183>/If' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_p > 0U) {
      /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem' incorporates:
       *  ActionPort: '<S185>/Action Port'
       */
      mcb_pmsm__IfActionSubsystem(mcb_pmsm_foc_qep_dyno_f28069m_B.convert_pu,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_d,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_j);

      /* End of Outputs for SubSystem: '<S183>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S183>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S186>/Action Port'
       */
      mcb_pmsm_IfActionSubsystem1(mcb_pmsm_foc_qep_dyno_f28069m_B.convert_pu,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_d,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_p);

      /* End of Outputs for SubSystem: '<S183>/If Action Subsystem1' */
    }

    /* End of If: '<S183>/If' */

    /* Gain: '<S178>/indexing' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_m = 800.0F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_d;

    /* DataTypeConversion: '<S178>/Get_Integer' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e = (uint16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_m;

    /* Sum: '<S178>/Sum' incorporates:
     *  Constant: '<S178>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e + 1UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_n[0] = Sum_d;

    /* Selector: '<S178>/Lookup' incorporates:
     *  Constant: '<S178>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[0] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S178>/Sum' */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_n[1] = Sum_d;

    /* Selector: '<S178>/Lookup' incorporates:
     *  Constant: '<S178>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[1] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S178>/Sum' incorporates:
     *  Constant: '<S178>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e + 201UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_n[2] = Sum_d;

    /* Selector: '<S178>/Lookup' incorporates:
     *  Constant: '<S178>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[2] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S178>/Sum' incorporates:
     *  Constant: '<S178>/offset'
     */
    Sum_d = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e + 200UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_n[3] = Sum_d;

    /* Selector: '<S178>/Lookup' incorporates:
     *  Constant: '<S178>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[3] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum_d];

    /* Sum: '<S182>/Sum3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[0] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[1];

    /* DataTypeConversion: '<S178>/Data Type Conversion1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer_e;

    /* Sum: '<S178>/Sum2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_m -
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_c;

    /* Product: '<S182>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_je =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_p *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_c;

    /* Sum: '<S182>/Sum4' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_m =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_je +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[1];

    /* Sum: '<S182>/Sum5' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[2] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[3];

    /* Product: '<S182>/Product1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_p *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_c;

    /* Sum: '<S182>/Sum6' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_j +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[3];

    /* Outputs for Atomic SubSystem: '<S177>/Two inputs CRL' */
    /* Constant: '<S173>/Constant' */
    mcb_pmsm_foc_q_TwoinputsCRL(0.0F, mcb_pmsm_foc_qep_dyno_f28069m_B.UnaryMinus,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_m,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_p,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p);

    /* End of Outputs for SubSystem: '<S177>/Two inputs CRL' */

    /* Gain: '<S179>/Ka' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ka =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.algDD_o1;

    /* Gain: '<S179>/one_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_m = 0.5F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.algDD_o1;

    /* Gain: '<S179>/sqrt3_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_g = 0.866025388F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.algDD_o2;

    /* Sum: '<S179>/add_b' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_g -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_m;

    /* Gain: '<S179>/Kb' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kb = mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_c;

    /* Sum: '<S179>/add_c' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_i = (0.0F -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_m) -
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_g;

    /* Gain: '<S179>/Kc' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kc = mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_i;

    /* Product: '<S175>/Divide' incorporates:
     *  Constant: '<S175>/One'
     *  Constant: '<S28>/Ramp_Time (sec)'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_h = 0.333333343F;

    /* Gain: '<S175>/Sample_Time' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sample_Time = 3.33333337E-5F;

    /* Update for DiscreteIntegrator: '<S175>/Ramp Generator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE += 3.33333337E-5F;
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE > 1.0F) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE = 1.0F;
    } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE < 0.0F) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE = 0.0F;
    }

    /* End of Update for DiscreteIntegrator: '<S175>/Ramp Generator' */

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_j;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.OpenLoopStartUp_MODE) {
    /* Disable for DiscreteIntegrator: '<S175>/Ramp Generator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Eps;
    mcb_pmsm_foc_qep_dyno_f28_DWork.OpenLoopStartUp_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S19>/Open Loop Start-Up' */

  /* UnitDelay: '<S225>/Output' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Output =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Output_DSTATE;

  /* Product: '<S221>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq_o =
    mcb_pmsm_foc_qep_dyno_f2_ConstB.Ld_Lq_a *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb_f;

  /* Sum: '<S221>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_mq =
    mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq_o +
    mcb_pmsm_foc_qep_dyno_f2_ConstB.Switch2_j;

  /* Product: '<S221>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_bq =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_mq *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb_j;

  /* Gain: '<S221>/1_5_Pp' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp_i = 6.0F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_bq;

  /* Gain: '<S196>/PositionToCount' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount_g = (uint32_T)(4.2949673E+9F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp);

  /* Delay: '<S196>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_h =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_n[mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g];

  /* Sum: '<S196>/SpeedCount' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedCount_e = (int32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount_g - (int32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_h;

  /* DataTypeConversion: '<S219>/DTC' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_nv = (real32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedCount_e;

  /* Gain: '<S196>/SpeedGain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain_n = 1.70073511E-9F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_nv;

  /* Product: '<S199>/Product' incorporates:
   *  Constant: '<S199>/Filter_Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_li =
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain_n * 0.01F;

  /* UnitDelay: '<S199>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_o =
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_c;

  /* Product: '<S199>/Product1' incorporates:
   *  Constant: '<S199>/One'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_b = 0.99F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_o;

  /* Sum: '<S199>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_li +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_b;

  /* Product: '<S221>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_la =
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp_i *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb;

  /* Gain: '<S221>/P_si2pu' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.P_output_g = 0.79402F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_la;

  /* DataStoreRead: '<S26>/Data Store Read' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr1_speed_ref_PU =
    mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef;

  /* SignalConversion generated from: '<S26>/Selector' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref_j;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb_f;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[2] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref_i;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[3] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref_a;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[4] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb_j;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[5] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref_n;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[6] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp_i;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[7] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.P_output_g;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[8] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[9] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[0];
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[10] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[1];
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[11] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k;
  for (i = 0; i < 6; i++) {
    mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[i + 12] =
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug[i];
  }

  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[18] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Te_PU;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[19] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pm_PU;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[20] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Speed_PU;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[21] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[0];
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[22] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[1];
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[23] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pos_PU;
  mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[24] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr1_speed_ref_PU;

  /* End of SignalConversion generated from: '<S26>/Selector' */

  /* DataStoreRead: '<S26>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_l =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Debug_signals;

  /* MultiPortSwitch: '<S26>/Multiport Switch' */
  switch (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_l) {
   case 0:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor16'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 25U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 21U;
    break;

   case 1:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 25U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 9U;
    break;

   case 2:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 1U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 2U;
    break;

   case 3:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor3'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 4U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 5U;
    break;

   case 4:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor4'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 3U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 6U;
    break;

   case 5:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor5'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 10U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 11U;
    break;

   case 6:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor6'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 8U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 7U;
    break;

   case 7:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor7'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 13U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 14U;
    break;

   case 8:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor8'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 16U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 17U;
    break;

   case 9:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor9'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 15U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 18U;
    break;

   case 10:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor10'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 22U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 23U;
    break;

   case 11:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor11'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 20U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 19U;
    break;

   case 12:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor12'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 8U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 20U;
    break;

   case 13:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor13'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 7U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 19U;
    break;

   case 14:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor14'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 12U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 24U;
    break;

   default:
    /* MultiPortSwitch: '<S26>/Multiport Switch' incorporates:
     *  Constant: '<S26>/speed_motor15'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] = 10U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] = 22U;
    break;
  }

  /* End of MultiPortSwitch: '<S26>/Multiport Switch' */

  /* Selector: '<S26>/Selector' */
  Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn
    [(int16_T)mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[0] - 1];
  mcb_pmsm_foc_qep_dyno_f28069m_B.Selector[0] = Bias;

  /* DataTypeConversion: '<S227>/Data Type Conversion' */
  i = (int16_T)(Bias * 4096.0F);
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_p3[0] = i;

  /* DataTypeConversion: '<S227>/Data Type Conversion3' incorporates:
   *  DataTypeConversion: '<S227>/Data Type Conversion'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[0] = (uint16_T)i;

  /* Selector: '<S26>/Selector' */
  Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn
    [(int16_T)mcb_pmsm_foc_qep_dyno_f28069m_B.MultiportSwitch[1] - 1];
  mcb_pmsm_foc_qep_dyno_f28069m_B.Selector[1] = Bias;

  /* DataTypeConversion: '<S227>/Data Type Conversion' */
  i = (int16_T)(Bias * 4096.0F);
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_p3[1] = i;

  /* DataTypeConversion: '<S227>/Data Type Conversion3' incorporates:
   *  DataTypeConversion: '<S227>/Data Type Conversion'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[1] = (uint16_T)i;

  /* If: '<S223>/If' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Output == 0U) {
    /* Outputs for IfAction SubSystem: '<S223>/Start' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  Constant: '<S229>/End'
     *  SignalConversion generated from: '<S229>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[0] = 21331U;

    /* SignalConversion generated from: '<S229>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[0];

    /* End of Outputs for SubSystem: '<S223>/Start' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data_fw[0] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/Start' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  SignalConversion generated from: '<S229>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[1] = Data;

    /* SignalConversion generated from: '<S229>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[1];

    /* End of Outputs for SubSystem: '<S223>/Start' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data_fw[1] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/Start' incorporates:
     *  ActionPort: '<S229>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  SignalConversion generated from: '<S229>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[2] = Data;

    /* Merge: '<S223>/Merge1' incorporates:
     *  Bias: '<S229>/Bias'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Iteration =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.Width + 1U;

    /* End of Outputs for SubSystem: '<S223>/Start' */
  } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Output == 599U) {
    /* Outputs for IfAction SubSystem: '<S223>/End' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    /* SignalConversion generated from: '<S228>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[0];

    /* End of Outputs for SubSystem: '<S223>/End' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data_f[0] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/End' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  SignalConversion generated from: '<S228>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[0] = Data;

    /* SignalConversion generated from: '<S228>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[1];

    /* End of Outputs for SubSystem: '<S223>/End' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data_f[1] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/End' incorporates:
     *  ActionPort: '<S228>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  Constant: '<S228>/Start'
     *  SignalConversion generated from: '<S228>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[1] = Data;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[2] = 17733U;

    /* Merge: '<S223>/Merge1' incorporates:
     *  Bias: '<S228>/Bias'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Iteration =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.Width + 1U;

    /* End of Outputs for SubSystem: '<S223>/End' */
  } else {
    /* Outputs for IfAction SubSystem: '<S223>/Data' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    /* SignalConversion generated from: '<S226>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[0];

    /* End of Outputs for SubSystem: '<S223>/Data' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data[0] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/Data' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  SignalConversion generated from: '<S226>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[0] = Data;

    /* SignalConversion generated from: '<S226>/Data' */
    Data = mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3[1];

    /* End of Outputs for SubSystem: '<S223>/Data' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Data[1] = Data;

    /* Outputs for IfAction SubSystem: '<S223>/Data' incorporates:
     *  ActionPort: '<S226>/Action Port'
     */
    /* Merge: '<S223>/Merge' incorporates:
     *  Constant: '<S226>/Start'
     *  SignalConversion generated from: '<S226>/Data_out'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[1] = Data;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[2] = 0U;

    /* Merge: '<S223>/Merge1' incorporates:
     *  SignalConversion generated from: '<S226>/Data_width'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Iteration =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.Width;

    /* End of Outputs for SubSystem: '<S223>/Data' */
  }

  /* End of If: '<S223>/If' */

  /* Outputs for Iterator SubSystem: '<S25>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S224>/While Iterator'
   */
  i = 1;
  do {
    mcb_pmsm_foc_qep_dyno_f28069m_B.WhileIterator = i;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IndexVector =
      mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Data[mcb_pmsm_foc_qep_dyno_f28069m_B.WhileIterator
      - 1];

    {
      if (checkSCITransmitInProgressA != 1U) {
        checkSCITransmitInProgressA = 1U;
        int16_T errFlgHeader = NOERROR;
        int16_T errFlgData = NOERROR;
        int16_T errFlgTail = NOERROR;
        errFlgData = scia_xmit((unsigned char*)
          &mcb_pmsm_foc_qep_dyno_f28069m_B.IndexVector, 2, 2);
        checkSCITransmitInProgressA = 0U;
      }
    }

    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_m4 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.SCI_Tx_Iteration - (uint16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.WhileIterator;
    i++;
  } while (mcb_pmsm_foc_qep_dyno_f28069m_B.Add_m4 != 0U);

  /* End of Outputs for SubSystem: '<S25>/While Iterator Subsystem' */

  /* Sum: '<S230>/FixPt Sum1' incorporates:
   *  Constant: '<S230>/FixPt Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSum1 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Output + 1U;

  /* Switch: '<S231>/FixPt Switch' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSum1 > 599U) {
    /* Switch: '<S231>/FixPt Switch' incorporates:
     *  Constant: '<S231>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSwitch = 0U;
  } else {
    /* Switch: '<S231>/FixPt Switch' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSwitch =
      mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSum1;
  }

  /* End of Switch: '<S231>/FixPt Switch' */

  /* DataStoreRead: '<S23>/Enable' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.PWM_En_b =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Enable;

  /* DataTypeConversion: '<S23>/Data Type Conversion' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_e =
    mcb_pmsm_foc_qep_dyno_f28069m_B.PWM_En_b;

  /* S-Function (c280xgpio_do): '<S22>/Digital Output1' */
  {
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_e) {
      GpioDataRegs.GPBSET.bit.GPIO50 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO50 = 1U;
    }
  }

  /* Switch: '<S22>/Switch1' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_e >= 0.5F) {
    /* Switch: '<S19>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder.AND) {
      /* Switch: '<S19>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[0] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[0];
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[1] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[1];
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[2] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[2];
    } else {
      /* Switch: '<S19>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[0] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Ka;
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[1] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Kb;
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[2] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Kc;
    }

    /* End of Switch: '<S19>/Switch' */

    /* Gain: '<S23>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[0];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[0] = Bias;

    /* Sum: '<S23>/Sum' incorporates:
     *  Constant: '<S23>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[0] = Bias;

    /* Gain: '<S22>/Scale_to_PWM_Counter_PRD' */
    Data = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD_e[0] = Data;

    /* Switch: '<S22>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[0] = Data;

    /* Gain: '<S23>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[1];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[1] = Bias;

    /* Sum: '<S23>/Sum' incorporates:
     *  Constant: '<S23>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[1] = Bias;

    /* Gain: '<S22>/Scale_to_PWM_Counter_PRD' */
    Data = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD_e[1] = Data;

    /* Switch: '<S22>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[1] = Data;

    /* Gain: '<S23>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[2];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[2] = Bias;

    /* Sum: '<S23>/Sum' incorporates:
     *  Constant: '<S23>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[2] = Bias;

    /* Gain: '<S22>/Scale_to_PWM_Counter_PRD' */
    Data = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD_e[2] = Data;

    /* Switch: '<S22>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[2] = Data;
  } else {
    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/stop'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[0] = 0U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[1] = 0U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[2] = 0U;
  }

  /* End of Switch: '<S22>/Switch1' */

  /* S-Function (c2802xpwm): '<S22>/ePWM1' */

  /*-- Update CMPA value for ePWM1 --*/
  {
    EPwm1Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[0]);
  }

  /* S-Function (c2802xpwm): '<S22>/ePWM2' */

  /*-- Update CMPA value for ePWM2 --*/
  {
    EPwm2Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[1]);
  }

  /* S-Function (c2802xpwm): '<S22>/ePWM3' */

  /*-- Update CMPA value for ePWM3 --*/
  {
    EPwm3Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_gd[2]);
  }

  /* Update for Delay: '<S190>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder.AND;

  /* Update for UnitDelay: '<S225>/Output' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Output_DSTATE =
    mcb_pmsm_foc_qep_dyno_f28069m_B.FixPtSwitch;

  /* Update for Delay: '<S196>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_n[mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g]
    = mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount_g;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g < 19U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g++;
  } else {
    mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx_g = 0U;
  }

  /* End of Update for Delay: '<S196>/Delay' */

  /* Update for UnitDelay: '<S199>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_c =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb;
}

/* System initialize for function-call system: '<Root>/FOC Algorithm Motor2' */
void mcb_FOCAlgorithmMotor2_Init(void)
{
  /* Start for S-Function (c2802xadc): '<S388>/IA//IB Measurement' */
  if (MW_adcInitFlag == 0U) {
    InitAdc();
    MW_adcInitFlag = 1U;
  }

  config_ADC_SOC2_SOC3 ();

  /* Start for S-Function (c280xqep): '<S388>/eQEP' */
  config_QEP_eQEP2((uint32_T)65535U,(uint32_T)0, (uint32_T)0, (uint32_T)0,
                   (uint16_T)0, (uint16_T)448, (uint16_T)8232, (uint16_T)32768,
                   (uint16_T)119,(uint16_T)0);

  /* Start for S-Function (c280xgpio_do): '<S236>/Digital Output2' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFFFFCFFU;
  GpioCtrlRegs.GPBDIR.all |= 0x100000U;
  EDIS;

  /* Start for S-Function (c2802xpwm): '<S236>/ePWM4' */

  /*** Initialize ePWM4 modules ***/
  {
    /*  // Time Base Control Register
       EPwm4Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm4Regs.TBCTL.bit.SYNCOSEL             = 0U;          // Sync Output Select

       EPwm4Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm4Regs.TBCTL.bit.PHSEN                = 1U;          // Phase Load Enable
       EPwm4Regs.TBCTL.bit.PHSDIR               = 0U;          // Phase Direction Bit
       EPwm4Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm4Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm4Regs.TBCTL.all = (EPwm4Regs.TBCTL.all & ~0x3FFFU) | 0x6U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm4Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm4Regs.TBPHS.half.TBPHS               = 4501U;         // Phase offset register
     */
    EPwm4Regs.TBPHS.all = (EPwm4Regs.TBPHS.all & ~0xFFFF0000U) | 0x11950000U;

    // Time Base Counter Register
    EPwm4Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm4Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm4Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm4Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm4Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm4Regs.CMPCTL.all = (EPwm4Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm4Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm4Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm4Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm4Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm4Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm4Regs.AQSFRC.all = (EPwm4Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm4Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm4Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm4Regs.AQCSFRC.all = (EPwm4Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm4Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm4Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm4Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm4Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm4Regs.DBCTL.all = (EPwm4Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm4Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm4Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm4Regs.ETSEL.bit.SOCAEN               = 1U;          // Start of Conversion A Enable
       EPwm4Regs.ETSEL.bit.SOCASEL              = 2U;          // Start of Conversion A Select
       EPwm4Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM4SOCA Period Select
       EPwm4Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm4Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm4Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM4SOCB Period Select
       EPwm4Regs.ETSEL.bit.INTEN                = 0U;          // EPWM4INTn Enable
       EPwm4Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM4INTn Select
       EPwm4Regs.ETPS.bit.INTPRD                = 1U;          // EPWM4INTn Period Select
     */
    EPwm4Regs.ETSEL.all = (EPwm4Regs.ETSEL.all & ~0xFF0FU) | 0x1A01U;
    EPwm4Regs.ETPS.all = (EPwm4Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm4Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm4Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm4Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm4Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm4Regs.PCCTL.all = (EPwm4Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm4Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm4Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM4A
       EPwm4Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM4B
       EPwm4Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM4A action on DCAEVT1
       EPwm4Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM4A action on DCAEVT2
       EPwm4Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM4B action on DCBEVT1
       EPwm4Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM4B action on DCBEVT2
     */
    EPwm4Regs.TZCTL.all = (EPwm4Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm4Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm4Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm4Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm4Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm4Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm4Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm4Regs.TZEINT.all = (EPwm4Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm4Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm4Regs.DCACTL.bit.EVT1SOCE            = 0U;          // DCAEVT1 SOC Enable
       EPwm4Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm4Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm4Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm4Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm4Regs.DCACTL.all = (EPwm4Regs.DCACTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare B Control Register
       EPwm4Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm4Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm4Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm4Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm4Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm4Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm4Regs.DCBCTL.all = (EPwm4Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm4Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm4Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm4Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm4Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm4Regs.DCTRIPSEL.all = (EPwm4Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm4Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm4Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm4Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm4Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm4Regs.TZDCSEL.all = (EPwm4Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm4Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm4Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm4Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm4Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm4Regs.DCFCTL.all = (EPwm4Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm4Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm4Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm4Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm4Regs.DCCAPCTL.all = (EPwm4Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm4Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm4Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm4Regs.HRCNFG.all = (EPwm4Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S236>/ePWM5' */

  /*** Initialize ePWM5 modules ***/
  {
    /*  // Time Base Control Register
       EPwm5Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm5Regs.TBCTL.bit.SYNCOSEL             = 0U;          // Sync Output Select

       EPwm5Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm5Regs.TBCTL.bit.PHSEN                = 1U;          // Phase Load Enable
       EPwm5Regs.TBCTL.bit.PHSDIR               = 0U;          // Phase Direction Bit
       EPwm5Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm5Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm5Regs.TBCTL.all = (EPwm5Regs.TBCTL.all & ~0x3FFFU) | 0x6U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm5Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm5Regs.TBPHS.half.TBPHS               = 4501U;         // Phase offset register
     */
    EPwm5Regs.TBPHS.all = (EPwm5Regs.TBPHS.all & ~0xFFFF0000U) | 0x11950000U;

    // Time Base Counter Register
    EPwm5Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm5Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm5Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm5Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm5Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm5Regs.CMPCTL.all = (EPwm5Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm5Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm5Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm5Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm5Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm5Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm5Regs.AQSFRC.all = (EPwm5Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm5Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm5Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm5Regs.AQCSFRC.all = (EPwm5Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm5Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm5Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm5Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm5Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm5Regs.DBCTL.all = (EPwm5Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm5Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm5Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm5Regs.ETSEL.bit.SOCAEN               = 0U;          // Start of Conversion A Enable
       EPwm5Regs.ETSEL.bit.SOCASEL              = 0U;          // Start of Conversion A Select
       EPwm5Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM5SOCA Period Select
       EPwm5Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm5Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm5Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM5SOCB Period Select
       EPwm5Regs.ETSEL.bit.INTEN                = 0U;          // EPWM5INTn Enable
       EPwm5Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM5INTn Select
       EPwm5Regs.ETPS.bit.INTPRD                = 1U;          // EPWM5INTn Period Select
     */
    EPwm5Regs.ETSEL.all = (EPwm5Regs.ETSEL.all & ~0xFF0FU) | 0x1001U;
    EPwm5Regs.ETPS.all = (EPwm5Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm5Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm5Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm5Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm5Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm5Regs.PCCTL.all = (EPwm5Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm5Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm5Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM5A
       EPwm5Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM5B
       EPwm5Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM5A action on DCAEVT1
       EPwm5Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM5A action on DCAEVT2
       EPwm5Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM5B action on DCBEVT1
       EPwm5Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM5B action on DCBEVT2
     */
    EPwm5Regs.TZCTL.all = (EPwm5Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm5Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm5Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm5Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm5Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm5Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm5Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm5Regs.TZEINT.all = (EPwm5Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm5Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm5Regs.DCACTL.bit.EVT1SOCE            = 1U;          // DCAEVT1 SOC Enable
       EPwm5Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm5Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm5Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm5Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm5Regs.DCACTL.all = (EPwm5Regs.DCACTL.all & ~0x30FU) | 0x4U;

    /*	// Digital Compare B Control Register
       EPwm5Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm5Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm5Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm5Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm5Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm5Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm5Regs.DCBCTL.all = (EPwm5Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm5Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm5Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm5Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm5Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm5Regs.DCTRIPSEL.all = (EPwm5Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm5Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm5Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm5Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm5Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm5Regs.TZDCSEL.all = (EPwm5Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm5Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm5Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm5Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm5Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm5Regs.DCFCTL.all = (EPwm5Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm5Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm5Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm5Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm5Regs.DCCAPCTL.all = (EPwm5Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm5Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm5Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm5Regs.HRCNFG.all = (EPwm5Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S236>/ePWM6' */

  /*** Initialize ePWM6 modules ***/
  {
    /*  // Time Base Control Register
       EPwm6Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm6Regs.TBCTL.bit.SYNCOSEL             = 3U;          // Sync Output Select

       EPwm6Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm6Regs.TBCTL.bit.PHSEN                = 1U;          // Phase Load Enable
       EPwm6Regs.TBCTL.bit.PHSDIR               = 0U;          // Phase Direction Bit
       EPwm6Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm6Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm6Regs.TBCTL.all = (EPwm6Regs.TBCTL.all & ~0x3FFFU) | 0x36U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm6Regs.TBPRD = 4501U;           // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm6Regs.TBPHS.half.TBPHS               = 4501U;         // Phase offset register
     */
    EPwm6Regs.TBPHS.all = (EPwm6Regs.TBPHS.all & ~0xFFFF0000U) | 0x11950000U;

    // Time Base Counter Register
    EPwm6Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm6Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm6Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm6Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm6Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm6Regs.CMPCTL.all = (EPwm6Regs.CMPCTL.all & ~0x5FU) | 0x0U;
    EPwm6Regs.CMPA.half.CMPA = 2251U;  // Counter Compare A Register
    EPwm6Regs.CMPB = 2251U;            // Counter Compare B Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm6Regs.AQCTLA.all = 144U;
                               // Action Qualifier Control Register For Output A
    EPwm6Regs.AQCTLB.all = 264U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm6Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm6Regs.AQSFRC.all = (EPwm6Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm6Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm6Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm6Regs.AQCSFRC.all = (EPwm6Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm6Regs.DBCTL.bit.OUT_MODE             = 3U;          // Dead Band Output Mode Control
       EPwm6Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm6Regs.DBCTL.bit.POLSEL               = 2U;          // Polarity Select Control
       EPwm6Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
     */
    EPwm6Regs.DBCTL.all = (EPwm6Regs.DBCTL.all & ~0x803FU) | 0xBU;
    EPwm6Regs.DBRED = 15U;
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm6Regs.DBFED = 15U;
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm6Regs.ETSEL.bit.SOCAEN               = 0U;          // Start of Conversion A Enable
       EPwm6Regs.ETSEL.bit.SOCASEL              = 0U;          // Start of Conversion A Select
       EPwm6Regs.ETPS.bit.SOCAPRD               = 1U;          // EPWM6SOCA Period Select
       EPwm6Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm6Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion B Select
       EPwm6Regs.ETPS.bit.SOCBPRD               = 1U;          // EPWM6SOCB Period Select
       EPwm6Regs.ETSEL.bit.INTEN                = 0U;          // EPWM6INTn Enable
       EPwm6Regs.ETSEL.bit.INTSEL               = 1U;          // EPWM6INTn Select
       EPwm6Regs.ETPS.bit.INTPRD                = 1U;          // EPWM6INTn Period Select
     */
    EPwm6Regs.ETSEL.all = (EPwm6Regs.ETSEL.all & ~0xFF0FU) | 0x1001U;
    EPwm6Regs.ETPS.all = (EPwm6Regs.ETPS.all & ~0x3303U) | 0x1101U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm6Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm6Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm6Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm6Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm6Regs.PCCTL.all = (EPwm6Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm6Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm6Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM6A
       EPwm6Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM6B
       EPwm6Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM6A action on DCAEVT1
       EPwm6Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM6A action on DCAEVT2
       EPwm6Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM6B action on DCBEVT1
       EPwm6Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM6B action on DCBEVT2
     */
    EPwm6Regs.TZCTL.all = (EPwm6Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm6Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm6Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm6Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm6Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm6Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm6Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm6Regs.TZEINT.all = (EPwm6Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm6Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm6Regs.DCACTL.bit.EVT1SOCE            = 1U;          // DCAEVT1 SOC Enable
       EPwm6Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm6Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm6Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm6Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm6Regs.DCACTL.all = (EPwm6Regs.DCACTL.all & ~0x30FU) | 0x4U;

    /*	// Digital Compare B Control Register
       EPwm6Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm6Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm6Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm6Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm6Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm6Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm6Regs.DCBCTL.all = (EPwm6Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm6Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm6Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm6Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm6Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm6Regs.DCTRIPSEL.all = (EPwm6Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm6Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm6Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm6Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm6Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm6Regs.TZDCSEL.all = (EPwm6Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm6Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm6Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm6Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm6Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm6Regs.DCFCTL.all = (EPwm6Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm6Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm6Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm6Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm6Regs.DCCAPCTL.all = (EPwm6Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm6Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm6Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm6Regs.HRCNFG.all = (EPwm6Regs.HRCNFG.all & ~0xA0U) | 0x0U;
    EDIS;
  }

  /* InitializeConditions for Delay: '<S395>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx = 0U;

  /* SystemInitialize for Atomic SubSystem: '<S233>/Delay to start motor1 (codegen)' */
  /* SystemInitialize for Enabled SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  /* InitializeConditions for UnitDelay: '<S386>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a0 = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  /* End of SystemInitialize for SubSystem: '<S233>/Delay to start motor1 (codegen)' */

  /* SystemInitialize for Enabled SubSystem: '<S232>/Closed loop' */
  /* Start for Constant: '<S251>/Kp1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1 = 0.0F;

  /* Start for Constant: '<S250>/Ki1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1 = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S351>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_a = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_p = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S300>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_o = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_i = 0;

  /* End of SystemInitialize for SubSystem: '<S232>/Closed loop' */
}

/* System reset for function-call system: '<Root>/FOC Algorithm Motor2' */
void mc_FOCAlgorithmMotor2_Reset(void)
{
  /* InitializeConditions for Delay: '<S395>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx = 0U;
}

/* Disable for function-call system: '<Root>/FOC Algorithm Motor2' */
#pragma CODE_SECTION (FOCAlgorithmMotor2_Disable, "ramfuncs")

void FOCAlgorithmMotor2_Disable(void)
{
  /* Disable for Atomic SubSystem: '<S233>/Delay to start motor1 (codegen)' */
  /* Disable for Enabled SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.EnableEnMtr2TrqCtrlafter2secdel = false;

  /* End of Disable for SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  /* End of Disable for SubSystem: '<S233>/Delay to start motor1 (codegen)' */
}

/* Output and update for function-call system: '<Root>/FOC Algorithm Motor2' */
#pragma CODE_SECTION (mcb_pmsm_FOCAlgorithmMotor2, "ramfuncs")

void mcb_pmsm_FOCAlgorithmMotor2(void)
{
  int32_T Q17perunitconversion;
  real32_T Bias;
  real32_T u0;
  uint32_T Sum;
  uint16_T Scale_to_PWM_Counter_PRD;

  /* Outputs for Atomic SubSystem: '<S233>/Delay to start motor1 (codegen)' */
  /* DataStoreRead: '<S384>/Data Store Read2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2_d =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnClosedLoop;

  /* DataStoreRead: '<S384>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_n =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Enable;

  /* Logic: '<S384>/AND' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.AND_d =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2_d &&
     mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_n);

  /* Logic: '<S384>/NOT' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_c = !mcb_pmsm_foc_qep_dyno_f28069m_B.AND_d;

  /* Outputs for Enabled SubSystem: '<S384>/Disable EnMtr2TrqCtrl' incorporates:
   *  EnablePort: '<S385>/Enable'
   */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_c) {
    /* DataStoreWrite: '<S385>/Data Store Write' incorporates:
     *  Constant: '<S385>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl = false;
  }

  /* End of Outputs for SubSystem: '<S384>/Disable EnMtr2TrqCtrl' */

  /* Outputs for Enabled SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' incorporates:
   *  EnablePort: '<S386>/Enable'
   */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND_d) {
    if (!mcb_pmsm_foc_qep_dyno_f28_DWork.EnableEnMtr2TrqCtrlafter2secdel) {
      /* InitializeConditions for UnitDelay: '<S386>/Unit Delay' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a0 = 0.0F;
      mcb_pmsm_foc_qep_dyno_f28_DWork.EnableEnMtr2TrqCtrlafter2secdel = true;
    }

    /* UnitDelay: '<S386>/Unit Delay' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_i =
      mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a0;

    /* Sum: '<S386>/Add' incorporates:
     *  Constant: '<S386>/Constant2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f4 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_i + 1.0F;

    /* Switch: '<S386>/Switch' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_pk =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f4 > 40000.0F);

    /* Outputs for Enabled SubSystem: '<S386>/Enable EnMtr2TrqCtrl' incorporates:
     *  EnablePort: '<S387>/Enable'
     */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_pk) {
      /* DataStoreWrite: '<S387>/Data Store Write' incorporates:
       *  Constant: '<S387>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl = true;
    }

    /* End of Outputs for SubSystem: '<S386>/Enable EnMtr2TrqCtrl' */

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a0 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f4;
  } else {
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnableEnMtr2TrqCtrlafter2secdel = false;
  }

  /* End of Outputs for SubSystem: '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  /* End of Outputs for SubSystem: '<S233>/Delay to start motor1 (codegen)' */

  /* DataStoreRead: '<S390>/Data Store Read' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_j =
    mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor2;

  /* DataStoreRead: '<S390>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_i =
    mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor2;

  /* S-Function (c2802xadc): '<S388>/IA//IB Measurement' */
  {
    /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
    /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_f[0] = (AdcResult.ADCRESULT2);
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_f[1] = (AdcResult.ADCRESULT3);
  }

  /* DataTypeConversion: '<S390>/Data Type Conversion' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_h[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_f[0];
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_h[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_f[1];

  /* Sum: '<S390>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_cm[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_h[0] -
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_j;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_cm[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_h[1] -
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_i;

  /* ArithShift: '<S390>/Q17 per unit conversion' incorporates:
   *  Sum: '<S390>/Add'
   */
  Q17perunitconversion = mcb_pmsm_foc_qep_dyno_f28069m_B.Add_cm[0] << 6U;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Q17perunitconversion[0] = Q17perunitconversion;

  /* DataTypeConversion: '<S390>/Data Type Conversion1' incorporates:
   *  ArithShift: '<S390>/Q17 per unit conversion'
   */
  Bias = (real32_T)Q17perunitconversion * 7.62939453E-6F;
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_d[0] = Bias;

  /* Gain: '<S390>/Inverting // Non-inverting  Current measurement  amplifier' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[0] = Bias;

  /* ArithShift: '<S390>/Q17 per unit conversion' incorporates:
   *  Sum: '<S390>/Add'
   */
  Q17perunitconversion = mcb_pmsm_foc_qep_dyno_f28069m_B.Add_cm[1] << 6U;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Q17perunitconversion[1] = Q17perunitconversion;

  /* DataTypeConversion: '<S390>/Data Type Conversion1' incorporates:
   *  ArithShift: '<S390>/Q17 per unit conversion'
   */
  Bias = (real32_T)Q17perunitconversion * 7.62939453E-6F;
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_d[1] = Bias;

  /* Gain: '<S390>/Inverting // Non-inverting  Current measurement  amplifier' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[1] = Bias;

  /* S-Function (c280xqep): '<S388>/eQEP' */
  {
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o1 = EQep2Regs.QPOSCNT;/*eQEP Position Counter*/
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2 = EQep2Regs.QPOSILAT;
         /* The position-counter value is latched into this register on an IEL*/
  }

  /* Outputs for IfAction SubSystem: '<S394>/PositionNoReset' incorporates:
   *  ActionPort: '<S410>/Action Port'
   */
  /* If: '<S394>/If1' */
  mcb_pmsm_fo_PositionNoReset(mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2,
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o1,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_de,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.PositionNoReset_i);

  /* End of Outputs for SubSystem: '<S394>/PositionNoReset' */

  /* DataTypeConversion: '<S413>/DTC' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DTC = mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_de;

  /* Product: '<S394>/Product' incorporates:
   *  Constant: '<S416>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC * 0.00025F;

  /* Switch: '<S402>/Switch' incorporates:
   *  Constant: '<S235>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_j = 0.165F;

  /* If: '<S403>/If' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt <= 0.165F) {
    /* Outputs for IfAction SubSystem: '<S403>/If Action Subsystem' incorporates:
     *  ActionPort: '<S405>/Action Port'
     */
    mcb_pms_IfActionSubsystem_g(mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt,
      0.165F, &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge);

    /* End of Outputs for SubSystem: '<S403>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S403>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S406>/Action Port'
     */
    /* Merge: '<S403>/Merge' incorporates:
     *  Sum: '<S406>/Add'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt - 0.165F;

    /* End of Outputs for SubSystem: '<S403>/If Action Subsystem1' */
  }

  /* End of If: '<S403>/If' */

  /* Gain: '<S408>/Number of pole pairs' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs = 4.0F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge;

  /* Rounding: '<S404>/Floor' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Floor = (real32_T)floor
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs);

  /* Sum: '<S404>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Floor;

  /* DataStoreRead: '<S3>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_cg =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl;

  /* Outputs for Enabled SubSystem: '<S232>/Closed loop' incorporates:
   *  EnablePort: '<S239>/Enable'
   */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_cg) {
    /* Outputs for Atomic SubSystem: '<S247>/Two phase CRL wrap' */
    mcb_pmsm_fo_TwophaseCRLwrap
      (mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[0],
       mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[1],
       &mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n);

    /* End of Outputs for SubSystem: '<S247>/Two phase CRL wrap' */

    /* RelationalOperator: '<S374>/Compare' incorporates:
     *  Constant: '<S374>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_ee =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4 < 0.0F);

    /* DataTypeConversion: '<S373>/Data Type Conversion' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_ec =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_ee;

    /* If: '<S373>/If' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_ec > 0U) {
      /* Outputs for IfAction SubSystem: '<S373>/If Action Subsystem' incorporates:
       *  ActionPort: '<S375>/Action Port'
       */
      mcb_pmsm__IfActionSubsystem(mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_l,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_i);

      /* End of Outputs for SubSystem: '<S373>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S373>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S376>/Action Port'
       */
      mcb_pmsm_IfActionSubsystem1(mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_l,
        &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_d);

      /* End of Outputs for SubSystem: '<S373>/If Action Subsystem1' */
    }

    /* End of If: '<S373>/If' */

    /* Gain: '<S245>/indexing' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing = 800.0F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_l;

    /* DataTypeConversion: '<S245>/Get_Integer' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer = (uint16_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing;

    /* Sum: '<S245>/Sum' incorporates:
     *  Constant: '<S245>/offset'
     */
    Sum = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer + 1UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum[0] = Sum;

    /* Selector: '<S245>/Lookup' incorporates:
     *  Constant: '<S245>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[0] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum];

    /* Sum: '<S245>/Sum' */
    Sum = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum[1] = Sum;

    /* Selector: '<S245>/Lookup' incorporates:
     *  Constant: '<S245>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[1] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum];

    /* Sum: '<S245>/Sum' incorporates:
     *  Constant: '<S245>/offset'
     */
    Sum = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer + 201UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum[2] = Sum;

    /* Selector: '<S245>/Lookup' incorporates:
     *  Constant: '<S245>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[2] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum];

    /* Sum: '<S245>/Sum' incorporates:
     *  Constant: '<S245>/offset'
     */
    Sum = mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer + 200UL;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum[3] = Sum;

    /* Selector: '<S245>/Lookup' incorporates:
     *  Constant: '<S245>/sine_table_values'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[3] =
      mcb_pmsm_foc_qep_dyno_f2_ConstP.pooled29[(int16_T)Sum];

    /* Sum: '<S372>/Sum3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[0] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[1];

    /* DataTypeConversion: '<S245>/Data Type Conversion1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Get_Integer;

    /* Sum: '<S245>/Sum2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.indexing -
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_j;

    /* Product: '<S372>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_k =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3 *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2;

    /* Sum: '<S372>/Sum4' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_k +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[1];

    /* Sum: '<S372>/Sum5' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[2] -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[3];

    /* Product: '<S372>/Product1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_c =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5 *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2;

    /* Sum: '<S372>/Sum6' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_c +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[3];

    /* Outputs for Atomic SubSystem: '<S244>/Two inputs CRL' */
    mcb_pmsm_foc_TwoinputsCRL_g
      (mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.algDD_o1,
       mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.algDD_o2,
       mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4,
       mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6,
       &mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i);

    /* End of Outputs for SubSystem: '<S244>/Two inputs CRL' */

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o1;

    /* Switch: '<S254>/Switch1' incorporates:
     *  Constant: '<S254>/ChosenMethod'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_d = 3U;

    /* Sum: '<S251>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_g = mcb_pmsm_foc_qep_dyno_f28069m_B.RT7
      [1] - mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o2;

    /* Product: '<S356>/PProd Out' incorporates:
     *  Constant: '<S251>/Kp'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_i =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_g * 1.70112133F;

    /* Logic: '<S251>/Logical Operator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_i = false;

    /* Constant: '<S251>/Kp1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1 = 0.0F;

    /* DiscreteIntegrator: '<S351>/Integrator' */
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_p != 0) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_a = 0.0F;
    }

    /* DiscreteIntegrator: '<S351>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_i =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_a;

    /* Sum: '<S360>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e =
      mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_i +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_i;

    /* Saturate: '<S358>/Saturation' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e;
    if (u0 > 1.0F) {
      /* Saturate: '<S358>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g = 1.0F;
    } else if (u0 < -1.0F) {
      /* Saturate: '<S358>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g = -1.0F;
    } else {
      /* Saturate: '<S358>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g = u0;
    }

    /* End of Saturate: '<S358>/Saturation' */

    /* Sum: '<S250>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_b = mcb_pmsm_foc_qep_dyno_f28069m_B.RT7
      [0] - mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o1;

    /* Product: '<S305>/PProd Out' incorporates:
     *  Constant: '<S250>/Kp'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_b * 1.70112133F;

    /* Logic: '<S250>/Logical Operator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator_d = false;

    /* Constant: '<S250>/Ki1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1 = 0.0F;

    /* DiscreteIntegrator: '<S300>/Integrator' */
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_i != 0) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_o = 0.0F;
    }

    /* DiscreteIntegrator: '<S300>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_p =
      mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_o;

    /* Sum: '<S309>/Sum' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg =
      mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_f +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_p;

    /* Saturate: '<S307>/Saturation' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg;
    if (u0 > 1.0F) {
      /* Saturate: '<S307>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l = 1.0F;
    } else if (u0 < -1.0F) {
      /* Saturate: '<S307>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l = -1.0F;
    } else {
      /* Saturate: '<S307>/Saturation' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l = u0;
    }

    /* End of Saturate: '<S307>/Saturation' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Constant: '<S254>/Constant3'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_c = 0.95F;

    /* Product: '<S254>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_efr = 0.9025F;

    /* Product: '<S255>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mp =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l;

    /* Product: '<S255>/Product1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_p =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g;

    /* Sum: '<S255>/Sum1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_h =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mp +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_p;

    /* Outputs for IfAction SubSystem: '<S249>/D-Q Equivalence' incorporates:
     *  ActionPort: '<S252>/Action Port'
     */
    /* If: '<S249>/If' */
    mcb_pmsm_foc__DQEquivalence(mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_h, 0.95F, 0.9025F,
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j);

    /* End of Outputs for SubSystem: '<S249>/D-Q Equivalence' */

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[0];

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o2;

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[1];

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[0];

    /* SignalConversion generated from: '<S239>/Idq_debug' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[1];

    /* DeadZone: '<S293>/DeadZone' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg > 1.0F) {
      /* DeadZone: '<S293>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg - 1.0F;
    } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg >= -1.0F) {
      /* DeadZone: '<S293>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a = 0.0F;
    } else {
      /* DeadZone: '<S293>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg - -1.0F;
    }

    /* End of DeadZone: '<S293>/DeadZone' */

    /* RelationalOperator: '<S291>/Relational Operator' incorporates:
     *  Constant: '<S291>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_a =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a != 0.0F);

    /* RelationalOperator: '<S291>/fix for DT propagation issue' incorporates:
     *  Constant: '<S291>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_g =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a > 0.0F);

    /* Switch: '<S291>/Switch1' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_g) {
      /* Switch: '<S291>/Switch1' incorporates:
       *  Constant: '<S291>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_l = 1;
    } else {
      /* Switch: '<S291>/Switch1' incorporates:
       *  Constant: '<S291>/Constant2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_l = -1;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Product: '<S297>/IProd Out' incorporates:
     *  Constant: '<S250>/Ki'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_g =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_b * 0.309887588F;

    /* RelationalOperator: '<S291>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S291>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_c =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_g > 0.0F);

    /* Switch: '<S291>/Switch2' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_c) {
      /* Switch: '<S291>/Switch2' incorporates:
       *  Constant: '<S291>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_e = 1;
    } else {
      /* Switch: '<S291>/Switch2' incorporates:
       *  Constant: '<S291>/Constant4'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_e = -1;
    }

    /* End of Switch: '<S291>/Switch2' */

    /* RelationalOperator: '<S291>/Equal1' incorporates:
     *  Switch: '<S291>/Switch1'
     *  Switch: '<S291>/Switch2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_p =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_l ==
       mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_e);

    /* Logic: '<S291>/AND3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_o =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_a &&
       mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_p);

    /* Switch: '<S291>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_o) {
      /* Switch: '<S291>/Switch' incorporates:
       *  Constant: '<S291>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_p = 0.0F;
    } else {
      /* Switch: '<S291>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_p =
        mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_g;
    }

    /* End of Switch: '<S291>/Switch' */

    /* DeadZone: '<S344>/DeadZone' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e > 1.0F) {
      /* DeadZone: '<S344>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e - 1.0F;
    } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e >= -1.0F) {
      /* DeadZone: '<S344>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p = 0.0F;
    } else {
      /* DeadZone: '<S344>/DeadZone' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e - -1.0F;
    }

    /* End of DeadZone: '<S344>/DeadZone' */

    /* RelationalOperator: '<S342>/Relational Operator' incorporates:
     *  Constant: '<S342>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_l =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p != 0.0F);

    /* RelationalOperator: '<S342>/fix for DT propagation issue' incorporates:
     *  Constant: '<S342>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_m =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p > 0.0F);

    /* Switch: '<S342>/Switch1' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue_m) {
      /* Switch: '<S342>/Switch1' incorporates:
       *  Constant: '<S342>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_fn = 1;
    } else {
      /* Switch: '<S342>/Switch1' incorporates:
       *  Constant: '<S342>/Constant2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_fn = -1;
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Product: '<S348>/IProd Out' incorporates:
     *  Constant: '<S251>/Ki'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_j =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_g * 0.309887588F;

    /* RelationalOperator: '<S342>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S342>/Clamping_zero'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_h =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_j > 0.0F);

    /* Switch: '<S342>/Switch2' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1_h) {
      /* Switch: '<S342>/Switch2' incorporates:
       *  Constant: '<S342>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_lu = 1;
    } else {
      /* Switch: '<S342>/Switch2' incorporates:
       *  Constant: '<S342>/Constant4'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_lu = -1;
    }

    /* End of Switch: '<S342>/Switch2' */

    /* RelationalOperator: '<S342>/Equal1' incorporates:
     *  Switch: '<S342>/Switch1'
     *  Switch: '<S342>/Switch2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_a =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_fn ==
       mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_lu);

    /* Logic: '<S342>/AND3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_ob =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator_l &&
       mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1_a);

    /* Switch: '<S342>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND3_ob) {
      /* Switch: '<S342>/Switch' incorporates:
       *  Constant: '<S342>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ca = 0.0F;
    } else {
      /* Switch: '<S342>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ca =
        mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_j;
    }

    /* End of Switch: '<S342>/Switch' */

    /* Outputs for Atomic SubSystem: '<S243>/Two inputs CRL' */
    mcb_pmsm_foc_q_TwoinputsCRL(mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[0],
      mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[1],
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4, mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n);

    /* End of Outputs for SubSystem: '<S243>/Two inputs CRL' */

    /* Gain: '<S383>/one_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two = 0.5F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o1;

    /* Gain: '<S383>/sqrt3_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two = 0.866025388F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o2;

    /* Sum: '<S383>/add_b' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b =
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two;

    /* Sum: '<S383>/add_c' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c = (0.0F -
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two) -
      mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two;

    /* MinMax: '<S380>/Max' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o1;
    Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.add_b;
    if ((u0 >= Bias) || rtIsNaNF(Bias)) {
      Bias = u0;
    }

    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.add_c;
    if ((!(Bias >= u0)) && (!rtIsNaNF(u0))) {
      Bias = u0;
    }

    /* MinMax: '<S380>/Max' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Max = Bias;

    /* MinMax: '<S380>/Min' */
    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o1;
    Bias = mcb_pmsm_foc_qep_dyno_f28069m_B.add_b;
    if ((u0 <= Bias) || rtIsNaNF(Bias)) {
      Bias = u0;
    }

    u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.add_c;
    if ((!(Bias <= u0)) && (!rtIsNaNF(u0))) {
      Bias = u0;
    }

    /* MinMax: '<S380>/Min' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Min = Bias;

    /* Sum: '<S380>/Add' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_jf = mcb_pmsm_foc_qep_dyno_f28069m_B.Max
      + mcb_pmsm_foc_qep_dyno_f28069m_B.Min;

    /* Gain: '<S380>/one_by_two' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_f = -0.5F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add_jf;

    /* Sum: '<S379>/Add1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_fj =
      mcb_pmsm_foc_qep_dyno_f28069m_B.add_b +
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_f;

    /* Sum: '<S379>/Add2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add2 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_f +
      mcb_pmsm_foc_qep_dyno_f28069m_B.add_c;

    /* Sum: '<S379>/Add3' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add3 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o1 +
      mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_f;

    /* Gain: '<S379>/Gain' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[0] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add3;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[1] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_fj;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[2] = 1.15470052F *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add2;

    /* Update for DiscreteIntegrator: '<S351>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_a +=
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ca;
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_p = 0;

    /* Update for DiscreteIntegrator: '<S300>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_o +=
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_p;
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState_i = 0;
  }

  /* End of Outputs for SubSystem: '<S232>/Closed loop' */

  /* SignalConversion generated from: '<S3>/mtr2_debug' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref;
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb;
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[2] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref;
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[3] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref;
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[4] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb;
  mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[5] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref;

  /* Delay: '<S389>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_m =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_d;

  /* Gain: '<S395>/PositionToCount' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount = (uint32_T)(4.2949673E+9F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt);

  /* Delay: '<S395>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Delay =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE[mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx];

  /* Sum: '<S395>/SpeedCount' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedCount = (int32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount - (int32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.Delay;

  /* DataTypeConversion: '<S418>/DTC' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_n = (real32_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedCount;

  /* Gain: '<S395>/SpeedGain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain = 1.70073511E-9F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_n;

  /* Product: '<S398>/Product' incorporates:
   *  Constant: '<S398>/Filter_Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_i =
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain * 0.01F;

  /* UnitDelay: '<S398>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_f =
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_d;

  /* Product: '<S398>/Product1' incorporates:
   *  Constant: '<S398>/One'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_i = 0.99F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_f;

  /* Sum: '<S398>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_i =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_i +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_i;

  /* Logic: '<S389>/NOT' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_e =
    !mcb_pmsm_foc_qep_dyno_f28069m_B.Delay_m;

  /* Outputs for Enabled SubSystem: '<S389>/IndexFinder' */
  mcb_pmsm_foc_qe_IndexFinder(mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_e,
    mcb_pmsm_foc_qep_dyno_f28069m_B.eQEP_o2,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder_b,
    &mcb_pmsm_foc_qep_dyno_f28_DWork.IndexFinder_b);

  /* End of Outputs for SubSystem: '<S389>/IndexFinder' */

  /* DataStoreRead: '<S237>/Enable' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.PWM_En =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl;

  /* DataTypeConversion: '<S237>/Data Type Conversion' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion =
    mcb_pmsm_foc_qep_dyno_f28069m_B.PWM_En;

  /* S-Function (c280xgpio_do): '<S236>/Digital Output2' */
  {
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion) {
      GpioDataRegs.GPBSET.bit.GPIO52 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1U;
    }
  }

  /* Switch: '<S236>/Switch1' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion >= 0.5F) {
    /* Switch: '<S232>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_cg) {
      /* Switch: '<S232>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[0] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[0];
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[1] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[1];
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[2] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[2];
    } else {
      /* Switch: '<S232>/Switch' incorporates:
       *  Constant: '<S232>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[0] = 0.0F;
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[1] = 0.0F;
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[2] = 0.0F;
    }

    /* End of Switch: '<S232>/Switch' */

    /* Gain: '<S237>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[0];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[0] = Bias;

    /* Sum: '<S237>/Sum' incorporates:
     *  Constant: '<S237>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[0] = Bias;

    /* Gain: '<S236>/Scale_to_PWM_Counter_PRD' */
    Scale_to_PWM_Counter_PRD = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD[0] =
      Scale_to_PWM_Counter_PRD;

    /* Switch: '<S236>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[0] = Scale_to_PWM_Counter_PRD;

    /* Gain: '<S237>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[1];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[1] = Bias;

    /* Sum: '<S237>/Sum' incorporates:
     *  Constant: '<S237>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[1] = Bias;

    /* Gain: '<S236>/Scale_to_PWM_Counter_PRD' */
    Scale_to_PWM_Counter_PRD = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD[1] =
      Scale_to_PWM_Counter_PRD;

    /* Switch: '<S236>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[1] = Scale_to_PWM_Counter_PRD;

    /* Gain: '<S237>/One_by_Two' */
    Bias = 0.5F * mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[2];
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[2] = Bias;

    /* Sum: '<S237>/Sum' incorporates:
     *  Constant: '<S237>/Constant'
     */
    Bias += 0.5F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[2] = Bias;

    /* Gain: '<S236>/Scale_to_PWM_Counter_PRD' */
    Scale_to_PWM_Counter_PRD = (uint16_T)(4500.0F * Bias);
    mcb_pmsm_foc_qep_dyno_f28069m_B.Scale_to_PWM_Counter_PRD[2] =
      Scale_to_PWM_Counter_PRD;

    /* Switch: '<S236>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[2] = Scale_to_PWM_Counter_PRD;
  } else {
    /* Switch: '<S236>/Switch1' incorporates:
     *  Constant: '<S236>/stop'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[0] = 0U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[1] = 0U;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[2] = 0U;
  }

  /* End of Switch: '<S236>/Switch1' */

  /* S-Function (c2802xpwm): '<S236>/ePWM4' */

  /*-- Update CMPA value for ePWM4 --*/
  {
    EPwm4Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[0]);
  }

  /* S-Function (c2802xpwm): '<S236>/ePWM5' */

  /*-- Update CMPA value for ePWM5 --*/
  {
    EPwm5Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[1]);
  }

  /* S-Function (c2802xpwm): '<S236>/ePWM6' */

  /*-- Update CMPA value for ePWM6 --*/
  {
    EPwm6Regs.CMPA.half.CMPA = (uint16_T)
      (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_g[2]);
  }

  /* Product: '<S420>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq =
    mcb_pmsm_foc_qep_dyno_f2_ConstB.Ld_Lq *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb;

  /* Sum: '<S420>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_m =
    mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq +
    mcb_pmsm_foc_qep_dyno_f2_ConstB.Switch2;

  /* Product: '<S420>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_b =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_m *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb;

  /* Gain: '<S420>/1_5_Pp' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp = 6.0F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_b;

  /* Product: '<S420>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hl =
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_i;

  /* Gain: '<S420>/P_si2pu' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.P_output = 0.79402F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hl;

  /* Gain: '<S420>/T_si2pu' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.T_output =
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp;

  /* Update for Delay: '<S389>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE_d =
    mcb_pmsm_foc_qep_dyno_f28069m_B.IndexFinder_b.AND;

  /* Update for Delay: '<S395>/Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Delay_DSTATE[mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx]
    = mcb_pmsm_foc_qep_dyno_f28069m_B.PositionToCount;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx < 19U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx++;
  } else {
    mcb_pmsm_foc_qep_dyno_f28_DWork.CircBufIdx = 0U;
  }

  /* End of Update for Delay: '<S395>/Delay' */

  /* Update for UnitDelay: '<S398>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_d =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_i;
}

/*
 * Output and update for action system:
 *    '<S429>/If Action Subsystem'
 *    '<S437>/If Action Subsystem1'
 */
void mcb_pm_IfActionSubsystem_gj(uint16_T rtu_In1, uint16_T rtu_In2,
  rtB_IfActionSubsystem_mcb_pm_hu *localB, rtDW_IfActionSubsystem_mcb_pm_a
  *localDW)
{
  /* Memory: '<S434>/Memory' */
  localB->Memory = localDW->Memory_PreviousInput;

  /* Sum: '<S434>/Sum' */
  localB->Sum = rtu_In1 + localB->Memory;

  /* Memory: '<S434>/Memory1' */
  localB->Memory1 = localDW->Memory1_PreviousInput;

  /* Sum: '<S434>/Sum1' */
  localB->Sum1 = rtu_In2 + localB->Memory1;

  /* Update for Memory: '<S434>/Memory' */
  localDW->Memory_PreviousInput = localB->Sum;

  /* Update for Memory: '<S434>/Memory1' */
  localDW->Memory1_PreviousInput = localB->Sum1;
}

/* System initialize for atomic system: */
void mcb__SPIMasterTransfer_Init(rtDW_SPIMasterTransfer_mcb_pmsm *localDW)
{
  uint32_T SPIPinsLoc;

  /* Start for MATLABSystem: '<S426>/SPI Master Transfer' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1L;
  SPIPinsLoc = MW_UNDEFINED_VALUE;
  localDW->obj.MW_SPI_HANDLE = MW_SPI_Open(0UL, SPIPinsLoc, SPIPinsLoc,
    SPIPinsLoc, MW_UNDEFINED_VALUE, true, 0U);
  MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, MW_SPI_MODE_0,
                   MW_SPI_MOST_SIGNIFICANT_BIT_FIRST);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void mcb_pmsm__SPIMasterTransfer(uint16_T rtu_0, rtB_SPIMasterTransfer_mcb_pmsm_
  *localB, rtDW_SPIMasterTransfer_mcb_pmsm *localDW)
{
  uint16_T rdDataRaw;
  uint16_T status;

  /* MATLABSystem: '<S426>/SPI Master Transfer' */
  MW_SPI_SetSlaveSelect(localDW->obj.MW_SPI_HANDLE, 0U, true);
  status = MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, MW_SPI_MODE_0,
    MW_SPI_MOST_SIGNIFICANT_BIT_FIRST);
  if (status == 0U) {
    MW_SPI_MasterWriteRead_8bits(localDW->obj.MW_SPI_HANDLE, &rtu_0, &rdDataRaw,
      1UL);
  }

  /* MATLABSystem: '<S426>/SPI Master Transfer' */
  localB->SPIMasterTransfer = rdDataRaw;
}

/* Termination for atomic system: */
void mcb__SPIMasterTransfer_Term(rtDW_SPIMasterTransfer_mcb_pmsm *localDW)
{
  uint32_T SPIPinsLoc;

  /* Terminate for MATLABSystem: '<S426>/SPI Master Transfer' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1L) && localDW->obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, MW_UNDEFINED_VALUE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S426>/SPI Master Transfer' */
}

/* System initialize for atomic system: */
void mcb_SPIMasterTransfer2_Init(rtDW_SPIMasterTransfer2_mcb_pms *localDW)
{
  uint32_T SPIPinsLoc;

  /* Start for MATLABSystem: '<S426>/SPI Master Transfer2' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1L;
  SPIPinsLoc = MW_UNDEFINED_VALUE;
  localDW->obj.MW_SPI_HANDLE = MW_SPI_Open(1UL, SPIPinsLoc, SPIPinsLoc,
    SPIPinsLoc, MW_UNDEFINED_VALUE, true, 0U);
  MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, MW_SPI_MODE_0,
                   MW_SPI_MOST_SIGNIFICANT_BIT_FIRST);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void mcb_pmsm_SPIMasterTransfer2(uint16_T rtu_0, rtB_SPIMasterTransfer2_mcb_pmsm
  *localB, rtDW_SPIMasterTransfer2_mcb_pms *localDW)
{
  uint16_T rdDataRaw;
  uint16_T status;

  /* MATLABSystem: '<S426>/SPI Master Transfer2' */
  MW_SPI_SetSlaveSelect(localDW->obj.MW_SPI_HANDLE, 0U, true);
  status = MW_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 16U, MW_SPI_MODE_0,
    MW_SPI_MOST_SIGNIFICANT_BIT_FIRST);
  if (status == 0U) {
    MW_SPI_MasterWriteRead_8bits(localDW->obj.MW_SPI_HANDLE, &rtu_0, &rdDataRaw,
      1UL);
  }

  /* MATLABSystem: '<S426>/SPI Master Transfer2' */
  localB->SPIMasterTransfer2 = rdDataRaw;
}

/* Termination for atomic system: */
void mcb_SPIMasterTransfer2_Term(rtDW_SPIMasterTransfer2_mcb_pms *localDW)
{
  uint32_T SPIPinsLoc;

  /* Terminate for MATLABSystem: '<S426>/SPI Master Transfer2' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1L) && localDW->obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, MW_UNDEFINED_VALUE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S426>/SPI Master Transfer2' */
}

/* Output and update for atomic system: '<Root>/Speed Limit for motor2' */
void mcb_pms_SpeedLimitformotor2(real32_T rtu_Iq_Ref_PU,
  rtB_SpeedLimitformotor2_mcb_pms *localB, rtDW_SpeedLimitformotor2_mcb_pm
  *localDW)
{
  real32_T UnitDelay;

  /* Product: '<S568>/Product' incorporates:
   *  Constant: '<S568>/Filter_Constant'
   *  Constant: '<S9>/Id_ref_PU'
   */
  localB->Product[0] = 0.0F;
  localB->Product[1] = rtu_Iq_Ref_PU * 0.01F;

  /* UnitDelay: '<S568>/Unit Delay' */
  UnitDelay = localDW->UnitDelay_DSTATE[0];
  localB->UnitDelay[0] = UnitDelay;

  /* Product: '<S568>/Product1' incorporates:
   *  Constant: '<S568>/One'
   */
  UnitDelay *= 0.99F;
  localB->Product1[0] = UnitDelay;

  /* Sum: '<S568>/Add1' */
  localB->Add1[0] = UnitDelay;

  /* Update for UnitDelay: '<S568>/Unit Delay' */
  localDW->UnitDelay_DSTATE[0] = UnitDelay;

  /* UnitDelay: '<S568>/Unit Delay' */
  UnitDelay = localDW->UnitDelay_DSTATE[1];
  localB->UnitDelay[1] = UnitDelay;

  /* Product: '<S568>/Product1' incorporates:
   *  Constant: '<S568>/One'
   */
  UnitDelay *= 0.99F;
  localB->Product1[1] = UnitDelay;

  /* Sum: '<S568>/Add1' */
  UnitDelay += localB->Product[1];
  localB->Add1[1] = UnitDelay;

  /* Update for UnitDelay: '<S568>/Unit Delay' */
  localDW->UnitDelay_DSTATE[1] = UnitDelay;
}

/* Model step function for TID0 */
void mcb_pmsm_foc_qep_dyno_f28069m_step0(void) /* Sample time: [5.0E-5s, 0.0s] */
{
  real_T cosOut;
  real_T sinOut;

  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* DataStoreRead: '<S6>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_a =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl;

  /* DataStoreRead: '<S6>/Data Store Read2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2_n =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnMtr2TrqCtrl;

  /* DiscreteIntegrator: '<S447>/Discrete-Time Integrator' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator =
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE;

  /* Gain: '<S6>/Gain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain =
    -mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator;

  /* DiscreteIntegrator: '<S464>/Discrete-Time Integrator3' */
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LOAD != 0U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_gf;
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE > 1.0E+7)
    {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE = 1.0E+7;
    } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE <
               -1.0E+7) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE = -1.0E+7;
    }
  }

  /* DiscreteIntegrator: '<S464>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 =
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE;

  /* UnitDelay: '<S450>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay =
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE;

  /* RelationalOperator: '<S452>/Compare' incorporates:
   *  Constant: '<S452>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Compare =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay >= -3.1415926535897931);

  /* Switch: '<S450>/Switch1' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Compare) {
    /* RelationalOperator: '<S451>/Compare' incorporates:
     *  Constant: '<S451>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_e =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay <= 3.1415926535897931);

    /* Switch: '<S450>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_e) {
      /* Switch: '<S450>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_b =
        mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay;
    } else {
      /* Sum: '<S450>/Subtract' incorporates:
       *  Constant: '<S450>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract_b =
        mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay - 6.2831854820251465;

      /* Switch: '<S450>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_b =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract_b;
    }

    /* End of Switch: '<S450>/Switch' */

    /* Switch: '<S450>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_b;
  } else {
    /* Sum: '<S450>/Add1' incorporates:
     *  Constant: '<S450>/Constant1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_k =
      mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay + 6.2831854820251465;

    /* Switch: '<S450>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_k;
  }

  /* End of Switch: '<S450>/Switch1' */

  /* Gain: '<S447>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4 = 4.0 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1;

  /* Trigonometry: '<S449>/sine_cosine' */
  cosOut = mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4;
  sinOut = sin(cosOut);
  cosOut = cos(cosOut);

  /* Trigonometry: '<S449>/sine_cosine' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1 = sinOut;

  /* Trigonometry: '<S449>/sine_cosine' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2 = cosOut;

  /* Product: '<S459>/Product2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product2 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2;

  /* DiscreteIntegrator: '<S465>/Discrete-Time Integrator3' */
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_n != 0U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_i;
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b > 1.0E+7)
    {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b = 1.0E+7;
    } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b <
               -1.0E+7) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b = -1.0E+7;
    }
  }

  /* DiscreteIntegrator: '<S465>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c =
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b;

  /* Product: '<S459>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1;

  /* Sum: '<S459>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2 -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3;

  /* SignalConversion generated from: '<S446>/Vector Concatenate' incorporates:
   *  Concatenate: '<S446>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1;

  /* DiscreteIntegrator: '<S492>/Discrete-Time Integrator3' */
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_e != 0U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_io;
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m > 1.0E+7)
    {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m = 1.0E+7;
    } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m <
               -1.0E+7) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m = -1.0E+7;
    }
  }

  /* DiscreteIntegrator: '<S492>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p =
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m;

  /* DiscreteIntegrator: '<S493>/Discrete-Time Integrator3' */
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_f != 0U) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j =
      mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_ng;
    if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j > 1.0E+7)
    {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j = 1.0E+7;
    } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j <
               -1.0E+7) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j = -1.0E+7;
    }
  }

  /* DiscreteIntegrator: '<S493>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k =
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j;

  /* Switch: '<S6>/Switch2' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_a) {
    /* Gain: '<S488>/Gain1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_m = 0.0063954151868927875 *
      mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k;

    /* Product: '<S488>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d1 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p *
      mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k;

    /* Product: '<S491>/Product' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_fu =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d1 *
      mcb_pmsm_foc_qep_dyno_f2_ConstB.Add_h;

    /* Sum: '<S488>/Add' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_n =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_fu +
      mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_m;

    /* Gain: '<S488>/Gain2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_l = 6.0 *
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add_n;

    /* Switch: '<S6>/Switch2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2 =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_l;
  } else {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2 = 0.0;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Product: '<S460>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c;

  /* Product: '<S463>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_j =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.Add;

  /* Gain: '<S460>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1 = 0.0063954151868927875 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c;

  /* Sum: '<S460>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_j +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1;

  /* Gain: '<S460>/Gain2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2 = 6.0 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add;

  /* Product: '<S447>/Divide2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector2;

  /* Signum: '<S447>/Sign' */
  cosOut = mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator;
  if (rtIsNaN(cosOut)) {
    /* Signum: '<S447>/Sign' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sign = (rtNaN);
  } else if (cosOut < 0.0) {
    /* Signum: '<S447>/Sign' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sign = -1.0;
  } else {
    /* Signum: '<S447>/Sign' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sign = (cosOut > 0.0);
  }

  /* End of Signum: '<S447>/Sign' */

  /* Product: '<S447>/Divide1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1 =
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector1 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sign;

  /* Sum: '<S447>/Sum1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1 = ((mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2
    - mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1;

  /* Product: '<S447>/Divide' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Divide = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector;

  /* Gain: '<S447>/Gain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_n = 4.0 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator;

  /* Gain: '<S450>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_b = 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator;

  /* Sum: '<S450>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_b +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1;

  /* Gain: '<S457>/Gain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_j = 0.0;

  /* Gain: '<S457>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_l = -0.0;

  /* Gain: '<S457>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_h = -0.0;

  /* Sum: '<S457>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_a =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_j +
     mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_l) +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_h;

  /* Gain: '<S457>/Gain2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_f = 0.0;

  /* Gain: '<S457>/Gain3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3 = -0.0;

  /* Sum: '<S457>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_e =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_f +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3;

  /* Gain: '<S458>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_c = -0.5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1;

  /* Gain: '<S458>/Gain2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_m = -0.5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1;

  /* Product: '<S459>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_f =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1;

  /* Product: '<S459>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2;

  /* Sum: '<S459>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_e =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_f +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1;

  /* Gain: '<S458>/Gain3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_o = 0.8660254037844386 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_e;

  /* Gain: '<S458>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_n = -0.8660254037844386 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_e;

  /* Sum: '<S458>/Subtract1' incorporates:
   *  Concatenate: '<S446>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_m +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_o;

  /* Sum: '<S458>/Subtract2' incorporates:
   *  Concatenate: '<S446>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[2] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_c +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_n;

  /* Product: '<S462>/Product2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_h =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_a *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2;

  /* Product: '<S462>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_h =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_e *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1;

  /* Sum: '<S462>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_p =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_h +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_h;

  /* Product: '<S466>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_h =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_p /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_gt;

  /* Product: '<S464>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_l =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_n *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c;

  /* Product: '<S467>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hs =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_l *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_n /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector2_m;

  /* Product: '<S468>/Product' incorporates:
   *  Constant: '<S468>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 * 0.36 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_l;

  /* Sum: '<S464>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_b =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Product_h +
     mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hs) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m;

  /* Product: '<S462>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_e =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_a *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1;

  /* Product: '<S462>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_e *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2;

  /* Sum: '<S462>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_i =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_o -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_e;

  /* Product: '<S469>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hv =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_i /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_c;

  /* Product: '<S465>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_n =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_n;

  /* Product: '<S470>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_n *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_li /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector1_m;

  /* Product: '<S471>/Product' incorporates:
   *  Constant: '<S471>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jr =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_n * 0.0063954151868927875 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_d;

  /* Product: '<S472>/Product' incorporates:
   *  Constant: '<S472>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_g =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c * 0.36 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_p;

  /* Sum: '<S465>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_l =
    ((mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hv -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d) -
     mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jr) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_g;

  /* UnitDelay: '<S478>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b =
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_h;

  /* RelationalOperator: '<S480>/Compare' incorporates:
   *  Constant: '<S480>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_f =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b >= -3.1415926535897931);

  /* Switch: '<S478>/Switch1' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_f) {
    /* RelationalOperator: '<S479>/Compare' incorporates:
     *  Constant: '<S479>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_c =
      (mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b <= 3.1415926535897931);

    /* Switch: '<S478>/Switch' */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.Compare_c) {
      /* Switch: '<S478>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch =
        mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b;
    } else {
      /* Sum: '<S478>/Subtract' incorporates:
       *  Constant: '<S478>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract =
        mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b - 6.2831854820251465;

      /* Switch: '<S478>/Switch' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract;
    }

    /* End of Switch: '<S478>/Switch' */

    /* Switch: '<S478>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Switch;
  } else {
    /* Sum: '<S478>/Add1' incorporates:
     *  Constant: '<S478>/Constant1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b + 6.2831854820251465;

    /* Switch: '<S478>/Switch1' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_f;
  }

  /* End of Switch: '<S478>/Switch1' */

  /* Gain: '<S475>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_c = 4.0 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f;

  /* Trigonometry: '<S477>/sine_cosine' */
  cosOut = mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_c;
  sinOut = sin(cosOut);
  cosOut = cos(cosOut);

  /* Trigonometry: '<S477>/sine_cosine' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o = sinOut;

  /* Trigonometry: '<S477>/sine_cosine' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d = cosOut;

  /* Product: '<S487>/Product2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d;

  /* Product: '<S487>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o;

  /* Sum: '<S487>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_c =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_o -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_o;

  /* SignalConversion generated from: '<S474>/Vector Concatenate' incorporates:
   *  Concatenate: '<S474>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[0] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_c;

  /* Gain: '<S475>/Gain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p = 4.0 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain;

  /* Gain: '<S478>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_ct = 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain;

  /* Sum: '<S478>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_p =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_ct +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f;

  /* Switch: '<S6>/Switch1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[0] = 0.0;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[1] = 0.0;
  mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[2] = 0.0;

  /* Gain: '<S485>/Gain' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p4 = 0.66666666666666663 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[0];

  /* Gain: '<S485>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_f = -0.33333333333333331 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[1];

  /* Gain: '<S485>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_e = -0.33333333333333331 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[2];

  /* Sum: '<S485>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p4 +
     mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_f) +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_e;

  /* Gain: '<S485>/Gain2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_b = 0.57735026918962573 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[1];

  /* Gain: '<S485>/Gain3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_a = -0.57735026918962573 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[2];

  /* Sum: '<S485>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_b +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_a;

  /* Gain: '<S486>/Gain1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_i = -0.5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_c;

  /* Gain: '<S486>/Gain2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_n = -0.5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_c;

  /* Product: '<S487>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_c =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o;

  /* Product: '<S487>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_a =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d;

  /* Sum: '<S487>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_c +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_a;

  /* Gain: '<S486>/Gain3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_e = 0.8660254037844386 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f;

  /* Gain: '<S486>/Gain4' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_f = -0.8660254037844386 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f;

  /* Sum: '<S486>/Subtract1' incorporates:
   *  Concatenate: '<S474>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[1] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_n +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_e;

  /* Sum: '<S486>/Subtract2' incorporates:
   *  Concatenate: '<S474>/Vector Concatenate'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[2] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_i +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_f;

  /* Product: '<S490>/Product2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_hz =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d;

  /* Product: '<S490>/Product3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_d =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o;

  /* Sum: '<S490>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_pe =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_hz +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_d;

  /* Product: '<S494>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_nq =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_pe /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_e;

  /* Product: '<S492>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ee =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p *
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k;

  /* Product: '<S495>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_b =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ee *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_ei /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector1_o;

  /* Product: '<S496>/Product' incorporates:
   *  Constant: '<S496>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_a =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p * 0.36 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_ii;

  /* Sum: '<S492>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_ob =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Product_nq +
     mcb_pmsm_foc_qep_dyno_f28069m_B.Product_b) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_a;

  /* Product: '<S490>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_o =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o;

  /* Product: '<S490>/Product1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_f =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b *
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d;

  /* Sum: '<S490>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_j =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_f -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_o;

  /* Product: '<S497>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jy =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_j /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_b;

  /* Product: '<S493>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_cr =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p;

  /* Product: '<S498>/Product' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_p =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_cr *
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_ck /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector1_k;

  /* Product: '<S499>/Product' incorporates:
   *  Constant: '<S499>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ef =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p * 0.0063954151868927875 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_ds;

  /* Product: '<S500>/Product' incorporates:
   *  Constant: '<S500>/Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m2 =
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k * 0.36 /
    mcb_pmsm_foc_qep_dyno_f2_ConstB.IndexVector_f;

  /* Sum: '<S493>/Add' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add_bg =
    ((mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jy -
      mcb_pmsm_foc_qep_dyno_f28069m_B.Product_p) -
     mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ef) -
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m2;

  /* Update for DiscreteIntegrator: '<S447>/Discrete-Time Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE += 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE > 1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE = 1.0E+7;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE <
             -1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE = -1.0E+7;
  }

  /* End of Update for DiscreteIntegrator: '<S447>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S464>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LOAD = 0U;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE += 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_b;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE > 1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE = 1.0E+7;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE <
             -1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE = -1.0E+7;
  }

  /* End of Update for DiscreteIntegrator: '<S464>/Discrete-Time Integrator3' */

  /* Update for UnitDelay: '<S450>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_o;

  /* Update for DiscreteIntegrator: '<S465>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_n = 0U;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b += 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_l;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b > 1.0E+7)
  {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b = 1.0E+7;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b <
             -1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b = -1.0E+7;
  }

  /* End of Update for DiscreteIntegrator: '<S465>/Discrete-Time Integrator3' */

  /* Update for DiscreteIntegrator: '<S492>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_e = 0U;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m += 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_ob;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m > 1.0E+7)
  {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m = 1.0E+7;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m <
             -1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m = -1.0E+7;
  }

  /* End of Update for DiscreteIntegrator: '<S492>/Discrete-Time Integrator3' */

  /* Update for DiscreteIntegrator: '<S493>/Discrete-Time Integrator3' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_f = 0U;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j += 5.0E-5 *
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_bg;
  if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j > 1.0E+7)
  {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j = 1.0E+7;
  } else if (mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j <
             -1.0E+7) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j = -1.0E+7;
  }

  /* End of Update for DiscreteIntegrator: '<S493>/Discrete-Time Integrator3' */

  /* Update for UnitDelay: '<S478>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_h =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_p;
}

/* Model step function for TID1 */
void mcb_pmsm_foc_qep_dyno_f28069m_step1(void) /* Sample time: [0.001s, 0.0s] */
{
  real32_T u0;

  /* RateTransition: '<Root>/RT1' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_semaphoreTaken =
    mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_ActiveBufIdx;

  /* RateTransition: '<Root>/RT1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.RT1 =
    mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_semaphoreTaken];

  /* RateTransition: '<Root>/RT3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.RT3 =
    mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Speed Control for motor1' */
  /* Constant: '<S8>/Id_ref' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Id_ref = 0.0F;

  /* DataStoreRead: '<S508>/Data Store Read1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_k =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Enable;

  /* DataStoreRead: '<S508>/Data Store Read2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2_l =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnClosedLoop;

  /* Logic: '<S508>/AND' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.AND =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1_k &&
     mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2_l);

  /* DataStoreRead: '<S509>/Data Store Read' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_f =
    mcb_pmsm_foc_qep_dyno_f28_DWork.EnClosedLoop;

  /* Switch: '<S509>/Switch' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead_f) {
    /* Switch: '<S509>/Switch' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_bo =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT3;
  } else {
    /* Switch: '<S509>/Switch' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_bo =
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT1;
  }

  /* End of Switch: '<S509>/Switch' */

  /* Product: '<S564>/Product' incorporates:
   *  Constant: '<S564>/Filter_Constant'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dy =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_bo * 0.01F;

  /* UnitDelay: '<S564>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_g =
    mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a;

  /* Product: '<S564>/Product1' incorporates:
   *  Constant: '<S564>/One'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_k = 0.99F *
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_g;

  /* Sum: '<S564>/Add1' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_cl =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dy +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_k;

  /* Sum: '<S508>/Sum' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_cl -
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT1;

  /* Product: '<S549>/PProd Out' incorporates:
   *  Constant: '<S508>/Kp1'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k * 0.459470749F;

  /* Logic: '<S508>/Logical Operator' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator =
    !mcb_pmsm_foc_qep_dyno_f28069m_B.AND;

  /* Constant: '<S508>/Ki2' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Ki2 = 0.0F;

  /* DiscreteIntegrator: '<S544>/Integrator' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator ||
      (mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState != 0)) {
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE = 0.0F;
  }

  /* DiscreteIntegrator: '<S544>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator =
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE;

  /* Sum: '<S553>/Sum' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l =
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut +
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator;

  /* DeadZone: '<S537>/DeadZone' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l > 1.0F) {
    /* DeadZone: '<S537>/DeadZone' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l - 1.0F;
  } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l >= -1.0F) {
    /* DeadZone: '<S537>/DeadZone' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone = 0.0F;
  } else {
    /* DeadZone: '<S537>/DeadZone' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l - -1.0F;
  }

  /* End of DeadZone: '<S537>/DeadZone' */

  /* RelationalOperator: '<S535>/Relational Operator' incorporates:
   *  Constant: '<S535>/Clamping_zero'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone != 0.0F);

  /* RelationalOperator: '<S535>/fix for DT propagation issue' incorporates:
   *  Constant: '<S535>/Clamping_zero'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone > 0.0F);

  /* Switch: '<S535>/Switch1' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue) {
    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S535>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_n = 1;
  } else {
    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S535>/Constant2'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_n = -1;
  }

  /* End of Switch: '<S535>/Switch1' */

  /* Product: '<S541>/IProd Out' incorporates:
   *  Constant: '<S508>/Ki1'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k * 0.00606610067F;

  /* RelationalOperator: '<S535>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S535>/Clamping_zero'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1 =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut > 0.0F);

  /* Switch: '<S535>/Switch2' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.fixforDTpropagationissue1) {
    /* Switch: '<S535>/Switch2' incorporates:
     *  Constant: '<S535>/Constant3'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_l = 1;
  } else {
    /* Switch: '<S535>/Switch2' incorporates:
     *  Constant: '<S535>/Constant4'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_l = -1;
  }

  /* End of Switch: '<S535>/Switch2' */

  /* RelationalOperator: '<S535>/Equal1' incorporates:
   *  Switch: '<S535>/Switch1'
   *  Switch: '<S535>/Switch2'
   */
  mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1 =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_n ==
     mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2_l);

  /* Logic: '<S535>/AND3' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.AND3 =
    (mcb_pmsm_foc_qep_dyno_f28069m_B.RelationalOperator &&
     mcb_pmsm_foc_qep_dyno_f28069m_B.Equal1);

  /* Switch: '<S535>/Switch' */
  if (mcb_pmsm_foc_qep_dyno_f28069m_B.AND3) {
    /* Switch: '<S535>/Switch' incorporates:
     *  Constant: '<S535>/Constant1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_k = 0.0F;
  } else {
    /* Switch: '<S535>/Switch' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_k =
      mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut;
  }

  /* End of Switch: '<S535>/Switch' */

  /* Saturate: '<S551>/Saturation' */
  u0 = mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l;
  if (u0 > 1.0F) {
    /* Saturate: '<S551>/Saturation' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation = 1.0F;
  } else if (u0 < -1.0F) {
    /* Saturate: '<S551>/Saturation' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation = -1.0F;
  } else {
    /* Saturate: '<S551>/Saturation' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation = u0;
  }

  /* End of Saturate: '<S551>/Saturation' */

  /* Update for UnitDelay: '<S564>/Unit Delay' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_cl;

  /* Update for DiscreteIntegrator: '<S544>/Integrator' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE +=
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_k;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState = (int16_T)
    mcb_pmsm_foc_qep_dyno_f28069m_B.LogicalOperator;

  /* End of Outputs for SubSystem: '<Root>/Speed Control for motor1' */

  /* RateTransition: '<Root>/RT2' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer
    [(mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_ActiveBufIdx == 0) << 1U] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[1 +
    ((mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_ActiveBufIdx == 0) << 1U)] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_ActiveBufIdx =
    (mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_ActiveBufIdx == 0);

  /* RateTransition: '<Root>/RT9' */
  mcb_pmsm_foc_qep_dyno_f28069m_B.RT9 =
    mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Speed Limit for motor2' */
  mcb_pms_SpeedLimitformotor2(mcb_pmsm_foc_qep_dyno_f28069m_B.RT9,
    &mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2,
    &mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedLimitformotor2);

  /* End of Outputs for SubSystem: '<Root>/Speed Limit for motor2' */

  /* RateTransition: '<Root>/RT7' */
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer
    [(mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_ActiveBufIdx == 0) << 1U] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Add1[0];
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[1 +
    ((mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_ActiveBufIdx == 0) << 1U)] =
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Add1[1];
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_ActiveBufIdx =
    (mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_ActiveBufIdx == 0);
}

/* Model step function for TID2 */
void mcb_pmsm_foc_qep_dyno_f28069m_step2(void) /* Sample time: [0.5s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<S5>/LED blink' incorporates:
   *  Constant: '<S5>/Constant'
   */
  {
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = (uint16_T)((1U) != 0);
  }
}

/* Model initialize function */
void mcb_pmsm_foc_qep_dyno_f28069m_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)mcb_pmsm_foc_qep_dyno_f28069_M, 0,
                sizeof(RT_MODEL_mcb_pmsm_foc_qep_dyno_));

  /* block I/O */
  (void) memset(((void *) &mcb_pmsm_foc_qep_dyno_f28069m_B), 0,
                sizeof(BlockIO_mcb_pmsm_foc_qep_dyno_f));

  {
    int16_T i;
    for (i = 0; i < 6; i++) {
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug[i] = 0.0F;
    }

    for (i = 0; i < 6; i++) {
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[i] = 0.0F;
    }

    for (i = 0; i < 25; i++) {
      mcb_pmsm_foc_qep_dyno_f28069m_B.TmpSignalConversionAtSelectorIn[i] = 0.0F;
    }

    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_p = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DiscreteTimeIntegrator3_k = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_j = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sign = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_n = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_j = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_l = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_h = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_a = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_e = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_m = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_e = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_n = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_h = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_h = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_p = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_h = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_l = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hs = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_e = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_i = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hv = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_n = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jr = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_g = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_l = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[0] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[1] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate[2] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o1_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sine_cosine_o2_d = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_ct = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_p = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[0] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[1] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch1_f4[2] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_p4 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_e = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_a = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_i = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_n = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_c = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_a = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain3_e = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain4_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product2_hz = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_d = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_pe = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_nq = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ee = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_a = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_ob = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_o = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_j = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_jy = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_cr = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_p = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ef = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_m2 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_bg = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[0] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[1] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.VectorConcatenate_p[2] = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain1_m = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_d1 = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_fu = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_n = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain2_l = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_f = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_k = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Subtract_b = 0.0;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT9 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Te_PU = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pm_PU = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Speed_PU = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pos_PU = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_ref = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_bo = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dy = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_cl = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_l = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_d[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_d[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mt = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Floor = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hl = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.P_output = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.T_output = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_f[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr2_PWM_Duty_Cycles[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_f4 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_l = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup[3] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_eg = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_l = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_efr = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mp = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_h = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_o[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ca = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Max = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Min = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_jf = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_fj = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_nu[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_g[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hsp = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_ce = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Numberofpolepairs_d = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Floor_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.id_Ld_Lq_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_mq = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product3_bq = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.u_5_Pp_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DTC_nv = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedGain_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_li = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_la = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.P_output_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.mtr1_speed_ref_PU = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Selector[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Selector[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_i[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.One_by_Two_e[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Mtr1_PWM_Duty_Cycles[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.rpm2freq = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Eps = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_mc = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Frequency = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vbyf = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Correction_Factor_sinePWM = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Amplitude = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnaryMinus = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.position_increment = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.scaleIn = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.UnitDelay_h = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.scaleOut = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Eps_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.convert_pu = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_d = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_l[3] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_je = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ka = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kb = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kc = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_h = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sample_Time = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_k3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_oe = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Input = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.indexing_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Lookup_c[3] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum3_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1_cg = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum2_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_dl = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum4_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum5_d = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_bt = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum6_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_fb_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Kp1_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_dd = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.PProdOut_iz = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki1_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Integrator_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum_nt = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Saturation_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_m = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_ng = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product_hg = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Product1_d = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Sum1_c = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Merge_g1[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vd_ref_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_fb_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Vq_ref_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Id_Ref_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Iq_Ref_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_d = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_h = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DeadZone_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IProdOut_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Switch_g = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.sqrt3_by_two_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_b_ch = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.add_c_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Max_o = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Min_k = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add_fm = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.one_by_two_i = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_b3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add2_a = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Add3_e = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.Gain_jt[2] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Product[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Product[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.UnitDelay[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.UnitDelay[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Product1[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Product1[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Add1[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.SpeedLimitformotor2.Add1[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_d.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_i.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.acos_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.bsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.sum_Ds = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.bcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.asin_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.sum_Qs = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_i.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.qcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.dsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.sum_beta = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.dcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.qsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.sum_alpha = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_n.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j.Product[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j.Product[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j.SquareRoot = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j.Switch = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence_j.Reciprocal = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Switch2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Product = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Sum = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Product2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Merge = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Gain = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Switch_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Switch1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Sqrt = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority_d.Gain_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.a_plus_2b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.one_by_sqrt3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap_n.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_p.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_j.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.qcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.dsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.sum_beta = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.dcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.qsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.sum_alpha = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_p.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_b.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_b.Convert_back = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.acos_n = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.bsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.sum_Ds = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.bcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.asin_p = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.sum_Qs = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL_g.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.qcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.dsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.sum_beta = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.dcos = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.qsin = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.sum_alpha = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwoinputsCRL.algDD_o2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence.Product[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence.Product[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence.SquareRoot = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence.Switch = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQEquivalence.Reciprocal = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Switch[0] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Switch[1] = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Switch2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Product = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Sum = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Product2 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Merge = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Gain = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Switch_f = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Switch1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Sqrt = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.DQAxisPriority.Gain_j = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.a_plus_2b = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.one_by_sqrt3 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.algDD_o1 = 0.0F;
    mcb_pmsm_foc_qep_dyno_f28069m_B.TwophaseCRLwrap.algDD_o2 = 0.0F;
  }

  /* states (dwork) */
  (void) memset((void *)&mcb_pmsm_foc_qep_dyno_f28_DWork, 0,
                sizeof(D_Work_mcb_pmsm_foc_qep_dyno_f2));
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator_DSTATE = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTATE = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_b = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_m = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_DSTAT_j = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_h = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Add1_DWORK1 = 0.0;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_d = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_a0 = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_a = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_o = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_c = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RampGenerator_DSTATE = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.UnitDelay_DSTATE_p = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_c = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE_g = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[2] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[3] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[2] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[3] = 0.0F;

  {
    int16_T i;
    for (i = 0; i < 12; i++) {
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_Buffer[i] = 0.0F;
    }
  }

  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[2] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[3] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_Buffer[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_Buffer[1] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.IqRef = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.Add_DWORK1 = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedLimitformotor2.UnitDelay_DSTATE[0] = 0.0F;
  mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedLimitformotor2.UnitDelay_DSTATE[1] = 0.0F;

  {
    uint16_T s429_iter;

    /* Start for S-Function (c280xgpio_do): '<S5>/LED blink' */
    EALLOW;
    GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCFU;
    GpioCtrlRegs.GPBDIR.all |= 0x4U;
    EDIS;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor1 = 2295U;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor1 = 2286U;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Debug_signals = 5U;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor2 = 2286U;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor2 = 2286U;

    /* InitializeConditions for DiscreteIntegrator: '<S464>/Discrete-Time Integrator3' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LOAD = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S465>/Discrete-Time Integrator3' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_n = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S492>/Discrete-Time Integrator3' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_e = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S493>/Discrete-Time Integrator3' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.DiscreteTimeIntegrator3_IC_LO_f = 1U;

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S14>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/FOC Algorithm Motor1'
     */
    mcb_FOCAlgorithmMotor1_Init();

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S16>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/FOC Algorithm Motor2'
     */
    mcb_FOCAlgorithmMotor2_Init();

    /* SystemInitialize for S-Function (HardwareInterrupt_sfun): '<S18>/Hardware Interrupt' incorporates:
     *  SubSystem: '<Root>/Serial Receive'
     */
    /* System initialize for function-call system: '<Root>/Serial Receive' */

    /* Start for S-Function (c28xsci_rx): '<S501>/SCI Receive' */

    /* Initialize out port */
    {
      mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[0] = (uint16_T)0.0;
      mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[1] = (uint16_T)0.0;
    }

    /*Configure Timer2 when blocking mode is enabled and Timeout is not inf*/
    {
      /* InitCpuTimers() - CPU Timers are also initialized in
       * MW_c28xx_board.c in the generated code.
       */
      CpuTimer2Regs.PRD.all = 0xFFFFFFFFU;/* max Period*/
      CpuTimer2Regs.TIM.all = 0xFFFFFFFFU;/* set Ctr*/
      CpuTimer2Regs.TPR.all = 0x00U;   /* no prescaler    */
      StartCpuTimer2();
    }

    /* SystemInitialize for Atomic SubSystem: '<Root>/Speed Control for motor1' */
    /* Start for Constant: '<S508>/Ki2' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Ki2 = 0.0F;

    /* InitializeConditions for DiscreteIntegrator: '<S544>/Integrator' */
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_DSTATE =
      mcb_pmsm_foc_qep_dyno_f28069m_B.Ki2;
    mcb_pmsm_foc_qep_dyno_f28_DWork.Integrator_PrevResetState = 0;

    /* End of SystemInitialize for SubSystem: '<Root>/Speed Control for motor1' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/Hardware Init' */
    /* SystemInitialize for Atomic SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */
    /* Start for S-Function (c280xgpio_do): '<S426>/Digital Output1' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFFFCFU;
    GpioCtrlRegs.GPBDIR.all |= 0x40000U;
    EDIS;

    /* Start for S-Function (c280xgpio_do): '<S426>/Digital Output2' */
    EALLOW;
    GpioCtrlRegs.GPBMUX2.all &= 0xFFFFFCFFU;
    GpioCtrlRegs.GPBDIR.all |= 0x100000U;
    EDIS;
    mcb__SPIMasterTransfer_Init
      (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer);
    mcb_SPIMasterTransfer2_Init
      (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer2);
    mcb__SPIMasterTransfer_Init
      (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer1);
    mcb_SPIMasterTransfer2_Init
      (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer3);

    /* End of SystemInitialize for SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */

    /* SystemInitialize for Atomic SubSystem: '<S423>/Calibrate ADC offset for motor 1 current sensor' */
    /* SystemInitialize for Enabled SubSystem: '<S424>/Calculate ADC Offset' */
    /* SystemInitialize for Iterator SubSystem: '<S427>/For Iterator Subsystem' */
    /* Start for S-Function (c2802xadc): '<S429>/IA//IB Measurement' */
    if (MW_adcInitFlag == 0U) {
      InitAdc();
      MW_adcInitFlag = 1U;
    }

    config_ADC_SOC4_SOC5 ();

    /* End of SystemInitialize for SubSystem: '<S427>/For Iterator Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S424>/Calculate ADC Offset' */
    /* End of SystemInitialize for SubSystem: '<S423>/Calibrate ADC offset for motor 1 current sensor' */

    /* SystemInitialize for Atomic SubSystem: '<S423>/Calibrate ADC offset for motor 2 current sensor' */
    /* SystemInitialize for Enabled SubSystem: '<S425>/Calculate ADC Offset' */
    /* SystemInitialize for Iterator SubSystem: '<S435>/For Iterator Subsystem' */
    /* Start for S-Function (c2802xadc): '<S437>/IA//IB Measurement' */
    if (MW_adcInitFlag == 0U) {
      InitAdc();
      MW_adcInitFlag = 1U;
    }

    config_ADC_SOC6_SOC7 ();

    /* End of SystemInitialize for SubSystem: '<S435>/For Iterator Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S425>/Calculate ADC Offset' */
    /* End of SystemInitialize for SubSystem: '<S423>/Calibrate ADC offset for motor 2 current sensor' */
    /* End of SystemInitialize for SubSystem: '<Root>/Hardware Init' */

    /* Outputs for Atomic SubSystem: '<Root>/Hardware Init' */
    /* Outputs for Atomic SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */
    /* Constant: '<S426>/6PWM_Mode' */
    mcb_pmsm__SPIMasterTransfer(14870U,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.SPIMasterTransfer,
      &mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer);

    /* Constant: '<S426>/6PWM_Mode1' */
    mcb_pmsm_SPIMasterTransfer2(14870U,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.SPIMasterTransfer2,
      &mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer2);

    /* Constant: '<S426>/ADC_Gain_Setting' */
    mcb_pmsm__SPIMasterTransfer(20480U,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.SPIMasterTransfer1,
      &mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer1);

    /* Constant: '<S426>/ADC_Gain_Setting1' */
    mcb_pmsm_SPIMasterTransfer2(20480U,
      &mcb_pmsm_foc_qep_dyno_f28069m_B.SPIMasterTransfer3,
      &mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer3);

    /* S-Function (c280xgpio_do): '<S426>/Digital Output1' incorporates:
     *  Constant: '<S426>/DRV830x Enable'
     */
    {
      if ((1U)) {
        GpioDataRegs.GPBSET.bit.GPIO50 = 1U;
      } else {
        GpioDataRegs.GPBCLEAR.bit.GPIO50 = 1U;
      }
    }

    /* S-Function (c280xgpio_do): '<S426>/Digital Output2' incorporates:
     *  Constant: '<S426>/DRV830x Enable1'
     */
    {
      if ((1U)) {
        GpioDataRegs.GPBSET.bit.GPIO52 = 1U;
      } else {
        GpioDataRegs.GPBCLEAR.bit.GPIO52 = 1U;
      }
    }

    /* End of Outputs for SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */

    /* Outputs for Atomic SubSystem: '<S423>/Calibrate ADC offset for motor 1 current sensor' */
    /* Outputs for Enabled SubSystem: '<S424>/Calculate ADC Offset' incorporates:
     *  EnablePort: '<S427>/Enable'
     */
    /* Outputs for Iterator SubSystem: '<S427>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S429>/For Iterator'
     */
    for (s429_iter = 1U; s429_iter < 17U; s429_iter++) {
      /* Outputs for Iterator SubSystem: '<S427>/For Iterator Subsystem' incorporates:
       *  ForIterator: '<S429>/For Iterator'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.ForIterator_a = s429_iter;

      /* S-Function (c2802xadc): '<S429>/IA//IB Measurement' */
      {
        /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
        /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
        AdcRegs.ADCSOCFRC1.bit.SOC4 = 1U;

        /* Wait for the period of Sampling window and EOC result to be latched after trigger */
#ifndef __TMS320C28XX_CLA__

        asm(" RPT #70|| NOP");

#endif

#ifdef __TMS320C28XX_CLA__

        float wait_index;
        for (wait_index= 11; wait_index > 0; wait_index--)
          __mnop();

#endif

        mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_e[0] =
          (AdcResult.ADCRESULT4);
        mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_e[1] =
          (AdcResult.ADCRESULT5);
      }

      /* If: '<S429>/If' */
      if (mcb_pmsm_foc_qep_dyno_f28069m_B.ForIterator_a > 8U) {
        /* Outputs for IfAction SubSystem: '<S429>/If Action Subsystem' incorporates:
         *  ActionPort: '<S434>/Action Port'
         */
        mcb_pm_IfActionSubsystem_gj
          (mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_e[0],
           mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement_e[1],
           &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_g,
           &mcb_pmsm_foc_qep_dyno_f28_DWork.IfActionSubsystem_g);

        /* End of Outputs for SubSystem: '<S429>/If Action Subsystem' */
      }

      /* End of If: '<S429>/If' */
    }

    /* End of Outputs for SubSystem: '<S427>/For Iterator Subsystem' */

    /* Product: '<S427>/Divide' incorporates:
     *  Constant: '<S427>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_f = (uint16_T)((real_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_g.Sum / 8.0);

    /* If: '<S427>/If' incorporates:
     *  Constant: '<S427>/Constant1'
     *  Constant: '<S427>/Constant2'
     */
    if ((mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_f > 1500U) &&
        (mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_f < 2500U)) {
      /* Outputs for IfAction SubSystem: '<S427>/If Action Subsystem' incorporates:
       *  ActionPort: '<S430>/Action Port'
       */
      /* DataStoreWrite: '<S430>/Data Store Write1' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor1 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Divide_f;

      /* End of Outputs for SubSystem: '<S427>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S427>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S431>/Action Port'
       */
      /* DataStoreWrite: '<S431>/Data Store Write1' incorporates:
       *  Constant: '<S431>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor1 = 2295U;

      /* End of Outputs for SubSystem: '<S427>/If Action Subsystem1' */
    }

    /* End of If: '<S427>/If' */

    /* Product: '<S427>/Divide1' incorporates:
     *  Constant: '<S427>/Constant'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1_m = (uint16_T)((real_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem_g.Sum1 / 8.0);

    /* If: '<S427>/If1' incorporates:
     *  Constant: '<S427>/Constant1'
     *  Constant: '<S427>/Constant2'
     */
    if ((mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1_m > 1500U) &&
        (mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1_m < 2500U)) {
      /* Outputs for IfAction SubSystem: '<S427>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S432>/Action Port'
       */
      /* DataStoreWrite: '<S432>/Data Store Write2' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor1 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Divide1_m;

      /* End of Outputs for SubSystem: '<S427>/If Action Subsystem2' */
    } else {
      /* Outputs for IfAction SubSystem: '<S427>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S433>/Action Port'
       */
      /* DataStoreWrite: '<S433>/Data Store Write2' incorporates:
       *  Constant: '<S433>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor1 = 2286U;

      /* End of Outputs for SubSystem: '<S427>/If Action Subsystem3' */
    }

    /* End of If: '<S427>/If1' */
    /* End of Outputs for SubSystem: '<S424>/Calculate ADC Offset' */

    /* Logic: '<S424>/NOT' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_d = false;

    /* Outputs for Enabled SubSystem: '<S424>/Default ADC Offset' incorporates:
     *  EnablePort: '<S428>/Enable'
     */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.NOT_d) {
      /* DataStoreWrite: '<S428>/Data Store Write1' incorporates:
       *  Constant: '<S428>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor1 = 2295U;

      /* DataStoreWrite: '<S428>/Data Store Write2' incorporates:
       *  Constant: '<S428>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor1 = 2286U;
    }

    /* End of Outputs for SubSystem: '<S424>/Default ADC Offset' */
    /* End of Outputs for SubSystem: '<S423>/Calibrate ADC offset for motor 1 current sensor' */

    /* Outputs for Atomic SubSystem: '<S423>/Calibrate ADC offset for motor 2 current sensor' */
    /* Outputs for Enabled SubSystem: '<S425>/Calculate ADC Offset' incorporates:
     *  EnablePort: '<S435>/Enable'
     */
    /* Outputs for Iterator SubSystem: '<S435>/For Iterator Subsystem' incorporates:
     *  ForIterator: '<S437>/For Iterator'
     */
    for (s429_iter = 1U; s429_iter < 17U; s429_iter++) {
      /* Outputs for Iterator SubSystem: '<S435>/For Iterator Subsystem' incorporates:
       *  ForIterator: '<S437>/For Iterator'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.ForIterator = s429_iter;

      /* S-Function (c2802xadc): '<S437>/IA//IB Measurement' */
      {
        /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
        /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
        AdcRegs.ADCSOCFRC1.bit.SOC6 = 1U;

        /* Wait for the period of Sampling window and EOC result to be latched after trigger */
#ifndef __TMS320C28XX_CLA__

        asm(" RPT #70|| NOP");

#endif

#ifdef __TMS320C28XX_CLA__

        float wait_index;
        for (wait_index= 11; wait_index > 0; wait_index--)
          __mnop();

#endif

        mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement[0] =
          (AdcResult.ADCRESULT6);
        mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement[1] =
          (AdcResult.ADCRESULT7);
      }

      /* If: '<S437>/If1' */
      if (mcb_pmsm_foc_qep_dyno_f28069m_B.ForIterator > 8U) {
        /* Outputs for IfAction SubSystem: '<S437>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S442>/Action Port'
         */
        mcb_pm_IfActionSubsystem_gj
          (mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement[0],
           mcb_pmsm_foc_qep_dyno_f28069m_B.IAIBMeasurement[1],
           &mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_i,
           &mcb_pmsm_foc_qep_dyno_f28_DWork.IfActionSubsystem1_i);

        /* End of Outputs for SubSystem: '<S437>/If Action Subsystem1' */
      }

      /* End of If: '<S437>/If1' */
    }

    /* End of Outputs for SubSystem: '<S435>/For Iterator Subsystem' */

    /* Product: '<S435>/Divide2' incorporates:
     *  Constant: '<S435>/Constant1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2_c = (uint16_T)((real_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_i.Sum / 8.0);

    /* If: '<S435>/If2' incorporates:
     *  Constant: '<S435>/Constant2'
     *  Constant: '<S435>/Constant3'
     */
    if ((mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2_c > 1500U) &&
        (mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2_c < 2500U)) {
      /* Outputs for IfAction SubSystem: '<S435>/If Action Subsystem4' incorporates:
       *  ActionPort: '<S438>/Action Port'
       */
      /* DataStoreWrite: '<S438>/Data Store Write1' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor2 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Divide2_c;

      /* End of Outputs for SubSystem: '<S435>/If Action Subsystem4' */
    } else {
      /* Outputs for IfAction SubSystem: '<S435>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S439>/Action Port'
       */
      /* DataStoreWrite: '<S439>/Data Store Write1' incorporates:
       *  Constant: '<S439>/Constant'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor2 = 2295U;

      /* End of Outputs for SubSystem: '<S435>/If Action Subsystem5' */
    }

    /* End of If: '<S435>/If2' */

    /* Product: '<S435>/Divide3' incorporates:
     *  Constant: '<S435>/Constant1'
     */
    mcb_pmsm_foc_qep_dyno_f28069m_B.Divide3 = (uint16_T)((real_T)
      mcb_pmsm_foc_qep_dyno_f28069m_B.IfActionSubsystem1_i.Sum1 / 8.0);

    /* If: '<S435>/If3' incorporates:
     *  Constant: '<S435>/Constant2'
     *  Constant: '<S435>/Constant3'
     */
    if ((mcb_pmsm_foc_qep_dyno_f28069m_B.Divide3 > 1500U) &&
        (mcb_pmsm_foc_qep_dyno_f28069m_B.Divide3 < 2500U)) {
      /* Outputs for IfAction SubSystem: '<S435>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S440>/Action Port'
       */
      /* DataStoreWrite: '<S440>/Data Store Write2' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor2 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.Divide3;

      /* End of Outputs for SubSystem: '<S435>/If Action Subsystem6' */
    } else {
      /* Outputs for IfAction SubSystem: '<S435>/If Action Subsystem7' incorporates:
       *  ActionPort: '<S441>/Action Port'
       */
      /* DataStoreWrite: '<S441>/Data Store Write2' incorporates:
       *  Constant: '<S441>/Constant1'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor2 = 2286U;

      /* End of Outputs for SubSystem: '<S435>/If Action Subsystem7' */
    }

    /* End of If: '<S435>/If3' */
    /* End of Outputs for SubSystem: '<S425>/Calculate ADC Offset' */

    /* Logic: '<S425>/NOT' */
    mcb_pmsm_foc_qep_dyno_f28069m_B.NOT = false;

    /* Outputs for Enabled SubSystem: '<S425>/Default ADC Offset' incorporates:
     *  EnablePort: '<S436>/Enable'
     */
    if (mcb_pmsm_foc_qep_dyno_f28069m_B.NOT) {
      /* DataStoreWrite: '<S436>/Data Store Write3' incorporates:
       *  Constant: '<S436>/Constant2'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IaOffset_motor2 = 2295U;

      /* DataStoreWrite: '<S436>/Data Store Write4' incorporates:
       *  Constant: '<S436>/Constant3'
       */
      mcb_pmsm_foc_qep_dyno_f28_DWork.IbOffset_motor2 = 2286U;
    }

    /* End of Outputs for SubSystem: '<S425>/Default ADC Offset' */
    /* End of Outputs for SubSystem: '<S423>/Calibrate ADC offset for motor 2 current sensor' */
    /* End of Outputs for SubSystem: '<Root>/Hardware Init' */
  }
}

/* Model terminate function */
void mcb_pmsm_foc_qep_dyno_f28069m_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Hardware Init' */
  /* Terminate for Atomic SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */
  mcb__SPIMasterTransfer_Term(&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer);
  mcb_SPIMasterTransfer2_Term
    (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer2);
  mcb__SPIMasterTransfer_Term
    (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer1);
  mcb_SPIMasterTransfer2_Term
    (&mcb_pmsm_foc_qep_dyno_f28_DWork.SPIMasterTransfer3);

  /* End of Terminate for SubSystem: '<S423>/Enable DRV8305 for motor 1 and motor 2' */
  /* End of Terminate for SubSystem: '<Root>/Hardware Init' */
}

void mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts(void)
{
  /* Register interrupt service routine */
  HWI_TIC28x_ConfigureIRQ(32,&ADCINT1,0);
  HWI_TIC28x_EnableIRQ(32);

  /* Register interrupt service routine */
  HWI_TIC28x_ConfigureIRQ(33,&ADCINT2,1);
  HWI_TIC28x_EnableIRQ(33);

  /* Register interrupt service routine */
  HWI_TIC28x_ConfigureIRQ(96,&SCIRXINTA,3);
  HWI_TIC28x_EnableIRQ(96);
}

/* Hardware Interrupt Block: '<S14>/Hardware Interrupt' */
interrupt void ADCINT1(void)
{
  volatile unsigned int PIEIER1_stack_save = PieCtrlRegs.PIEIER1.all;
  volatile unsigned int PIEIER9_stack_save = PieCtrlRegs.PIEIER9.all;
  PieCtrlRegs.PIEIER1.all &= ~67;
                              /*disable group1 lower/equal priority interrupts*/
  PieCtrlRegs.PIEIER9.all &= ~1;
                              /*disable group9 lower/equal priority interrupts*/
  asm(" RPT #5 || NOP");               /*wait 5 cycles        */
  IFR &= ~257;    /*eventually disable lower/equal priority pending interrupts*/
  PieCtrlRegs.PIEACK.all = 257;
                   /*ACK to allow other interrupts from the same group to fire*/
  IER |= 1;
  EINT;

  /* Event: Default Event */
  if (1 == runModel) {
    {
      int16_T i;
      int16_T tmp;

      /* RateTransition: '<Root>/RT2' */
      tmp = mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_ActiveBufIdx << 1U;
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[0] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[tmp];
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT2[1] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT2_Buffer[tmp + 1];

      /* RateTransition generated from: '<Root>/RT8' */
      tmp = mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_ActiveBufIdx * 6;
      for (i = 0; i < 6; i++) {
        mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug[i] =
          mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_Buffer[i + tmp];
      }

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Te_PU =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_ActiveBufIdx];

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pm_PU =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_ActiveBufIdx];

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Speed_PU =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_ActiveBufIdx];

      /* RateTransition generated from: '<Root>/RT8' */
      tmp = mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_ActiveBufIdx << 1U;
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[0] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[tmp];
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Iab_meas_PU[1] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[tmp + 1];

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_Pos_PU =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_ActiveBufIdx];

      /* S-Function (HardwareInterrupt_sfun): '<S14>/Hardware Interrupt' */
      mcb_pmsm_FOCAlgorithmMotor1();

      /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S14>/Hardware Interrupt' */

      /* RateTransition: '<Root>/RT1' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_semaphoreTaken
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_kb;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT1_semaphoreTaken == 0);
    }
  }

  /* Clear occurred EOC event event */
  AdcRegs.ADCINTFLGCLR.bit.ADCINT1= 1;

  /* Clear occurred Overflow event event */
  AdcRegs.ADCINTOVFCLR.bit.ADCINT1= 1;
  DINT;
  /* disable global interrupts during context switch, CPU will enable global interrupts after exiting ISR */
  PieCtrlRegs.PIEIER1.all = PIEIER1_stack_save;
                                   /*restore PIEIER register that was modified*/
  PieCtrlRegs.PIEIER9.all = PIEIER9_stack_save;
                                   /*restore PIEIER register that was modified*/
  HWI_TIC28x_AcknowledgeIrq(32);
}

/* Hardware Interrupt Block: '<S16>/Hardware Interrupt' */
interrupt void ADCINT2(void)
{
  volatile unsigned int PIEIER1_stack_save = PieCtrlRegs.PIEIER1.all;
  volatile unsigned int PIEIER9_stack_save = PieCtrlRegs.PIEIER9.all;
  PieCtrlRegs.PIEIER1.all &= ~66;
                              /*disable group1 lower/equal priority interrupts*/
  PieCtrlRegs.PIEIER9.all &= ~1;
                              /*disable group9 lower/equal priority interrupts*/
  asm(" RPT #5 || NOP");               /*wait 5 cycles        */
  IFR &= ~257;    /*eventually disable lower/equal priority pending interrupts*/
  PieCtrlRegs.PIEACK.all = 257;
                   /*ACK to allow other interrupts from the same group to fire*/
  IER |= 1;
  EINT;

  /* Event: Default Event */
  if (1 == runModel) {
    {
      int16_T i;

      /* RateTransition: '<Root>/RT7' */
      i = mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_ActiveBufIdx << 1U;
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[0] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[i];
      mcb_pmsm_foc_qep_dyno_f28069m_B.RT7[1] =
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT7_Buffer[i + 1];

      /* S-Function (HardwareInterrupt_sfun): '<S16>/Hardware Interrupt' */
      mcb_pmsm_FOCAlgorithmMotor2();

      /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S16>/Hardware Interrupt' */

      /* RateTransition generated from: '<Root>/RT8' */
      for (i = 0; i < 6; i++) {
        mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_Buffer[i +
          (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_ActiveBufIdx == 0) * 6] =
          mcb_pmsm_foc_qep_dyno_f28069m_B.mtr2_VI_debug_k[i];
      }

      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_1_ActiveBufIdx == 0);

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.T_output;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_2_ActiveBufIdx == 0);

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.P_output;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_3_ActiveBufIdx == 0);

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.Add1_i;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_4_ActiveBufIdx == 0);

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer
        [(mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_ActiveBufIdx == 0) << 1U] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[0];
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_Buffer[1 +
        ((mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_ActiveBufIdx == 0) << 1U)] =
        mcb_pmsm_foc_qep_dyno_f28069m_B.InvertingNoninvertingCurrentmea[1];
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_5_ActiveBufIdx == 0);

      /* RateTransition generated from: '<Root>/RT8' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.Add_c4;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT8_6_ActiveBufIdx == 0);
    }
  }

  /* Clear occurred EOC event event */
  AdcRegs.ADCINTFLGCLR.bit.ADCINT2= 1;

  /* Clear occurred Overflow event event */
  AdcRegs.ADCINTOVFCLR.bit.ADCINT2= 1;
  DINT;
  /* disable global interrupts during context switch, CPU will enable global interrupts after exiting ISR */
  PieCtrlRegs.PIEIER1.all = PIEIER1_stack_save;
                                   /*restore PIEIER register that was modified*/
  PieCtrlRegs.PIEIER9.all = PIEIER9_stack_save;
                                   /*restore PIEIER register that was modified*/
  HWI_TIC28x_AcknowledgeIrq(33);
}

/* Hardware Interrupt Block: '<S18>/Hardware Interrupt' */
interrupt void SCIRXINTA(void)
{
  /* Event: Default Event */
  if (1 == runModel) {
    {
      /* S-Function (HardwareInterrupt_sfun): '<S18>/Hardware Interrupt' */

      /* Output and update for function-call system: '<Root>/Serial Receive' */

      /* S-Function (c28xsci_rx): '<S501>/SCI Receive' */
      {
        int16_T i;
        int16_T errFlg = NOERROR;
        uint16_T isHeadReceived = 1U;

        //get data as uint16 in recBuff
        uint16_T recbuff[2];
        for (i = 0; i < 2; i++) {
          recbuff[i] = 0U;
        }

        errFlg = NOERROR;

        /* Receiving data: For uint32 and uint16, rcvBuff will contain uint16 data */
        if (isHeadReceived) {
          errFlg = scia_rcv(recbuff, 4, 2);
          asm(" NOP");
          if ((errFlg == NOERROR) || (errFlg == PARTIALDATA)) {
            memcpy( &mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[0], recbuff,2);
          }
        }
      }

      /* S-Function (sfix_bitop): '<S507>/Bitwise Operator' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator =
        mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[1] & 1U;

      /* DataTypeConversion: '<S507>/Data Type Conversion3' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3_o =
        (mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator != 0U);

      /* DataStoreWrite: '<S7>/Data Store Write' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.Enable =
        mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion3_o;

      /* S-Function (sfix_bitop): '<S507>/Bitwise Operator1' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator1 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[1] & 240U;

      /* ArithShift: '<S507>/Shift Arithmetic1' incorporates:
       *  S-Function (sfix_bitop): '<S507>/Bitwise Operator1'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic1 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator1 >> 4U;

      /* DataStoreWrite: '<S502>/Data Store Write2' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.Debug_signals =
        mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic1;

      /* S-Function (sfix_bitop): '<S507>/Bitwise Operator2' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator2 =
        mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[1] & 6U;

      /* ArithShift: '<S507>/Shift Arithmetic' incorporates:
       *  S-Function (sfix_bitop): '<S507>/Bitwise Operator2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic =
        mcb_pmsm_foc_qep_dyno_f28069m_B.BitwiseOperator2 >> 1U;

      /* DataTypeConversion: '<S503>/Data Type Conversion2' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion2 = (int16_T)
        mcb_pmsm_foc_qep_dyno_f28069m_B.SCIReceive[0];

      /* DataTypeConversion: '<S503>/Data Type Conversion1' incorporates:
       *  DataTypeConversion: '<S503>/Data Type Conversion2'
       */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1 = (real32_T)
        mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion2 * 0.000244140625F;

      /* If: '<S502>/If' */
      if (mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic == 1U) {
        /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem' incorporates:
         *  ActionPort: '<S504>/Action Port'
         */
        /* DataStoreWrite: '<S504>/Data Store Write2' */
        mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef =
          mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1;

        /* End of Outputs for SubSystem: '<S502>/If Action Subsystem' */
      } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic == 2U) {
        /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S505>/Action Port'
         */
        /* DataStoreWrite: '<S505>/Data Store Write2' */
        mcb_pmsm_foc_qep_dyno_f28_DWork.IqRef =
          mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1;

        /* End of Outputs for SubSystem: '<S502>/If Action Subsystem1' */
      } else if (mcb_pmsm_foc_qep_dyno_f28069m_B.ShiftArithmetic == 0U) {
        /* Outputs for IfAction SubSystem: '<S502>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S506>/Action Port'
         */
        /* DataStoreWrite: '<S506>/Data Store Write2' */
        mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef =
          mcb_pmsm_foc_qep_dyno_f28069m_B.DataTypeConversion1;

        /* End of Outputs for SubSystem: '<S502>/If Action Subsystem2' */
      }

      /* End of If: '<S502>/If' */

      /* DataStoreRead: '<S7>/Data Store Read2' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2 =
        mcb_pmsm_foc_qep_dyno_f28_DWork.SpeedRef;

      /* DataStoreRead: '<S7>/Data Store Read1' */
      mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1 =
        mcb_pmsm_foc_qep_dyno_f28_DWork.IqRef;

      /* End of Outputs for S-Function (HardwareInterrupt_sfun): '<S18>/Hardware Interrupt' */

      /* RateTransition: '<Root>/RT3' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead2;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT3_ActiveBufIdx == 0);

      /* RateTransition: '<Root>/RT9' */
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_Buffer[mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_ActiveBufIdx
        == 0] = mcb_pmsm_foc_qep_dyno_f28069m_B.DataStoreRead1;
      mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_ActiveBufIdx =
        (mcb_pmsm_foc_qep_dyno_f28_DWork.RT9_ActiveBufIdx == 0);
    }
  }

  /* Clear occurred Rx event event */
  EALLOW;
  SciaRegs.SCIFFRX.bit.RXFFINTCLR= 1;
  EDIS;

  /* Clear occurred Rx FIFO overflow event */
  EALLOW;
  SciaRegs.SCIFFRX.bit.RXFFOVRCLR= 1;
  EDIS;
  HWI_TIC28x_AcknowledgeIrq(96);
}

void mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts (void)
{
  HWI_TIC28x_DisableIRQ(32);
  HWI_TIC28x_DisableIRQ(33);
  HWI_TIC28x_DisableIRQ(96);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
