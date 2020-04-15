//
// File: fuzzy_logic_system.h
//
// Code generated for Simulink model 'fuzzy_logic_system'.
//
// Model version                  : 1.60
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Dec  7 12:11:05 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_fuzzy_logic_system_h_
#define RTW_HEADER_fuzzy_logic_system_h_
#include <stddef.h>
#include <string.h>
#ifndef fuzzy_logic_system_COMMON_INCLUDES_
# define fuzzy_logic_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // fuzzy_logic_system_COMMON_INCLUDES_

#include "fuzzy_logic_system_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (auto storage)
typedef struct {
  real_T impMethod_n[303];             // '<S115>/impMethod'
  real_T impMethod_cb[303];            // '<S114>/impMethod'
  real_T impMethod_a[303];             // '<S113>/impMethod'
  real_T impMethod_k[303];             // '<S112>/impMethod'
  real_T impMethod_kx[303];            // '<S111>/impMethod'
  real_T impMethod_m[303];             // '<S110>/impMethod'
  real_T impMethod_d[303];             // '<S109>/impMethod'
  real_T impMethod_f[303];             // '<S108>/impMethod'
  real_T impMethod_o[303];             // '<S123>/impMethod'
  real_T impMethod_b[303];             // '<S116>/impMethod'
  real_T impMethod_fm[303];            // '<S105>/impMethod'
  real_T impMethod_nj[303];            // '<S127>/impMethod'
  real_T impMethod_jt[303];            // '<S128>/impMethod'
  real_T impMethod_j[303];             // '<S129>/impMethod'
  real_T impMethod_ah[303];            // '<S106>/impMethod'
  real_T impMethod_iw[303];            // '<S107>/impMethod'
  real_T impMethod_l[303];             // '<S120>/impMethod'
  real_T impMethod_c[303];             // '<S121>/impMethod'
  real_T impMethod[303];               // '<S122>/impMethod'
  real_T impMethod_g[303];             // '<S119>/impMethod'
  real_T impMethod_i[303];             // '<S118>/impMethod'
  real_T impMethod_gt[303];            // '<S117>/impMethod'
  real_T impMethod_h[303];             // '<S126>/impMethod'
  real_T impMethod_fi[303];            // '<S125>/impMethod'
  real_T impMethod_ch[303];            // '<S124>/impMethod'
  real_T AggMethod3[101];              // '<S187>/AggMethod3'
  real_T AggMethod2[101];              // '<S187>/AggMethod2'
  real_T AggMethod1[101];              // '<S187>/AggMethod1'
  SL_Bus_fuzzy_logic_system_gain_msgs_pid BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_fuzzy_logic_system_error_msgs_Error In1;// '<S277>/In1'
  SL_Bus_fuzzy_logic_system_error_msgs_Error varargout_2;
  real_T Weighting;                    // '<S122>/Weighting'
  real_T Weighting_g;                  // '<S121>/Weighting'
  real_T Weighting_p;                  // '<S120>/Weighting'
  real_T Weighting_a;                  // '<S119>/Weighting'
  real_T Weighting_h;                  // '<S118>/Weighting'
  real_T Weighting_i;                  // '<S117>/Weighting'
  real_T Weighting_k;                  // '<S115>/Weighting'
  real_T Weighting_d;                  // '<S114>/Weighting'
  real_T Weighting_k1;                 // '<S113>/Weighting'
  real_T Weighting_b;                  // '<S112>/Weighting'
  real_T Weighting_c;                  // '<S111>/Weighting'
  real_T Weighting_o;                  // '<S110>/Weighting'
  real_T Weighting_ol;                 // '<S109>/Weighting'
  real_T Weighting_n;                  // '<S108>/Weighting'
  real_T Weighting_ik;                 // '<S107>/Weighting'
  real_T Weighting_hb;                 // '<S106>/Weighting'
  real_T Weighting_hpq;                // '<S128>/Weighting'
  real_T Weighting_hg;                 // '<S127>/Weighting'
  real_T Merge_c;                      // '<S229>/Merge'
  real_T Merge_m2;                     // '<S230>/Merge'
  real_T Merge_i;                      // '<S254>/Merge'
  real_T Merge_mn;                     // '<S255>/Merge'
  real_T Merge_m;                      // '<S256>/Merge'
  real_T Merge_l;                      // '<S253>/Merge'
  real_T Merge_b;                      // '<S252>/Merge'
  real_T Merge;                        // '<S227>/Merge'
  real_T AveragingCOA;                 // '<S188>/Averaging (COA)'
  real_T Sum1_h;                       // '<S10>/Sum1'
  real_T Sum1_l;                       // '<S9>/Sum1'
} B_fuzzy_logic_system_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S6>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S5>/SinkBlock'
  robotics_slros_internal_blo_l_T obj_d;// '<S6>/SourceBlock'
} DW_fuzzy_logic_system_T;

// Parameters for system: '<S8>/Action: One'
struct P_ActionOne_fuzzy_logic_syste_T_ {
  real_T One_Value;                    // Expression: 1
                                       //  Referenced by: '<S41>/One'

};

