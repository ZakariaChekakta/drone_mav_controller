//
// File: fuzzy_logic_control.h
//
// Code generated for Simulink model 'fuzzy_logic_control'.
//
// Model version                  : 1.77
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Jan 11 18:26:20 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_fuzzy_logic_control_h_
#define RTW_HEADER_fuzzy_logic_control_h_
#include <string.h>
#include <stddef.h>
#ifndef fuzzy_logic_control_COMMON_INCLUDES_
# define fuzzy_logic_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // fuzzy_logic_control_COMMON_INCLUDES_

#include "fuzzy_logic_control_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Block signals for system '<S43>/If Action Subsystem3'
typedef struct {
  real_T ba;                           // '<S51>/Sum1'
} B_IfActionSubsystem3_fuzzy_lo_T;

// Block signals for system '<S43>/If Action Subsystem2'
typedef struct {
  real_T cb;                           // '<S50>/Sum2'
} B_IfActionSubsystem2_fuzzy_lo_T;

// Block signals (auto storage)
typedef struct {
  real_T impMethod_ah[202];            // '<S100>/impMethod'
  real_T impMethod_k[202];             // '<S106>/impMethod'
  real_T impMethod_iw[202];            // '<S101>/impMethod'
  real_T impMethod[202];               // '<S116>/impMethod'
  real_T impMethod_c[202];             // '<S115>/impMethod'
  real_T impMethod_l[202];             // '<S114>/impMethod'
  real_T impMethod_g[202];             // '<S113>/impMethod'
  real_T impMethod_i[202];             // '<S112>/impMethod'
  real_T impMethod_gt[202];            // '<S111>/impMethod'
  real_T impMethod_n[202];             // '<S109>/impMethod'
  real_T impMethod_cb[202];            // '<S108>/impMethod'
  real_T impMethod_a[202];             // '<S107>/impMethod'
  real_T impMethod_kx[202];            // '<S105>/impMethod'
  real_T impMethod_m[202];             // '<S104>/impMethod'
  real_T impMethod_d[202];             // '<S103>/impMethod'
  real_T impMethod_f[202];             // '<S102>/impMethod'
  real_T impMethod_j[202];             // '<S123>/impMethod'
  real_T impMethod_jt[202];            // '<S122>/impMethod'
  real_T impMethod_nj[202];            // '<S121>/impMethod'
  real_T impMethod_h[202];             // '<S120>/impMethod'
  real_T impMethod_fi[202];            // '<S119>/impMethod'
  real_T impMethod_ch[202];            // '<S118>/impMethod'
  real_T impMethod_o[202];             // '<S117>/impMethod'
  real_T impMethod_b[202];             // '<S110>/impMethod'
  real_T impMethod_fm[202];            // '<S99>/impMethod'
  real_T AggMethod2[101];              // '<S179>/AggMethod2'
  real_T AggMethod1[101];              // '<S179>/AggMethod1'
  SL_Bus_fuzzy_logic_control_gain_msgs_pid BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_fuzzy_logic_control_error_msgs_Error In1;// '<S265>/In1'
  SL_Bus_fuzzy_logic_control_error_msgs_Error varargout_2;
  real_T AveragingCOA;                 // '<S180>/Averaging (COA)'
  real_T Sum;                          // '<S181>/Sum'
  real_T Weighting;                    // '<S116>/Weighting'
  real_T Weighting_g;                  // '<S115>/Weighting'
  real_T Weighting_p;                  // '<S114>/Weighting'
  real_T Weighting_a;                  // '<S113>/Weighting'
  real_T Weighting_h;                  // '<S112>/Weighting'
  real_T Weighting_i;                  // '<S111>/Weighting'
  real_T Weighting_k;                  // '<S109>/Weighting'
  real_T Weighting_d;                  // '<S108>/Weighting'
  real_T Weighting_k1;                 // '<S107>/Weighting'
  real_T Weighting_b;                  // '<S106>/Weighting'
  real_T Weighting_c;                  // '<S105>/Weighting'
  real_T Weighting_o;                  // '<S104>/Weighting'
  real_T Weighting_ol;                 // '<S103>/Weighting'
  real_T Weighting_n;                  // '<S102>/Weighting'
  real_T Weighting_ik;                 // '<S101>/Weighting'
  real_T Weighting_hb;                 // '<S100>/Weighting'
  real_T Weighting_hg;                 // '<S121>/Weighting'
  real_T Sum1_cz;                      // '<S9>/Sum1'
  real_T Sum1_j;                       // '<S8>/Sum1'
  real_T Sum1_c;                       // '<S181>/Sum1'
  real_T Merge_d;
  real_T Merge_cg;
  real_T Merge_n;
  real_T rtb_Derivative2_m;
  real_T Merge_b4;
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_d;// '<S244>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_l;// '<S244>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_e;// '<S243>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_m;// '<S243>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_ie;// '<S242>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_k;// '<S242>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_i;// '<S241>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_d;// '<S241>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_j;// '<S240>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_f;// '<S240>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_k;// '<S219>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_h;// '<S219>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_lq;// '<S218>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_h0;// '<S218>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_o;// '<S217>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_b;// '<S217>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_l;// '<S216>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_dd;// '<S216>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2;// '<S215>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3;// '<S215>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_od;// '<S158>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_ff;// '<S158>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_fa;// '<S157>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_lz;// '<S157>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_oh;// '<S156>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_ey;// '<S156>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_d3;// '<S155>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_ef;// '<S155>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_bz;// '<S154>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_hx;// '<S154>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_o0;// '<S133>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_a;// '<S133>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_hl;// '<S132>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_nm;// '<S132>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_fw;// '<S131>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_kc;// '<S131>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_p;// '<S130>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_i;// '<S130>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_hc;// '<S129>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_p4;// '<S129>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_dd;// '<S72>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_j;// '<S72>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_jh;// '<S71>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_dn;// '<S71>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_bd;// '<S70>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_p;// '<S70>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_a;// '<S69>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_ny;// '<S69>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_f;// '<S68>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_n;// '<S68>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_h;// '<S47>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_e;// '<S47>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_lb;// '<S46>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_f3;// '<S46>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_jx;// '<S45>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_pe;// '<S45>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_m;// '<S44>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_b3;// '<S44>/If Action Subsystem3' 
  B_IfActionSubsystem2_fuzzy_lo_T IfActionSubsystem2_b;// '<S43>/If Action Subsystem2' 
  B_IfActionSubsystem3_fuzzy_lo_T IfActionSubsystem3_c;// '<S43>/If Action Subsystem3' 
} B_fuzzy_logic_control_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative2'
  real_T LastUAtTimeA;                 // '<Root>/Derivative2'
  real_T TimeStampB;                   // '<Root>/Derivative2'
  real_T LastUAtTimeB;                 // '<Root>/Derivative2'
  real_T TimeStampA_p;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_j;               // '<Root>/Derivative1'
  real_T TimeStampB_l;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_g;               // '<Root>/Derivative1'
  real_T TimeStampA_g;                 // '<Root>/Derivative'
  real_T LastUAtTimeA_c;               // '<Root>/Derivative'
  real_T TimeStampB_d;                 // '<Root>/Derivative'
  real_T LastUAtTimeB_d;               // '<Root>/Derivative'
  void *SourceBlock_PWORK;             // '<S6>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S5>/SinkBlock'
  robotics_slros_internal_blo_b_T obj_d;// '<S6>/SourceBlock'
} DW_fuzzy_logic_control_T;

