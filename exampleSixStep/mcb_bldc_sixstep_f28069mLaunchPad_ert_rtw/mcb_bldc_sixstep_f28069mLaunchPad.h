/*
 * File: mcb_bldc_sixstep_f28069mLaunchPad.h
 *
 * Code generated for Simulink model 'mcb_bldc_sixstep_f28069mLaunchPad'.
 *
 * Model version                  : 7.2
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Mar 17 09:31:22 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mcb_bldc_sixstep_f28069mLaunchPad_h_
#define RTW_HEADER_mcb_bldc_sixstep_f28069mLaunchPad_h_
#ifndef mcb_bldc_sixstep_f28069mLaunchPad_COMMON_INCLUDES_
#define mcb_bldc_sixstep_f28069mLaunchPad_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "F2806x_Device.h"
#include "F2806x_Gpio.h"
#include "DSP28xx_SciUtil.h"
#include "F2806x_Examples.h"
#include "IQmathLib.h"
#include "MW_SPI.h"
#endif                  /* mcb_bldc_sixstep_f28069mLaunchPad_COMMON_INCLUDES_ */

#include "MW_c2000ISR.h"
#include "mcb_bldc_sixstep_f28069mLaunchPad_types.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include <string.h>
#include <stddef.h>
#include "zero_crossing_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define mcb_bldc_sixstep_f28069mLaunchPad_M (mcb_bldc_sixstep_f28069mLaun_M)

extern void init_SCI(void);
extern void init_SCI_GPIO(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);

/* Block signals for system '<S20>/Bit Extract' */
typedef struct {
  uint16_T ShiftArithmetic;            /* '<S33>/Shift Arithmetic' */
  uint16_T A;                          /* '<S33>/Bitwise AND1' */
  uint16_T ShiftArithmetic1;           /* '<S33>/Shift Arithmetic1' */
  uint16_T B;                          /* '<S33>/Bitwise AND2' */
  uint16_T C;                          /* '<S33>/Bitwise AND3' */
  boolean_T DataTypeConversion;        /* '<S33>/Data Type Conversion' */
  boolean_T DataTypeConversion1;       /* '<S33>/Data Type Conversion1' */
  boolean_T DataTypeConversion2;       /* '<S33>/Data Type Conversion2' */
} rtB_BitExtract_mcb_bldc_sixstep;

/* Block signals for system '<S215>/SPI Master Transfer' */
typedef struct {
  uint16_T SPIMasterTransfer;          /* '<S215>/SPI Master Transfer' */
} rtB_SPIMasterTransfer_mcb_bldc_;

/* Block states (default storage) for system '<S215>/SPI Master Transfer' */
typedef struct {
  codertarget_tic2000_blocks_SPIM obj; /* '<S215>/SPI Master Transfer' */
  boolean_T objisempty;                /* '<S215>/SPI Master Transfer' */
} rtDW_SPIMasterTransfer_mcb_bldc;

/* Block signals for system '<Root>/Speed Control' */
typedef struct {
  real32_T Switch;                     /* '<S232>/Switch' */
  real32_T Product;                    /* '<S287>/Product' */
  real32_T UnitDelay;                  /* '<S287>/Unit Delay' */
  real32_T Product1;                   /* '<S287>/Product1' */
  real32_T Add1;                       /* '<S287>/Add1' */
  real32_T Sum;                        /* '<S231>/Sum' */
  real32_T PProdOut;                   /* '<S273>/PProd Out' */
  real32_T Ki2;                        /* '<S231>/Ki2' */
  real32_T Integrator;                 /* '<S268>/Integrator' */
  real32_T Sum_j;                      /* '<S277>/Sum' */
  real32_T DeadZone;                   /* '<S261>/DeadZone' */
  real32_T IProdOut;                   /* '<S265>/IProd Out' */
  real32_T Switch_a;                   /* '<S259>/Switch' */
  real32_T Saturation;                 /* '<S275>/Saturation' */
  int16_T Switch1;                     /* '<S259>/Switch1' */
  int16_T Switch2;                     /* '<S259>/Switch2' */
  boolean_T DataStoreRead2;            /* '<S231>/Data Store Read2' */
  boolean_T DataStoreRead1;            /* '<S232>/Data Store Read1' */
  boolean_T LogicalOperator;           /* '<S231>/Logical Operator' */
  boolean_T RelationalOperator;        /* '<S259>/Relational Operator' */
  boolean_T fixforDTpropagationissue;/* '<S259>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                    /* '<S259>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S259>/Equal1' */
  boolean_T AND3;                      /* '<S259>/AND3' */
} rtB_SpeedControl_mcb_bldc_sixst;