// Parameters for system: '<S47>/If Action Subsystem'
struct P_IfActionSubsystem_fuzzy_log_T_ {
  real_T u_Value;                      // Expression: 0
                                       //  Referenced by: '<S52>/0'

};

// Parameters (auto storage)
struct P_fuzzy_logic_system_T_ {
  real_T NL_a;                         // Mask Parameter: NL_a
                                       //  Referenced by: '<S227>/If Action Subsystem3'

  real_T NL_a_k;                       // Mask Parameter: NL_a_k
                                       //  Referenced by: '<S252>/If Action Subsystem3'

  real_T NS_a;                         // Mask Parameter: NS_a
                                       //  Referenced by: '<S253>/If Action Subsystem3'

  real_T ZE_a;                         // Mask Parameter: ZE_a
                                       //  Referenced by: '<S256>/If Action Subsystem3'

  real_T PS_a;                         // Mask Parameter: PS_a
                                       //  Referenced by: '<S255>/If Action Subsystem3'

  real_T PL_a;                         // Mask Parameter: PL_a
                                       //  Referenced by: '<S254>/If Action Subsystem3'

  real_T NS_a_p;                       // Mask Parameter: NS_a_p
                                       //  Referenced by: '<S228>/If Action Subsystem3'

  real_T ZE_a_j;                       // Mask Parameter: ZE_a_j
                                       //  Referenced by: '<S231>/If Action Subsystem3'

  real_T PS_a_e;                       // Mask Parameter: PS_a_e
                                       //  Referenced by: '<S230>/If Action Subsystem3'

  real_T PL_a_f;                       // Mask Parameter: PL_a_f
                                       //  Referenced by: '<S229>/If Action Subsystem3'

  real_T NL_a_d;                       // Mask Parameter: NL_a_d
                                       //  Referenced by: '<S47>/If Action Subsystem3'

  real_T NL_a_g;                       // Mask Parameter: NL_a_g
                                       //  Referenced by: '<S72>/If Action Subsystem3'

  real_T NS_a_pb;                      // Mask Parameter: NS_a_pb
                                       //  Referenced by: '<S73>/If Action Subsystem3'

  real_T ZE_a_p;                       // Mask Parameter: ZE_a_p
                                       //  Referenced by: '<S76>/If Action Subsystem3'

  real_T PS_a_d;                       // Mask Parameter: PS_a_d
                                       //  Referenced by: '<S75>/If Action Subsystem3'

  real_T PL_a_m;                       // Mask Parameter: PL_a_m
                                       //  Referenced by: '<S74>/If Action Subsystem3'

  real_T NS_a_f;                       // Mask Parameter: NS_a_f
                                       //  Referenced by: '<S48>/If Action Subsystem3'

  real_T ZE_a_e;                       // Mask Parameter: ZE_a_e
                                       //  Referenced by: '<S51>/If Action Subsystem3'

  real_T PS_a_c;                       // Mask Parameter: PS_a_c
                                       //  Referenced by: '<S50>/If Action Subsystem3'

  real_T PL_a_g;                       // Mask Parameter: PL_a_g
                                       //  Referenced by: '<S49>/If Action Subsystem3'

  real_T NL_a_j;                       // Mask Parameter: NL_a_j
                                       //  Referenced by: '<S137>/If Action Subsystem3'

  real_T NL_a_e;                       // Mask Parameter: NL_a_e
                                       //  Referenced by: '<S162>/If Action Subsystem3'

  real_T NS_a_j;                       // Mask Parameter: NS_a_j
                                       //  Referenced by: '<S163>/If Action Subsystem3'

  real_T ZE_a_i;                       // Mask Parameter: ZE_a_i
                                       //  Referenced by: '<S166>/If Action Subsystem3'

  real_T PS_a_g;                       // Mask Parameter: PS_a_g
                                       //  Referenced by: '<S165>/If Action Subsystem3'

  real_T PL_a_k;                       // Mask Parameter: PL_a_k
                                       //  Referenced by: '<S164>/If Action Subsystem3'

  real_T NS_a_g;                       // Mask Parameter: NS_a_g
                                       //  Referenced by: '<S138>/If Action Subsystem3'

  real_T ZE_a_jw;                      // Mask Parameter: ZE_a_jw
                                       //  Referenced by: '<S141>/If Action Subsystem3'

  real_T PS_a_o;                       // Mask Parameter: PS_a_o
                                       //  Referenced by: '<S140>/If Action Subsystem3'

  real_T PL_a_ms;                      // Mask Parameter: PL_a_ms
                                       //  Referenced by: '<S139>/If Action Subsystem3'

  real_T NL_b;                         // Mask Parameter: NL_b
                                       //  Referenced by:
                                       //    '<S227>/If Action Subsystem2'
                                       //    '<S227>/If Action Subsystem3'

  real_T NL_b_p;                       // Mask Parameter: NL_b_p
                                       //  Referenced by:
                                       //    '<S252>/If Action Subsystem2'
                                       //    '<S252>/If Action Subsystem3'

  real_T NS_b;                         // Mask Parameter: NS_b
                                       //  Referenced by:
                                       //    '<S253>/If Action Subsystem2'
                                       //    '<S253>/If Action Subsystem3'