// Parameters for system: '<S8>/Action: One'
struct P_ActionOne_fuzzy_logic_contr_T_ {
  real_T One_Value;                    // Expression: 1
                                       //  Referenced by: '<S39>/One'

};

// Parameters for system: '<S43>/If Action Subsystem'
struct P_IfActionSubsystem_fuzzy_log_T_ {
  real_T u_Value;                      // Expression: 0
                                       //  Referenced by: '<S48>/0'

};

// Parameters (auto storage)
struct P_fuzzy_logic_control_T_ {
  real_T NL_a;                         // Mask Parameter: NL_a
                                       //  Referenced by: '<S215>/If Action Subsystem3'

  real_T NL_a_c;                       // Mask Parameter: NL_a_c
                                       //  Referenced by: '<S240>/If Action Subsystem3'

  real_T NS_a;                         // Mask Parameter: NS_a
                                       //  Referenced by: '<S241>/If Action Subsystem3'

  real_T ZE_a;                         // Mask Parameter: ZE_a
                                       //  Referenced by: '<S244>/If Action Subsystem3'

  real_T PS_a;                         // Mask Parameter: PS_a
                                       //  Referenced by: '<S243>/If Action Subsystem3'

  real_T PL_a;                         // Mask Parameter: PL_a
                                       //  Referenced by: '<S242>/If Action Subsystem3'

  real_T NS_a_l;                       // Mask Parameter: NS_a_l
                                       //  Referenced by: '<S216>/If Action Subsystem3'

  real_T ZE_a_b;                       // Mask Parameter: ZE_a_b
                                       //  Referenced by: '<S219>/If Action Subsystem3'

  real_T PS_a_j;                       // Mask Parameter: PS_a_j
                                       //  Referenced by: '<S218>/If Action Subsystem3'

  real_T PL_a_j;                       // Mask Parameter: PL_a_j
                                       //  Referenced by: '<S217>/If Action Subsystem3'

  real_T NL_a_g;                       // Mask Parameter: NL_a_g
                                       //  Referenced by: '<S43>/If Action Subsystem3'

  real_T NL_a_p;                       // Mask Parameter: NL_a_p
                                       //  Referenced by: '<S68>/If Action Subsystem3'

  real_T NS_a_lo;                      // Mask Parameter: NS_a_lo
                                       //  Referenced by: '<S69>/If Action Subsystem3'

  real_T ZE_a_c;                       // Mask Parameter: ZE_a_c
                                       //  Referenced by: '<S72>/If Action Subsystem3'

  real_T PS_a_jo;                      // Mask Parameter: PS_a_jo
                                       //  Referenced by: '<S71>/If Action Subsystem3'

  real_T PL_a_m;                       // Mask Parameter: PL_a_m
                                       //  Referenced by: '<S70>/If Action Subsystem3'

  real_T NS_a_b;                       // Mask Parameter: NS_a_b
                                       //  Referenced by: '<S44>/If Action Subsystem3'

  real_T ZE_a_d;                       // Mask Parameter: ZE_a_d
                                       //  Referenced by: '<S47>/If Action Subsystem3'

  real_T PS_a_b;                       // Mask Parameter: PS_a_b
                                       //  Referenced by: '<S46>/If Action Subsystem3'

  real_T PL_a_h;                       // Mask Parameter: PL_a_h
                                       //  Referenced by: '<S45>/If Action Subsystem3'