/* Block states (default storage) for system '<Root>/Speed Control' */
typedef struct {
  real32_T UnitDelay_DSTATE;           /* '<S287>/Unit Delay' */
  real32_T Integrator_DSTATE;          /* '<S268>/Integrator' */
  int16_T Integrator_PrevResetState;   /* '<S268>/Integrator' */
} rtDW_SpeedControl_mcb_bldc_sixs;

/* Block signals (default storage) */
typedef struct {
  uint32_T DigitalInput2[2];           /* '<S204>/Digital Input2' */
  uint32_T DigitalInput3;              /* '<S204>/Digital Input3' */
  uint32_T PositionToCount;            /* '<S178>/PositionToCount' */
  uint32_T Delay;                      /* '<S178>/Delay' */
  uint32_T ShiftArithmetic;            /* '<S120>/Shift Arithmetic' */
  uint32_T ShiftArithmetic1;           /* '<S120>/Shift Arithmetic1' */
  uint32_T Sum;                        /* '<S120>/Sum' */
  uint32_T UnitDelay;                  /* '<S119>/Unit Delay' */
  uint32_T Uk1;                        /* '<S172>/Delay Input1' */
  uint32_T speedCountDelay;            /* '<S121>/speedCountDelay' */
  uint32_T Delay_c;                    /* '<S119>/Delay' */
  uint32_T Sum_o;                      /* '<S119>/Sum' */
  uint32_T Sum_o0;                     /* '<S173>/Sum' */
  uint32_T UnitDelay1;                 /* '<S173>/Unit Delay1' */
  uint32_T Max;                        /* '<S125>/Max' */
  real32_T RT1;                        /* '<Root>/RT1' */
  real32_T RT6;                        /* '<Root>/RT6' */
  real32_T RT2;                        /* '<Root>/RT2' */
  real32_T DataTypeConversion1[2];     /* '<S228>/Data Type Conversion1' */
  real32_T DataTypeConversion1_l;      /* '<S6>/Data Type Conversion1' */
  real32_T Merge1;                     /* '<S10>/Merge1' */
  real32_T DataTypeConversion1_n[3];   /* '<S113>/Data Type Conversion1' */
  real32_T Idc_ref;                    /* '<S8>/Abs' */
  real32_T Sign;                       /* '<S8>/Sign' */
  real32_T Sum_o5;                     /* '<S113>/Sum' */
  real32_T IDC;                        /* '<S113>/Unary Minus' */
  real32_T Sum_c;                      /* '<S15>/Sum' */
  real32_T PProdOut;                   /* '<S75>/PProd Out' */
  real32_T Kp1;                        /* '<S15>/Kp1' */
  real32_T Integrator;                 /* '<S70>/Integrator' */
  real32_T Sum_e;                      /* '<S79>/Sum' */
  real32_T DeadZone;                   /* '<S63>/DeadZone' */
  real32_T IProdOut;                   /* '<S67>/IProd Out' */
  real32_T Switch;                     /* '<S61>/Switch' */
  real32_T Speed_PU;                   /* '<S1>/Input Scaling' */
  real32_T Saturation;                 /* '<S77>/Saturation' */
  real32_T DataTypeConversion1_o[6];   /* '<S8>/Data Type Conversion1' */
  real32_T duty[6];                    /* '<S8>/Product' */
  real32_T DTC;                        /* '<S194>/DTC' */
  real32_T Product;                    /* '<S177>/Product' */
  real32_T DTC_a;                      /* '<S199>/DTC' */
  real32_T SpeedGain;                  /* '<S178>/SpeedGain' */
  real32_T Product_g;                  /* '<S181>/Product' */
  real32_T UnitDelay_i;                /* '<S181>/Unit Delay' */
  real32_T Product1;                   /* '<S181>/Product1' */
  real32_T Add1;                       /* '<S181>/Add1' */
  real32_T Switch_f;                   /* '<S183>/Switch' */
  real32_T Merge;                      /* '<S184>/Merge' */
  real32_T Numberofpolepairs;          /* '<S189>/Number of pole pairs' */
  real32_T Floor;                      /* '<S185>/Floor' */
  real32_T Add;                        /* '<S185>/Add' */
  real32_T Merge_a;                    /* '<S116>/Merge' */
  real32_T Merge1_c;                   /* '<S116>/Merge1' */
  real32_T Product_n;                  /* '<S171>/Product' */
  real32_T UnitDelay_iq;               /* '<S171>/Unit Delay' */
  real32_T Product1_n;                 /* '<S171>/Product1' */
  real32_T Add1_j;                     /* '<S171>/Add1' */
  real32_T currentSpeedData;           /* '<S124>/currentSpeedData' */
  real32_T Divide;                     /* '<S124>/Divide' */
  real32_T SpeedGain_c;                /* '<S124>/SpeedGain' */
  real32_T Merge1_k;                   /* '<S137>/Merge1' */
  real32_T Saturation_i;               /* '<S137>/Saturation' */
  real32_T Merge_aa;                   /* '<S137>/Merge' */
  real32_T countData;                  /* '<S140>/countData' */
  real32_T currentSpeedData_f;         /* '<S140>/currentSpeedData' */
  real32_T Divide_k;                   /* '<S140>/Divide' */
  real32_T countData_g;                /* '<S141>/countData' */
  real32_T previousSpeedData;          /* '<S141>/previousSpeedData' */
  real32_T Divide_ke;                  /* '<S141>/Divide' */
  real32_T currentSpeedData_k;         /* '<S141>/currentSpeedData' */
  real32_T Divide1;                    /* '<S141>/Divide1' */
  real32_T Sum_b;                      /* '<S141>/Sum' */
  real32_T Gain1;                      /* '<S141>/Gain1' */
  real32_T Sum1;                       /* '<S141>/Sum1' */
  real32_T Product_j;                  /* '<S141>/Product' */
  real32_T Merge1_p;                   /* '<S138>/Merge1' */
  real32_T Merge1_o;                   /* '<S139>/Merge1' */
  int32_T DataTypeConversion[3];       /* '<S113>/Data Type Conversion' */
  int32_T Add_g[3];                    /* '<S113>/Add' */
  int32_T Q17perunitconversion[3];     /* '<S113>/Q17 per unit conversion' */
  int32_T SpeedCount;                  /* '<S178>/SpeedCount' */
  uint16_T Divide_l;                   /* '<S214>/Divide' */
  uint16_T Divide1_a;                  /* '<S214>/Divide1' */
  uint16_T Divide2;                    /* '<S214>/Divide2' */
  uint16_T ForIterator;                /* '<S217>/For Iterator' */
  uint16_T IAIBMeasurement[2];         /* '<S217>/IA//IB Measurement' */
  uint16_T ICMeasurement;              /* '<S217>/IC Measurement' */
  uint16_T Memory;                     /* '<S224>/Memory' */
  uint16_T Sum_p;                      /* '<S224>/Sum' */
  uint16_T Memory1;                    /* '<S224>/Memory1' */
  uint16_T Sum1_c;                     /* '<S224>/Sum1' */
  uint16_T Memory2;                    /* '<S224>/Memory2' */
  uint16_T Sum2;                       /* '<S224>/Sum2' */
  uint16_T SCIReceive[2];              /* '<S230>/SCI Receive' */
  uint16_T Output;                     /* '<S106>/Output' */
  uint16_T eQEP_o1;                    /* '<S203>/eQEP' */
  uint16_T eQEP_o2;                    /* '<S203>/eQEP' */
  uint16_T DataStoreRead;              /* '<S113>/Data Store Read' */
  uint16_T DataStoreRead1;             /* '<S113>/Data Store Read1' */
  uint16_T DataStoreRead2;             /* '<S113>/Data Store Read2' */
  uint16_T IAIBMeasurement_p[2];       /* '<S203>/IA//IB Measurement' */
  uint16_T ICMeasurement_l;            /* '<S203>/IC Measurement' */
  uint16_T DataTypeConversion3[2];     /* '<S108>/Data Type Conversion3' */
  uint16_T SCI_Tx_Data[3];             /* '<S9>/Merge' */
  uint16_T SCI_Tx_Iteration;           /* '<S9>/Merge1' */
  uint16_T FixPtSum1;                  /* '<S111>/FixPt Sum1' */
  uint16_T FixPtSwitch;                /* '<S112>/FixPt Switch' */
  uint16_T Switch1[6];                 /* '<S200>/Switch1' */
  uint16_T IndexVector;                /* '<S202>/Index Vector' */
  uint16_T Add_m;                      /* '<S202>/Add' */
  uint16_T Scale_to_PWM_Counter_PRD[6];/* '<S200>/Scale_to_PWM_Counter_PRD' */
  uint16_T Merge_g;                    /* '<S177>/Merge' */
  uint16_T Sum3;                       /* '<S191>/Sum3' */
  uint16_T Sum7;                       /* '<S191>/Sum7' */
  uint16_T DataTypeConversion1_l0;     /* '<S117>/Data Type Conversion1' */
  uint16_T DataTypeConversion2;        /* '<S117>/Data Type Conversion2' */
  uint16_T DataTypeConversion_a;       /* '<S156>/Data Type Conversion' */
  uint16_T Switch_m;                   /* '<S121>/Switch' */
  uint16_T DelayOneStep;               /* '<S122>/Delay One Step' */
  uint16_T watchdogcheck;              /* '<S125>/watchdog check' */
  uint16_T Sum_bk;                     /* '<S122>/Sum' */
  uint16_T Merge_f;                    /* '<S156>/Merge' */
  uint16_T Merge_n;                    /* '<S158>/Merge' */
  uint16_T Merge1_n;                   /* '<S158>/Merge1' */
  uint16_T Merge3;                     /* '<S158>/Merge3' */
  uint16_T speedcheck;                 /* '<S125>/speed check' */
  uint16_T Data[2];                    /* '<S107>/Data' */
  uint16_T Data_f[2];                  /* '<S109>/Data' */
  uint16_T Data_fw[2];                 /* '<S110>/Data' */
  int16_T DataTypeConversion2_c[2];    /* '<S228>/Data Type Conversion2' */
  int16_T DataTypeConversion_l[2];     /* '<S108>/Data Type Conversion' */
  int16_T WhileIterator;               /* '<S202>/While Iterator' */
  int16_T UnitDelay_n;                 /* '<S114>/Unit Delay' */
  int16_T Merge1_f;                    /* '<S156>/Merge1' */
  int16_T Merge2;                      /* '<S158>/Merge2' */
  uint16_T Merge_e;                    /* '<S87>/Merge' */
  uint16_T Merge_j;                    /* '<S17>/Merge' */
  int16_T Switch1_b;                   /* '<S61>/Switch1' */
  int16_T Switch2;                     /* '<S61>/Switch2' */
  boolean_T NOT;                       /* '<S213>/NOT' */
  boolean_T DataTypeConversion3_m;     /* '<S6>/Data Type Conversion3' */
  boolean_T Merge_fv[6];               /* '<S8>/Merge' */
  boolean_T DataStoreRead1_l;          /* '<S15>/Data Store Read1' */
  boolean_T LogicalOperator;           /* '<S15>/Logical Operator' */
  boolean_T RelationalOperator;        /* '<S61>/Relational Operator' */
  boolean_T fixforDTpropagationissue; /* '<S61>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                     /* '<S61>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S61>/Equal1' */
  boolean_T AND3;                      /* '<S61>/AND3' */
  boolean_T Enable;                    /* '<S200>/Enable' */
  boolean_T DataTypeConversion4;       /* '<S116>/Data Type Conversion4' */
  boolean_T FixPtRelationalOperator;   /* '<S172>/FixPt Relational Operator' */
  boolean_T Merge3_p;                  /* '<S156>/Merge3' */
  boolean_T DataTypeConversion_j;      /* '<S121>/Data Type Conversion' */
  boolean_T validityDelay;             /* '<S121>/validityDelay' */
  boolean_T DelayOneStep1;             /* '<S122>/Delay One Step1' */
  boolean_T OR;                        /* '<S122>/OR' */
  boolean_T Compare;                   /* '<S126>/Compare' */
  boolean_T DataStoreRead_n;           /* '<S119>/Data Store Read' */
  boolean_T AND;                       /* '<S119>/AND' */
  boolean_T RelationalOperator_k;      /* '<S158>/Relational Operator' */
  boolean_T LogicalOperator_l;         /* '<S121>/Logical Operator' */
  boolean_T Merge_ng[3];               /* '<S90>/Merge' */
  boolean_T Merge_c[3];                /* '<S20>/Merge' */
  rtB_SpeedControl_mcb_bldc_sixst SpeedControl;/* '<Root>/Speed Control' */
  rtB_SPIMasterTransfer_mcb_bldc_ SPIMasterTransfer1;/* '<S215>/SPI Master Transfer' */
  rtB_SPIMasterTransfer_mcb_bldc_ SPIMasterTransfer;/* '<S215>/SPI Master Transfer' */
  rtB_BitExtract_mcb_bldc_sixstep BitExtract_i;/* '<S90>/Bit Extract' */
  rtB_BitExtract_mcb_bldc_sixstep BitExtract;/* '<S20>/Bit Extract' */
} BlockIO_mcb_bldc_sixstep_f28069;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T Integrator_DSTATE;          /* '<S70>/Integrator' */
  real32_T UnitDelay_DSTATE;           /* '<S181>/Unit Delay' */
  uint32_T Delay_DSTATE[20];           /* '<S178>/Delay' */
  uint32_T UnitDelay_DSTATE_l;         /* '<S119>/Unit Delay' */
  uint32_T Delay_DSTATE_l;             /* '<S119>/Delay' */
  uint32_T UnitDelay1_DSTATE;          /* '<S173>/Unit Delay1' */
  volatile real32_T RT1_Buffer[2];     /* '<Root>/RT1' */
  volatile real32_T RT6_Buffer[2];     /* '<Root>/RT6' */
  volatile real32_T RT2_Buffer[2];     /* '<Root>/RT2' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<S226>/Digital Output1' */
  int32_T DigitalOutput_FRAC_LEN;      /* '<S215>/Digital Output' */
  int32_T Add_DWORK1[3];               /* '<S113>/Add' */
  int32_T DigitalOutput_FRAC_LEN_f;    /* '<S200>/Digital Output' */
  int32_T SpeedCount_DWORK1;           /* '<S178>/SpeedCount' */
  int16_T UnitDelay_DSTATE_dg;         /* '<S114>/Unit Delay' */
  uint16_T Output_DSTATE;              /* '<S106>/Output' */
  uint16_T DelayOneStep_DSTATE;        /* '<S122>/Delay One Step' */
  volatile int16_T RT1_ActiveBufIdx;   /* '<Root>/RT1' */
  volatile int16_T RT1_semaphoreTaken; /* '<Root>/RT1' */
  volatile int16_T RT6_ActiveBufIdx;   /* '<Root>/RT6' */
  volatile int16_T RT2_ActiveBufIdx;   /* '<Root>/RT2' */
  uint16_T IaOffset;                   /* '<Root>/Data Store Memory1' */
  uint16_T IbOffset;                   /* '<Root>/Data Store Memory2' */
  uint16_T IcOffset;                   /* '<Root>/Data Store Memory9' */
  uint16_T Memory_PreviousInput;       /* '<S224>/Memory' */
  uint16_T Memory1_PreviousInput;      /* '<S224>/Memory1' */
  uint16_T Memory2_PreviousInput;      /* '<S224>/Memory2' */
  uint16_T Add_DWORK1_o;               /* '<S202>/Add' */
  uint16_T CircBufIdx;                 /* '<S178>/Delay' */
  boolean_T DelayOneStep1_DSTATE;      /* '<S122>/Delay One Step1' */
  int16_T Integrator_PrevResetState;   /* '<S70>/Integrator' */
  boolean_T Enable;                    /* '<Root>/Data Store Memory29' */
  rtDW_SpeedControl_mcb_bldc_sixs SpeedControl;/* '<Root>/Speed Control' */
  rtDW_SPIMasterTransfer_mcb_bldc SPIMasterTransfer1;/* '<S215>/SPI Master Transfer' */
  rtDW_SPIMasterTransfer_mcb_bldc SPIMasterTransfer;/* '<S215>/SPI Master Transfer' */
} D_Work_mcb_bldc_sixstep_f28069m;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S119>/Delay' */
} PrevZCSigStates_mcb_bldc_sixste;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T SpeedConstData;       /* '<S124>/SpeedConstData' */
  const uint16_T Width;                /* '<S9>/Width' */
} ConstBlockIO_mcb_bldc_sixstep_f;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S34>/SC1'
   *   '<S35>/SC2'
   *   '<S104>/SB1'
   *   '<S105>/SB2'
   */
  boolean_T pooled33[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S34>/SC2'
   *   '<S35>/SC1'
   *   '<S104>/SA1'
   *   '<S105>/SA2'
   */
  boolean_T pooled34[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S104>/SA2'
   *   '<S105>/SA1'
   */
  boolean_T pooled35[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S104>/SB2'
   *   '<S105>/SB1'
   */
  boolean_T pooled36[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S104>/SC1'
   *   '<S105>/SC2'
   */
  boolean_T pooled37[8];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S104>/SC2'
   *   '<S105>/SC1'
   */
  boolean_T pooled38[8];
} ConstParam_mcb_bldc_sixstep_f28;

/* Real-time Model Data Structure */
struct tag_RTM_mcb_bldc_sixstep_f28069 {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO_mcb_bldc_sixstep_f28069 mcb_bldc_sixstep_f28069mLaunc_B;

/* Block states (default storage) */
extern D_Work_mcb_bldc_sixstep_f28069m mcb_bldc_sixstep_f28069mL_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_mcb_bldc_sixste mcb_bldc_sixstep_PrevZCSigState;
extern const ConstBlockIO_mcb_bldc_sixstep_f mcb_bldc_sixstep_f28069m_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam_mcb_bldc_sixstep_f28 mcb_bldc_sixstep_f28069m_ConstP;

/* External function called from main */
extern void mcb_bldc_sixstep_f28069mLaunchPad_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void mcb_bldc_sixstep_f28069mLaunchPad_initialize(void);
extern void mcb_bldc_sixstep_f28069mLaunchPad_step0(void);
extern void mcb_bldc_sixstep_f28069mLaunchPad_step1(void);
extern void mcb_bldc_sixstep_f28069mLaunchPad_terminate(void);

/* Real-time Model object */
extern RT_MODEL_mcb_bldc_sixstep_f2806 *const mcb_bldc_sixstep_f28069mLaun_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  interrupt void ADCINT1(void);
  interrupt void SCIRXINTA(void);
  void mcb_bldc_sixstep_f28069mLaunchPad_configure_interrupts (void);
  void mcb_bldc_sixstep_f28069mLaunchPad_unconfigure_interrupts (void);

#ifdef __cpluscplus

}

#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'mcb_bldc_sixstep_f28069mLaunchPad'
 * '<S1>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control'
 * '<S2>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt'
 * '<S3>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init'
 * '<S4>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Heartbeat LED'
 * '<S5>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Inverter and Motor - Plant Model'
 * '<S6>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Serial Receive'
 * '<S7>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control'
 * '<S8>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System'
 * '<S9>'   : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging'
 * '<S10>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling'
 * '<S11>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Inverter'
 * '<S12>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/SCI_Tx'
 * '<S13>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Sensor Driver Blocks'
 * '<S14>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation'
 * '<S15>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc'
 * '<S16>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation'
 * '<S17>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation'
 * '<S18>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/HALL'
 * '<S19>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position'
 * '<S20>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Sector2vector'
 * '<S21>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/SwitchingSequence'
 * '<S22>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant'
 * '<S23>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120'
 * '<S24>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem'
 * '<S25>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem1'
 * '<S26>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem2'
 * '<S27>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem3'
 * '<S28>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem4'
 * '<S29>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem5'
 * '<S30>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem6'
 * '<S31>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Sector2vector/Bit Extract'
 * '<S32>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Sector2vector/Default '
 * '<S33>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/Sector2vector/Bit Extract/Extract Bits'
 * '<S34>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/SwitchingSequence/negative'
 * '<S35>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Hall_Commutation/Six Step Commutation/SwitchingSequence/positive'
 * '<S36>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset'
 * '<S37>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S38>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S39>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S40>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S41>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S42>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S43>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S44>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S45>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S46>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S47>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S48>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S49>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S50>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S51>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S52>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S53>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S54>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S55>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S56>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S57>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S58>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S59>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S60>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S61>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S62>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S63>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S64>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S65>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S66>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S67>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S68>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S69>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S70>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S71>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S72>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S73>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S74>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S75>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S76>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S77>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S78>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S79>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S80>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S81>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S82>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S83>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S84>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S85>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S86>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/PI_Controller_Idc/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S87>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation'
 * '<S88>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/HALL'
 * '<S89>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position'
 * '<S90>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Sector2vector'
 * '<S91>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/SwitchingSequence'
 * '<S92>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant'
 * '<S93>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120'
 * '<S94>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem'
 * '<S95>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem1'
 * '<S96>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem2'
 * '<S97>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem3'
 * '<S98>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem4'
 * '<S99>'  : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem5'
 * '<S100>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Position/PositionSectorvariant/Sector120/Enabled Subsystem6'
 * '<S101>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Sector2vector/Bit Extract'
 * '<S102>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Sector2vector/Default '
 * '<S103>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/Sector2vector/Bit Extract/Extract Bits'
 * '<S104>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/SwitchingSequence/negative'
 * '<S105>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Control_System/Pos_Commutation/Six Step Commutation/SwitchingSequence/positive'
 * '<S106>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Counter Limited'
 * '<S107>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Data'
 * '<S108>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Data_Conditioning'
 * '<S109>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/End'
 * '<S110>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Start'
 * '<S111>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Counter Limited/Increment Real World'
 * '<S112>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Data_Logging/Counter Limited/Wrap To Zero'
 * '<S113>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Convert ADC value to PU'
 * '<S114>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback'
 * '<S115>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback'
 * '<S116>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position'
 * '<S117>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity'
 * '<S118>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/IIR Filter'
 * '<S119>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Speed Counter'
 * '<S120>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Subsystem'
 * '<S121>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/ExtrapolationOrder'
 * '<S122>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Software Watchdog Timer'
 * '<S123>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant'
 * '<S124>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position'
 * '<S125>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/VaidityCheck'
 * '<S126>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Software Watchdog Timer/Compare To Zero'
 * '<S127>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction'
 * '<S128>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 1'
 * '<S129>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 2'
 * '<S130>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 3'
 * '<S131>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 4'
 * '<S132>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 5'
 * '<S133>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 6'
 * '<S134>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are not valid Position will be set to the middle of the Hall quadrant/independent Direction/Hall Value of 7'
 * '<S135>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem'
 * '<S136>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/If Action Subsystem1'
 * '<S137>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1'
 * '<S138>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction'
 * '<S139>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction'
 * '<S140>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/first_order'
 * '<S141>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/second_order'
 * '<S142>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 1'
 * '<S143>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 2'
 * '<S144>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 3'
 * '<S145>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 4'
 * '<S146>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 5'
 * '<S147>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 6'
 * '<S148>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/+ve Direction/Hall Value of 7'
 * '<S149>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 1'
 * '<S150>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 2'
 * '<S151>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 3'
 * '<S152>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 4'
 * '<S153>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 5'
 * '<S154>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 6'
 * '<S155>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Speed and Position/Speed and direction are valid Use speed to extrapolate position/Subsystem1/-ve Direction/Hall Value of 7'
 * '<S156>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem'
 * '<S157>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Bad hall (glitch or wrong connection)'
 * '<S158>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls'
 * '<S159>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem'
 * '<S160>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem1'
 * '<S161>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem2'
 * '<S162>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem3'
 * '<S163>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem4'
 * '<S164>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem5'
 * '<S165>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem6'
 * '<S166>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem7'
 * '<S167>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/If Action Subsystem8'
 * '<S168>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Hall Validity/Subsystem/Valid Halls/Switch Case Action Subsystem'
 * '<S169>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/IIR Filter/IIR Filter'
 * '<S170>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/IIR Filter/IIR Filter/Low-pass'
 * '<S171>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S172>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Speed Counter/Detect Change'
 * '<S173>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/Hall Feedback/Speed Counter/Enabled Subsystem'
 * '<S174>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed'
 * '<S175>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/IIR Filter'
 * '<S176>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position'
 * '<S177>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder'
 * '<S178>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Speed Measurement'
 * '<S179>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/IIR Filter/IIR Filter'
 * '<S180>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/IIR Filter/IIR Filter/Low-pass'
 * '<S181>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S182>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec'
 * '<S183>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point'
 * '<S184>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset'
 * '<S185>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec'
 * '<S186>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem'
 * '<S187>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem1'
 * '<S188>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem'
 * '<S189>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem/Dialog'
 * '<S190>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/DT_Handle'
 * '<S191>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/PositionNoReset'
 * '<S192>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/PositionResetAtIndex'
 * '<S193>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/Variant Subsystem'
 * '<S194>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/DT_Handle/floating-point'
 * '<S195>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem'
 * '<S196>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem/Dialog'
 * '<S197>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Quadrature Decoder/Variant Subsystem/Dialog'
 * '<S198>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Speed Measurement/DT_Handle'
 * '<S199>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Input Scaling/QEP Feedback/ Calculate Position and Speed/Speed Measurement/DT_Handle/floating-point'
 * '<S200>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Inverter/ Code Generation'
 * '<S201>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/SCI_Tx/ Code Generation'
 * '<S202>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/SCI_Tx/ Code Generation/CodeGeneration'
 * '<S203>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Sensor Driver Blocks/Sensor Driver Blocks (codegen)'
 * '<S204>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Current Control/Sensor Driver Blocks/Sensor Driver Blocks (codegen)/Read Halls'
 * '<S205>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation'
 * '<S206>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_ADCINT1'
 * '<S207>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_SCIRXINTA'
 * '<S208>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_ADCINT1/ECSoC'
 * '<S209>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_ADCINT1/ECSoC/ECSimCodegen'
 * '<S210>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_SCIRXINTA/ECSoC'
 * '<S211>' : 'mcb_bldc_sixstep_f28069mLaunchPad/HW_Interrupt/Code generation/HWI_SCIRXINTA/ECSoC/ECSimCodegen'
 * '<S212>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem'
 * '<S213>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation'
 * '<S214>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset '
 * '<S215>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/DRV Enable'
 * '<S216>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Default ADC Offset'
 * '<S217>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /For Iterator Subsystem'
 * '<S218>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem'
 * '<S219>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem1'
 * '<S220>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem2'
 * '<S221>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem3'
 * '<S222>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem4'
 * '<S223>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /If Action Subsystem5'
 * '<S224>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Hardware Init/Variant Subsystem/Code Generation/Calculate ADC Offset /For Iterator Subsystem/If Action Subsystem'
 * '<S225>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Heartbeat LED/Heartbeat LED'
 * '<S226>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Heartbeat LED/Heartbeat LED/Code generation'
 * '<S227>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Inverter and Motor - Plant Model/Codegeneration'
 * '<S228>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Serial Receive/Data_Conditioning'
 * '<S229>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Serial Receive/SCI_Rx'
 * '<S230>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Serial Receive/SCI_Rx/Code Generation'
 * '<S231>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed'
 * '<S232>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/Speed_Ref_Selector'
 * '<S233>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset'
 * '<S234>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Zero_Cancellation'
 * '<S235>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S236>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S237>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S238>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S239>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S240>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S241>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S242>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S243>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S244>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S245>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S246>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S247>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S248>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S249>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S250>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S251>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S252>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S253>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S254>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S255>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S256>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S257>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S258>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S259>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S260>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S261>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S262>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S263>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S264>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S265>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S266>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S267>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S268>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S269>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S270>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S271>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S272>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S273>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S274>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S275>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S276>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S277>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S278>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S279>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S280>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S281>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S282>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S283>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S284>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S285>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Zero_Cancellation/IIR Filter'
 * '<S286>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Zero_Cancellation/IIR Filter/Low-pass'
 * '<S287>' : 'mcb_bldc_sixstep_f28069mLaunchPad/Speed Control/PI_Controller_Speed/Zero_Cancellation/IIR Filter/Low-pass/IIR Low Pass Filter'
 */
#endif                     /* RTW_HEADER_mcb_bldc_sixstep_f28069mLaunchPad_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
