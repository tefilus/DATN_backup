/*
 * File: mcb_pmsm_foc_qep_dyno_f28069m.h
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

#ifndef RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_h_
#define RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_h_
#ifndef mcb_pmsm_foc_qep_dyno_f28069m_COMMON_INCLUDES_
#define mcb_pmsm_foc_qep_dyno_f28069m_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "F2806x_Device.h"
#include "F2806x_Gpio.h"
#include "DSP28xx_SciUtil.h"
#include "F2806x_Examples.h"
#include "IQmathLib.h"
#include "MW_SPI.h"
#endif                      /* mcb_pmsm_foc_qep_dyno_f28069m_COMMON_INCLUDES_ */

#include "MW_c2000ISR.h"
#include "mcb_pmsm_foc_qep_dyno_f28069m_types.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include <string.h>
#include <stddef.h>
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

#define mcb_pmsm_foc_qep_dyno_f28069m_M (mcb_pmsm_foc_qep_dyno_f28069_M)

extern void init_SCI(void);
extern void init_SCI_GPIO(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);

/* Block signals for system '<S36>/Two phase CRL wrap' */
typedef struct {
  real32_T a_plus_2b;                  /* '<S37>/a_plus_2b' */
  real32_T one_by_sqrt3;               /* '<S37>/one_by_sqrt3' */
  real32_T algDD_o1;
  real32_T algDD_o2;
} rtB_TwophaseCRLwrap_mcb_pmsm_fo;

/* Block signals for system '<S38>/D//Q Axis Priority' */
typedef struct {
  real32_T Switch[2];                  /* '<S42>/Switch' */
  real32_T Switch2;                    /* '<S52>/Switch2' */
  real32_T Product;                    /* '<S51>/Product' */
  real32_T Sum;                        /* '<S51>/Sum' */
  real32_T Product2;                   /* '<S51>/Product2' */
  real32_T Merge;                      /* '<S51>/Merge' */
  real32_T Gain;                       /* '<S51>/Gain' */
  real32_T Switch_f;                   /* '<S52>/Switch' */
  real32_T Switch1;                    /* '<S53>/Switch1' */
  real32_T Sqrt;                       /* '<S53>/Sqrt' */
  real32_T Gain_j;                     /* '<S53>/Gain' */
  uint16_T DataTypeConversion;         /* '<S51>/Data Type Conversion' */
  boolean_T Compare;                   /* '<S47>/Compare' */
  boolean_T Compare_f;                 /* '<S48>/Compare' */
  boolean_T LowerRelop1;               /* '<S52>/LowerRelop1' */
  boolean_T RelationalOperator;        /* '<S51>/Relational Operator' */
  boolean_T UpperRelop;                /* '<S52>/UpperRelop' */
} rtB_DQAxisPriority_mcb_pmsm_foc;

/* Block signals for system '<S38>/D-Q Equivalence' */
typedef struct {
  real32_T Product[2];                 /* '<S45>/Product' */
  real32_T SquareRoot;                 /* '<S45>/Square Root' */
  real32_T Switch;                     /* '<S45>/Switch' */
  real32_T Reciprocal;                 /* '<S45>/Reciprocal' */
  uint16_T DataTypeConversion;         /* '<S41>/Data Type Conversion' */
  boolean_T RelationalOperator;        /* '<S41>/Relational Operator' */
} rtB_DQEquivalence_mcb_pmsm_foc_;

/* Block signals for system '<S32>/Two inputs CRL' */
typedef struct {
  real32_T qcos;                       /* '<S157>/qcos' */
  real32_T dsin;                       /* '<S157>/dsin' */
  real32_T sum_beta;                   /* '<S157>/sum_beta' */
  real32_T dcos;                       /* '<S157>/dcos' */
  real32_T qsin;                       /* '<S157>/qsin' */
  real32_T sum_alpha;                  /* '<S157>/sum_alpha' */
  real32_T Switch[2];                  /* '<S158>/Switch' */
  real32_T algDD_o1;
  real32_T algDD_o2;
} rtB_TwoinputsCRL_mcb_pmsm_foc_q;

/* Block signals for system '<S33>/Two inputs CRL' */
typedef struct {
  real32_T acos_n;                     /* '<S159>/acos' */
  real32_T bsin;                       /* '<S159>/bsin' */
  real32_T sum_Ds;                     /* '<S159>/sum_Ds' */
  real32_T bcos;                       /* '<S159>/bcos' */
  real32_T asin_p;                     /* '<S159>/asin' */
  real32_T sum_Qs;                     /* '<S159>/sum_Qs' */
  real32_T Switch[2];                  /* '<S160>/Switch' */
  real32_T algDD_o1;
  real32_T algDD_o2;
} rtB_TwoinputsCRL_mcb_pmsm_foc_o;

/* Block signals for system '<S162>/If Action Subsystem' */
typedef struct {
  real32_T Convert_back;               /* '<S164>/Convert_back' */
  int16_T Convert_uint16;              /* '<S164>/Convert_uint16' */
} rtB_IfActionSubsystem_mcb_pmsm_;

/* Block signals for system '<S162>/If Action Subsystem1' */
typedef struct {
  real32_T Convert_back;               /* '<S165>/Convert_back' */
  int16_T Convert_uint16;              /* '<S165>/Convert_uint16' */
} rtB_IfActionSubsystem1_mcb_pmsm;

/* Block signals for system '<S190>/IndexFinder' */
typedef struct {
  uint16_T Delay3;                     /* '<S193>/Delay3' */
  boolean_T Compare;                   /* '<S200>/Compare' */
  boolean_T Compare_k;                 /* '<S201>/Compare' */
  boolean_T AND;                       /* '<S193>/AND' */
} rtB_IndexFinder_mcb_pmsm_foc_qe;

/* Block states (default storage) for system '<S190>/IndexFinder' */
typedef struct {
  uint16_T Delay3_DSTATE;              /* '<S193>/Delay3' */
} rtDW_IndexFinder_mcb_pmsm_foc_q;

/* Block signals for system '<S195>/PositionNoReset' */
typedef struct {
  uint16_T Sum3;                       /* '<S211>/Sum3' */
  uint16_T Sum7;                       /* '<S211>/Sum7' */
} rtB_PositionNoReset_mcb_pmsm_fo;

/* Block signals for system '<S429>/If Action Subsystem' */
typedef struct {
  uint16_T Memory;                     /* '<S434>/Memory' */
  uint16_T Sum;                        /* '<S434>/Sum' */
  uint16_T Memory1;                    /* '<S434>/Memory1' */
  uint16_T Sum1;                       /* '<S434>/Sum1' */
} rtB_IfActionSubsystem_mcb_pm_hu;

/* Block states (default storage) for system '<S429>/If Action Subsystem' */
typedef struct {
  uint16_T Memory_PreviousInput;       /* '<S434>/Memory' */
  uint16_T Memory1_PreviousInput;      /* '<S434>/Memory1' */
} rtDW_IfActionSubsystem_mcb_pm_a;

/* Block signals for system '<S426>/SPI Master Transfer' */
typedef struct {
  uint16_T SPIMasterTransfer;          /* '<S426>/SPI Master Transfer' */
} rtB_SPIMasterTransfer_mcb_pmsm_;

/* Block states (default storage) for system '<S426>/SPI Master Transfer' */
typedef struct {
  codertarget_tic2000_blocks_SPIM obj; /* '<S426>/SPI Master Transfer' */
  boolean_T objisempty;                /* '<S426>/SPI Master Transfer' */
} rtDW_SPIMasterTransfer_mcb_pmsm;

/* Block signals for system '<S426>/SPI Master Transfer2' */
typedef struct {
  uint16_T SPIMasterTransfer2;         /* '<S426>/SPI Master Transfer2' */
} rtB_SPIMasterTransfer2_mcb_pmsm;

/* Block states (default storage) for system '<S426>/SPI Master Transfer2' */
typedef struct {
  codertarget_tic2000_blocks_SPIM obj; /* '<S426>/SPI Master Transfer2' */
  boolean_T objisempty;                /* '<S426>/SPI Master Transfer2' */
} rtDW_SPIMasterTransfer2_mcb_pms;

/* Block signals for system '<Root>/Speed Limit for motor2' */
typedef struct {
  real32_T Product[2];                 /* '<S568>/Product' */
  real32_T UnitDelay[2];               /* '<S568>/Unit Delay' */
  real32_T Product1[2];                /* '<S568>/Product1' */
  real32_T Add1[2];                    /* '<S568>/Add1' */
} rtB_SpeedLimitformotor2_mcb_pms;

/* Block states (default storage) for system '<Root>/Speed Limit for motor2' */
typedef struct {
  real32_T UnitDelay_DSTATE[2];        /* '<S568>/Unit Delay' */
} rtDW_SpeedLimitformotor2_mcb_pm;