  real_T NL_a_j;                       // Mask Parameter: NL_a_j
                                       //  Referenced by: '<S129>/If Action Subsystem3'

  real_T NL_a_e;                       // Mask Parameter: NL_a_e
                                       //  Referenced by: '<S154>/If Action Subsystem3'

  real_T NS_a_j;                       // Mask Parameter: NS_a_j
                                       //  Referenced by: '<S155>/If Action Subsystem3'

  real_T ZE_a_i;                       // Mask Parameter: ZE_a_i
                                       //  Referenced by: '<S158>/If Action Subsystem3'

  real_T PS_a_g;                       // Mask Parameter: PS_a_g
                                       //  Referenced by: '<S157>/If Action Subsystem3'

  real_T PL_a_k;                       // Mask Parameter: PL_a_k
                                       //  Referenced by: '<S156>/If Action Subsystem3'

  real_T NS_a_g;                       // Mask Parameter: NS_a_g
                                       //  Referenced by: '<S130>/If Action Subsystem3'

  real_T ZE_a_j;                       // Mask Parameter: ZE_a_j
                                       //  Referenced by: '<S133>/If Action Subsystem3'

  real_T PS_a_o;                       // Mask Parameter: PS_a_o
                                       //  Referenced by: '<S132>/If Action Subsystem3'

  real_T PL_a_ms;                      // Mask Parameter: PL_a_ms
                                       //  Referenced by: '<S131>/If Action Subsystem3'

  real_T NL_b;                         // Mask Parameter: NL_b
                                       //  Referenced by:
                                       //    '<S215>/If Action Subsystem2'
                                       //    '<S215>/If Action Subsystem3'

  real_T NL_b_p;                       // Mask Parameter: NL_b_p
                                       //  Referenced by:
                                       //    '<S240>/If Action Subsystem2'
                                       //    '<S240>/If Action Subsystem3'

  real_T NS_b;                         // Mask Parameter: NS_b
                                       //  Referenced by:
                                       //    '<S241>/If Action Subsystem2'
                                       //    '<S241>/If Action Subsystem3'

  real_T ZE_b;                         // Mask Parameter: ZE_b
                                       //  Referenced by:
                                       //    '<S244>/If Action Subsystem2'
                                       //    '<S244>/If Action Subsystem3'

  real_T PS_b;                         // Mask Parameter: PS_b
                                       //  Referenced by:
                                       //    '<S243>/If Action Subsystem2'
                                       //    '<S243>/If Action Subsystem3'

  real_T PL_b;                         // Mask Parameter: PL_b
                                       //  Referenced by:
                                       //    '<S242>/If Action Subsystem2'
                                       //    '<S242>/If Action Subsystem3'

  real_T NS_b_d;                       // Mask Parameter: NS_b_d
                                       //  Referenced by:
                                       //    '<S216>/If Action Subsystem2'
                                       //    '<S216>/If Action Subsystem3'

  real_T ZE_b_h;                       // Mask Parameter: ZE_b_h
                                       //  Referenced by:
                                       //    '<S219>/If Action Subsystem2'
                                       //    '<S219>/If Action Subsystem3'

  real_T PS_b_f;                       // Mask Parameter: PS_b_f
                                       //  Referenced by:
                                       //    '<S218>/If Action Subsystem2'
                                       //    '<S218>/If Action Subsystem3'

  real_T PL_b_j;                       // Mask Parameter: PL_b_j
                                       //  Referenced by:
                                       //    '<S217>/If Action Subsystem2'
                                       //    '<S217>/If Action Subsystem3'

  real_T NL_b_i;                       // Mask Parameter: NL_b_i
                                       //  Referenced by:
                                       //    '<S43>/If Action Subsystem2'
                                       //    '<S43>/If Action Subsystem3'

  real_T NL_b_it;                      // Mask Parameter: NL_b_it
                                       //  Referenced by:
                                       //    '<S68>/If Action Subsystem2'
                                       //    '<S68>/If Action Subsystem3'

  real_T NS_b_c;                       // Mask Parameter: NS_b_c
                                       //  Referenced by:
                                       //    '<S69>/If Action Subsystem2'
                                       //    '<S69>/If Action Subsystem3'

  real_T ZE_b_l;                       // Mask Parameter: ZE_b_l
                                       //  Referenced by:
                                       //    '<S72>/If Action Subsystem2'
                                       //    '<S72>/If Action Subsystem3'

  real_T PS_b_g;                       // Mask Parameter: PS_b_g
                                       //  Referenced by:
                                       //    '<S71>/If Action Subsystem2'
                                       //    '<S71>/If Action Subsystem3'

  real_T PL_b_e;                       // Mask Parameter: PL_b_e
                                       //  Referenced by:
                                       //    '<S70>/If Action Subsystem2'
                                       //    '<S70>/If Action Subsystem3'

  real_T NS_b_j;                       // Mask Parameter: NS_b_j
                                       //  Referenced by:
                                       //    '<S44>/If Action Subsystem2'
                                       //    '<S44>/If Action Subsystem3'

  real_T ZE_b_he;                      // Mask Parameter: ZE_b_he
                                       //  Referenced by:
                                       //    '<S47>/If Action Subsystem2'
                                       //    '<S47>/If Action Subsystem3'

  real_T PS_b_c;                       // Mask Parameter: PS_b_c
                                       //  Referenced by:
                                       //    '<S46>/If Action Subsystem2'
                                       //    '<S46>/If Action Subsystem3'