  real_T ZE_b;                         // Mask Parameter: ZE_b
                                       //  Referenced by:
                                       //    '<S256>/If Action Subsystem2'
                                       //    '<S256>/If Action Subsystem3'

  real_T PS_b;                         // Mask Parameter: PS_b
                                       //  Referenced by:
                                       //    '<S255>/If Action Subsystem2'
                                       //    '<S255>/If Action Subsystem3'

  real_T PL_b;                         // Mask Parameter: PL_b
                                       //  Referenced by:
                                       //    '<S254>/If Action Subsystem2'
                                       //    '<S254>/If Action Subsystem3'

  real_T NS_b_i;                       // Mask Parameter: NS_b_i
                                       //  Referenced by:
                                       //    '<S228>/If Action Subsystem2'
                                       //    '<S228>/If Action Subsystem3'

  real_T ZE_b_m;                       // Mask Parameter: ZE_b_m
                                       //  Referenced by:
                                       //    '<S231>/If Action Subsystem2'
                                       //    '<S231>/If Action Subsystem3'

  real_T PS_b_l;                       // Mask Parameter: PS_b_l
                                       //  Referenced by:
                                       //    '<S230>/If Action Subsystem2'
                                       //    '<S230>/If Action Subsystem3'

  real_T PL_b_d;                       // Mask Parameter: PL_b_d
                                       //  Referenced by:
                                       //    '<S229>/If Action Subsystem2'
                                       //    '<S229>/If Action Subsystem3'

  real_T NL_b_j;                       // Mask Parameter: NL_b_j
                                       //  Referenced by:
                                       //    '<S47>/If Action Subsystem2'
                                       //    '<S47>/If Action Subsystem3'

  real_T NL_b_m;                       // Mask Parameter: NL_b_m
                                       //  Referenced by:
                                       //    '<S72>/If Action Subsystem2'
                                       //    '<S72>/If Action Subsystem3'

  real_T NS_b_j;                       // Mask Parameter: NS_b_j
                                       //  Referenced by:
                                       //    '<S73>/If Action Subsystem2'
                                       //    '<S73>/If Action Subsystem3'

  real_T ZE_b_d;                       // Mask Parameter: ZE_b_d
                                       //  Referenced by:
                                       //    '<S76>/If Action Subsystem2'
                                       //    '<S76>/If Action Subsystem3'

  real_T PS_b_k;                       // Mask Parameter: PS_b_k
                                       //  Referenced by:
                                       //    '<S75>/If Action Subsystem2'
                                       //    '<S75>/If Action Subsystem3'

  real_T PL_b_n;                       // Mask Parameter: PL_b_n
                                       //  Referenced by:
                                       //    '<S74>/If Action Subsystem2'
                                       //    '<S74>/If Action Subsystem3'

  real_T NS_b_a;                       // Mask Parameter: NS_b_a
                                       //  Referenced by:
                                       //    '<S48>/If Action Subsystem2'
                                       //    '<S48>/If Action Subsystem3'

  real_T ZE_b_h;                       // Mask Parameter: ZE_b_h
                                       //  Referenced by:
                                       //    '<S51>/If Action Subsystem2'
                                       //    '<S51>/If Action Subsystem3'

  real_T PS_b_e;                       // Mask Parameter: PS_b_e
                                       //  Referenced by:
                                       //    '<S50>/If Action Subsystem2'
                                       //    '<S50>/If Action Subsystem3'

  real_T PL_b_p;                       // Mask Parameter: PL_b_p
                                       //  Referenced by:
                                       //    '<S49>/If Action Subsystem2'
                                       //    '<S49>/If Action Subsystem3'

  real_T NL_b_c;                       // Mask Parameter: NL_b_c
                                       //  Referenced by:
                                       //    '<S137>/If Action Subsystem2'
                                       //    '<S137>/If Action Subsystem3'

  real_T NL_b_jw;                      // Mask Parameter: NL_b_jw
                                       //  Referenced by:
                                       //    '<S162>/If Action Subsystem2'
                                       //    '<S162>/If Action Subsystem3'

  real_T NS_b_o;                       // Mask Parameter: NS_b_o
                                       //  Referenced by:
                                       //    '<S163>/If Action Subsystem2'
                                       //    '<S163>/If Action Subsystem3'

  real_T ZE_b_p;                       // Mask Parameter: ZE_b_p
                                       //  Referenced by:
                                       //    '<S166>/If Action Subsystem2'
                                       //    '<S166>/If Action Subsystem3'

  real_T PS_b_j;                       // Mask Parameter: PS_b_j
                                       //  Referenced by:
                                       //    '<S165>/If Action Subsystem2'
                                       //    '<S165>/If Action Subsystem3'

  real_T PL_b_g;                       // Mask Parameter: PL_b_g
                                       //  Referenced by:
                                       //    '<S164>/If Action Subsystem2'
                                       //    '<S164>/If Action Subsystem3'

  real_T NS_b_f;                       // Mask Parameter: NS_b_f
                                       //  Referenced by:
                                       //    '<S138>/If Action Subsystem2'
                                       //    '<S138>/If Action Subsystem3'

  real_T ZE_b_a;                       // Mask Parameter: ZE_b_a
                                       //  Referenced by:
                                       //    '<S141>/If Action Subsystem2'
                                       //    '<S141>/If Action Subsystem3'