/* Block signals (default storage) */
typedef struct {
  real_T DiscreteTimeIntegrator;       /* '<S447>/Discrete-Time Integrator' */
  real_T Gain;                         /* '<S6>/Gain' */
  real_T DiscreteTimeIntegrator3;      /* '<S464>/Discrete-Time Integrator3' */
  real_T UnitDelay;                    /* '<S450>/Unit Delay' */
  real_T Switch1;                      /* '<S450>/Switch1' */
  real_T Gain4;                        /* '<S447>/Gain4' */
  real_T sine_cosine_o1;               /* '<S449>/sine_cosine' */
  real_T sine_cosine_o2;               /* '<S449>/sine_cosine' */
  real_T Product2;                     /* '<S459>/Product2' */
  real_T DiscreteTimeIntegrator3_c;    /* '<S465>/Discrete-Time Integrator3' */
  real_T Product3;                     /* '<S459>/Product3' */
  real_T Add1;                         /* '<S459>/Add1' */
  real_T DiscreteTimeIntegrator3_p;    /* '<S492>/Discrete-Time Integrator3' */
  real_T DiscreteTimeIntegrator3_k;    /* '<S493>/Discrete-Time Integrator3' */
  real_T Switch2;                      /* '<S6>/Switch2' */
  real_T Product;                      /* '<S460>/Product' */
  real_T Product_j;                    /* '<S463>/Product' */
  real_T Gain1;                        /* '<S460>/Gain1' */
  real_T Add;                          /* '<S460>/Add' */
  real_T Gain2;                        /* '<S460>/Gain2' */
  real_T Divide2;                      /* '<S447>/Divide2' */
  real_T Sign;                         /* '<S447>/Sign' */
  real_T Divide1;                      /* '<S447>/Divide1' */
  real_T Sum1;                         /* '<S447>/Sum1' */
  real_T Divide;                       /* '<S447>/Divide' */
  real_T Gain_n;                       /* '<S447>/Gain' */
  real_T Gain1_b;                      /* '<S450>/Gain1' */
  real_T Add_o;                        /* '<S450>/Add' */
  real_T Gain_j;                       /* '<S457>/Gain' */
  real_T Gain1_l;                      /* '<S457>/Gain1' */
  real_T Gain4_h;                      /* '<S457>/Gain4' */
  real_T Add_a;                        /* '<S457>/Add' */
  real_T Gain2_f;                      /* '<S457>/Gain2' */
  real_T Gain3;                        /* '<S457>/Gain3' */
  real_T Add1_e;                       /* '<S457>/Add1' */
  real_T Gain1_c;                      /* '<S458>/Gain1' */
  real_T Gain2_m;                      /* '<S458>/Gain2' */
  real_T Product_f;                    /* '<S459>/Product' */
  real_T Product1;                     /* '<S459>/Product1' */
  real_T Add_e;                        /* '<S459>/Add' */
  real_T Gain3_o;                      /* '<S458>/Gain3' */
  real_T Gain4_n;                      /* '<S458>/Gain4' */
  real_T Product2_h;                   /* '<S462>/Product2' */
  real_T Product3_h;                   /* '<S462>/Product3' */
  real_T Add1_p;                       /* '<S462>/Add1' */
  real_T Product_h;                    /* '<S466>/Product' */
  real_T Product_l;                    /* '<S464>/Product' */
  real_T Product_hs;                   /* '<S467>/Product' */
  real_T Product_m;                    /* '<S468>/Product' */
  real_T Add_b;                        /* '<S464>/Add' */
  real_T Product_e;                    /* '<S462>/Product' */
  real_T Product1_o;                   /* '<S462>/Product1' */
  real_T Add_i;                        /* '<S462>/Add' */
  real_T Product_hv;                   /* '<S469>/Product' */
  real_T Product_n;                    /* '<S465>/Product' */
  real_T Product_d;                    /* '<S470>/Product' */
  real_T Product_jr;                   /* '<S471>/Product' */
  real_T Product_g;                    /* '<S472>/Product' */
  real_T Add_l;                        /* '<S465>/Add' */
  real_T VectorConcatenate[3];         /* '<S446>/Vector Concatenate' */
  real_T UnitDelay_b;                  /* '<S478>/Unit Delay' */
  real_T Switch1_f;                    /* '<S478>/Switch1' */
  real_T Gain4_c;                      /* '<S475>/Gain4' */
  real_T sine_cosine_o1_o;             /* '<S477>/sine_cosine' */
  real_T sine_cosine_o2_d;             /* '<S477>/sine_cosine' */
  real_T Product2_o;                   /* '<S487>/Product2' */
  real_T Product3_o;                   /* '<S487>/Product3' */
  real_T Add1_c;                       /* '<S487>/Add1' */
  real_T Gain_p;                       /* '<S475>/Gain' */
  real_T Gain1_ct;                     /* '<S478>/Gain1' */
  real_T Add_p;                        /* '<S478>/Add' */
  real_T Switch1_f4[3];                /* '<S6>/Switch1' */
  real_T Gain_p4;                      /* '<S485>/Gain' */
  real_T Gain1_f;                      /* '<S485>/Gain1' */
  real_T Gain4_e;                      /* '<S485>/Gain4' */
  real_T Add_c;                        /* '<S485>/Add' */
  real_T Gain2_b;                      /* '<S485>/Gain2' */
  real_T Gain3_a;                      /* '<S485>/Gain3' */
  real_T Add1_b;                       /* '<S485>/Add1' */
  real_T Gain1_i;                      /* '<S486>/Gain1' */
  real_T Gain2_n;                      /* '<S486>/Gain2' */
  real_T Product_c;                    /* '<S487>/Product' */
  real_T Product1_a;                   /* '<S487>/Product1' */
  real_T Add_f;                        /* '<S487>/Add' */
  real_T Gain3_e;                      /* '<S486>/Gain3' */
  real_T Gain4_f;                      /* '<S486>/Gain4' */
  real_T Product2_hz;                  /* '<S490>/Product2' */
  real_T Product3_d;                   /* '<S490>/Product3' */
  real_T Add1_pe;                      /* '<S490>/Add1' */
  real_T Product_nq;                   /* '<S494>/Product' */
  real_T Product_ee;                   /* '<S492>/Product' */
  real_T Product_b;                    /* '<S495>/Product' */
  real_T Product_a;                    /* '<S496>/Product' */
  real_T Add_ob;                       /* '<S492>/Add' */
  real_T Product_o;                    /* '<S490>/Product' */
  real_T Product1_f;                   /* '<S490>/Product1' */
  real_T Add_j;                        /* '<S490>/Add' */
  real_T Product_jy;                   /* '<S497>/Product' */
  real_T Product_cr;                   /* '<S493>/Product' */
  real_T Product_p;                    /* '<S498>/Product' */
  real_T Product_ef;                   /* '<S499>/Product' */
  real_T Product_m2;                   /* '<S500>/Product' */
  real_T Add_bg;                       /* '<S493>/Add' */
  real_T VectorConcatenate_p[3];       /* '<S474>/Vector Concatenate' */
  real_T Gain1_m;                      /* '<S488>/Gain1' */
  real_T Product_d1;                   /* '<S488>/Product' */
  real_T Product_fu;                   /* '<S491>/Product' */
  real_T Add_n;                        /* '<S488>/Add' */
  real_T Gain2_l;                      /* '<S488>/Gain2' */
  real_T Add1_f;                       /* '<S478>/Add1' */
  real_T Switch;                       /* '<S478>/Switch' */
  real_T Subtract;                     /* '<S478>/Subtract' */
  real_T Add1_k;                       /* '<S450>/Add1' */
  real_T Switch_b;                     /* '<S450>/Switch' */
  real_T Subtract_b;                   /* '<S450>/Subtract' */
  uint32_T PositionToCount;            /* '<S395>/PositionToCount' */
  uint32_T Delay;                      /* '<S395>/Delay' */
  uint32_T Sum[4];                     /* '<S245>/Sum' */
  uint32_T PositionToCount_g;          /* '<S196>/PositionToCount' */
  uint32_T Delay_h;                    /* '<S196>/Delay' */
  uint32_T Sum_n[4];                   /* '<S178>/Sum' */
  uint32_T Sum_d[4];                   /* '<S34>/Sum' */
  real32_T RT1;                        /* '<Root>/RT1' */
  real32_T RT3;                        /* '<Root>/RT3' */
  real32_T RT9;                        /* '<Root>/RT9' */
  real32_T RT2[2];                     /* '<Root>/RT2' */
  real32_T mtr2_VI_debug[6];           /* '<Root>/RT8' */
  real32_T mtr2_Te_PU;                 /* '<Root>/RT8' */
  real32_T mtr2_Pm_PU;                 /* '<Root>/RT8' */
  real32_T mtr2_Speed_PU;              /* '<Root>/RT8' */
  real32_T mtr2_Iab_meas_PU[2];        /* '<Root>/RT8' */
  real32_T mtr2_Pos_PU;                /* '<Root>/RT8' */
  real32_T RT7[2];                     /* '<Root>/RT7' */
  real32_T Id_ref;                     /* '<S8>/Id_ref' */
  real32_T Switch_bo;                  /* '<S509>/Switch' */
  real32_T Product_dy;                 /* '<S564>/Product' */
  real32_T UnitDelay_g;                /* '<S564>/Unit Delay' */
  real32_T Product1_k;                 /* '<S564>/Product1' */
  real32_T Add1_cl;                    /* '<S564>/Add1' */
  real32_T Sum_k;                      /* '<S508>/Sum' */
  real32_T PProdOut;                   /* '<S549>/PProd Out' */
  real32_T Ki2;                        /* '<S508>/Ki2' */
  real32_T Integrator;                 /* '<S544>/Integrator' */
  real32_T Sum_l;                      /* '<S553>/Sum' */
  real32_T DeadZone;                   /* '<S537>/DeadZone' */
  real32_T IProdOut;                   /* '<S541>/IProd Out' */
  real32_T Switch_k;                   /* '<S535>/Switch' */
  real32_T Saturation;                 /* '<S551>/Saturation' */
  real32_T DataTypeConversion1;        /* '<S503>/Data Type Conversion1' */
  real32_T DataStoreRead2;             /* '<S7>/Data Store Read2' */
  real32_T DataStoreRead1;             /* '<S7>/Data Store Read1' */
  real32_T DataTypeConversion1_d[2];   /* '<S390>/Data Type Conversion1' */
  real32_T InvertingNoninvertingCurrentmea[2];
       /* '<S390>/Inverting // Non-inverting  Current measurement  amplifier' */
  real32_T DTC;                        /* '<S413>/DTC' */
  real32_T Product_mt;                 /* '<S394>/Product' */
  real32_T Switch_j;                   /* '<S402>/Switch' */
  real32_T Merge;                      /* '<S403>/Merge' */
  real32_T Numberofpolepairs;          /* '<S408>/Number of pole pairs' */
  real32_T Floor;                      /* '<S404>/Floor' */
  real32_T Add_c4;                     /* '<S404>/Add' */
  real32_T mtr2_VI_debug_k[6];
                   /* '<S3>/BusConversion_InsertedFor_mtr2_debug_at_inport_0' */
  real32_T DTC_n;                      /* '<S418>/DTC' */
  real32_T SpeedGain;                  /* '<S395>/SpeedGain' */
  real32_T Product_i;                  /* '<S398>/Product' */
  real32_T UnitDelay_f;                /* '<S398>/Unit Delay' */
  real32_T Product1_i;                 /* '<S398>/Product1' */
  real32_T Add1_i;                     /* '<S398>/Add1' */
  real32_T DataTypeConversion;         /* '<S237>/Data Type Conversion' */
  real32_T id_Ld_Lq;                   /* '<S420>/Product1' */
  real32_T Add_m;                      /* '<S420>/Add' */
  real32_T Product3_b;                 /* '<S420>/Product3' */
  real32_T u_5_Pp;                     /* '<S420>/1_5_Pp' */
  real32_T Product_hl;                 /* '<S420>/Product' */
  real32_T P_output;                   /* '<S420>/P_si2pu' */
  real32_T T_output;                   /* '<S420>/T_si2pu' */
  real32_T Switch_f[3];                /* '<S232>/Switch' */
  real32_T One_by_Two[3];              /* '<S237>/One_by_Two' */
  real32_T Mtr2_PWM_Duty_Cycles[3];    /* '<S237>/Sum' */
  real32_T UnitDelay_i;                /* '<S386>/Unit Delay' */
  real32_T Add_f4;                     /* '<S386>/Add' */
  real32_T Merge_l;                    /* '<S373>/Merge' */
  real32_T indexing;                   /* '<S245>/indexing' */
  real32_T Lookup[4];                  /* '<S245>/Lookup' */
  real32_T Sum3;                       /* '<S372>/Sum3' */
  real32_T DataTypeConversion1_j;      /* '<S245>/Data Type Conversion1' */
  real32_T Sum2;                       /* '<S245>/Sum2' */
  real32_T Product_k;                  /* '<S372>/Product' */
  real32_T Sum4;                       /* '<S372>/Sum4' */
  real32_T Sum5;                       /* '<S372>/Sum5' */
  real32_T Product1_c;                 /* '<S372>/Product1' */
  real32_T Sum6;                       /* '<S372>/Sum6' */
  real32_T Id_fb;
  real32_T Sum_g;                      /* '<S251>/Sum' */
  real32_T PProdOut_i;                 /* '<S356>/PProd Out' */
  real32_T Kp1;                        /* '<S251>/Kp1' */
  real32_T Integrator_i;               /* '<S351>/Integrator' */
  real32_T Sum_e;                      /* '<S360>/Sum' */
  real32_T Saturation_g;               /* '<S358>/Saturation' */
  real32_T Sum_b;                      /* '<S250>/Sum' */
  real32_T PProdOut_f;                 /* '<S305>/PProd Out' */
  real32_T Ki1;                        /* '<S250>/Ki1' */
  real32_T Integrator_p;               /* '<S300>/Integrator' */
  real32_T Sum_eg;                     /* '<S309>/Sum' */
  real32_T Saturation_l;               /* '<S307>/Saturation' */
  real32_T Switch_c;                   /* '<S254>/Switch' */
  real32_T Product_efr;                /* '<S254>/Product' */
  real32_T Product_mp;                 /* '<S255>/Product' */
  real32_T Product1_p;                 /* '<S255>/Product1' */
  real32_T Sum1_h;                     /* '<S255>/Sum1' */
  real32_T Merge_o[2];                 /* '<S249>/Merge' */
  real32_T Vd_ref;
  real32_T Iq_fb;
  real32_T Vq_ref;
  real32_T Id_Ref;/* '<S239>/BusConversion_InsertedFor_Idq_debug_at_inport_0' */
  real32_T Iq_Ref;/* '<S239>/BusConversion_InsertedFor_Idq_debug_at_inport_0' */
  real32_T DeadZone_a;                 /* '<S293>/DeadZone' */
  real32_T IProdOut_g;                 /* '<S297>/IProd Out' */
  real32_T Switch_p;                   /* '<S291>/Switch' */
  real32_T DeadZone_p;                 /* '<S344>/DeadZone' */
  real32_T IProdOut_j;                 /* '<S348>/IProd Out' */
  real32_T Switch_ca;                  /* '<S342>/Switch' */
  real32_T one_by_two;                 /* '<S383>/one_by_two' */
  real32_T sqrt3_by_two;               /* '<S383>/sqrt3_by_two' */
  real32_T add_b;                      /* '<S383>/add_b' */
  real32_T add_c;                      /* '<S383>/add_c' */
  real32_T Max;                        /* '<S380>/Max' */
  real32_T Min;                        /* '<S380>/Min' */
  real32_T Add_jf;                     /* '<S380>/Add' */
  real32_T one_by_two_f;               /* '<S380>/one_by_two' */
  real32_T Add1_fj;                    /* '<S379>/Add1' */
  real32_T Add2;                       /* '<S379>/Add2' */
  real32_T Add3;                       /* '<S379>/Add3' */
  real32_T Gain_nu[3];                 /* '<S379>/Gain' */
  real32_T DataTypeConversion1_g[2];   /* '<S191>/Data Type Conversion1' */
  real32_T DTC_c;                      /* '<S214>/DTC' */
  real32_T Product_hsp;                /* '<S195>/Product' */
  real32_T Switch_ce;                  /* '<S203>/Switch' */
  real32_T Merge_c;                    /* '<S204>/Merge' */
  real32_T Numberofpolepairs_d;        /* '<S209>/Number of pole pairs' */
  real32_T Floor_p;                    /* '<S205>/Floor' */
  real32_T Add_k;                      /* '<S205>/Add' */
  real32_T id_Ld_Lq_o;                 /* '<S221>/Product1' */
  real32_T Add_mq;                     /* '<S221>/Add' */
  real32_T Product3_bq;                /* '<S221>/Product3' */
  real32_T u_5_Pp_i;                   /* '<S221>/1_5_Pp' */
  real32_T DTC_nv;                     /* '<S219>/DTC' */
  real32_T SpeedGain_n;                /* '<S196>/SpeedGain' */
  real32_T Product_li;                 /* '<S199>/Product' */
  real32_T UnitDelay_o;                /* '<S199>/Unit Delay' */
  real32_T Product1_b;                 /* '<S199>/Product1' */
  real32_T Add1_kb;                    /* '<S199>/Add1' */
  real32_T Product_la;                 /* '<S221>/Product' */
  real32_T P_output_g;                 /* '<S221>/P_si2pu' */
  real32_T mtr1_speed_ref_PU;          /* '<S26>/Data Store Read' */
  real32_T TmpSignalConversionAtSelectorIn[25];
  real32_T Selector[2];                /* '<S26>/Selector' */
  real32_T DataTypeConversion_e;       /* '<S23>/Data Type Conversion' */
  real32_T Switch_i[3];                /* '<S19>/Switch' */
  real32_T One_by_Two_e[3];            /* '<S23>/One_by_Two' */
  real32_T Mtr1_PWM_Duty_Cycles[3];    /* '<S23>/Sum' */
  real32_T rpm2freq;                   /* '<S28>/rpm2freq' */
  real32_T Eps;                        /* '<S175>/Ramp Generator' */
  real32_T Product_mc;                 /* '<S28>/Product' */
  real32_T Frequency;                  /* '<S28>/Abs' */
  real32_T Vbyf;                       /* '<S28>/V-by-f' */
  real32_T Correction_Factor_sinePWM;  /* '<S28>/Correction_Factor_sinePWM' */
  real32_T Amplitude;                  /* '<S28>/Saturation' */
  real32_T UnaryMinus;                 /* '<S173>/Unary Minus' */
  real32_T position_increment;         /* '<S28>/position_increment' */
  real32_T scaleIn;                    /* '<S174>/scaleIn' */
  real32_T UnitDelay_h;                /* '<S174>/Unit Delay' */
  real32_T scaleOut;                   /* '<S174>/scaleOut' */
  real32_T DataStoreRead;              /* '<S28>/Data Store Read' */
  real32_T Eps_i;                      /* '<S28>/Direction' */
  real32_T convert_pu;                 /* '<S183>/convert_pu' */
  real32_T Merge_d;                    /* '<S183>/Merge' */
  real32_T indexing_m;                 /* '<S178>/indexing' */
  real32_T Lookup_l[4];                /* '<S178>/Lookup' */
  real32_T Sum3_p;                     /* '<S182>/Sum3' */
  real32_T DataTypeConversion1_c;      /* '<S178>/Data Type Conversion1' */
  real32_T Sum2_c;                     /* '<S178>/Sum2' */
  real32_T Product_je;                 /* '<S182>/Product' */
  real32_T Sum4_m;                     /* '<S182>/Sum4' */
  real32_T Sum5_p;                     /* '<S182>/Sum5' */
  real32_T Product1_j;                 /* '<S182>/Product1' */
  real32_T Sum6_p;                     /* '<S182>/Sum6' */
  real32_T Ka;                         /* '<S179>/Ka' */
  real32_T one_by_two_m;               /* '<S179>/one_by_two' */
  real32_T sqrt3_by_two_g;             /* '<S179>/sqrt3_by_two' */
  real32_T add_b_c;                    /* '<S179>/add_b' */
  real32_T Kb;                         /* '<S179>/Kb' */
  real32_T add_c_i;                    /* '<S179>/add_c' */
  real32_T Kc;                         /* '<S179>/Kc' */
  real32_T Divide_h;                   /* '<S175>/Divide' */
  real32_T Sample_Time;                /* '<S175>/Sample_Time' */
  real32_T Sum_k3;                     /* '<S28>/Sum' */
  real32_T Add_oe;                     /* '<S187>/Add' */
  real32_T DataTypeConversion1_k;      /* '<S187>/Data Type Conversion1' */
  real32_T Add1_j;                     /* '<S187>/Add1' */
  real32_T Input;                      /* '<S188>/Input' */
  real32_T Merge_g;                    /* '<S162>/Merge' */
  real32_T indexing_j;                 /* '<S34>/indexing' */
  real32_T Lookup_c[4];                /* '<S34>/Lookup' */
  real32_T Sum3_a;                     /* '<S161>/Sum3' */
  real32_T DataTypeConversion1_cg;     /* '<S34>/Data Type Conversion1' */
  real32_T Sum2_f;                     /* '<S34>/Sum2' */
  real32_T Product_dl;                 /* '<S161>/Product' */
  real32_T Sum4_e;                     /* '<S161>/Sum4' */
  real32_T Sum5_d;                     /* '<S161>/Sum5' */
  real32_T Product1_bt;                /* '<S161>/Product1' */
  real32_T Sum6_o;                     /* '<S161>/Sum6' */
  real32_T Id_fb_f;
  real32_T Sum_c;                      /* '<S40>/Sum' */
  real32_T PProdOut_c;                 /* '<S145>/PProd Out' */
  real32_T Kp1_m;                      /* '<S40>/Kp1' */
  real32_T Integrator_f;               /* '<S140>/Integrator' */
  real32_T Sum_dd;                     /* '<S149>/Sum' */
  real32_T Saturation_a;               /* '<S147>/Saturation' */
  real32_T Sum_o;                      /* '<S39>/Sum' */
  real32_T PProdOut_iz;                /* '<S94>/PProd Out' */
  real32_T Ki1_a;                      /* '<S39>/Ki1' */
  real32_T Integrator_m;               /* '<S89>/Integrator' */
  real32_T Sum_nt;                     /* '<S98>/Sum' */
  real32_T Saturation_f;               /* '<S96>/Saturation' */
  real32_T Switch_m;                   /* '<S43>/Switch' */
  real32_T Product_ng;                 /* '<S43>/Product' */
  real32_T Product_hg;                 /* '<S44>/Product' */
  real32_T Product1_d;                 /* '<S44>/Product1' */
  real32_T Sum1_c;                     /* '<S44>/Sum1' */
  real32_T Merge_g1[2];                /* '<S38>/Merge' */
  real32_T Vd_ref_i;
  real32_T Iq_fb_j;
  real32_T Vq_ref_n;
  real32_T Id_Ref_j;
                   /* '<S27>/BusConversion_InsertedFor_Idq_debug_at_inport_0' */
  real32_T Iq_Ref_a;
                   /* '<S27>/BusConversion_InsertedFor_Idq_debug_at_inport_0' */
  real32_T DeadZone_d;                 /* '<S82>/DeadZone' */
  real32_T IProdOut_e;                 /* '<S86>/IProd Out' */
  real32_T Switch_h;                   /* '<S80>/Switch' */
  real32_T DeadZone_n;                 /* '<S133>/DeadZone' */
  real32_T IProdOut_o;                 /* '<S137>/IProd Out' */
  real32_T Switch_g;                   /* '<S131>/Switch' */
  real32_T one_by_two_k;               /* '<S172>/one_by_two' */
  real32_T sqrt3_by_two_e;             /* '<S172>/sqrt3_by_two' */
  real32_T add_b_ch;                   /* '<S172>/add_b' */
  real32_T add_c_e;                    /* '<S172>/add_c' */
  real32_T Max_o;                      /* '<S169>/Max' */
  real32_T Min_k;                      /* '<S169>/Min' */
  real32_T Add_fm;                     /* '<S169>/Add' */
  real32_T one_by_two_i;               /* '<S169>/one_by_two' */
  real32_T Add1_b3;                    /* '<S168>/Add1' */
  real32_T Add2_a;                     /* '<S168>/Add2' */
  real32_T Add3_e;                     /* '<S168>/Add3' */
  real32_T Gain_jt[3];                 /* '<S168>/Gain' */
  int32_T DataTypeConversion_h[2];     /* '<S390>/Data Type Conversion' */
  int32_T Add_cm[2];                   /* '<S390>/Add' */
  int32_T Q17perunitconversion[2];     /* '<S390>/Q17 per unit conversion' */
  int32_T SpeedCount;                  /* '<S395>/SpeedCount' */
  int32_T DataTypeConversion_f[2];     /* '<S191>/Data Type Conversion' */
  int32_T Add_as[2];                   /* '<S191>/Add' */
  int32_T Q17perunitconversion_h[2];   /* '<S191>/Q17 per unit conversion' */
  int32_T SpeedCount_e;                /* '<S196>/SpeedCount' */
  uint16_T Divide2_c;                  /* '<S435>/Divide2' */
  uint16_T Divide3;                    /* '<S435>/Divide3' */
  uint16_T ForIterator;                /* '<S437>/For Iterator' */
  uint16_T IAIBMeasurement[2];         /* '<S437>/IA//IB Measurement' */
  uint16_T Divide_f;                   /* '<S427>/Divide' */
  uint16_T Divide1_m;                  /* '<S427>/Divide1' */
  uint16_T ForIterator_a;              /* '<S429>/For Iterator' */
  uint16_T IAIBMeasurement_e[2];       /* '<S429>/IA//IB Measurement' */
  uint16_T SCIReceive[2];              /* '<S501>/SCI Receive' */
  uint16_T BitwiseOperator;            /* '<S507>/Bitwise Operator' */
  uint16_T BitwiseOperator1;           /* '<S507>/Bitwise Operator1' */
  uint16_T ShiftArithmetic1;           /* '<S507>/Shift Arithmetic1' */
  uint16_T BitwiseOperator2;           /* '<S507>/Bitwise Operator2' */
  uint16_T ShiftArithmetic;            /* '<S507>/Shift Arithmetic' */
  uint16_T DataStoreRead_j;            /* '<S390>/Data Store Read' */
  uint16_T DataStoreRead1_i;           /* '<S390>/Data Store Read1' */
  uint16_T IAIBMeasurement_f[2];       /* '<S388>/IA//IB Measurement' */
  uint16_T eQEP_o1;                    /* '<S388>/eQEP' */
  uint16_T eQEP_o2;                    /* '<S388>/eQEP' */
  uint16_T Merge_de;                   /* '<S394>/Merge' */
  uint16_T Switch1_g[3];               /* '<S236>/Switch1' */
  uint16_T Scale_to_PWM_Counter_PRD[3];/* '<S236>/Scale_to_PWM_Counter_PRD' */
  uint16_T DataTypeConversion_ec;      /* '<S373>/Data Type Conversion' */
  uint16_T Get_Integer;                /* '<S245>/Get_Integer' */
  uint16_T Switch1_d;                  /* '<S254>/Switch1' */
  uint16_T eQEP_o1_e;                  /* '<S189>/eQEP' */
  uint16_T eQEP_o2_b;                  /* '<S189>/eQEP' */
  uint16_T DataStoreRead_k;            /* '<S191>/Data Store Read' */
  uint16_T DataStoreRead1_c;           /* '<S191>/Data Store Read1' */
  uint16_T IAIBMeasurement_c[2];       /* '<S189>/IA//IB Measurement' */
  uint16_T Merge_n;                    /* '<S195>/Merge' */
  uint16_T Output;                     /* '<S225>/Output' */
  uint16_T DataStoreRead1_l;           /* '<S26>/Data Store Read1' */
  uint16_T MultiportSwitch[2];         /* '<S26>/Multiport Switch' */
  uint16_T DataTypeConversion3[2];     /* '<S227>/Data Type Conversion3' */
  uint16_T SCI_Tx_Data[3];             /* '<S223>/Merge' */
  uint16_T SCI_Tx_Iteration;           /* '<S223>/Merge1' */
  uint16_T FixPtSum1;                  /* '<S230>/FixPt Sum1' */
  uint16_T FixPtSwitch;                /* '<S231>/FixPt Switch' */
  uint16_T Switch1_gd[3];              /* '<S22>/Switch1' */
  uint16_T IndexVector;                /* '<S224>/Index Vector' */
  uint16_T Add_m4;                     /* '<S224>/Add' */
  uint16_T Data[2];                    /* '<S226>/Data' */
  uint16_T Data_f[2];                  /* '<S228>/Data' */
  uint16_T Data_fw[2];                 /* '<S229>/Data' */
  uint16_T Scale_to_PWM_Counter_PRD_e[3];/* '<S22>/Scale_to_PWM_Counter_PRD' */
  uint16_T DataTypeConversion_p;       /* '<S183>/Data Type Conversion' */
  uint16_T Get_Integer_e;              /* '<S178>/Get_Integer' */
  uint16_T DataTypeConversion_hf;      /* '<S162>/Data Type Conversion' */
  uint16_T Get_Integer_g;              /* '<S34>/Get_Integer' */
  uint16_T Switch1_f0;                 /* '<S43>/Switch1' */
  int16_T DataTypeConversion2;         /* '<S503>/Data Type Conversion2' */
  int16_T DataTypeConversion_p3[2];    /* '<S227>/Data Type Conversion' */
  int16_T WhileIterator;               /* '<S224>/While Iterator' */
  int16_T DataTypeConversion_c;        /* '<S187>/Data Type Conversion' */
  int16_T Switch1_n;                   /* '<S535>/Switch1' */
  int16_T Switch2_l;                   /* '<S535>/Switch2' */
  int16_T Switch1_l;                   /* '<S291>/Switch1' */
  int16_T Switch2_e;                   /* '<S291>/Switch2' */
  int16_T Switch1_fn;                  /* '<S342>/Switch1' */
  int16_T Switch2_lu;                  /* '<S342>/Switch2' */
  int16_T Switch1_p;                   /* '<S80>/Switch1' */
  int16_T Switch2_g;                   /* '<S80>/Switch2' */
  int16_T Switch1_dk;                  /* '<S131>/Switch1' */
  int16_T Switch2_a;                   /* '<S131>/Switch2' */
  boolean_T DataStoreRead1_a;          /* '<S6>/Data Store Read1' */
  boolean_T DataStoreRead2_n;          /* '<S6>/Data Store Read2' */
  boolean_T Compare;                   /* '<S452>/Compare' */
  boolean_T Compare_f;                 /* '<S480>/Compare' */
  boolean_T DataStoreRead1_k;          /* '<S508>/Data Store Read1' */
  boolean_T DataStoreRead2_l;          /* '<S508>/Data Store Read2' */
  boolean_T AND;                       /* '<S508>/AND' */
  boolean_T DataStoreRead_f;           /* '<S509>/Data Store Read' */
  boolean_T LogicalOperator;           /* '<S508>/Logical Operator' */
  boolean_T RelationalOperator;        /* '<S535>/Relational Operator' */
  boolean_T fixforDTpropagationissue;/* '<S535>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                    /* '<S535>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S535>/Equal1' */
  boolean_T AND3;                      /* '<S535>/AND3' */
  boolean_T Compare_c;                 /* '<S479>/Compare' */
  boolean_T Compare_e;                 /* '<S451>/Compare' */
  boolean_T NOT;                       /* '<S425>/NOT' */
  boolean_T NOT_d;                     /* '<S424>/NOT' */
  boolean_T DataTypeConversion3_o;     /* '<S507>/Data Type Conversion3' */
  boolean_T DataStoreRead1_cg;         /* '<S3>/Data Store Read1' */
  boolean_T Delay_m;                   /* '<S389>/Delay' */
  boolean_T NOT_e;                     /* '<S389>/NOT' */
  boolean_T PWM_En;                    /* '<S237>/Enable' */
  boolean_T DataStoreRead2_d;          /* '<S384>/Data Store Read2' */
  boolean_T DataStoreRead1_n;          /* '<S384>/Data Store Read1' */
  boolean_T AND_d;                     /* '<S384>/AND' */
  boolean_T NOT_c;                     /* '<S384>/NOT' */
  boolean_T Switch_pk;                 /* '<S386>/Switch' */
  boolean_T Compare_ee;                /* '<S374>/Compare' */
  boolean_T LogicalOperator_i;         /* '<S251>/Logical Operator' */
  boolean_T LogicalOperator_d;         /* '<S250>/Logical Operator' */
  boolean_T RelationalOperator_a;      /* '<S291>/Relational Operator' */
  boolean_T fixforDTpropagationissue_g;
                                     /* '<S291>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_c;
                                    /* '<S291>/fix for DT propagation issue1' */
  boolean_T Equal1_p;                  /* '<S291>/Equal1' */
  boolean_T AND3_o;                    /* '<S291>/AND3' */
  boolean_T RelationalOperator_l;      /* '<S342>/Relational Operator' */
  boolean_T fixforDTpropagationissue_m;
                                     /* '<S342>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_h;
                                    /* '<S342>/fix for DT propagation issue1' */
  boolean_T Equal1_a;                  /* '<S342>/Equal1' */
  boolean_T AND3_ob;                   /* '<S342>/AND3' */
  boolean_T Delay_mk;                  /* '<S190>/Delay' */
  boolean_T NOT_m;                     /* '<S190>/NOT' */
  boolean_T DataStoreRead_kj;          /* '<S19>/Data Store Read' */
  boolean_T NOT_dl;                    /* '<S19>/NOT' */
  boolean_T PWM_En_b;                  /* '<S23>/Enable' */
  boolean_T DataStoreRead1_n5;         /* '<S28>/Data Store Read1' */
  boolean_T NOT_p;                     /* '<S175>/NOT' */
  boolean_T NOT_j;                     /* '<S174>/NOT' */
  boolean_T Compare_k;                 /* '<S184>/Compare' */
  boolean_T Delay_n;                   /* '<S187>/Delay' */
  boolean_T Compare_eh;                /* '<S163>/Compare' */
  boolean_T LogicalOperator_h;         /* '<S40>/Logical Operator' */
  boolean_T LogicalOperator_e;         /* '<S39>/Logical Operator' */
  boolean_T RelationalOperator_c;      /* '<S80>/Relational Operator' */
  boolean_T fixforDTpropagationissue_k;
                                      /* '<S80>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_d;
                                     /* '<S80>/fix for DT propagation issue1' */
  boolean_T Equal1_k;                  /* '<S80>/Equal1' */
  boolean_T AND3_j;                    /* '<S80>/AND3' */
  boolean_T RelationalOperator_g;      /* '<S131>/Relational Operator' */
  boolean_T fixforDTpropagationissue_mc;
                                     /* '<S131>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_e;
                                    /* '<S131>/fix for DT propagation issue1' */
  boolean_T Equal1_h;                  /* '<S131>/Equal1' */
  boolean_T AND3_k;                    /* '<S131>/AND3' */
  rtB_SpeedLimitformotor2_mcb_pms SpeedLimitformotor2;/* '<Root>/Speed Limit for motor2' */
  rtB_SPIMasterTransfer2_mcb_pmsm SPIMasterTransfer3;/* '<S426>/SPI Master Transfer2' */
  rtB_SPIMasterTransfer2_mcb_pmsm SPIMasterTransfer2;/* '<S426>/SPI Master Transfer2' */
  rtB_SPIMasterTransfer_mcb_pmsm_ SPIMasterTransfer1;/* '<S426>/SPI Master Transfer' */
  rtB_SPIMasterTransfer_mcb_pmsm_ SPIMasterTransfer;/* '<S426>/SPI Master Transfer' */
  rtB_IfActionSubsystem_mcb_pm_hu IfActionSubsystem1_i;/* '<S437>/If Action Subsystem1' */
  rtB_IfActionSubsystem_mcb_pm_hu IfActionSubsystem_g;/* '<S429>/If Action Subsystem' */
  rtB_PositionNoReset_mcb_pmsm_fo PositionNoReset_i;/* '<S394>/PositionNoReset' */
  rtB_IndexFinder_mcb_pmsm_foc_qe IndexFinder_b;/* '<S389>/IndexFinder' */
  rtB_IfActionSubsystem1_mcb_pmsm IfActionSubsystem1_d;/* '<S373>/If Action Subsystem1' */
  rtB_IfActionSubsystem_mcb_pmsm_ IfActionSubsystem_i;/* '<S373>/If Action Subsystem' */
  rtB_TwoinputsCRL_mcb_pmsm_foc_o TwoinputsCRL_i;/* '<S244>/Two inputs CRL' */
  rtB_TwoinputsCRL_mcb_pmsm_foc_q TwoinputsCRL_n;/* '<S243>/Two inputs CRL' */
  rtB_DQEquivalence_mcb_pmsm_foc_ DQEquivalence_j;/* '<S249>/D-Q Equivalence' */
  rtB_DQAxisPriority_mcb_pmsm_foc DQAxisPriority_d;/* '<S249>/D//Q Axis Priority' */
  rtB_TwophaseCRLwrap_mcb_pmsm_fo TwophaseCRLwrap_n;/* '<S247>/Two phase CRL wrap' */
  rtB_PositionNoReset_mcb_pmsm_fo PositionNoReset;/* '<S195>/PositionNoReset' */
  rtB_IndexFinder_mcb_pmsm_foc_qe IndexFinder;/* '<S190>/IndexFinder' */
  rtB_IfActionSubsystem1_mcb_pmsm IfActionSubsystem1_p;/* '<S183>/If Action Subsystem1' */
  rtB_IfActionSubsystem_mcb_pmsm_ IfActionSubsystem_j;/* '<S183>/If Action Subsystem' */
  rtB_TwoinputsCRL_mcb_pmsm_foc_q TwoinputsCRL_p;/* '<S177>/Two inputs CRL' */
  rtB_IfActionSubsystem1_mcb_pmsm IfActionSubsystem1_b;/* '<S162>/If Action Subsystem1' */
  rtB_IfActionSubsystem_mcb_pmsm_ IfActionSubsystem_b;/* '<S162>/If Action Subsystem' */
  rtB_TwoinputsCRL_mcb_pmsm_foc_o TwoinputsCRL_g;/* '<S33>/Two inputs CRL' */
  rtB_TwoinputsCRL_mcb_pmsm_foc_q TwoinputsCRL;/* '<S32>/Two inputs CRL' */
  rtB_DQEquivalence_mcb_pmsm_foc_ DQEquivalence;/* '<S38>/D-Q Equivalence' */
  rtB_DQAxisPriority_mcb_pmsm_foc DQAxisPriority;/* '<S38>/D//Q Axis Priority' */
  rtB_TwophaseCRLwrap_mcb_pmsm_fo TwophaseCRLwrap;/* '<S36>/Two phase CRL wrap' */
} BlockIO_mcb_pmsm_foc_qep_dyno_f;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S447>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator3_DSTATE;/* '<S464>/Discrete-Time Integrator3' */
  real_T UnitDelay_DSTATE;             /* '<S450>/Unit Delay' */
  real_T DiscreteTimeIntegrator3_DSTAT_b;/* '<S465>/Discrete-Time Integrator3' */
  real_T DiscreteTimeIntegrator3_DSTAT_m;/* '<S492>/Discrete-Time Integrator3' */
  real_T DiscreteTimeIntegrator3_DSTAT_j;/* '<S493>/Discrete-Time Integrator3' */
  real_T UnitDelay_DSTATE_h;           /* '<S478>/Unit Delay' */
  real_T Add1_DWORK1;                  /* '<S478>/Add1' */
  real32_T UnitDelay_DSTATE_a;         /* '<S564>/Unit Delay' */
  real32_T Integrator_DSTATE;          /* '<S544>/Integrator' */
  real32_T UnitDelay_DSTATE_d;         /* '<S398>/Unit Delay' */
  real32_T UnitDelay_DSTATE_a0;        /* '<S386>/Unit Delay' */
  real32_T Integrator_DSTATE_a;        /* '<S351>/Integrator' */
  real32_T Integrator_DSTATE_o;        /* '<S300>/Integrator' */
  real32_T UnitDelay_DSTATE_c;         /* '<S199>/Unit Delay' */
  real32_T RampGenerator_DSTATE;       /* '<S175>/Ramp Generator' */
  real32_T UnitDelay_DSTATE_p;         /* '<S174>/Unit Delay' */
  real32_T Integrator_DSTATE_c;        /* '<S140>/Integrator' */
  real32_T Integrator_DSTATE_g;        /* '<S89>/Integrator' */
  uint32_T Delay_DSTATE[20];           /* '<S395>/Delay' */
  uint32_T Delay_DSTATE_n[20];         /* '<S196>/Delay' */
  volatile real32_T RT1_Buffer[2];     /* '<Root>/RT1' */
  volatile real32_T RT3_Buffer[2];     /* '<Root>/RT3' */
  volatile real32_T RT2_Buffer[4];     /* '<Root>/RT2' */
  volatile real32_T RT9_Buffer[2];     /* '<Root>/RT9' */
  volatile real32_T RT7_Buffer[4];     /* '<Root>/RT7' */
  volatile real32_T RT8_1_Buffer[12];  /* '<Root>/RT8' */
  volatile real32_T RT8_2_Buffer[2];   /* '<Root>/RT8' */
  volatile real32_T RT8_3_Buffer[2];   /* '<Root>/RT8' */
  volatile real32_T RT8_4_Buffer[2];   /* '<Root>/RT8' */
  volatile real32_T RT8_5_Buffer[4];   /* '<Root>/RT8' */
  volatile real32_T RT8_6_Buffer[2];   /* '<Root>/RT8' */
  real32_T SpeedRef;                   /* '<Root>/Data Store Memory4' */
  real32_T IqRef;                      /* '<Root>/Data Store Memory6' */
  real32_T Add_DWORK1;                 /* '<S386>/Add' */
  int32_T LEDblink_FRAC_LEN;           /* '<S5>/LED blink' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<S426>/Digital Output1' */
  int32_T DigitalOutput2_FRAC_LEN;     /* '<S426>/Digital Output2' */
  int32_T Add_DWORK1_g[2];             /* '<S390>/Add' */
  int32_T SpeedCount_DWORK1;           /* '<S395>/SpeedCount' */
  int32_T DigitalOutput2_FRAC_LEN_i;   /* '<S236>/Digital Output2' */
  int32_T Add_DWORK1_m[2];             /* '<S191>/Add' */
  int32_T SpeedCount_DWORK1_l;         /* '<S196>/SpeedCount' */
  int32_T DigitalOutput1_FRAC_LEN_k;   /* '<S22>/Digital Output1' */
  uint32_T Sum_DWORK1[4];              /* '<S245>/Sum' */
  uint32_T Sum_DWORK1_e[4];            /* '<S178>/Sum' */
  uint16_T Output_DSTATE;              /* '<S225>/Output' */
  volatile int16_T RT1_ActiveBufIdx;   /* '<Root>/RT1' */
  volatile int16_T RT1_semaphoreTaken; /* '<Root>/RT1' */
  volatile int16_T RT3_ActiveBufIdx;   /* '<Root>/RT3' */
  volatile int16_T RT2_ActiveBufIdx;   /* '<Root>/RT2' */
  volatile int16_T RT9_ActiveBufIdx;   /* '<Root>/RT9' */
  volatile int16_T RT7_ActiveBufIdx;   /* '<Root>/RT7' */
  volatile int16_T RT8_1_ActiveBufIdx; /* '<Root>/RT8' */
  volatile int16_T RT8_2_ActiveBufIdx; /* '<Root>/RT8' */
  volatile int16_T RT8_3_ActiveBufIdx; /* '<Root>/RT8' */
  volatile int16_T RT8_4_ActiveBufIdx; /* '<Root>/RT8' */
  volatile int16_T RT8_5_ActiveBufIdx; /* '<Root>/RT8' */
  volatile int16_T RT8_6_ActiveBufIdx; /* '<Root>/RT8' */
  uint16_T IaOffset_motor1;            /* '<Root>/Data Store Memory1' */
  uint16_T IbOffset_motor1;            /* '<Root>/Data Store Memory2' */
  uint16_T Debug_signals;              /* '<Root>/Data Store Memory9' */
  uint16_T IbOffset_motor2;            /* '<Root>/Data Store Memory7' */
  uint16_T IaOffset_motor2;            /* '<Root>/Data Store Memory8' */
  uint16_T CircBufIdx;                 /* '<S395>/Delay' */
  uint16_T CircBufIdx_g;               /* '<S196>/Delay' */
  uint16_T Add_DWORK1_b;               /* '<S224>/Add' */
  boolean_T Delay_DSTATE_d;            /* '<S389>/Delay' */
  boolean_T Delay_DSTATE_o;            /* '<S190>/Delay' */
  boolean_T Delay_DSTATE_j;            /* '<S187>/Delay' */
  int16_T Integrator_PrevResetState;   /* '<S544>/Integrator' */
  int16_T Integrator_PrevResetState_p; /* '<S351>/Integrator' */
  int16_T Integrator_PrevResetState_i; /* '<S300>/Integrator' */
  int16_T Integrator_PrevResetState_pk;/* '<S140>/Integrator' */
  int16_T Integrator_PrevResetState_h; /* '<S89>/Integrator' */
  uint16_T DiscreteTimeIntegrator3_IC_LOAD;/* '<S464>/Discrete-Time Integrator3' */
  uint16_T DiscreteTimeIntegrator3_IC_LO_n;/* '<S465>/Discrete-Time Integrator3' */
  uint16_T DiscreteTimeIntegrator3_IC_LO_e;/* '<S492>/Discrete-Time Integrator3' */
  uint16_T DiscreteTimeIntegrator3_IC_LO_f;/* '<S493>/Discrete-Time Integrator3' */
  boolean_T EnMtr2TrqCtrl;             /* '<Root>/Data Store Memory5' */
  boolean_T Enable;                    /* '<Root>/Data Store Memory29' */
  boolean_T EnClosedLoop;              /* '<Root>/Data Store Memory3' */
  boolean_T EnableEnMtr2TrqCtrlafter2secdel;
                           /* '<S384>/Enable EnMtr2TrqCtrl after 2 sec delay' */
  boolean_T OpenLoopStartUp_MODE;      /* '<S19>/Open Loop Start-Up' */
  rtDW_SpeedLimitformotor2_mcb_pm SpeedLimitformotor2;/* '<Root>/Speed Limit for motor2' */
  rtDW_SPIMasterTransfer2_mcb_pms SPIMasterTransfer3;/* '<S426>/SPI Master Transfer2' */
  rtDW_SPIMasterTransfer2_mcb_pms SPIMasterTransfer2;/* '<S426>/SPI Master Transfer2' */
  rtDW_SPIMasterTransfer_mcb_pmsm SPIMasterTransfer1;/* '<S426>/SPI Master Transfer' */
  rtDW_SPIMasterTransfer_mcb_pmsm SPIMasterTransfer;/* '<S426>/SPI Master Transfer' */
  rtDW_IfActionSubsystem_mcb_pm_a IfActionSubsystem1_i;/* '<S437>/If Action Subsystem1' */
  rtDW_IfActionSubsystem_mcb_pm_a IfActionSubsystem_g;/* '<S429>/If Action Subsystem' */
  rtDW_IndexFinder_mcb_pmsm_foc_q IndexFinder_b;/* '<S389>/IndexFinder' */
  rtDW_IndexFinder_mcb_pmsm_foc_q IndexFinder;/* '<S190>/IndexFinder' */
} D_Work_mcb_pmsm_foc_qep_dyno_f2;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T IndexVector;            /* '<S447>/Index Vector' */
  const real_T IndexVector1;           /* '<S447>/Index Vector1' */
  const real_T IndexVector2;           /* '<S447>/Index Vector2' */
  const real_T IndexVector_g;          /* '<S463>/Index Vector' */
  const real_T IndexVector1_c;         /* '<S463>/Index Vector1' */
  const real_T Add;                    /* '<S463>/Add' */
  const real_T IndexVector_gf;         /* '<S464>/Index Vector' */
  const real_T IndexVector_gt;         /* '<S466>/Index Vector' */
  const real_T IndexVector_n;          /* '<S467>/Index Vector' */
  const real_T IndexVector2_m;         /* '<S467>/Index Vector2' */
  const real_T IndexVector_l;          /* '<S468>/Index Vector' */
  const real_T IndexVector_i;          /* '<S465>/Index Vector' */
  const real_T IndexVector_c;          /* '<S469>/Index Vector' */
  const real_T IndexVector_li;         /* '<S470>/Index Vector' */
  const real_T IndexVector1_m;         /* '<S470>/Index Vector1' */
  const real_T IndexVector_d;          /* '<S471>/Index Vector' */
  const real_T IndexVector_p;          /* '<S472>/Index Vector' */
  const real_T IndexVector_h;          /* '<S491>/Index Vector' */
  const real_T IndexVector1_cq;        /* '<S491>/Index Vector1' */
  const real_T Add_h;                  /* '<S491>/Add' */
  const real_T IndexVector_io;         /* '<S492>/Index Vector' */
  const real_T IndexVector_e;          /* '<S494>/Index Vector' */
  const real_T IndexVector_ei;         /* '<S495>/Index Vector' */
  const real_T IndexVector1_o;         /* '<S495>/Index Vector1' */
  const real_T IndexVector_ii;         /* '<S496>/Index Vector' */
  const real_T IndexVector_ng;         /* '<S493>/Index Vector' */
  const real_T IndexVector_b;          /* '<S497>/Index Vector' */
  const real_T IndexVector_ck;         /* '<S498>/Index Vector' */
  const real_T IndexVector1_k;         /* '<S498>/Index Vector1' */
  const real_T IndexVector_ds;         /* '<S499>/Index Vector' */
  const real_T IndexVector_f;          /* '<S500>/Index Vector' */
  const real32_T Ld_Port;              /* '<S421>/Gain' */
  const real32_T Switch;               /* '<S421>/Switch' */
  const real32_T Lq_Port;              /* '<S421>/Gain1' */
  const real32_T Switch1;              /* '<S421>/Switch1' */
  const real32_T FluxPM_Port;          /* '<S421>/Gain2' */
  const real32_T Switch2;              /* '<S421>/Switch2' */
  const real32_T Ld_Lq;                /* '<S420>/Subtract' */
  const real32_T Ld_Port_f;            /* '<S222>/Gain' */
  const real32_T Switch_c;             /* '<S222>/Switch' */
  const real32_T Lq_Port_h;            /* '<S222>/Gain1' */
  const real32_T Switch1_i;            /* '<S222>/Switch1' */
  const real32_T FluxPM_Port_d;        /* '<S222>/Gain2' */
  const real32_T Switch2_j;            /* '<S222>/Switch2' */
  const real32_T Ld_Lq_a;              /* '<S221>/Subtract' */
  const uint16_T Width;                /* '<S223>/Width' */
} ConstBlockIO_mcb_pmsm_foc_qep_d;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S34>/sine_table_values'
   *   '<S178>/sine_table_values'
   *   '<S245>/sine_table_values'
   */
  real32_T pooled29[1002];
} ConstParam_mcb_pmsm_foc_qep_dyn;