  real_T PL_b_d;                       // Mask Parameter: PL_b_d
                                       //  Referenced by:
                                       //    '<S45>/If Action Subsystem2'
                                       //    '<S45>/If Action Subsystem3'

  real_T NL_b_c;                       // Mask Parameter: NL_b_c
                                       //  Referenced by:
                                       //    '<S129>/If Action Subsystem2'
                                       //    '<S129>/If Action Subsystem3'

  real_T NL_b_j;                       // Mask Parameter: NL_b_j
                                       //  Referenced by:
                                       //    '<S154>/If Action Subsystem2'
                                       //    '<S154>/If Action Subsystem3'

  real_T NS_b_o;                       // Mask Parameter: NS_b_o
                                       //  Referenced by:
                                       //    '<S155>/If Action Subsystem2'
                                       //    '<S155>/If Action Subsystem3'

  real_T ZE_b_p;                       // Mask Parameter: ZE_b_p
                                       //  Referenced by:
                                       //    '<S158>/If Action Subsystem2'
                                       //    '<S158>/If Action Subsystem3'

  real_T PS_b_j;                       // Mask Parameter: PS_b_j
                                       //  Referenced by:
                                       //    '<S157>/If Action Subsystem2'
                                       //    '<S157>/If Action Subsystem3'

  real_T PL_b_g;                       // Mask Parameter: PL_b_g
                                       //  Referenced by:
                                       //    '<S156>/If Action Subsystem2'
                                       //    '<S156>/If Action Subsystem3'

  real_T NS_b_f;                       // Mask Parameter: NS_b_f
                                       //  Referenced by:
                                       //    '<S130>/If Action Subsystem2'
                                       //    '<S130>/If Action Subsystem3'

  real_T ZE_b_a;                       // Mask Parameter: ZE_b_a
                                       //  Referenced by:
                                       //    '<S133>/If Action Subsystem2'
                                       //    '<S133>/If Action Subsystem3'

  real_T PS_b_d;                       // Mask Parameter: PS_b_d
                                       //  Referenced by:
                                       //    '<S132>/If Action Subsystem2'
                                       //    '<S132>/If Action Subsystem3'

  real_T PL_b_e4;                      // Mask Parameter: PL_b_e4
                                       //  Referenced by:
                                       //    '<S131>/If Action Subsystem2'
                                       //    '<S131>/If Action Subsystem3'

  real_T NL_c;                         // Mask Parameter: NL_c
                                       //  Referenced by: '<S215>/If Action Subsystem2'

  real_T NL_c_d;                       // Mask Parameter: NL_c_d
                                       //  Referenced by: '<S240>/If Action Subsystem2'

  real_T NS_c;                         // Mask Parameter: NS_c
                                       //  Referenced by: '<S241>/If Action Subsystem2'

  real_T ZE_c;                         // Mask Parameter: ZE_c
                                       //  Referenced by: '<S244>/If Action Subsystem2'

  real_T PS_c;                         // Mask Parameter: PS_c
                                       //  Referenced by: '<S243>/If Action Subsystem2'

  real_T PL_c;                         // Mask Parameter: PL_c
                                       //  Referenced by: '<S242>/If Action Subsystem2'

  real_T NS_c_n;                       // Mask Parameter: NS_c_n
                                       //  Referenced by: '<S216>/If Action Subsystem2'

  real_T ZE_c_e;                       // Mask Parameter: ZE_c_e
                                       //  Referenced by: '<S219>/If Action Subsystem2'

  real_T PS_c_b;                       // Mask Parameter: PS_c_b
                                       //  Referenced by: '<S218>/If Action Subsystem2'

  real_T PL_c_a;                       // Mask Parameter: PL_c_a
                                       //  Referenced by: '<S217>/If Action Subsystem2'

  real_T NL_c_c;                       // Mask Parameter: NL_c_c
                                       //  Referenced by: '<S43>/If Action Subsystem2'

  real_T NL_c_l;                       // Mask Parameter: NL_c_l
                                       //  Referenced by: '<S68>/If Action Subsystem2'

  real_T NS_c_j;                       // Mask Parameter: NS_c_j
                                       //  Referenced by: '<S69>/If Action Subsystem2'

  real_T ZE_c_b;                       // Mask Parameter: ZE_c_b
                                       //  Referenced by: '<S72>/If Action Subsystem2'

  real_T PS_c_c;                       // Mask Parameter: PS_c_c
                                       //  Referenced by: '<S71>/If Action Subsystem2'

  real_T PL_c_m;                       // Mask Parameter: PL_c_m
                                       //  Referenced by: '<S70>/If Action Subsystem2'

  real_T NS_c_p;                       // Mask Parameter: NS_c_p
                                       //  Referenced by: '<S44>/If Action Subsystem2'

  real_T ZE_c_er;                      // Mask Parameter: ZE_c_er
                                       //  Referenced by: '<S47>/If Action Subsystem2'

  real_T PS_c_e;                       // Mask Parameter: PS_c_e
                                       //  Referenced by: '<S46>/If Action Subsystem2'

  real_T PL_c_ak;                      // Mask Parameter: PL_c_ak
                                       //  Referenced by: '<S45>/If Action Subsystem2'

  real_T NL_c_p;                       // Mask Parameter: NL_c_p
                                       //  Referenced by: '<S129>/If Action Subsystem2'