  real_T PS_b_d;                       // Mask Parameter: PS_b_d
                                       //  Referenced by:
                                       //    '<S140>/If Action Subsystem2'
                                       //    '<S140>/If Action Subsystem3'

  real_T PL_b_e;                       // Mask Parameter: PL_b_e
                                       //  Referenced by:
                                       //    '<S139>/If Action Subsystem2'
                                       //    '<S139>/If Action Subsystem3'

  real_T NL_c;                         // Mask Parameter: NL_c
                                       //  Referenced by: '<S227>/If Action Subsystem2'

  real_T NL_c_n;                       // Mask Parameter: NL_c_n
                                       //  Referenced by: '<S252>/If Action Subsystem2'

  real_T NS_c;                         // Mask Parameter: NS_c
                                       //  Referenced by: '<S253>/If Action Subsystem2'

  real_T ZE_c;                         // Mask Parameter: ZE_c
                                       //  Referenced by: '<S256>/If Action Subsystem2'

  real_T PS_c;                         // Mask Parameter: PS_c
                                       //  Referenced by: '<S255>/If Action Subsystem2'

  real_T PL_c;                         // Mask Parameter: PL_c
                                       //  Referenced by: '<S254>/If Action Subsystem2'

  real_T NS_c_j;                       // Mask Parameter: NS_c_j
                                       //  Referenced by: '<S228>/If Action Subsystem2'

  real_T ZE_c_o;                       // Mask Parameter: ZE_c_o
                                       //  Referenced by: '<S231>/If Action Subsystem2'

  real_T PS_c_d;                       // Mask Parameter: PS_c_d
                                       //  Referenced by: '<S230>/If Action Subsystem2'

  real_T PL_c_f;                       // Mask Parameter: PL_c_f
                                       //  Referenced by: '<S229>/If Action Subsystem2'

  real_T NL_c_nx;                      // Mask Parameter: NL_c_nx
                                       //  Referenced by: '<S47>/If Action Subsystem2'

  real_T NL_c_m;                       // Mask Parameter: NL_c_m
                                       //  Referenced by: '<S72>/If Action Subsystem2'

  real_T NS_c_l;                       // Mask Parameter: NS_c_l
                                       //  Referenced by: '<S73>/If Action Subsystem2'

  real_T ZE_c_k;                       // Mask Parameter: ZE_c_k
                                       //  Referenced by: '<S76>/If Action Subsystem2'

  real_T PS_c_n;                       // Mask Parameter: PS_c_n
                                       //  Referenced by: '<S75>/If Action Subsystem2'

  real_T PL_c_p;                       // Mask Parameter: PL_c_p
                                       //  Referenced by: '<S74>/If Action Subsystem2'

  real_T NS_c_d;                       // Mask Parameter: NS_c_d
                                       //  Referenced by: '<S48>/If Action Subsystem2'

  real_T ZE_c_a;                       // Mask Parameter: ZE_c_a
                                       //  Referenced by: '<S51>/If Action Subsystem2'

  real_T PS_c_nq;                      // Mask Parameter: PS_c_nq
                                       //  Referenced by: '<S50>/If Action Subsystem2'

  real_T PL_c_e;                       // Mask Parameter: PL_c_e
                                       //  Referenced by: '<S49>/If Action Subsystem2'

  real_T NL_c_p;                       // Mask Parameter: NL_c_p
                                       //  Referenced by: '<S137>/If Action Subsystem2'

  real_T NL_c_pi;                      // Mask Parameter: NL_c_pi
                                       //  Referenced by: '<S162>/If Action Subsystem2'

  real_T NS_c_m;                       // Mask Parameter: NS_c_m
                                       //  Referenced by: '<S163>/If Action Subsystem2'

  real_T ZE_c_i;                       // Mask Parameter: ZE_c_i
                                       //  Referenced by: '<S166>/If Action Subsystem2'

  real_T PS_c_c;                       // Mask Parameter: PS_c_c
                                       //  Referenced by: '<S165>/If Action Subsystem2'

  real_T PL_c_a;                       // Mask Parameter: PL_c_a
                                       //  Referenced by: '<S164>/If Action Subsystem2'

  real_T NS_c_n;                       // Mask Parameter: NS_c_n
                                       //  Referenced by: '<S138>/If Action Subsystem2'

  real_T ZE_c_p;                       // Mask Parameter: ZE_c_p
                                       //  Referenced by: '<S141>/If Action Subsystem2'

  real_T PS_c_o;                       // Mask Parameter: PS_c_o
                                       //  Referenced by: '<S140>/If Action Subsystem2'

  real_T PL_c_l;                       // Mask Parameter: PL_c_l
                                       //  Referenced by: '<S139>/If Action Subsystem2'

  SL_Bus_fuzzy_logic_system_gain_msgs_pid Constant_Value;// Computed Parameter: Constant_Value
                                                         //  Referenced by: '<S1>/Constant'

  SL_Bus_fuzzy_logic_system_error_msgs_Error Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S277>/Out1'

  SL_Bus_fuzzy_logic_system_error_msgs_Error Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                              //  Referenced by: '<S6>/Constant'