/* Real-time Model Data Structure */
struct tag_RTM_mcb_pmsm_foc_qep_dyno_f {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[3];
    } TaskCounters;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO_mcb_pmsm_foc_qep_dyno_f mcb_pmsm_foc_qep_dyno_f28069m_B;

/* Block states (default storage) */
extern D_Work_mcb_pmsm_foc_qep_dyno_f2 mcb_pmsm_foc_qep_dyno_f28_DWork;
extern const ConstBlockIO_mcb_pmsm_foc_qep_d mcb_pmsm_foc_qep_dyno_f2_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstParam_mcb_pmsm_foc_qep_dyn mcb_pmsm_foc_qep_dyno_f2_ConstP;

/* External function called from main */
extern void mcb_pmsm_foc_qep_dyno_f28069m_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void mcb_pmsm_foc_qep_dyno_f28069m_initialize(void);
extern void mcb_pmsm_foc_qep_dyno_f28069m_step0(void);
extern void mcb_pmsm_foc_qep_dyno_f28069m_step1(void);
extern void mcb_pmsm_foc_qep_dyno_f28069m_step2(void);
extern void mcb_pmsm_foc_qep_dyno_f28069m_terminate(void);

/* Real-time Model object */
extern RT_MODEL_mcb_pmsm_foc_qep_dyno_ *const mcb_pmsm_foc_qep_dyno_f28069_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