  real_T NL_c_pi;                      // Mask Parameter: NL_c_pi
                                       //  Referenced by: '<S154>/If Action Subsystem2'

  real_T NS_c_m;                       // Mask Parameter: NS_c_m
                                       //  Referenced by: '<S155>/If Action Subsystem2'

  real_T ZE_c_i;                       // Mask Parameter: ZE_c_i
                                       //  Referenced by: '<S158>/If Action Subsystem2'

  real_T PS_c_cr;                      // Mask Parameter: PS_c_cr
                                       //  Referenced by: '<S157>/If Action Subsystem2'

  real_T PL_c_as;                      // Mask Parameter: PL_c_as
                                       //  Referenced by: '<S156>/If Action Subsystem2'

  real_T NS_c_nb;                      // Mask Parameter: NS_c_nb
                                       //  Referenced by: '<S130>/If Action Subsystem2'

  real_T ZE_c_p;                       // Mask Parameter: ZE_c_p
                                       //  Referenced by: '<S133>/If Action Subsystem2'

  real_T PS_c_o;                       // Mask Parameter: PS_c_o
                                       //  Referenced by: '<S132>/If Action Subsystem2'

  real_T PL_c_l;                       // Mask Parameter: PL_c_l
                                       //  Referenced by: '<S131>/If Action Subsystem2'

  SL_Bus_fuzzy_logic_control_gain_msgs_pid Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S1>/Constant'

  SL_Bus_fuzzy_logic_control_error_msgs_Error Out1_Y0;// Computed Parameter: Out1_Y0
                                                      //  Referenced by: '<S265>/Out1'

  SL_Bus_fuzzy_logic_control_error_msgs_Error Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                               //  Referenced by: '<S6>/Constant'

  real_T xdata_Value[101];             // Expression: Xdata
                                       //  Referenced by: '<S180>/x data'

  real_T Weight_Value;                 // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S185>/Weight'

  real_T PVL_Value[101];               // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S184>/PVL'

  real_T PVS_Value[101];               // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S183>/PVS'

  real_T Weight_Value_d;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S196>/Weight'

  real_T PML_Value[101];               // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S184>/PML'

  real_T PMS_Value[101];               // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S183>/PMS'

  real_T Weight_Value_a;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S203>/Weight'