  real_T MidRange_Value[3];            // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S7>/MidRange'

  real_T xdata_Value[101];             // Expression: Xdata
                                       //  Referenced by: '<S8>/x data'

  real_T xdata_Value_c[101];           // Expression: Xdata
                                       //  Referenced by: '<S9>/x data'

  real_T xdata_Value_e[101];           // Expression: Xdata
                                       //  Referenced by: '<S10>/x data'

  real_T MidRange_Value_f[3];          // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S97>/MidRange'

  real_T xdata_Value_d[101];           // Expression: Xdata
                                       //  Referenced by: '<S98>/x data'

  real_T xdata_Value_l[101];           // Expression: Xdata
                                       //  Referenced by: '<S99>/x data'

  real_T xdata_Value_h[101];           // Expression: Xdata
                                       //  Referenced by: '<S100>/x data'

  real_T MidRange_Value_k[3];          // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S187>/MidRange'

  real_T xdata_Value_g[101];           // Expression: Xdata
                                       //  Referenced by: '<S188>/x data'

  real_T xdata_Value_m[101];           // Expression: Xdata
                                       //  Referenced by: '<S189>/x data'

  real_T xdata_Value_o[101];           // Expression: Xdata
                                       //  Referenced by: '<S190>/x data'

  real_T Weight_Value;                 // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S195>/Weight'

  real_T PVL_Value[101];               // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S194>/PVL'

  real_T PVS_Value[101];               // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S192>/PVS'

  real_T PM_Value[101];                // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(2).params)
                                       //  Referenced by: '<S193>/PM'

  real_T Weight_Value_j;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S206>/Weight'

  real_T PML_Value[101];               // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S194>/PML'

  real_T PMS_Value[101];               // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S192>/PMS'

  real_T PMS_Value_o[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(5).params)
                                       //  Referenced by: '<S193>/PMS'

  real_T Weight_Value_p;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S213>/Weight'