#ifdef __cpluscplus

extern "C"
{

#endif

  interrupt void ADCINT1(void);
  interrupt void ADCINT2(void);
  interrupt void SCIRXINTA(void);
  void mcb_pmsm_foc_qep_dyno_f28069m_configure_interrupts (void);
  void mcb_pmsm_foc_qep_dyno_f28069m_unconfigure_interrupts (void);

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
 * '<Root>' : 'mcb_pmsm_foc_qep_dyno_f28069m'
 * '<S1>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation'
 * '<S2>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1'
 * '<S3>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2'
 * '<S4>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init'
 * '<S5>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/HeartBeat LED'
 * '<S6>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled'
 * '<S7>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive'
 * '<S8>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1'
 * '<S9>'   : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Limit for motor2'
 * '<S10>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT1'
 * '<S11>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT2'
 * '<S12>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_SCIRXINTA'
 * '<S13>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT1/ECSoC'
 * '<S14>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT1/ECSoC/ECSimCodegen'
 * '<S15>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT2/ECSoC'
 * '<S16>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_ADCINT2/ECSoC/ECSimCodegen'
 * '<S17>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_SCIRXINTA/ECSoC'
 * '<S18>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/Code generation/HWI_SCIRXINTA/ECSoC/ECSimCodegen'
 * '<S19>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System'
 * '<S20>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/HW_Inputs'
 * '<S21>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling'
 * '<S22>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Inverter (Code Generation)'
 * '<S23>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Output Scaling'
 * '<S24>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/PMSM Torque Estimator1'
 * '<S25>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)'
 * '<S26>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Subsystem'
 * '<S27>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control'
 * '<S28>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up'
 * '<S29>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control'
 * '<S30>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Clarke Transform'
 * '<S31>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers'
 * '<S32>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Inverse Park Transform'
 * '<S33>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Park Transform'
 * '<S34>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup'
 * '<S35>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator'
 * '<S36>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Clarke Transform/Two phase input'
 * '<S37>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Clarke Transform/Two phase input/Two phase CRL wrap'
 * '<S38>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter'
 * '<S39>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id'
 * '<S40>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq'
 * '<S41>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence'
 * '<S42>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority'
 * '<S43>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/Inport//Dialog Selection'
 * '<S44>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/Magnitude_calc'
 * '<S45>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence/Limiter'
 * '<S46>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence/Passthrough'
 * '<S47>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/Compare To Constant'
 * '<S48>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/Compare To Constant1'
 * '<S49>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/flipInputs'
 * '<S50>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/flipInputs1'
 * '<S51>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter'
 * '<S52>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/limitRef1'
 * '<S53>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/limitRef2'
 * '<S54>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/passThrough'
 * '<S55>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset'
 * '<S56>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S57>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S58>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S59>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S60>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S61>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S62>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S63>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S64>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S65>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S66>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S67>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S68>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S69>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S70>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S71>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S72>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S73>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S74>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S75>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S76>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S77>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S78>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S79>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S80>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S81>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S82>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S83>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S84>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S85>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S86>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S87>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S88>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S89>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S90>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S91>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S92>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S93>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S94>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S95>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S96>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S97>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S98>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S99>'  : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S100>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S101>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S102>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S103>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S104>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S105>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S106>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset'
 * '<S107>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S108>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S109>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S110>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S111>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S112>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S113>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S114>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S115>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S116>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S117>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S118>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S119>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S120>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S121>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S122>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S123>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S124>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S125>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S126>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S127>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S128>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S129>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S130>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S131>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S132>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S133>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S134>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S135>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S136>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S137>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S138>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S139>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S140>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S141>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S142>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S143>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S144>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S145>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S146>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S147>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S148>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S149>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S150>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S151>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S152>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S153>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S154>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S155>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S156>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S157>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Inverse Park Transform/Two inputs CRL'
 * '<S158>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Inverse Park Transform/Two inputs CRL/Switch_Axis'
 * '<S159>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Park Transform/Two inputs CRL'
 * '<S160>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Park Transform/Two inputs CRL/Switch_Axis'
 * '<S161>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup/Interpolation'
 * '<S162>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup/WrapUp'
 * '<S163>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup/WrapUp/Compare To Zero'
 * '<S164>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup/WrapUp/If Action Subsystem'
 * '<S165>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Sine-Cosine Lookup/WrapUp/If Action Subsystem1'
 * '<S166>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Modulation method'
 * '<S167>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Voltage Input'
 * '<S168>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Modulation method/SVPWM'
 * '<S169>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Modulation method/SVPWM/Half(Vmin+Vmax)'
 * '<S170>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Voltage Input/Valphabeta'
 * '<S171>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Voltage Input/Valphabeta/Inverse Clarke Transform'
 * '<S172>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Closed loop Control/Current Control/Space Vector Generator/Voltage Input/Valphabeta/Inverse Clarke Transform/Two phase input'
 * '<S173>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator'
 * '<S174>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/Position Generator1'
 * '<S175>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/Ramp Generator'
 * '<S176>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Inverse Clarke Transform'
 * '<S177>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Inverse Park Transform'
 * '<S178>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup'
 * '<S179>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Inverse Clarke Transform/Two phase input'
 * '<S180>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Inverse Park Transform/Two inputs CRL'
 * '<S181>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Inverse Park Transform/Two inputs CRL/Switch_Axis'
 * '<S182>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup/Interpolation'
 * '<S183>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup/WrapUp'
 * '<S184>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup/WrapUp/Compare To Zero'
 * '<S185>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup/WrapUp/If Action Subsystem'
 * '<S186>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/3-Phase Sine Voltage Generator/Sine-Cosine Lookup/WrapUp/If Action Subsystem1'
 * '<S187>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/Position Generator1/Accumulate'
 * '<S188>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Control_System/Open Loop Start-Up/Position Generator1/Accumulate/Subsystem'
 * '<S189>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/HW_Inputs/Sensor Driver Blocks (codegen)'
 * '<S190>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed'
 * '<S191>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/Calculate Phase Currents'
 * '<S192>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IIR Filter'
 * '<S193>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IndexFinder'
 * '<S194>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position'
 * '<S195>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder'
 * '<S196>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Speed Measurement'
 * '<S197>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter'
 * '<S198>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter/Low-pass'
 * '<S199>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S200>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IndexFinder/Compare To Constant'
 * '<S201>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/IndexFinder/Compare To Constant1'
 * '<S202>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec'
 * '<S203>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point'
 * '<S204>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset'
 * '<S205>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec'
 * '<S206>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem'
 * '<S207>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem1'
 * '<S208>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem'
 * '<S209>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem/Dialog'
 * '<S210>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/DT_Handle'
 * '<S211>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset'
 * '<S212>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionResetAtIndex'
 * '<S213>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/Variant Subsystem'
 * '<S214>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/DT_Handle/floating-point'
 * '<S215>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem'
 * '<S216>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem/Dialog'
 * '<S217>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Quadrature Decoder/Variant Subsystem/Dialog'
 * '<S218>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Speed Measurement/DT_Handle'
 * '<S219>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/Input Scaling/ Calculate Speed/Speed Measurement/DT_Handle/floating-point'
 * '<S220>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/PMSM Torque Estimator1/Variant Subsystem'
 * '<S221>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/PMSM Torque Estimator1/Variant Subsystem/Torque Estimator_LumpedParameters_InputPort'
 * '<S222>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/PMSM Torque Estimator1/Variant Subsystem/Torque Estimator_LumpedParameters_InputPort/LumpedParams_InputPorts'
 * '<S223>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging'
 * '<S224>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/While Iterator Subsystem'
 * '<S225>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Counter Limited'
 * '<S226>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Data'
 * '<S227>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Data_Conditioning'
 * '<S228>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/End'
 * '<S229>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Start'
 * '<S230>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Counter Limited/Increment Real World'
 * '<S231>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor1/SCI (Code Generation)/Data_Logging/Counter Limited/Wrap To Zero'
 * '<S232>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System'
 * '<S233>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Enable Motor2 after a delay'
 * '<S234>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/HW_Inputs1'
 * '<S235>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling'
 * '<S236>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Inverter (Code Generation)'
 * '<S237>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Output Scaling'
 * '<S238>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/PMSM Torque Estimator1'
 * '<S239>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop'
 * '<S240>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control'
 * '<S241>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Clarke Transform'
 * '<S242>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers'
 * '<S243>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Inverse Park Transform'
 * '<S244>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Park Transform'
 * '<S245>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup'
 * '<S246>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator'
 * '<S247>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Clarke Transform/Two phase input'
 * '<S248>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Clarke Transform/Two phase input/Two phase CRL wrap'
 * '<S249>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter'
 * '<S250>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id'
 * '<S251>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq'
 * '<S252>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence'
 * '<S253>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority'
 * '<S254>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/Inport//Dialog Selection'
 * '<S255>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/Magnitude_calc'
 * '<S256>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence/Limiter'
 * '<S257>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D-Q Equivalence/Passthrough'
 * '<S258>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/Compare To Constant'
 * '<S259>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/Compare To Constant1'
 * '<S260>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/flipInputs'
 * '<S261>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/flipInputs1'
 * '<S262>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter'
 * '<S263>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/limitRef1'
 * '<S264>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/limitRef2'
 * '<S265>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/DQ Limiter/D//Q Axis Priority/limiter/passThrough'
 * '<S266>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset'
 * '<S267>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S268>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S269>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S270>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S271>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S272>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S273>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S274>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S275>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S276>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S277>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S278>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S279>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S280>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S281>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S282>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S283>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S284>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S285>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S286>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S287>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S288>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S289>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S290>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S291>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S292>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S293>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S294>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S295>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S296>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S297>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S298>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S299>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S300>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S301>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S302>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S303>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S304>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S305>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S306>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S307>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S308>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S309>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S310>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S311>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S312>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S313>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S314>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S315>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S316>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Id/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S317>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset'
 * '<S318>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S319>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S320>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S321>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S322>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S323>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S324>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S325>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S326>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S327>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S328>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S329>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S330>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S331>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S332>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S333>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S334>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S335>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S336>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S337>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S338>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S339>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S340>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S341>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S342>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S343>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S344>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S345>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S346>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S347>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S348>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S349>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S350>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S351>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S352>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S353>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S354>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S355>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S356>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S357>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S358>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S359>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S360>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S361>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S362>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S363>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S364>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S365>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S366>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S367>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Current_Controllers/PI_Controller_Iq/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S368>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Inverse Park Transform/Two inputs CRL'
 * '<S369>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Inverse Park Transform/Two inputs CRL/Switch_Axis'
 * '<S370>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Park Transform/Two inputs CRL'
 * '<S371>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Park Transform/Two inputs CRL/Switch_Axis'
 * '<S372>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup/Interpolation'
 * '<S373>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup/WrapUp'
 * '<S374>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup/WrapUp/Compare To Zero'
 * '<S375>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup/WrapUp/If Action Subsystem'
 * '<S376>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Sine-Cosine Lookup/WrapUp/If Action Subsystem1'
 * '<S377>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Modulation method'
 * '<S378>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Voltage Input'
 * '<S379>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Modulation method/SVPWM'
 * '<S380>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Modulation method/SVPWM/Half(Vmin+Vmax)'
 * '<S381>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Voltage Input/Valphabeta'
 * '<S382>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Voltage Input/Valphabeta/Inverse Clarke Transform'
 * '<S383>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Control_System/Closed loop/Current Control/Space Vector Generator/Voltage Input/Valphabeta/Inverse Clarke Transform/Two phase input'
 * '<S384>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Enable Motor2 after a delay/Delay to start motor1 (codegen)'
 * '<S385>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Enable Motor2 after a delay/Delay to start motor1 (codegen)/Disable EnMtr2TrqCtrl'
 * '<S386>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Enable Motor2 after a delay/Delay to start motor1 (codegen)/Enable EnMtr2TrqCtrl after 2 sec delay'
 * '<S387>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Enable Motor2 after a delay/Delay to start motor1 (codegen)/Enable EnMtr2TrqCtrl after 2 sec delay/Enable EnMtr2TrqCtrl'
 * '<S388>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/HW_Inputs1/Sensor Driver Blocks (codegen)'
 * '<S389>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed'
 * '<S390>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/Calculate Phase Currents'
 * '<S391>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IIR Filter'
 * '<S392>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IndexFinder'
 * '<S393>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position'
 * '<S394>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder'
 * '<S395>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Speed Measurement'
 * '<S396>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter'
 * '<S397>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter/Low-pass'
 * '<S398>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S399>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IndexFinder/Compare To Constant'
 * '<S400>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/IndexFinder/Compare To Constant1'
 * '<S401>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec'
 * '<S402>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point'
 * '<S403>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset'
 * '<S404>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec'
 * '<S405>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem'
 * '<S406>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Compensate Offset/If Action Subsystem1'
 * '<S407>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem'
 * '<S408>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Mechanical to Electrical Position/MechToElec/floating-point/Mech To Elec/Variant Subsystem/Dialog'
 * '<S409>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/DT_Handle'
 * '<S410>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset'
 * '<S411>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionResetAtIndex'
 * '<S412>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/Variant Subsystem'
 * '<S413>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/DT_Handle/floating-point'
 * '<S414>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem'
 * '<S415>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/PositionNoReset/Variant Subsystem/Dialog'
 * '<S416>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Quadrature Decoder/Variant Subsystem/Dialog'
 * '<S417>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Speed Measurement/DT_Handle'
 * '<S418>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/Input Scaling/ Calculate Speed/Speed Measurement/DT_Handle/floating-point'
 * '<S419>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/PMSM Torque Estimator1/Variant Subsystem'
 * '<S420>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/PMSM Torque Estimator1/Variant Subsystem/Torque Estimator_LumpedParameters_InputPort'
 * '<S421>' : 'mcb_pmsm_foc_qep_dyno_f28069m/FOC Algorithm Motor2/PMSM Torque Estimator1/Variant Subsystem/Torque Estimator_LumpedParameters_InputPort/LumpedParams_InputPorts'
 * '<S422>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init'
 * '<S423>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)'
 * '<S424>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor'
 * '<S425>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor'
 * '<S426>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Enable DRV8305 for motor 1 and motor 2'
 * '<S427>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset'
 * '<S428>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Default ADC Offset'
 * '<S429>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/For Iterator Subsystem'
 * '<S430>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/If Action Subsystem'
 * '<S431>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/If Action Subsystem1'
 * '<S432>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/If Action Subsystem2'
 * '<S433>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/If Action Subsystem3'
 * '<S434>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 1 current sensor/Calculate ADC Offset/For Iterator Subsystem/If Action Subsystem'
 * '<S435>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset'
 * '<S436>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Default ADC Offset'
 * '<S437>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/For Iterator Subsystem'
 * '<S438>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/If Action Subsystem4'
 * '<S439>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/If Action Subsystem5'
 * '<S440>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/If Action Subsystem6'
 * '<S441>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/If Action Subsystem7'
 * '<S442>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Hardware Init/HW_Init/HW_Init (Codegen)/Calibrate ADC offset for motor 2 current sensor/Calculate ADC Offset/For Iterator Subsystem/If Action Subsystem1'
 * '<S443>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control'
 * '<S444>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control'
 * '<S445>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete'
 * '<S446>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete'
 * '<S447>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Mechanical and Angle'
 * '<S448>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Motor Units1'
 * '<S449>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic'
 * '<S450>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Mechanical and Angle/Int1'
 * '<S451>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Mechanical and Angle/Int1/Compare To Constant'
 * '<S452>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Mechanical and Angle/Int1/Compare To Constant1'
 * '<S453>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Motor Units1/Power Accounting Bus Creator'
 * '<S454>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S455>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrStored Input'
 * '<S456>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S457>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Clarke Transform'
 * '<S458>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Inverse Clarke Transform'
 * '<S459>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Inverse Park Transform'
 * '<S460>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Machine Torque'
 * '<S461>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit'
 * '<S462>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Park Transform'
 * '<S463>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/Machine Torque/Subsystem'
 * '<S464>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage'
 * '<S465>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage'
 * '<S466>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem'
 * '<S467>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem1'
 * '<S468>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem2'
 * '<S469>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem'
 * '<S470>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem1'
 * '<S471>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem2'
 * '<S472>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 1 - Speed control/PMSM Torque Input Exterior Discrete/PMSM Torque Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem3'
 * '<S473>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete'
 * '<S474>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete'
 * '<S475>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Mechanical and Angle'
 * '<S476>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Motor Units1'
 * '<S477>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic'
 * '<S478>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Mechanical and Angle/Int'
 * '<S479>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Mechanical and Angle/Int/Compare To Constant'
 * '<S480>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Mechanical and Angle/Int/Compare To Constant1'
 * '<S481>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Motor Units1/Power Accounting Bus Creator'
 * '<S482>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrNotTrnsfrd Input'
 * '<S483>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrStored Input'
 * '<S484>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/Motor Units1/Power Accounting Bus Creator/PwrTrnsfrd Input'
 * '<S485>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Clarke Transform'
 * '<S486>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Inverse Clarke Transform'
 * '<S487>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Inverse Park Transform'
 * '<S488>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Machine Torque'
 * '<S489>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit'
 * '<S490>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Park Transform'
 * '<S491>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/Machine Torque/Subsystem'
 * '<S492>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage'
 * '<S493>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage'
 * '<S494>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem'
 * '<S495>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem1'
 * '<S496>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/D Axis Stator Voltage/Subsystem2'
 * '<S497>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem'
 * '<S498>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem1'
 * '<S499>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem2'
 * '<S500>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Motor1 and Motor2 coupled/Motor 2 - Torque control/PMSM Speed Input Exterior Discrete/PMSM Speed Input Core Discrete/PMSM Electromagnetic/PMSM Equivalent Circuit/Q Axis Stator Voltage/Subsystem3'
 * '<S501>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Code Generation'
 * '<S502>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal'
 * '<S503>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal/Data_Conditioning'
 * '<S504>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal/If Action Subsystem'
 * '<S505>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal/If Action Subsystem1'
 * '<S506>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal/If Action Subsystem2'
 * '<S507>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Serial Receive/Reference Signal/unParse'
 * '<S508>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed'
 * '<S509>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/Speed_Ref_Selector'
 * '<S510>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset'
 * '<S511>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup'
 * '<S512>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/D Gain'
 * '<S513>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter'
 * '<S514>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter ICs'
 * '<S515>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/I Gain'
 * '<S516>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain'
 * '<S517>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk'
 * '<S518>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator'
 * '<S519>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator ICs'
 * '<S520>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Copy'
 * '<S521>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Gain'
 * '<S522>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/P Copy'
 * '<S523>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Parallel P Gain'
 * '<S524>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Reset Signal'
 * '<S525>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation'
 * '<S526>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk'
 * '<S527>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum'
 * '<S528>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum Fdbk'
 * '<S529>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode'
 * '<S530>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum'
 * '<S531>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral'
 * '<S532>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain'
 * '<S533>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/postSat Signal'
 * '<S534>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/preSat Signal'
 * '<S535>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel'
 * '<S536>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S537>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S538>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/D Gain/Disabled'
 * '<S539>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter/Disabled'
 * '<S540>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Filter ICs/Disabled'
 * '<S541>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/I Gain/External Parameters'
 * '<S542>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain/Passthrough'
 * '<S543>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Ideal P Gain Fdbk/Disabled'
 * '<S544>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator/Discrete'
 * '<S545>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Integrator ICs/External IC'
 * '<S546>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Copy/Disabled wSignal Specification'
 * '<S547>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/N Gain/Disabled'
 * '<S548>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/P Copy/Disabled'
 * '<S549>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Parallel P Gain/External Parameters'
 * '<S550>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Reset Signal/External Reset'
 * '<S551>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation/Enabled'
 * '<S552>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Saturation Fdbk/Disabled'
 * '<S553>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum/Sum_PI'
 * '<S554>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Sum Fdbk/Disabled'
 * '<S555>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode/Disabled'
 * '<S556>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tracking Mode Sum/Passthrough'
 * '<S557>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Integral/TsSignalSpecification'
 * '<S558>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/Tsamp - Ngain/Passthrough'
 * '<S559>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/postSat Signal/Forward_Path'
 * '<S560>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/PI_Controller_Speed/Discrete PI Controller  with anti-windup & reset/preSat Signal/Forward_Path'
 * '<S561>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/Speed_Ref_Selector/IIR Filter'
 * '<S562>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/Speed_Ref_Selector/IIR Filter/IIR Filter'
 * '<S563>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/Speed_Ref_Selector/IIR Filter/IIR Filter/Low-pass'
 * '<S564>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Control for motor1/Speed_Ref_Selector/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 * '<S565>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Limit for motor2/IIR Filter'
 * '<S566>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Limit for motor2/IIR Filter/IIR Filter'
 * '<S567>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Limit for motor2/IIR Filter/IIR Filter/Low-pass'
 * '<S568>' : 'mcb_pmsm_foc_qep_dyno_f28069m/Speed Limit for motor2/IIR Filter/IIR Filter/Low-pass/IIR Low Pass Filter'
 */
#endif                         /* RTW_HEADER_mcb_pmsm_foc_qep_dyno_f28069m_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