  real_T PVS_Value_p[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S184>/PVS'

  real_T PM_Value[101];                // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S183>/PM'

  real_T Weight_Value_f;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S204>/Weight'

  real_T PML_Value_c[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S183>/PML'

  real_T Weight_Value_n;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S205>/Weight'

  real_T PVL_Value_b[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S183>/PVL'

  real_T Weight_Value_e;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S206>/Weight'

  real_T Weight_Value_k;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S207>/Weight'

  real_T Weight_Value_l;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S208>/Weight'

  real_T PL_Value[101];                // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S183>/PL'

  real_T Weight_Value_ls;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S209>/Weight'

  real_T Weight_Value_o;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S186>/Weight'

  real_T Weight_Value_h;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S187>/Weight'

  real_T Weight_Value_b;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S188>/Weight'

  real_T Weight_Value_m;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S189>/Weight'

  real_T PS_Value[101];                // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S184>/PS'

  real_T Weight_Value_br;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S190>/Weight'

  real_T Weight_Value_ap;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S191>/Weight'

  real_T Weight_Value_i;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S192>/Weight'

  real_T Weight_Value_f3;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S193>/Weight'

  real_T PL_Value_m[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S184>/PL'

  real_T Weight_Value_ky;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S194>/Weight'

  real_T PMS_Value_f[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S184>/PMS'

  real_T Weight_Value_g;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S195>/Weight'

  real_T Weight_Value_fz;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S197>/Weight'

  real_T Weight_Value_hd;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S198>/Weight'

  real_T Weight_Value_ii;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S199>/Weight'

  real_T Weight_Value_ex;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S200>/Weight'

  real_T Weight_Value_fo;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S201>/Weight'

  real_T Weight_Value_j;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S202>/Weight'

  real_T xdata_Value_l[101];           // Expression: Xdata
                                       //  Referenced by: '<S181>/x data'

  real_T Zero_Value;                   // Expression: 0
                                       //  Referenced by: '<S179>/Zero'

  real_T MidRange_Value[2];            // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S179>/MidRange'

  real_T Switch_Threshold;             // Expression: 1
                                       //  Referenced by: '<S179>/Switch'

  real_T xdata_Value_o[101];           // Expression: Xdata
                                       //  Referenced by: '<S8>/x data'

  real_T Weight_Value_c;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S13>/Weight'

  real_T PVL_Value_j[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S12>/PVL'

  real_T PVS_Value_d[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S11>/PVS'

  real_T Weight_Value_he;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S24>/Weight'

  real_T PML_Value_k[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S12>/PML'

  real_T PMS_Value_i[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S11>/PMS'

  real_T Weight_Value_o0;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S31>/Weight'

  real_T PVS_Value_a[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S12>/PVS'

  real_T PM_Value_o[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S11>/PM'

  real_T Weight_Value_p;               // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S32>/Weight'

  real_T PML_Value_kh[101];            // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S11>/PML'

  real_T Weight_Value_je;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S33>/Weight'

  real_T PVL_Value_ji[101];            // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S11>/PVL'

  real_T Weight_Value_bi;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S34>/Weight'

  real_T Weight_Value_io;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S35>/Weight'

  real_T Weight_Value_md;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S36>/Weight'

  real_T PL_Value_ml[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S11>/PL'

  real_T Weight_Value_ko;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S37>/Weight'

  real_T Weight_Value_lz;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S14>/Weight'

  real_T Weight_Value_is;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S15>/Weight'

  real_T Weight_Value_a4;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S16>/Weight'

  real_T Weight_Value_lk;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S17>/Weight'

  real_T PS_Value_n[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S12>/PS'

  real_T Weight_Value_j1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S18>/Weight'

  real_T Weight_Value_dm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S19>/Weight'

  real_T Weight_Value_nh;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S20>/Weight'

  real_T Weight_Value_bt;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S21>/Weight'

  real_T PL_Value_h[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S12>/PL'

  real_T Weight_Value_j0;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S22>/Weight'

  real_T PMS_Value_h[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S12>/PMS'

  real_T Weight_Value_lk2;             // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S23>/Weight'

  real_T Weight_Value_me;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S25>/Weight'

  real_T Weight_Value_cn;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S26>/Weight'

  real_T Weight_Value_eg;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S27>/Weight'

  real_T Weight_Value_ak;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S28>/Weight'

  real_T Weight_Value_pj;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S29>/Weight'

  real_T Weight_Value_cu;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S30>/Weight'

  real_T xdata_Value_h[101];           // Expression: Xdata
                                       //  Referenced by: '<S9>/x data'

  real_T Zero_Value_o;                 // Expression: 0
                                       //  Referenced by: '<S7>/Zero'

  real_T MidRange_Value_d[2];          // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S7>/MidRange'

  real_T Switch_Threshold_h;           // Expression: 1
                                       //  Referenced by: '<S7>/Switch'

  real_T xdata_Value_d[101];           // Expression: Xdata
                                       //  Referenced by: '<S94>/x data'

  real_T Weight_Value_nk;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S99>/Weight'

  real_T PVL_Value_g[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(7).params)
                                       //  Referenced by: '<S98>/PVL'

  real_T PVS_Value_g[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                       //  Referenced by: '<S97>/PVS'

  real_T Weight_Value_k1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S110>/Weight'

  real_T PML_Value_i[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(6).params)
                                       //  Referenced by: '<S98>/PML'

  real_T PMS_Value_c[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(5).params)
                                       //  Referenced by: '<S97>/PMS'

  real_T Weight_Value_ka;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S117>/Weight'

  real_T PVS_Value_g1[101];            // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                       //  Referenced by: '<S98>/PVS'

  real_T PM_Value_f[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                       //  Referenced by: '<S97>/PM'

  real_T Weight_Value_ft;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S118>/Weight'

  real_T PML_Value_o[101];             // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(6).params)
                                       //  Referenced by: '<S97>/PML'

  real_T Weight_Value_io4;             // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S119>/Weight'

  real_T PVL_Value_jw[101];            // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(7).params)
                                       //  Referenced by: '<S97>/PVL'

  real_T Weight_Value_id;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S120>/Weight'

  real_T Weight_Value_oy;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S121>/Weight'

  real_T Weight_Value_a1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S122>/Weight'

  real_T PL_Value_a[101];              // Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                       //  Referenced by: '<S97>/PL'

  real_T Weight_Value_co;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S123>/Weight'

  real_T Weight_Value_f1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S100>/Weight'

  real_T Weight_Value_nc;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S101>/Weight'

  real_T Weight_Value_ci;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S102>/Weight'

  real_T Weight_Value_pm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S103>/Weight'

  real_T PS_Value_k[101];              // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                       //  Referenced by: '<S98>/PS'

  real_T Weight_Value_es;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S104>/Weight'

  real_T Weight_Value_gu;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S105>/Weight'

  real_T Weight_Value_g5;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S106>/Weight'

  real_T Weight_Value_ct;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S107>/Weight'

  real_T PL_Value_hs[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                       //  Referenced by: '<S98>/PL'

  real_T Weight_Value_dx;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S108>/Weight'

  real_T PMS_Value_m[101];             // Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(5).params)
                                       //  Referenced by: '<S98>/PMS'

  real_T Weight_Value_no;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S109>/Weight'

  real_T Weight_Value_g1;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S111>/Weight'

  real_T Weight_Value_hi;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S112>/Weight'

  real_T Weight_Value_gm;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S113>/Weight'

  real_T Weight_Value_eo;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S114>/Weight'

  real_T Weight_Value_js;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S115>/Weight'

  real_T Weight_Value_iz;              // Expression: fis.rule(j_rule).weight
                                       //  Referenced by: '<S116>/Weight'

  real_T xdata_Value_lq[101];          // Expression: Xdata
                                       //  Referenced by: '<S95>/x data'

  real_T Zero_Value_i;                 // Expression: 0
                                       //  Referenced by: '<S93>/Zero'

  real_T MidRange_Value_f[2];          // Expression: mean(cat(1,fis.output.range),2)
                                       //  Referenced by: '<S93>/MidRange'

  real_T Switch_Threshold_e;           // Expression: 1
                                       //  Referenced by: '<S93>/Switch'

  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_m;// '<S244>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_h;// '<S244>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_k;// '<S243>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_b;// '<S243>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_g2;// '<S242>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_j;// '<S242>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_o;// '<S241>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_d;// '<S241>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_g;// '<S240>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_l;// '<S240>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_kt;// '<S219>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_m;// '<S219>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_l;// '<S218>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_c;// '<S218>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_al;// '<S217>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_g;// '<S217>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_a;// '<S216>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_k;// '<S216>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1;// '<S215>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem;// '<S215>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_contr_T ActionOne_k;// '<S181>/Action: One'
  P_ActionOne_fuzzy_logic_contr_T ActionOne;// '<S180>/Action: One'
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_ku;// '<S158>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_is;// '<S158>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_kb;// '<S157>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_i1;// '<S157>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_iw;// '<S156>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_e5;// '<S156>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_c;// '<S155>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_e;// '<S155>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_f;// '<S154>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_dq;// '<S154>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_c3;// '<S133>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_kg;// '<S133>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_jtp;// '<S132>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_lc;// '<S132>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j2;// '<S131>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_b2;// '<S131>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j4;// '<S130>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_h3;// '<S130>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_jt;// '<S129>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ks0;// '<S129>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_contr_T ActionOne_ck;// '<S95>/Action: One'
  P_ActionOne_fuzzy_logic_contr_T ActionOne_f;// '<S94>/Action: One'
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_nr;// '<S72>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_lk;// '<S72>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_h;// '<S71>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_i;// '<S71>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_i;// '<S70>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_cb;// '<S70>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_g5;// '<S69>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ck;// '<S69>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_d;// '<S68>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_dp;// '<S68>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_kx;// '<S47>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_gi;// '<S47>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_j;// '<S46>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_n;// '<S46>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_e;// '<S45>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_lr;// '<S45>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_n5;// '<S44>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_a;// '<S44>/If Action Subsystem' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem1_n;// '<S43>/If Action Subsystem1' 
  P_IfActionSubsystem_fuzzy_log_T IfActionSubsystem_ks;// '<S43>/If Action Subsystem' 
  P_ActionOne_fuzzy_logic_contr_T ActionOne_a;// '<S9>/Action: One'
  P_ActionOne_fuzzy_logic_contr_T ActionOne_c;// '<S8>/Action: One'
};

// Real-time Model Data Structure
struct tag_RTM_fuzzy_logic_control_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_fuzzy_logic_control_T fuzzy_logic_control_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_fuzzy_logic_control_T fuzzy_logic_control_B;

// Block states (auto storage)
extern DW_fuzzy_logic_control_T fuzzy_logic_control_DW;

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
  extern void fuzzy_logic_control_initialize(void);
  extern void fuzzy_logic_control_step(void);
  extern void fuzzy_logic_control_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_fuzzy_logic_control_T *const fuzzy_logic_control_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S11>/PS' : Unused code path elimination
//  Block '<S12>/PM' : Unused code path elimination
//  Block '<S97>/PS' : Unused code path elimination
//  Block '<S98>/PM' : Unused code path elimination
//  Block '<S183>/PS' : Unused code path elimination
//  Block '<S184>/PM' : Unused code path elimination
//  Block '<S10>/DataConv' : Eliminate redundant data type conversion
//  Block '<S38>/DataConv' : Eliminate redundant data type conversion
//  Block '<S96>/DataConv' : Eliminate redundant data type conversion
//  Block '<S124>/DataConv' : Eliminate redundant data type conversion
//  Block '<S182>/DataConv' : Eliminate redundant data type conversion
//  Block '<S210>/DataConv' : Eliminate redundant data type conversion


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
//  '<Root>' : 'fuzzy_logic_control'
//  '<S1>'   : 'fuzzy_logic_control/Blank Message'
//  '<S2>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller1'
//  '<S3>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller2'
//  '<S4>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller3'
//  '<S5>'   : 'fuzzy_logic_control/Publish'
//  '<S6>'   : 'fuzzy_logic_control/Subscribe'
//  '<S7>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard'
//  '<S8>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1'
//  '<S9>'   : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2'
//  '<S10>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E'
//  '<S11>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Kd'
//  '<S12>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Kp'
//  '<S13>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule1'
//  '<S14>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule10'
//  '<S15>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule11'
//  '<S16>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule12'
//  '<S17>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule13'
//  '<S18>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule14'
//  '<S19>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule15'
//  '<S20>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule16'
//  '<S21>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule17'
//  '<S22>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule18'
//  '<S23>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule19'
//  '<S24>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule2'
//  '<S25>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule20'
//  '<S26>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule21'
//  '<S27>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule22'
//  '<S28>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule23'
//  '<S29>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule24'
//  '<S30>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule25'
//  '<S31>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule3'
//  '<S32>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule4'
//  '<S33>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule5'
//  '<S34>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule6'
//  '<S35>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule7'
//  '<S36>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule8'
//  '<S37>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Rule9'
//  '<S38>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE'
//  '<S39>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1/Action: One'
//  '<S40>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification1/Action: u1'
//  '<S41>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2/Action: One'
//  '<S42>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/Defuzzification2/Action: u1'
//  '<S43>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NL'
//  '<S44>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NS'
//  '<S45>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PL'
//  '<S46>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PS'
//  '<S47>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/ZE'
//  '<S48>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem'
//  '<S49>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S50>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S51>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S52>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem'
//  '<S53>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S54>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S55>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S56>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem'
//  '<S57>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S58>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S59>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S60>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem'
//  '<S61>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S62>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S63>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S64>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S65>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S66>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S67>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S68>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NL'
//  '<S69>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NS'
//  '<S70>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PL'
//  '<S71>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PS'
//  '<S72>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE'
//  '<S73>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S74>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S75>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S76>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S77>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S78>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S79>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S80>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S81>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S82>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S83>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S84>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S85>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S86>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S87>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S88>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S89>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S90>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S91>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S92>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller1/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S93>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard'
//  '<S94>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1'
//  '<S95>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2'
//  '<S96>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E'
//  '<S97>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Kd'
//  '<S98>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Kp'
//  '<S99>'  : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule1'
//  '<S100>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule10'
//  '<S101>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule11'
//  '<S102>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule12'
//  '<S103>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule13'
//  '<S104>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule14'
//  '<S105>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule15'
//  '<S106>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule16'
//  '<S107>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule17'
//  '<S108>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule18'
//  '<S109>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule19'
//  '<S110>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule2'
//  '<S111>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule20'
//  '<S112>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule21'
//  '<S113>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule22'
//  '<S114>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule23'
//  '<S115>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule24'
//  '<S116>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule25'
//  '<S117>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule3'
//  '<S118>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule4'
//  '<S119>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule5'
//  '<S120>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule6'
//  '<S121>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule7'
//  '<S122>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule8'
//  '<S123>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Rule9'
//  '<S124>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE'
//  '<S125>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1/Action: One'
//  '<S126>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification1/Action: u1'
//  '<S127>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2/Action: One'
//  '<S128>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/Defuzzification2/Action: u1'
//  '<S129>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NL'
//  '<S130>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NS'
//  '<S131>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PL'
//  '<S132>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PS'
//  '<S133>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/ZE'
//  '<S134>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem'
//  '<S135>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S136>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S137>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S138>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem'
//  '<S139>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S140>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S141>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S142>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem'
//  '<S143>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S144>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S145>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S146>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem'
//  '<S147>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S148>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S149>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S150>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S151>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S152>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S153>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S154>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NL'
//  '<S155>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NS'
//  '<S156>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PL'
//  '<S157>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PS'
//  '<S158>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE'
//  '<S159>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S160>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S161>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S162>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S163>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S164>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S165>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S166>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S167>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S168>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S169>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S170>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S171>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S172>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S173>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S174>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S175>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S176>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S177>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S178>' : 'fuzzy_logic_control/Fuzzy Logic  Controller2/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S179>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard'
//  '<S180>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1'
//  '<S181>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2'
//  '<S182>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E'
//  '<S183>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Kd'
//  '<S184>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Kp'
//  '<S185>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule1'
//  '<S186>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule10'
//  '<S187>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule11'
//  '<S188>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule12'
//  '<S189>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule13'
//  '<S190>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule14'
//  '<S191>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule15'
//  '<S192>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule16'
//  '<S193>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule17'
//  '<S194>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule18'
//  '<S195>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule19'
//  '<S196>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule2'
//  '<S197>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule20'
//  '<S198>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule21'
//  '<S199>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule22'
//  '<S200>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule23'
//  '<S201>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule24'
//  '<S202>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule25'
//  '<S203>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule3'
//  '<S204>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule4'
//  '<S205>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule5'
//  '<S206>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule6'
//  '<S207>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule7'
//  '<S208>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule8'
//  '<S209>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Rule9'
//  '<S210>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE'
//  '<S211>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1/Action: One'
//  '<S212>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification1/Action: u1'
//  '<S213>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2/Action: One'
//  '<S214>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/Defuzzification2/Action: u1'
//  '<S215>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NL'
//  '<S216>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NS'
//  '<S217>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PL'
//  '<S218>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PS'
//  '<S219>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/ZE'
//  '<S220>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem'
//  '<S221>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem1'
//  '<S222>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem2'
//  '<S223>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NL/If Action Subsystem3'
//  '<S224>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem'
//  '<S225>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem1'
//  '<S226>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem2'
//  '<S227>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/NS/If Action Subsystem3'
//  '<S228>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem'
//  '<S229>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem1'
//  '<S230>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem2'
//  '<S231>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PL/If Action Subsystem3'
//  '<S232>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem'
//  '<S233>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem1'
//  '<S234>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem2'
//  '<S235>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/PS/If Action Subsystem3'
//  '<S236>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem'
//  '<S237>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem1'
//  '<S238>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem2'
//  '<S239>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/E/ZE/If Action Subsystem3'
//  '<S240>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NL'
//  '<S241>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NS'
//  '<S242>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PL'
//  '<S243>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PS'
//  '<S244>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE'
//  '<S245>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem'
//  '<S246>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem1'
//  '<S247>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem2'
//  '<S248>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NL/If Action Subsystem3'
//  '<S249>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem'
//  '<S250>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem1'
//  '<S251>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem2'
//  '<S252>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/NS/If Action Subsystem3'
//  '<S253>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem'
//  '<S254>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem1'
//  '<S255>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem2'
//  '<S256>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PL/If Action Subsystem3'
//  '<S257>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem'
//  '<S258>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem1'
//  '<S259>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem2'
//  '<S260>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/PS/If Action Subsystem3'
//  '<S261>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem'
//  '<S262>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem1'
//  '<S263>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem2'
//  '<S264>' : 'fuzzy_logic_control/Fuzzy Logic  Controller3/FIS Wizard/dE/ZE/If Action Subsystem3'
//  '<S265>' : 'fuzzy_logic_control/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_fuzzy_logic_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