  real_T PVS_Value_i[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S194>/PVS'

  real_T PM_Value_i[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S192>/PM'

  real_T PS_Value[101];                // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(4).params)
                                       //  Referenced by: '<S193>/PS'

  real_T Weight_Value_k;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S214>/Weight'

  real_T PML_Value_m[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S192>/PML'

  real_T Weight_Value_j5;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S215>/Weight'

  real_T PVL_Value_b[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S192>/PVL'

  real_T Weight_Value_g;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S216>/Weight'

  real_T Weight_Value_b;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S217>/Weight'

  real_T Weight_Value_ju;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S218>/Weight'

  real_T PL_Value[101];                // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S192>/PL'

  real_T Weight_Value_bu;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S219>/Weight'

  real_T Weight_Value_kl;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S196>/Weight'

  real_T Weight_Value_d;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S197>/Weight'

  real_T Weight_Value_m;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S198>/Weight'

  real_T Weight_Value_c;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S199>/Weight'

  real_T PS_Value_o[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S194>/PS'

  real_T PVS_Value_b[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(1).params)
                                       //  Referenced by: '<S193>/PVS'

  real_T Weight_Value_gp;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S200>/Weight'

  real_T Weight_Value_f;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S201>/Weight'

  real_T Weight_Value_a;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S202>/Weight'

  real_T Weight_Value_a0;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S203>/Weight'

  real_T PL_Value_h[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S194>/PL'

  real_T Weight_Value_dy;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S204>/Weight'

  real_T PMS_Value_b[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S194>/PMS'

  real_T Weight_Value_gr;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S205>/Weight'

  real_T Weight_Value_av;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S207>/Weight'

  real_T Weight_Value_i;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S208>/Weight'

  real_T Weight_Value_cy;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S209>/Weight'

  real_T Weight_Value_jl;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S210>/Weight'

  real_T Weight_Value_bue;             // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S211>/Weight'

  real_T Weight_Value_ic;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S212>/Weight'

  real_T Zero_Value;                   // Expression: 0
                                       //  Referenced by: '<S187>/Zero'

  real_T Switch_Threshold;             // Expression: 1
                                       //  Referenced by: '<S187>/Switch'

  real_T Weight_Value_fw;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S15>/Weight'

  real_T PVL_Value_p[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S14>/PVL'

  real_T PVS_Value_n[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S12>/PVS'

  real_T PM_Value_n[101];              // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(2).params)
                                       //  Referenced by: '<S13>/PM'

  real_T Weight_Value_e;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S26>/Weight'

  real_T PML_Value_g[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S14>/PML'

  real_T PMS_Value_j[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S12>/PMS'

  real_T PMS_Value_g[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(5).params)
                                       //  Referenced by: '<S13>/PMS'

  real_T Weight_Value_ec;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S33>/Weight'

  real_T PVS_Value_h[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S14>/PVS'

  real_T PM_Value_iq[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S12>/PM'

  real_T PS_Value_g[101];              // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(4).params)
                                       //  Referenced by: '<S13>/PS'

  real_T Weight_Value_cz;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S34>/Weight'

  real_T PML_Value_d[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S12>/PML'

  real_T Weight_Value_k2;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S35>/Weight'

  real_T PVL_Value_f[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S12>/PVL'

  real_T Weight_Value_d2;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S36>/Weight'

  real_T Weight_Value_i5;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S37>/Weight'

  real_T Weight_Value_bi;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S38>/Weight'

  real_T PL_Value_d[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S12>/PL'

  real_T Weight_Value_kd;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S39>/Weight'

  real_T Weight_Value_ks;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S16>/Weight'

  real_T Weight_Value_jp;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S17>/Weight'

  real_T Weight_Value_aw;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S18>/Weight'

  real_T Weight_Value_eg;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S19>/Weight'

  real_T PS_Value_c[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S14>/PS'

  real_T PVS_Value_m[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(1).params)
                                       //  Referenced by: '<S13>/PVS'

  real_T Weight_Value_h;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S20>/Weight'

  real_T Weight_Value_hq;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S21>/Weight'

  real_T Weight_Value_kq;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S22>/Weight'

  real_T Weight_Value_ay;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S23>/Weight'

  real_T PL_Value_n[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S14>/PL'

  real_T Weight_Value_l;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S24>/Weight'

  real_T PMS_Value_gw[101];            // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S14>/PMS'

  real_T Weight_Value_cye;             // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S25>/Weight'

  real_T Weight_Value_lm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S27>/Weight'

  real_T Weight_Value_ecm;             // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S28>/Weight'

  real_T Weight_Value_iu;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S29>/Weight'

  real_T Weight_Value_al;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S30>/Weight'

  real_T Weight_Value_fm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S31>/Weight'

  real_T Weight_Value_aj;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S32>/Weight'

  real_T Zero_Value_e;                 // Expression: 0
                                       //  Referenced by: '<S7>/Zero'

  real_T Switch_Threshold_l;           // Expression: 1
                                       //  Referenced by: '<S7>/Switch'

  real_T Weight_Value_n;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S105>/Weight'

  real_T PVL_Value_g[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S104>/PVL'

  real_T PVS_Value_g[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S102>/PVS'

  real_T PM_Value_o[101];              // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(2).params)
                                       //  Referenced by: '<S103>/PM'

  real_T Weight_Value_k1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S116>/Weight'

  real_T PML_Value_i[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S104>/PML'

  real_T PMS_Value_c[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S102>/PMS'

  real_T PMS_Value_n[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(5).params)
                                       //  Referenced by: '<S103>/PMS'

  real_T Weight_Value_ka;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S123>/Weight'

  real_T PVS_Value_g1[101];            // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S104>/PVS'

  real_T PM_Value_f[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S102>/PM'

  real_T PS_Value_d[101];              // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(4).params)
                                       //  Referenced by: '<S103>/PS'

  real_T Weight_Value_ft;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S124>/Weight'

  real_T PML_Value_o[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S102>/PML'

  real_T Weight_Value_io;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S125>/Weight'

  real_T PVL_Value_j[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S102>/PVL'

  real_T Weight_Value_id;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S126>/Weight'

  real_T Weight_Value_o;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S127>/Weight'

  real_T Weight_Value_a1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S128>/Weight'

  real_T PL_Value_a[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S102>/PL'

  real_T Weight_Value_co;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S129>/Weight'

  real_T Weight_Value_f1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S106>/Weight'

  real_T Weight_Value_nc;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S107>/Weight'

  real_T Weight_Value_ci;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S108>/Weight'

  real_T Weight_Value_pm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S109>/Weight'

  real_T PS_Value_k[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S104>/PS'

  real_T PVS_Value_p[101];             // Expression: trimf(linspace(fis.output(3).range(1),fis.output(3).range(2),101),fis.output(3).mf(1).params)
                                       //  Referenced by: '<S103>/PVS'

  real_T Weight_Value_es;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S110>/Weight'

  real_T Weight_Value_gu;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S111>/Weight'

  real_T Weight_Value_g5;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S112>/Weight'

  real_T Weight_Value_ct;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S113>/Weight'

  real_T PL_Value_hs[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S104>/PL'

  real_T Weight_Value_dx;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S114>/Weight'

  real_T PMS_Value_m[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S104>/PMS'

  real_T Weight_Value_no;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S115>/Weight'

  real_T Weight_Value_g1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S117>/Weight'

  real_T Weight_Value_hi;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S118>/Weight'

  real_T Weight_Value_gm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S119>/Weight'

  real_T Weight_Value_eo;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S120>/Weight'

  real_T Weight_Value_js;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S121>/Weight'

  real_T Weight_Value_iz;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S122>/Weight'

  real_T Zero_Value_i;                 // Expression: 0
                                       //  Referenced by: '<S97>/Zero'

  real_T Switch_Threshold_e;           // Expression: 1
                                       //  Referenced by: '<S97>/Switch'

  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_n;// '<S256>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_l;// '<S256>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_h;// '<S255>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_n;// '<S255>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_hh;// '<S254>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_f;// '<S254>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j;// '<S253>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ij;// '<S253>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_l;// '<S252>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_i;// '<S252>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_b;// '<S231>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_c;// '<S231>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_l4;// '<S230>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ly;// '<S230>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_nr;// '<S229>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_k;// '<S229>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_g;// '<S228>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_j;// '<S228>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1;// '<S227>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem;// '<S227>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_syste_T ActionOne_no;// '<S190>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne_n;// '<S189>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne;// '<S188>/Action: One'
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_k;// '<S166>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_is;// '<S166>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_kb;// '<S165>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_i1;// '<S165>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_iw;// '<S164>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_e5;// '<S164>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_c;// '<S163>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_e;// '<S163>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_fp;// '<S162>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_d;// '<S162>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_c3;// '<S141>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_kg;// '<S141>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_jtp;// '<S140>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_lc;// '<S140>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j2;// '<S139>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_b;// '<S139>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j4;// '<S138>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_h;// '<S138>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_jt;// '<S137>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ks;// '<S137>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_syste_T ActionOne_o;// '<S100>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne_c;// '<S99>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne_f;// '<S98>/Action: One'
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_f;// '<S76>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_a;// '<S76>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_jg;// '<S75>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_jq;// '<S75>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_ln;// '<S74>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_fl;// '<S74>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_i;// '<S73>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_m;// '<S73>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_gv;// '<S72>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_cb;// '<S72>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_i5;// '<S51>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_jj;// '<S51>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_p;// '<S50>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_kn;// '<S50>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_i5p;// '<S49>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_cr;// '<S49>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_fx;// '<S48>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_mj;// '<S48>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_o;// '<S47>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_nr;// '<S47>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_syste_T ActionOne_p;// '<S10>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne_j;// '<S9>/Action: One'
  P_ActionOne_fuzzy_logic_syste_T ActionOne_h;// '<S8>/Action: One'
};

// Real-time Model Data Structure
struct tag_RTM_fuzzy_logic_system_T {
  const char_T *errorStatus;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_fuzzy_logic_system_T fuzzy_logic_system_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_fuzzy_logic_system_T fuzzy_logic_system_B;

// Block states (auto storage)
extern DW_fuzzy_logic_system_T fuzzy_logic_system_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void fuzzy_logic_system_initialize(void);
  extern void fuzzy_logic_system_step(void);
  extern void fuzzy_logic_system_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_fuzzy_logic_system_T *const fuzzy_logic_system_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S12>/PS' : Unused code path elimination
//  Block '<S13>/PL' : Unused code path elimination
//  Block '<S13>/PML' : Unused code path elimination
//  Block '<S13>/PVL' : Unused code path elimination
//  Block '<S14>/PM' : Unused code path elimination
//  Block '<S102>/PS' : Unused code path elimination
//  Block '<S103>/PL' : Unused code path elimination
//  Block '<S103>/PML' : Unused code path elimination
//  Block '<S103>/PVL' : Unused code path elimination
//  Block '<S104>/PM' : Unused code path elimination
//  Block '<S192>/PS' : Unused code path elimination
//  Block '<S193>/PL' : Unused code path elimination
//  Block '<S193>/PML' : Unused code path elimination
//  Block '<S193>/PVL' : Unused code path elimination
//  Block '<S194>/PM' : Unused code path elimination
//  Block '<S11>/DataConv' : Eliminate redundant data type conversion
//  Block '<S40>/DataConv' : Eliminate redundant data type conversion
//  Block '<S101>/DataConv' : Eliminate redundant data type conversion
//  Block '<S130>/DataConv' : Eliminate redundant data type conversion
//  Block '<S191>/DataConv' : Eliminate redundant data type conversion
//  Block '<S220>/DataConv' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'fuzzy_logic_system'
//  '<S1>'   : 'fuzzy_logic_system/Blank Message'
//  '<S2>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller1'
//  '<S3>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller2'
//  '<S4>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller3'
//  '<S5>'   : 'fuzzy_logic_system/Publish'
//  '<S6>'   : 'fuzzy_logic_system/Subscribe'
//  '<S7>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard'
//  '<S8>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1'
//  '<S9>'   : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2'
//  '<S10>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification3'
//  '<S11>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E'
//  '<S12>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Kd'
//  '<S13>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Ki'
//  '<S14>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Kp'
//  '<S15>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule1'
//  '<S16>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule10'
//  '<S17>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule11'
//  '<S18>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule12'
//  '<S19>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule13'
//  '<S20>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule14'
//  '<S21>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule15'
//  '<S22>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule16'
//  '<S23>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule17'
//  '<S24>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule18'
//  '<S25>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule19'
//  '<S26>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule2'
//  '<S27>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule20'
//  '<S28>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule21'
//  '<S29>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule22'
//  '<S30>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule23'
//  '<S31>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule24'
//  '<S32>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule25'
//  '<S33>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule3'
//  '<S34>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule4'
//  '<S35>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule5'
//  '<S36>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule6'
//  '<S37>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule7'
//  '<S38>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule8'
//  '<S39>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Rule9'
//  '<S40>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE'
//  '<S41>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1/Action: One'
//  '<S42>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1/Action: u1'
//  '<S43>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2/Action: One'
//  '<S44>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2/Action: u1'
//  '<S45>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification3/Action: One'
//  '<S46>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification3/Action: u1'
//  '<S47>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NL'
//  '<S48>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NS'
//  '<S49>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PL'
//  '<S50>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PS'
//  '<S51>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/ZE'
//  '<S52>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem'
//  '<S53>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S54>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S55>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S56>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem'
//  '<S57>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S58>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S59>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S60>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem'
//  '<S61>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S62>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S63>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S64>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem'
//  '<S65>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S66>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S67>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S68>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S69>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S70>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S71>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S72>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NL'
//  '<S73>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NS'
//  '<S74>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PL'
//  '<S75>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PS'
//  '<S76>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE'
//  '<S77>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S78>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S79>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S80>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S81>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S82>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S83>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S84>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S85>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S86>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S87>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S88>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S89>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S90>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S91>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S92>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S93>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S94>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S95>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S96>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S97>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard'
//  '<S98>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1'
//  '<S99>'  : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2'
//  '<S100>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification3'
//  '<S101>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E'
//  '<S102>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Kd'
//  '<S103>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Ki'
//  '<S104>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Kp'
//  '<S105>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule1'
//  '<S106>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule10'
//  '<S107>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule11'
//  '<S108>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule12'
//  '<S109>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule13'
//  '<S110>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule14'
//  '<S111>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule15'
//  '<S112>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule16'
//  '<S113>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule17'
//  '<S114>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule18'
//  '<S115>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule19'
//  '<S116>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule2'
//  '<S117>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule20'
//  '<S118>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule21'
//  '<S119>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule22'
//  '<S120>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule23'
//  '<S121>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule24'
//  '<S122>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule25'
//  '<S123>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule3'
//  '<S124>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule4'
//  '<S125>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule5'
//  '<S126>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule6'
//  '<S127>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule7'
//  '<S128>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule8'
//  '<S129>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Rule9'
//  '<S130>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE'
//  '<S131>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1/Action: One'
//  '<S132>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1/Action: u1'
//  '<S133>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2/Action: One'
//  '<S134>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2/Action: u1'
//  '<S135>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification3/Action: One'
//  '<S136>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification3/Action: u1'
//  '<S137>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NL'
//  '<S138>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NS'
//  '<S139>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PL'
//  '<S140>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PS'
//  '<S141>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/ZE'
//  '<S142>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem'
//  '<S143>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S144>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S145>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S146>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem'
//  '<S147>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S148>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S149>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S150>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem'
//  '<S151>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S152>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S153>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S154>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem'
//  '<S155>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S156>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S157>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S158>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S159>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S160>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S161>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S162>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NL'
//  '<S163>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NS'
//  '<S164>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PL'
//  '<S165>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PS'
//  '<S166>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE'
//  '<S167>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S168>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S169>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S170>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S171>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S172>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S173>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S174>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S175>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S176>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S177>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S178>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S179>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S180>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S181>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S182>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S183>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S184>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S185>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S186>' : 'fuzzy_logic_system/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S187>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard'
//  '<S188>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1'
//  '<S189>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2'
//  '<S190>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification3'
//  '<S191>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E'
//  '<S192>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Kd'
//  '<S193>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Ki'
//  '<S194>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Kp'
//  '<S195>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule1'
//  '<S196>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule10'
//  '<S197>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule11'
//  '<S198>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule12'
//  '<S199>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule13'
//  '<S200>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule14'
//  '<S201>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule15'
//  '<S202>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule16'
//  '<S203>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule17'
//  '<S204>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule18'
//  '<S205>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule19'
//  '<S206>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule2'
//  '<S207>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule20'
//  '<S208>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule21'
//  '<S209>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule22'
//  '<S210>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule23'
//  '<S211>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule24'
//  '<S212>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule25'
//  '<S213>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule3'
//  '<S214>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule4'
//  '<S215>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule5'
//  '<S216>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule6'
//  '<S217>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule7'
//  '<S218>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule8'
//  '<S219>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Rule9'
//  '<S220>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE'
//  '<S221>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1/Action: One'
//  '<S222>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1/Action: u1'
//  '<S223>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2/Action: One'
//  '<S224>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2/Action: u1'
//  '<S225>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification3/Action: One'
//  '<S226>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification3/Action: u1'
//  '<S227>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NL'
//  '<S228>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NS'
//  '<S229>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PL'
//  '<S230>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PS'
//  '<S231>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/ZE'
//  '<S232>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem'
//  '<S233>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S234>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S235>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S236>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem'
//  '<S237>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S238>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S239>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S240>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem'
//  '<S241>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S242>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S243>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S244>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem'
//  '<S245>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S246>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S247>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S248>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S249>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S250>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S251>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S252>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NL'
//  '<S253>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NS'
//  '<S254>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PL'
//  '<S255>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PS'
//  '<S256>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE'
//  '<S257>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S258>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S259>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S260>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S261>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S262>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S263>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S264>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S265>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S266>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S267>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S268>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S269>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S270>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S271>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S272>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S273>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S274>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S275>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S276>' : 'fuzzy_logic_system/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S277>' : 'fuzzy_logic_system/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_fuzzy_logic_system_h_

//
// File trailer for generated code.
//
// [EOF]
//
