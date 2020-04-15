//
// File: fuzzy_logic_system.cpp
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
#include "fuzzy_logic_system.h"
#include "fuzzy_logic_system_private.h"
#define fuzzy_logic_sys_MessageQueueLen (1)

// Block signals (auto storage)
B_fuzzy_logic_system_T fuzzy_logic_system_B;

// Block states (auto storage)
DW_fuzzy_logic_system_T fuzzy_logic_system_DW;

// Real-time model
RT_MODEL_fuzzy_logic_system_T fuzzy_logic_system_M_;
RT_MODEL_fuzzy_logic_system_T *const fuzzy_logic_system_M =
  &fuzzy_logic_system_M_;

//
// Output and update for action system:
//    '<S8>/Action: One'
//    '<S9>/Action: One'
//    '<S10>/Action: One'
//    '<S98>/Action: One'
//    '<S99>/Action: One'
//    '<S100>/Action: One'
//    '<S188>/Action: One'
//    '<S189>/Action: One'
//    '<S190>/Action: One'
//
void fuzzy_logic_system_ActionOne(real_T *rty_Out1,
  P_ActionOne_fuzzy_logic_syste_T *localP)
{
  // SignalConversion: '<S41>/OutportBufferForOut1' incorporates:
  //   Constant: '<S41>/One'

  *rty_Out1 = localP->One_Value;
}

//
// Output and update for action system:
//    '<S47>/If Action Subsystem'
//    '<S47>/If Action Subsystem1'
//    '<S48>/If Action Subsystem'
//    '<S48>/If Action Subsystem1'
//    '<S49>/If Action Subsystem'
//    '<S49>/If Action Subsystem1'
//    '<S50>/If Action Subsystem'
//    '<S50>/If Action Subsystem1'
//    '<S51>/If Action Subsystem'
//    '<S51>/If Action Subsystem1'
//    ...
//
void fuzzy_logic_s_IfActionSubsystem(real_T *rty_Out1,
  P_IfActionSubsystem_fuzzy_log_T *localP)
{
  // SignalConversion: '<S52>/OutportBufferForOut1' incorporates:
  //   Constant: '<S52>/0'

  *rty_Out1 = localP->u_Value;
}

//
// Output and update for action system:
//    '<S47>/If Action Subsystem3'
//    '<S48>/If Action Subsystem3'
//    '<S49>/If Action Subsystem3'
//    '<S50>/If Action Subsystem3'
//    '<S51>/If Action Subsystem3'
//    '<S72>/If Action Subsystem3'
//    '<S73>/If Action Subsystem3'
//    '<S74>/If Action Subsystem3'
//    '<S75>/If Action Subsystem3'
//    '<S76>/If Action Subsystem3'
//    ...
//
void fuzzy_logic__IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_a, real_T rtp_b)
{
  // Product: '<S55>/Product ab (trimf)' incorporates:
  //   Constant: '<S55>/a'
  //   Constant: '<S55>/b'
  //   Sum: '<S55>/Sum'
  //   Sum: '<S55>/Sum1'

  *rty_Out1 = (rtu_x - rtp_a) / (rtp_b - rtp_a);
}

//
// Output and update for action system:
//    '<S47>/If Action Subsystem2'
//    '<S48>/If Action Subsystem2'
//    '<S49>/If Action Subsystem2'
//    '<S50>/If Action Subsystem2'
//    '<S51>/If Action Subsystem2'
//    '<S72>/If Action Subsystem2'
//    '<S73>/If Action Subsystem2'
//    '<S74>/If Action Subsystem2'
//    '<S75>/If Action Subsystem2'
//    '<S76>/If Action Subsystem2'
//    ...
//
void fuzzy_logic__IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_b, real_T rtp_c)
{
  // Product: '<S54>/Product cd (trimf)' incorporates:
  //   Constant: '<S54>/b'
  //   Constant: '<S54>/c'
  //   Sum: '<S54>/Sum2'
  //   Sum: '<S54>/Sum3'

  *rty_Out1 = 1.0 / (rtp_c - rtp_b) * (rtp_c - rtu_x);
}

// Model step function
void fuzzy_logic_system_step(void)
{
  boolean_T varargout_1;
  real_T rtb_Sum1_o;
  real_T rtb_Sum1_gk;
  real_T rtb_Sum1;
  int32_T i;
  real_T rtb_Switch_idx_2;
  real_T rtb_Switch_a_idx_0;
  real_T rtb_Switch_a_idx_1;
  real_T rtb_Switch_a_idx_2;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S277>/In1'
  //   MATLABSystem: '<S6>/SourceBlock'

  varargout_1 = Sub_fuzzy_logic_system_189.getLatestMessage
    (&fuzzy_logic_system_B.varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S277>/Enable'

  if (varargout_1) {
    fuzzy_logic_system_B.In1 = fuzzy_logic_system_B.varargout_2;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // If: '<S227>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionX < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionX > -4.0)) {
    // Outputs for IfAction SubSystem: '<S227>/If Action Subsystem' incorporates:
    //   ActionPort: '<S232>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)&fuzzy_logic_system_P.IfActionSubsystem);

    // End of Outputs for SubSystem: '<S227>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX == -10.0) {
    // Outputs for IfAction SubSystem: '<S227>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S233>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1);

    // End of Outputs for SubSystem: '<S227>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX < -10.0) {
    // Outputs for IfAction SubSystem: '<S227>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S235>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_a,
      fuzzy_logic_system_P.NL_b);

    // End of Outputs for SubSystem: '<S227>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S227>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S234>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_b,
      fuzzy_logic_system_P.NL_c);

    // End of Outputs for SubSystem: '<S227>/If Action Subsystem2'
  }

  // End of If: '<S227>/If'

  // If: '<S252>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteX < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteX > -4.0)) {
    // Outputs for IfAction SubSystem: '<S252>/If Action Subsystem' incorporates:
    //   ActionPort: '<S257>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_b,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_i);

    // End of Outputs for SubSystem: '<S252>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX == -10.0) {
    // Outputs for IfAction SubSystem: '<S252>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S258>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_b,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_l);

    // End of Outputs for SubSystem: '<S252>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX < -10.0) {
    // Outputs for IfAction SubSystem: '<S252>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S260>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_b, fuzzy_logic_system_P.NL_a_k,
      fuzzy_logic_system_P.NL_b_p);

    // End of Outputs for SubSystem: '<S252>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S252>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S259>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_b, fuzzy_logic_system_P.NL_b_p,
      fuzzy_logic_system_P.NL_c_n);

    // End of Outputs for SubSystem: '<S252>/If Action Subsystem2'
  }

  // End of If: '<S252>/If'

  // MinMax: '<S195>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_b) || rtIsNaN
        (fuzzy_logic_system_B.Merge_b))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_b;
  }

  // Product: '<S195>/Weighting' incorporates:
  //   Constant: '<S195>/Weight'
  //   MinMax: '<S195>/andorMethod'

  fuzzy_logic_system_B.Weighting = fuzzy_logic_system_P.Weight_Value *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S195>/impMethod' incorporates:
  //   Constant: '<S192>/PVS'
  //   Constant: '<S193>/PM'
  //   Constant: '<S194>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVS_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVS_Value[i])) {
      fuzzy_logic_system_B.impMethod[i + 101] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 101] = fuzzy_logic_system_P.PVS_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod[i + 202] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 202] = fuzzy_logic_system_P.PM_Value[i];
    }
  }

  // End of MinMax: '<S195>/impMethod'

  // If: '<S253>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteX < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteX > 4.0)) {
    // Outputs for IfAction SubSystem: '<S253>/If Action Subsystem' incorporates:
    //   ActionPort: '<S261>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_l,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_ij);

    // End of Outputs for SubSystem: '<S253>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX == -5.0) {
    // Outputs for IfAction SubSystem: '<S253>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S262>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_l,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_j);

    // End of Outputs for SubSystem: '<S253>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX < -5.0) {
    // Outputs for IfAction SubSystem: '<S253>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S264>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_l, fuzzy_logic_system_P.NS_a,
      fuzzy_logic_system_P.NS_b);

    // End of Outputs for SubSystem: '<S253>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S253>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S263>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_l, fuzzy_logic_system_P.NS_b,
      fuzzy_logic_system_P.NS_c);

    // End of Outputs for SubSystem: '<S253>/If Action Subsystem2'
  }

  // End of If: '<S253>/If'

  // MinMax: '<S206>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_l) || rtIsNaN
        (fuzzy_logic_system_B.Merge_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_l;
  }

  // Product: '<S206>/Weighting' incorporates:
  //   Constant: '<S206>/Weight'
  //   MinMax: '<S206>/andorMethod'

  fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_P.Weight_Value_j *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S206>/impMethod' incorporates:
  //   Constant: '<S192>/PMS'
  //   Constant: '<S193>/PMS'
  //   Constant: '<S194>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PML_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PMS_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_P.PMS_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }
  }

  // End of MinMax: '<S206>/impMethod'

  // If: '<S256>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteX < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteX > 4.0)) {
    // Outputs for IfAction SubSystem: '<S256>/If Action Subsystem' incorporates:
    //   ActionPort: '<S273>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_m,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_l);

    // End of Outputs for SubSystem: '<S256>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX == 0.0) {
    // Outputs for IfAction SubSystem: '<S256>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S274>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_m,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_n);

    // End of Outputs for SubSystem: '<S256>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX < 0.0) {
    // Outputs for IfAction SubSystem: '<S256>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S276>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_m, fuzzy_logic_system_P.ZE_a,
      fuzzy_logic_system_P.ZE_b);

    // End of Outputs for SubSystem: '<S256>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S256>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S275>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_m, fuzzy_logic_system_P.ZE_b,
      fuzzy_logic_system_P.ZE_c);

    // End of Outputs for SubSystem: '<S256>/If Action Subsystem2'
  }

  // End of If: '<S256>/If'

  // MinMax: '<S213>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_m) || rtIsNaN
        (fuzzy_logic_system_B.Merge_m))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m;
  }

  // Product: '<S213>/Weighting' incorporates:
  //   Constant: '<S213>/Weight'
  //   MinMax: '<S213>/andorMethod'

  fuzzy_logic_system_B.Weighting_p = fuzzy_logic_system_P.Weight_Value_p *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S213>/impMethod' incorporates:
  //   Constant: '<S192>/PM'
  //   Constant: '<S193>/PS'
  //   Constant: '<S194>/PVS'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PVS_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PVS_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_P.PVS_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PM_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_P.PM_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PS_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PS_Value[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_P.PS_Value[i];
    }
  }

  // End of MinMax: '<S213>/impMethod'

  // If: '<S255>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteX < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteX > 7.0)) {
    // Outputs for IfAction SubSystem: '<S255>/If Action Subsystem' incorporates:
    //   ActionPort: '<S269>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_mn,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_n);

    // End of Outputs for SubSystem: '<S255>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX == 5.0) {
    // Outputs for IfAction SubSystem: '<S255>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S270>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_mn,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_h);

    // End of Outputs for SubSystem: '<S255>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX < 5.0) {
    // Outputs for IfAction SubSystem: '<S255>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S272>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_mn, fuzzy_logic_system_P.PS_a,
      fuzzy_logic_system_P.PS_b);

    // End of Outputs for SubSystem: '<S255>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S255>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S271>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_mn, fuzzy_logic_system_P.PS_b,
      fuzzy_logic_system_P.PS_c);

    // End of Outputs for SubSystem: '<S255>/If Action Subsystem2'
  }

  // End of If: '<S255>/If'

  // MinMax: '<S214>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_mn) || rtIsNaN
        (fuzzy_logic_system_B.Merge_mn))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_mn;
  }

  // Product: '<S214>/Weighting' incorporates:
  //   Constant: '<S214>/Weight'
  //   MinMax: '<S214>/andorMethod'

  fuzzy_logic_system_B.Weighting_a = fuzzy_logic_system_P.Weight_Value_k *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S214>/impMethod' incorporates:
  //   Constant: '<S192>/PML'
  //   Constant: '<S193>/PMS'
  //   Constant: '<S194>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PML_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PML_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_P.PML_Value_m[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }
  }

  // End of MinMax: '<S214>/impMethod'

  // If: '<S254>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteX < 4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteX > 10.0)) {
    // Outputs for IfAction SubSystem: '<S254>/If Action Subsystem' incorporates:
    //   ActionPort: '<S265>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_f);

    // End of Outputs for SubSystem: '<S254>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX == 10.0) {
    // Outputs for IfAction SubSystem: '<S254>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S266>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_hh);

    // End of Outputs for SubSystem: '<S254>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteX < 10.0) {
    // Outputs for IfAction SubSystem: '<S254>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S268>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_i, fuzzy_logic_system_P.PL_a,
      fuzzy_logic_system_P.PL_b);

    // End of Outputs for SubSystem: '<S254>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S254>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S267>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteX,
      &fuzzy_logic_system_B.Merge_i, fuzzy_logic_system_P.PL_b,
      fuzzy_logic_system_P.PL_c);

    // End of Outputs for SubSystem: '<S254>/If Action Subsystem2'
  }

  // End of If: '<S254>/If'

  // MinMax: '<S215>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_i) || rtIsNaN
        (fuzzy_logic_system_B.Merge_i))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_i;
  }

  // Product: '<S215>/Weighting' incorporates:
  //   Constant: '<S215>/Weight'
  //   MinMax: '<S215>/andorMethod'

  fuzzy_logic_system_B.Weighting_h = fuzzy_logic_system_P.Weight_Value_j5 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S215>/impMethod' incorporates:
  //   Constant: '<S192>/PVL'
  //   Constant: '<S193>/PM'
  //   Constant: '<S194>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }
  }

  // End of MinMax: '<S215>/impMethod'

  // If: '<S228>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionX < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionX > 4.0)) {
    // Outputs for IfAction SubSystem: '<S228>/If Action Subsystem' incorporates:
    //   ActionPort: '<S236>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_j);

    // End of Outputs for SubSystem: '<S228>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX == -5.0) {
    // Outputs for IfAction SubSystem: '<S228>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S237>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_g);

    // End of Outputs for SubSystem: '<S228>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX < -5.0) {
    // Outputs for IfAction SubSystem: '<S228>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S239>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NS_a_p,
      fuzzy_logic_system_P.NS_b_i);

    // End of Outputs for SubSystem: '<S228>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S228>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S238>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NS_b_i,
      fuzzy_logic_system_P.NS_c_j);

    // End of Outputs for SubSystem: '<S228>/If Action Subsystem2'
  }

  // End of If: '<S228>/If'

  // MinMax: '<S216>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_b) || rtIsNaN
        (fuzzy_logic_system_B.Merge_b))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_b;
  }

  // Product: '<S216>/Weighting' incorporates:
  //   Constant: '<S216>/Weight'
  //   MinMax: '<S216>/andorMethod'

  fuzzy_logic_system_B.Weighting_i = fuzzy_logic_system_P.Weight_Value_g *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S217>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_l) || rtIsNaN
        (fuzzy_logic_system_B.Merge_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_l;
  }

  // Product: '<S217>/Weighting' incorporates:
  //   Constant: '<S217>/Weight'
  //   MinMax: '<S217>/andorMethod'

  fuzzy_logic_system_B.Weighting_k = fuzzy_logic_system_P.Weight_Value_b *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S218>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_m) || rtIsNaN
        (fuzzy_logic_system_B.Merge_m))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m;
  }

  // Product: '<S218>/Weighting' incorporates:
  //   Constant: '<S218>/Weight'
  //   MinMax: '<S218>/andorMethod'

  fuzzy_logic_system_B.Weighting_d = fuzzy_logic_system_P.Weight_Value_ju *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S219>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_mn) || rtIsNaN
        (fuzzy_logic_system_B.Merge_mn))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_mn;
  }

  // Product: '<S219>/Weighting' incorporates:
  //   Constant: '<S219>/Weight'
  //   MinMax: '<S219>/andorMethod'

  fuzzy_logic_system_B.Weighting_k1 = fuzzy_logic_system_P.Weight_Value_bu *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S196>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_i) || rtIsNaN
        (fuzzy_logic_system_B.Merge_i))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_i;
  }

  // Product: '<S196>/Weighting' incorporates:
  //   Constant: '<S196>/Weight'
  //   MinMax: '<S196>/andorMethod'

  fuzzy_logic_system_B.Weighting_b = fuzzy_logic_system_P.Weight_Value_kl *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S216>/impMethod' incorporates:
    //   Constant: '<S192>/PML'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PML_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_P.PML_Value_m[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S216>/impMethod'

    // MinMax: '<S217>/impMethod' incorporates:
    //   Constant: '<S192>/PML'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PML'

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PML_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PML_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_P.PML_Value_m[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S217>/impMethod'

    // MinMax: '<S218>/impMethod' incorporates:
    //   Constant: '<S192>/PL'
    //   Constant: '<S193>/PS'
    //   Constant: '<S194>/PVS'

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PVS_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PVS_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_P.PVS_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PL_Value[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_P.PL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PS_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PS_Value[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_P.PS_Value[i];
    }

    // End of MinMax: '<S218>/impMethod'

    // MinMax: '<S219>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PML'

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PML_Value[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S219>/impMethod'

    // MinMax: '<S196>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S196>/impMethod'
  }

  // If: '<S231>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionX < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionX > 4.0)) {
    // Outputs for IfAction SubSystem: '<S231>/If Action Subsystem' incorporates:
    //   ActionPort: '<S248>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_c);

    // End of Outputs for SubSystem: '<S231>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX == 0.0) {
    // Outputs for IfAction SubSystem: '<S231>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S249>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_b);

    // End of Outputs for SubSystem: '<S231>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX < 0.0) {
    // Outputs for IfAction SubSystem: '<S231>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S251>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.ZE_a_j,
      fuzzy_logic_system_P.ZE_b_m);

    // End of Outputs for SubSystem: '<S231>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S231>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S250>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.ZE_b_m,
      fuzzy_logic_system_P.ZE_c_o);

    // End of Outputs for SubSystem: '<S231>/If Action Subsystem2'
  }

  // End of If: '<S231>/If'

  // MinMax: '<S197>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_b) || rtIsNaN
        (fuzzy_logic_system_B.Merge_b))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_b;
  }

  // Product: '<S197>/Weighting' incorporates:
  //   Constant: '<S197>/Weight'
  //   MinMax: '<S197>/andorMethod'

  fuzzy_logic_system_B.Weighting_c = fuzzy_logic_system_P.Weight_Value_d *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S198>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_l) || rtIsNaN
        (fuzzy_logic_system_B.Merge_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_l;
  }

  // Product: '<S198>/Weighting' incorporates:
  //   Constant: '<S198>/Weight'
  //   MinMax: '<S198>/andorMethod'

  fuzzy_logic_system_B.Weighting_o = fuzzy_logic_system_P.Weight_Value_m *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S199>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_m) || rtIsNaN
        (fuzzy_logic_system_B.Merge_m))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m;
  }

  // Product: '<S199>/Weighting' incorporates:
  //   Constant: '<S199>/Weight'
  //   MinMax: '<S199>/andorMethod'

  fuzzy_logic_system_B.Weighting_ol = fuzzy_logic_system_P.Weight_Value_c *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S200>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_mn) || rtIsNaN
        (fuzzy_logic_system_B.Merge_mn))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_mn;
  }

  // Product: '<S200>/Weighting' incorporates:
  //   Constant: '<S200>/Weight'
  //   MinMax: '<S200>/andorMethod'

  fuzzy_logic_system_B.Weighting_n = fuzzy_logic_system_P.Weight_Value_gp *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S201>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Merge_i) || rtIsNaN
        (fuzzy_logic_system_B.Merge_i))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_i;
  }

  // Product: '<S201>/Weighting' incorporates:
  //   Constant: '<S201>/Weight'
  //   MinMax: '<S201>/andorMethod'

  fuzzy_logic_system_B.Weighting_ik = fuzzy_logic_system_P.Weight_Value_f *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S197>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S197>/impMethod'

    // MinMax: '<S198>/impMethod' incorporates:
    //   Constant: '<S192>/PL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PML'

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PML_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PL_Value[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_P.PL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S198>/impMethod'

    // MinMax: '<S199>/impMethod' incorporates:
    //   Constant: '<S192>/PL'
    //   Constant: '<S193>/PVS'
    //   Constant: '<S194>/PS'

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_P.PS_Value_o[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PL_Value[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_P.PL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PVS_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVS_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_P.PVS_Value_b[i];
    }

    // End of MinMax: '<S199>/impMethod'

    // MinMax: '<S200>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PML'

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PML_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value[i])) {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_P.PML_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S200>/impMethod'

    // MinMax: '<S201>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S201>/impMethod'
  }

  // If: '<S230>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionX < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionX > 7.0)) {
    // Outputs for IfAction SubSystem: '<S230>/If Action Subsystem' incorporates:
    //   ActionPort: '<S244>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_m2,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_ly);

    // End of Outputs for SubSystem: '<S230>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX == 5.0) {
    // Outputs for IfAction SubSystem: '<S230>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S245>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_m2,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_l4);

    // End of Outputs for SubSystem: '<S230>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX < 5.0) {
    // Outputs for IfAction SubSystem: '<S230>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S247>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge_m2, fuzzy_logic_system_P.PS_a_e,
      fuzzy_logic_system_P.PS_b_l);

    // End of Outputs for SubSystem: '<S230>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S230>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S246>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge_m2, fuzzy_logic_system_P.PS_b_l,
      fuzzy_logic_system_P.PS_c_d);

    // End of Outputs for SubSystem: '<S230>/If Action Subsystem2'
  }

  // End of If: '<S230>/If'

  // MinMax: '<S202>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m2;
  if (!((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_B.Merge_b) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_b))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_b;
  }

  // Product: '<S202>/Weighting' incorporates:
  //   Constant: '<S202>/Weight'
  //   MinMax: '<S202>/andorMethod'

  fuzzy_logic_system_B.Weighting_hb = fuzzy_logic_system_P.Weight_Value_a *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S203>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m2;
  if (!((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_B.Merge_l) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_l;
  }

  // Product: '<S203>/Weighting' incorporates:
  //   Constant: '<S203>/Weight'
  //   MinMax: '<S203>/andorMethod'

  fuzzy_logic_system_B.Merge = fuzzy_logic_system_P.Weight_Value_a0 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S204>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m2;
  if (!((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_B.Merge_m) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_m))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m;
  }

  // Product: '<S204>/Weighting' incorporates:
  //   Constant: '<S204>/Weight'
  //   MinMax: '<S204>/andorMethod'

  fuzzy_logic_system_B.Weighting_hpq = fuzzy_logic_system_P.Weight_Value_dy *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S205>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m2;
  if (!((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_B.Merge_mn) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_mn))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_mn;
  }

  // Product: '<S205>/Weighting' incorporates:
  //   Constant: '<S205>/Weight'
  //   MinMax: '<S205>/andorMethod'

  fuzzy_logic_system_B.Weighting_hg = fuzzy_logic_system_P.Weight_Value_gr *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S207>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m2;
  if (!((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_B.Merge_i) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_i))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_i;
  }

  // Product: '<S207>/Weighting' incorporates:
  //   Constant: '<S207>/Weight'
  //   MinMax: '<S207>/andorMethod'

  fuzzy_logic_system_B.Merge_m2 = fuzzy_logic_system_P.Weight_Value_av *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S202>/impMethod' incorporates:
    //   Constant: '<S192>/PL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PVL_Value[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PL_Value[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_P.PL_Value[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S202>/impMethod'

    // MinMax: '<S203>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PL'

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PL_Value_h[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PL_Value_h[i])) {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_P.PL_Value_h[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 101] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PMS_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 202] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S203>/impMethod'

    // MinMax: '<S204>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PS'
    //   Constant: '<S194>/PMS'

    if ((fuzzy_logic_system_B.Weighting_hpq <=
         fuzzy_logic_system_P.PMS_Value_b[i]) || rtIsNaN
        (fuzzy_logic_system_P.PMS_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_P.PMS_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <=
         fuzzy_logic_system_P.PVL_Value_b[i]) || rtIsNaN
        (fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <= fuzzy_logic_system_P.PS_Value[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_P.PS_Value[i];
    }

    // End of MinMax: '<S204>/impMethod'

    // MinMax: '<S205>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PL'

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PL_Value_h[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_h[i])) {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_P.PL_Value_h[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PVL_Value_b[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PMS_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S205>/impMethod'

    // MinMax: '<S207>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 101] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 202] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S207>/impMethod'
  }

  // If: '<S229>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionX < 3.788) ||
      (fuzzy_logic_system_B.In1.ErrorPositionX > 9.788)) {
    // Outputs for IfAction SubSystem: '<S229>/If Action Subsystem' incorporates:
    //   ActionPort: '<S240>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_c,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_k);

    // End of Outputs for SubSystem: '<S229>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX == 9.788) {
    // Outputs for IfAction SubSystem: '<S229>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S241>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge_c,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_nr);

    // End of Outputs for SubSystem: '<S229>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionX < 9.788) {
    // Outputs for IfAction SubSystem: '<S229>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S243>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge_c, fuzzy_logic_system_P.PL_a_f,
      fuzzy_logic_system_P.PL_b_d);

    // End of Outputs for SubSystem: '<S229>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S229>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S242>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionX,
      &fuzzy_logic_system_B.Merge_c, fuzzy_logic_system_P.PL_b_d,
      fuzzy_logic_system_P.PL_c_f);

    // End of Outputs for SubSystem: '<S229>/If Action Subsystem2'
  }

  // End of If: '<S229>/If'

  // MinMax: '<S208>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_c;
  if (!((fuzzy_logic_system_B.Merge_c <= fuzzy_logic_system_B.Merge_b) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_b))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_b;
  }

  // Product: '<S208>/Weighting' incorporates:
  //   Constant: '<S208>/Weight'
  //   MinMax: '<S208>/andorMethod'

  fuzzy_logic_system_B.Merge_b = fuzzy_logic_system_P.Weight_Value_i *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S209>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_c;
  if (!((fuzzy_logic_system_B.Merge_c <= fuzzy_logic_system_B.Merge_l) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_l;
  }

  // Product: '<S209>/Weighting' incorporates:
  //   Constant: '<S209>/Weight'
  //   MinMax: '<S209>/andorMethod'

  fuzzy_logic_system_B.Merge_l = fuzzy_logic_system_P.Weight_Value_cy *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S210>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_c;
  if (!((fuzzy_logic_system_B.Merge_c <= fuzzy_logic_system_B.Merge_m) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_m))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_m;
  }

  // Product: '<S210>/Weighting' incorporates:
  //   Constant: '<S210>/Weight'
  //   MinMax: '<S210>/andorMethod'

  fuzzy_logic_system_B.Merge_m = fuzzy_logic_system_P.Weight_Value_jl *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S211>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_c;
  if (!((fuzzy_logic_system_B.Merge_c <= fuzzy_logic_system_B.Merge_mn) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_mn))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_mn;
  }

  // Product: '<S211>/Weighting' incorporates:
  //   Constant: '<S211>/Weight'
  //   MinMax: '<S211>/andorMethod'

  fuzzy_logic_system_B.Merge_mn = fuzzy_logic_system_P.Weight_Value_bue *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S212>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_c;
  if (!((fuzzy_logic_system_B.Merge_c <= fuzzy_logic_system_B.Merge_i) ||
        rtIsNaN(fuzzy_logic_system_B.Merge_i))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge_i;
  }

  // Product: '<S212>/Weighting' incorporates:
  //   Constant: '<S212>/Weight'
  //   MinMax: '<S212>/andorMethod'

  fuzzy_logic_system_B.Merge_i = fuzzy_logic_system_P.Weight_Value_ic *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S208>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 101] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 202] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S208>/impMethod'

    // MinMax: '<S209>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 101] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PMS_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 202] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S209>/impMethod'

    // MinMax: '<S210>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PS'
    //   Constant: '<S194>/PMS'

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PMS_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_P.PMS_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 101] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PS_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PS_Value[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 202] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 202] =
        fuzzy_logic_system_P.PS_Value[i];
    }

    // End of MinMax: '<S210>/impMethod'

    // MinMax: '<S211>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PMS'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 101] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PMS_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 202] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 202] =
        fuzzy_logic_system_P.PMS_Value_o[i];
    }

    // End of MinMax: '<S211>/impMethod'

    // MinMax: '<S212>/impMethod' incorporates:
    //   Constant: '<S192>/PVL'
    //   Constant: '<S193>/PM'
    //   Constant: '<S194>/PVL'

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVL_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value[i])) {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_P.PVL_Value[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVL_Value_b[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_b[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 101] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 101] =
        fuzzy_logic_system_P.PVL_Value_b[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PM_Value[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 202] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 202] =
        fuzzy_logic_system_P.PM_Value[i];
    }

    // End of MinMax: '<S212>/impMethod'

    // MinMax: '<S187>/AggMethod1'
    if ((fuzzy_logic_system_B.impMethod[i] >= fuzzy_logic_system_B.impMethod_c[i])
        || rtIsNaN(fuzzy_logic_system_B.impMethod_c[i])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod[i];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_b[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_b[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >=
         fuzzy_logic_system_B.impMethod_fm[i]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_fm[i])) {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.impMethod_fm[i];
    }

    // End of MinMax: '<S187>/AggMethod1'
  }

  // Sum: '<S188>/Sum1'
  rtb_Sum1 = fuzzy_logic_system_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    rtb_Sum1 += fuzzy_logic_system_B.AggMethod1[i + 1];
  }

  // End of Sum: '<S188>/Sum1'

  // If: '<S188>/If'
  if (rtb_Sum1 <= 0.0) {
    // Outputs for IfAction SubSystem: '<S188>/Action: One' incorporates:
    //   ActionPort: '<S221>/Action Port'

    fuzzy_logic_system_ActionOne(&rtb_Sum1, (P_ActionOne_fuzzy_logic_syste_T *)
      &fuzzy_logic_system_P.ActionOne);

    // End of Outputs for SubSystem: '<S188>/Action: One'
  }

  // End of If: '<S188>/If'

  // MinMax: '<S187>/AggMethod2'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod[i + 101] >=
         fuzzy_logic_system_B.impMethod_c[i + 101]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_c[i + 101])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod[i + 101];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_b[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_b[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        101];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >=
         fuzzy_logic_system_B.impMethod_fm[i + 101]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_fm[i + 101])) {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.impMethod_fm[i +
        101];
    }
  }

  // End of MinMax: '<S187>/AggMethod2'

  // Sum: '<S189>/Sum1'
  fuzzy_logic_system_B.Merge_c = fuzzy_logic_system_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    fuzzy_logic_system_B.Merge_c += fuzzy_logic_system_B.AggMethod2[i + 1];
  }

  // End of Sum: '<S189>/Sum1'

  // If: '<S189>/If'
  if (fuzzy_logic_system_B.Merge_c <= 0.0) {
    // Outputs for IfAction SubSystem: '<S189>/Action: One' incorporates:
    //   ActionPort: '<S223>/Action Port'

    fuzzy_logic_system_ActionOne(&fuzzy_logic_system_B.Merge_c,
      (P_ActionOne_fuzzy_logic_syste_T *)&fuzzy_logic_system_P.ActionOne_n);

    // End of Outputs for SubSystem: '<S189>/Action: One'
  }

  // End of If: '<S189>/If'

  // MinMax: '<S187>/AggMethod3'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod[i + 202] >=
         fuzzy_logic_system_B.impMethod_c[i + 202]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_c[i + 202])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod[i + 202];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_b[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_b[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        202];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >=
         fuzzy_logic_system_B.impMethod_fm[i + 202]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_fm[i + 202])) {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.impMethod_fm[i +
        202];
    }
  }

  // End of MinMax: '<S187>/AggMethod3'

  // Sum: '<S190>/Sum1'
  rtb_Sum1_gk = fuzzy_logic_system_B.AggMethod3[0];
  for (i = 0; i < 100; i++) {
    rtb_Sum1_gk += fuzzy_logic_system_B.AggMethod3[i + 1];
  }

  // End of Sum: '<S190>/Sum1'

  // If: '<S190>/If'
  if (rtb_Sum1_gk <= 0.0) {
    // Outputs for IfAction SubSystem: '<S190>/Action: One' incorporates:
    //   ActionPort: '<S225>/Action Port'

    fuzzy_logic_system_ActionOne(&rtb_Sum1_gk, (P_ActionOne_fuzzy_logic_syste_T *)
      &fuzzy_logic_system_P.ActionOne_no);

    // End of Outputs for SubSystem: '<S190>/Action: One'
  }

  // End of If: '<S190>/If'

  // Switch: '<S187>/Switch' incorporates:
  //   Constant: '<S187>/MidRange'
  //   Constant: '<S187>/Zero'
  //   Product: '<S190>/Averaging (COA)'
  //   RelationalOperator: '<S187>/Zero Firing Strength?'
  //   Sum: '<S187>/Total Firing Strength'

  if ((real_T)((((((((((((((((((((((((fuzzy_logic_system_B.Weighting +
      fuzzy_logic_system_B.Weighting_g) + fuzzy_logic_system_B.Weighting_p) +
      fuzzy_logic_system_B.Weighting_a) + fuzzy_logic_system_B.Weighting_h) +
      fuzzy_logic_system_B.Weighting_i) + fuzzy_logic_system_B.Weighting_k) +
      fuzzy_logic_system_B.Weighting_d) + fuzzy_logic_system_B.Weighting_k1) +
      fuzzy_logic_system_B.Weighting_b) + fuzzy_logic_system_B.Weighting_c) +
      fuzzy_logic_system_B.Weighting_o) + fuzzy_logic_system_B.Weighting_ol) +
                          fuzzy_logic_system_B.Weighting_n) +
                         fuzzy_logic_system_B.Weighting_ik) +
                        fuzzy_logic_system_B.Weighting_hb) +
                       fuzzy_logic_system_B.Merge) +
                      fuzzy_logic_system_B.Weighting_hpq) +
                     fuzzy_logic_system_B.Weighting_hg) +
                    fuzzy_logic_system_B.Merge_m2) +
                   fuzzy_logic_system_B.Merge_b) + fuzzy_logic_system_B.Merge_l)
                 + fuzzy_logic_system_B.Merge_m) + fuzzy_logic_system_B.Merge_mn)
               + fuzzy_logic_system_B.Merge_i > fuzzy_logic_system_P.Zero_Value)
      >= fuzzy_logic_system_P.Switch_Threshold) {
    // Product: '<S188>/Product (COA)' incorporates:
    //   Constant: '<S188>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod1[i] *= fuzzy_logic_system_P.xdata_Value_g[i];
    }

    // End of Product: '<S188>/Product (COA)'

    // Sum: '<S188>/Sum'
    fuzzy_logic_system_B.Weighting = fuzzy_logic_system_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting += fuzzy_logic_system_B.AggMethod1[i + 1];
    }

    // End of Sum: '<S188>/Sum'

    // Product: '<S188>/Averaging (COA)'
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting /
      rtb_Sum1;

    // Product: '<S189>/Product (COA)' incorporates:
    //   Constant: '<S189>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod2[i] *= fuzzy_logic_system_P.xdata_Value_m[i];
    }

    // End of Product: '<S189>/Product (COA)'

    // Sum: '<S189>/Sum'
    fuzzy_logic_system_B.Weighting = fuzzy_logic_system_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting += fuzzy_logic_system_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S189>/Sum'

    // Product: '<S189>/Averaging (COA)'
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_B.Weighting /
      fuzzy_logic_system_B.Merge_c;

    // Product: '<S190>/Product (COA)' incorporates:
    //   Constant: '<S190>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod3[i] *= fuzzy_logic_system_P.xdata_Value_o[i];
    }

    // End of Product: '<S190>/Product (COA)'

    // Sum: '<S190>/Sum'
    fuzzy_logic_system_B.Weighting = fuzzy_logic_system_B.AggMethod3[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting += fuzzy_logic_system_B.AggMethod3[i + 1];
    }

    // End of Sum: '<S190>/Sum'
    fuzzy_logic_system_B.Merge_c = fuzzy_logic_system_B.AveragingCOA;
    rtb_Sum1 = fuzzy_logic_system_B.Merge;
    rtb_Switch_idx_2 = fuzzy_logic_system_B.Weighting / rtb_Sum1_gk;
  } else {
    fuzzy_logic_system_B.Merge_c = fuzzy_logic_system_P.MidRange_Value_k[0];
    rtb_Sum1 = fuzzy_logic_system_P.MidRange_Value_k[1];
    rtb_Switch_idx_2 = fuzzy_logic_system_P.MidRange_Value_k[2];
  }

  // End of Switch: '<S187>/Switch'

  // If: '<S47>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionY < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionY > -4.0)) {
    // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem' incorporates:
    //   ActionPort: '<S52>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_nr);

    // End of Outputs for SubSystem: '<S47>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY == -10.0) {
    // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S53>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_o);

    // End of Outputs for SubSystem: '<S47>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY < -10.0) {
    // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S55>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_a_d,
      fuzzy_logic_system_P.NL_b_j);

    // End of Outputs for SubSystem: '<S47>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S54>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_b_j,
      fuzzy_logic_system_P.NL_c_nx);

    // End of Outputs for SubSystem: '<S47>/If Action Subsystem2'
  }

  // End of If: '<S47>/If'

  // If: '<S72>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteY < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteY > -4.0)) {
    // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem' incorporates:
    //   ActionPort: '<S77>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_cb);

    // End of Outputs for SubSystem: '<S72>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY == -10.0) {
    // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S78>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_gv);

    // End of Outputs for SubSystem: '<S72>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY < -10.0) {
    // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S80>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_h, fuzzy_logic_system_P.NL_a_g,
      fuzzy_logic_system_P.NL_b_m);

    // End of Outputs for SubSystem: '<S72>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S79>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_h, fuzzy_logic_system_P.NL_b_m,
      fuzzy_logic_system_P.NL_c_m);

    // End of Outputs for SubSystem: '<S72>/If Action Subsystem2'
  }

  // End of If: '<S72>/If'

  // MinMax: '<S15>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S15>/Weighting' incorporates:
  //   Constant: '<S15>/Weight'
  //   MinMax: '<S15>/andorMethod'

  fuzzy_logic_system_B.Merge_i = fuzzy_logic_system_P.Weight_Value_fw *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S15>/impMethod' incorporates:
  //   Constant: '<S12>/PVS'
  //   Constant: '<S13>/PM'
  //   Constant: '<S14>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVL_Value_p[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVS_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 101] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 101] =
        fuzzy_logic_system_P.PVS_Value_n[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PM_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 202] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }
  }

  // End of MinMax: '<S15>/impMethod'

  // If: '<S73>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteY < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteY > 4.0)) {
    // Outputs for IfAction SubSystem: '<S73>/If Action Subsystem' incorporates:
    //   ActionPort: '<S81>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_a,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_m);

    // End of Outputs for SubSystem: '<S73>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY == -5.0) {
    // Outputs for IfAction SubSystem: '<S73>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S82>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_a,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_i);

    // End of Outputs for SubSystem: '<S73>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY < -5.0) {
    // Outputs for IfAction SubSystem: '<S73>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S84>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_a, fuzzy_logic_system_P.NS_a_pb,
      fuzzy_logic_system_P.NS_b_j);

    // End of Outputs for SubSystem: '<S73>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S73>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S83>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_a, fuzzy_logic_system_P.NS_b_j,
      fuzzy_logic_system_P.NS_c_l);

    // End of Outputs for SubSystem: '<S73>/If Action Subsystem2'
  }

  // End of If: '<S73>/If'

  // MinMax: '<S26>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_a) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_a))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_a;
  }

  // Product: '<S26>/Weighting' incorporates:
  //   Constant: '<S26>/Weight'
  //   MinMax: '<S26>/andorMethod'

  fuzzy_logic_system_B.Merge_mn = fuzzy_logic_system_P.Weight_Value_e *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S26>/impMethod' incorporates:
  //   Constant: '<S12>/PMS'
  //   Constant: '<S13>/PMS'
  //   Constant: '<S14>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PML_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PMS_Value_j[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 101] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 101] =
        fuzzy_logic_system_P.PMS_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PMS_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 202] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }
  }

  // End of MinMax: '<S26>/impMethod'

  // If: '<S76>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteY < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteY > 4.0)) {
    // Outputs for IfAction SubSystem: '<S76>/If Action Subsystem' incorporates:
    //   ActionPort: '<S93>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_p,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_a);

    // End of Outputs for SubSystem: '<S76>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY == 0.0) {
    // Outputs for IfAction SubSystem: '<S76>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S94>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_p,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_f);

    // End of Outputs for SubSystem: '<S76>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY < 0.0) {
    // Outputs for IfAction SubSystem: '<S76>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S96>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_p, fuzzy_logic_system_P.ZE_a_p,
      fuzzy_logic_system_P.ZE_b_d);

    // End of Outputs for SubSystem: '<S76>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S76>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S95>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_p, fuzzy_logic_system_P.ZE_b_d,
      fuzzy_logic_system_P.ZE_c_k);

    // End of Outputs for SubSystem: '<S76>/If Action Subsystem2'
  }

  // End of If: '<S76>/If'

  // MinMax: '<S33>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_p) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_p))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_p;
  }

  // Product: '<S33>/Weighting' incorporates:
  //   Constant: '<S33>/Weight'
  //   MinMax: '<S33>/andorMethod'

  fuzzy_logic_system_B.Merge_m = fuzzy_logic_system_P.Weight_Value_ec *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S33>/impMethod' incorporates:
  //   Constant: '<S12>/PM'
  //   Constant: '<S13>/PS'
  //   Constant: '<S14>/PVS'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PVS_Value_h[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVS_Value_h[i])) {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_P.PVS_Value_h[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PM_Value_iq[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_iq[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 101] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 101] =
        fuzzy_logic_system_P.PM_Value_iq[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PS_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 202] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 202] =
        fuzzy_logic_system_P.PS_Value_g[i];
    }
  }

  // End of MinMax: '<S33>/impMethod'

  // If: '<S75>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteY < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteY > 7.0)) {
    // Outputs for IfAction SubSystem: '<S75>/If Action Subsystem' incorporates:
    //   ActionPort: '<S89>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_g,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_jq);

    // End of Outputs for SubSystem: '<S75>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY == 5.0) {
    // Outputs for IfAction SubSystem: '<S75>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S90>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_g,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_jg);

    // End of Outputs for SubSystem: '<S75>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY < 5.0) {
    // Outputs for IfAction SubSystem: '<S75>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S92>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_g, fuzzy_logic_system_P.PS_a_d,
      fuzzy_logic_system_P.PS_b_k);

    // End of Outputs for SubSystem: '<S75>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S75>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S91>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &fuzzy_logic_system_B.Weighting_g, fuzzy_logic_system_P.PS_b_k,
      fuzzy_logic_system_P.PS_c_n);

    // End of Outputs for SubSystem: '<S75>/If Action Subsystem2'
  }

  // End of If: '<S75>/If'

  // MinMax: '<S34>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S34>/Weighting' incorporates:
  //   Constant: '<S34>/Weight'
  //   MinMax: '<S34>/andorMethod'

  fuzzy_logic_system_B.Merge_l = fuzzy_logic_system_P.Weight_Value_cz *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S34>/impMethod' incorporates:
  //   Constant: '<S12>/PML'
  //   Constant: '<S13>/PMS'
  //   Constant: '<S14>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PML_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PML_Value_d[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 101] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 101] =
        fuzzy_logic_system_P.PML_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PMS_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 202] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }
  }

  // End of MinMax: '<S34>/impMethod'

  // If: '<S74>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteY < 4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteY > 10.0)) {
    // Outputs for IfAction SubSystem: '<S74>/If Action Subsystem' incorporates:
    //   ActionPort: '<S85>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_gk,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_fl);

    // End of Outputs for SubSystem: '<S74>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY == 10.0) {
    // Outputs for IfAction SubSystem: '<S74>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S86>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_gk,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_ln);

    // End of Outputs for SubSystem: '<S74>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteY < 10.0) {
    // Outputs for IfAction SubSystem: '<S74>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S88>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &rtb_Sum1_gk, fuzzy_logic_system_P.PL_a_m, fuzzy_logic_system_P.PL_b_n);

    // End of Outputs for SubSystem: '<S74>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S74>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S87>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteY,
      &rtb_Sum1_gk, fuzzy_logic_system_P.PL_b_n, fuzzy_logic_system_P.PL_c_p);

    // End of Outputs for SubSystem: '<S74>/If Action Subsystem2'
  }

  // End of If: '<S74>/If'

  // MinMax: '<S35>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= rtb_Sum1_gk) || rtIsNaN(rtb_Sum1_gk))) {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  }

  // Product: '<S35>/Weighting' incorporates:
  //   Constant: '<S35>/Weight'
  //   MinMax: '<S35>/andorMethod'

  fuzzy_logic_system_B.Merge_b = fuzzy_logic_system_P.Weight_Value_k2 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S35>/impMethod' incorporates:
  //   Constant: '<S12>/PVL'
  //   Constant: '<S13>/PM'
  //   Constant: '<S14>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value_p[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value_f[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 101] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PM_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 202] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }
  }

  // End of MinMax: '<S35>/impMethod'

  // If: '<S48>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionY < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionY > 4.0)) {
    // Outputs for IfAction SubSystem: '<S48>/If Action Subsystem' incorporates:
    //   ActionPort: '<S56>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_mj);

    // End of Outputs for SubSystem: '<S48>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY == -5.0) {
    // Outputs for IfAction SubSystem: '<S48>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S57>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_fx);

    // End of Outputs for SubSystem: '<S48>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY < -5.0) {
    // Outputs for IfAction SubSystem: '<S48>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S59>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_o, fuzzy_logic_system_P.NS_a_f,
      fuzzy_logic_system_P.NS_b_a);

    // End of Outputs for SubSystem: '<S48>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S48>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S58>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_o, fuzzy_logic_system_P.NS_b_a,
      fuzzy_logic_system_P.NS_c_d);

    // End of Outputs for SubSystem: '<S48>/If Action Subsystem2'
  }

  // End of If: '<S48>/If'

  // MinMax: '<S36>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S36>/Weighting' incorporates:
  //   Constant: '<S36>/Weight'
  //   MinMax: '<S36>/andorMethod'

  fuzzy_logic_system_B.Merge_m2 = fuzzy_logic_system_P.Weight_Value_d2 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S37>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_a) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_a))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_a;
  }

  // Product: '<S37>/Weighting' incorporates:
  //   Constant: '<S37>/Weight'
  //   MinMax: '<S37>/andorMethod'

  fuzzy_logic_system_B.Weighting_hg = fuzzy_logic_system_P.Weight_Value_i5 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S38>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_p) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_p))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_p;
  }

  // Product: '<S38>/Weighting' incorporates:
  //   Constant: '<S38>/Weight'
  //   MinMax: '<S38>/andorMethod'

  fuzzy_logic_system_B.Weighting_hpq = fuzzy_logic_system_P.Weight_Value_bi *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S39>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S39>/Weighting' incorporates:
  //   Constant: '<S39>/Weight'
  //   MinMax: '<S39>/andorMethod'

  fuzzy_logic_system_B.Merge = fuzzy_logic_system_P.Weight_Value_kd *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S16>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= rtb_Sum1_gk) || rtIsNaN(rtb_Sum1_gk)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  }

  // Product: '<S16>/Weighting' incorporates:
  //   Constant: '<S16>/Weight'
  //   MinMax: '<S16>/andorMethod'

  fuzzy_logic_system_B.Weighting_hb = fuzzy_logic_system_P.Weight_Value_ks *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S36>/impMethod' incorporates:
    //   Constant: '<S12>/PML'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PVL_Value_p[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PML_Value_d[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 101] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 101] =
        fuzzy_logic_system_P.PML_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PM_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 202] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S36>/impMethod'

    // MinMax: '<S37>/impMethod' incorporates:
    //   Constant: '<S12>/PML'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PML'

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PML_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PML_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_P.PML_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S37>/impMethod'

    // MinMax: '<S38>/impMethod' incorporates:
    //   Constant: '<S12>/PL'
    //   Constant: '<S13>/PS'
    //   Constant: '<S14>/PVS'

    if ((fuzzy_logic_system_B.Weighting_hpq <=
         fuzzy_logic_system_P.PVS_Value_h[i]) || rtIsNaN
        (fuzzy_logic_system_P.PVS_Value_h[i])) {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_P.PVS_Value_h[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <= fuzzy_logic_system_P.PL_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_P.PL_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <= fuzzy_logic_system_P.PS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_P.PS_Value_g[i];
    }

    // End of MinMax: '<S38>/impMethod'

    // MinMax: '<S39>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PML'

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PML_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PVL_Value_f[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 101] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PMS_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 202] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S39>/impMethod'

    // MinMax: '<S16>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S16>/impMethod'
  }

  // If: '<S51>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionY < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionY > 4.0)) {
    // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
    //   ActionPort: '<S68>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_k,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_jj);

    // End of Outputs for SubSystem: '<S51>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY == 0.0) {
    // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S69>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_k,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_i5);

    // End of Outputs for SubSystem: '<S51>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY < 0.0) {
    // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S71>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_k, fuzzy_logic_system_P.ZE_a_e,
      fuzzy_logic_system_P.ZE_b_h);

    // End of Outputs for SubSystem: '<S51>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S70>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_k, fuzzy_logic_system_P.ZE_b_h,
      fuzzy_logic_system_P.ZE_c_a);

    // End of Outputs for SubSystem: '<S51>/If Action Subsystem2'
  }

  // End of If: '<S51>/If'

  // MinMax: '<S17>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S17>/Weighting' incorporates:
  //   Constant: '<S17>/Weight'
  //   MinMax: '<S17>/andorMethod'

  fuzzy_logic_system_B.Weighting_ik = fuzzy_logic_system_P.Weight_Value_jp *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S18>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_a) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_a))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_a;
  }

  // Product: '<S18>/Weighting' incorporates:
  //   Constant: '<S18>/Weight'
  //   MinMax: '<S18>/andorMethod'

  fuzzy_logic_system_B.Weighting_n = fuzzy_logic_system_P.Weight_Value_aw *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S19>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_p) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_p))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_p;
  }

  // Product: '<S19>/Weighting' incorporates:
  //   Constant: '<S19>/Weight'
  //   MinMax: '<S19>/andorMethod'

  fuzzy_logic_system_B.Weighting_ol = fuzzy_logic_system_P.Weight_Value_eg *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S20>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S20>/Weighting' incorporates:
  //   Constant: '<S20>/Weight'
  //   MinMax: '<S20>/andorMethod'

  fuzzy_logic_system_B.Weighting_o = fuzzy_logic_system_P.Weight_Value_h *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S21>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= rtb_Sum1_gk) || rtIsNaN(rtb_Sum1_gk)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  }

  // Product: '<S21>/Weighting' incorporates:
  //   Constant: '<S21>/Weight'
  //   MinMax: '<S21>/andorMethod'

  fuzzy_logic_system_B.Weighting_c = fuzzy_logic_system_P.Weight_Value_hq *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S17>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S17>/impMethod'

    // MinMax: '<S18>/impMethod' incorporates:
    //   Constant: '<S12>/PL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PML'

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PML_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PL_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_P.PL_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S18>/impMethod'

    // MinMax: '<S19>/impMethod' incorporates:
    //   Constant: '<S12>/PL'
    //   Constant: '<S13>/PVS'
    //   Constant: '<S14>/PS'

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PS_Value_c[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_c[i])) {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_P.PS_Value_c[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PL_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_P.PL_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PVS_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PVS_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_P.PVS_Value_m[i];
    }

    // End of MinMax: '<S19>/impMethod'

    // MinMax: '<S20>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PML'

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PML_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_P.PML_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S20>/impMethod'

    // MinMax: '<S21>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S21>/impMethod'
  }

  // If: '<S50>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionY < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionY > 7.0)) {
    // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
    //   ActionPort: '<S64>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_kn);

    // End of Outputs for SubSystem: '<S50>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY == 5.0) {
    // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S65>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_p);

    // End of Outputs for SubSystem: '<S50>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY < 5.0) {
    // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S67>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_i, fuzzy_logic_system_P.PS_a_c,
      fuzzy_logic_system_P.PS_b_e);

    // End of Outputs for SubSystem: '<S50>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S66>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting_i, fuzzy_logic_system_P.PS_b_e,
      fuzzy_logic_system_P.PS_c_nq);

    // End of Outputs for SubSystem: '<S50>/If Action Subsystem2'
  }

  // End of If: '<S50>/If'

  // MinMax: '<S22>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S22>/Weighting' incorporates:
  //   Constant: '<S22>/Weight'
  //   MinMax: '<S22>/andorMethod'

  fuzzy_logic_system_B.Weighting_b = fuzzy_logic_system_P.Weight_Value_kq *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S23>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_a) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_a))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_a;
  }

  // Product: '<S23>/Weighting' incorporates:
  //   Constant: '<S23>/Weight'
  //   MinMax: '<S23>/andorMethod'

  fuzzy_logic_system_B.Weighting_k1 = fuzzy_logic_system_P.Weight_Value_ay *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S24>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_p) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_p))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_p;
  }

  // Product: '<S24>/Weighting' incorporates:
  //   Constant: '<S24>/Weight'
  //   MinMax: '<S24>/andorMethod'

  fuzzy_logic_system_B.Weighting_d = fuzzy_logic_system_P.Weight_Value_l *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S25>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S25>/Weighting' incorporates:
  //   Constant: '<S25>/Weight'
  //   MinMax: '<S25>/andorMethod'

  fuzzy_logic_system_B.Weighting_k = fuzzy_logic_system_P.Weight_Value_cye *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S27>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= rtb_Sum1_gk) || rtIsNaN(rtb_Sum1_gk)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  }

  // Product: '<S27>/Weighting' incorporates:
  //   Constant: '<S27>/Weight'
  //   MinMax: '<S27>/andorMethod'

  fuzzy_logic_system_B.Weighting_i = fuzzy_logic_system_P.Weight_Value_lm *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S22>/impMethod' incorporates:
    //   Constant: '<S12>/PL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PL_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_P.PL_Value_d[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S22>/impMethod'

    // MinMax: '<S23>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PL'

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PL_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_P.PL_Value_n[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S23>/impMethod'

    // MinMax: '<S24>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PS'
    //   Constant: '<S14>/PMS'

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PMS_Value_gw[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_gw[i])) {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_P.PMS_Value_gw[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_P.PS_Value_g[i];
    }

    // End of MinMax: '<S24>/impMethod'

    // MinMax: '<S25>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PL'

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PL_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_P.PL_Value_n[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S25>/impMethod'

    // MinMax: '<S27>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S27>/impMethod'
  }

  // If: '<S49>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionY < 3.788) ||
      (fuzzy_logic_system_B.In1.ErrorPositionY > 9.788)) {
    // Outputs for IfAction SubSystem: '<S49>/If Action Subsystem' incorporates:
    //   ActionPort: '<S60>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_cr);

    // End of Outputs for SubSystem: '<S49>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY == 9.788) {
    // Outputs for IfAction SubSystem: '<S49>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S61>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_i5p);

    // End of Outputs for SubSystem: '<S49>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionY < 9.788) {
    // Outputs for IfAction SubSystem: '<S49>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S63>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting, fuzzy_logic_system_P.PL_a_g,
      fuzzy_logic_system_P.PL_b_p);

    // End of Outputs for SubSystem: '<S49>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S49>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S62>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionY,
      &fuzzy_logic_system_B.Weighting, fuzzy_logic_system_P.PL_b_p,
      fuzzy_logic_system_P.PL_c_e);

    // End of Outputs for SubSystem: '<S49>/If Action Subsystem2'
  }

  // End of If: '<S49>/If'

  // MinMax: '<S28>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting;
  if (!((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S28>/Weighting' incorporates:
  //   Constant: '<S28>/Weight'
  //   MinMax: '<S28>/andorMethod'

  fuzzy_logic_system_B.Weighting_h = fuzzy_logic_system_P.Weight_Value_ecm *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S29>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting;
  if (!((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_B.Weighting_a) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_a))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_a;
  }

  // Product: '<S29>/Weighting' incorporates:
  //   Constant: '<S29>/Weight'
  //   MinMax: '<S29>/andorMethod'

  fuzzy_logic_system_B.Weighting_a = fuzzy_logic_system_P.Weight_Value_iu *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S30>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting;
  if (!((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_B.Weighting_p) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_p))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_p;
  }

  // Product: '<S30>/Weighting' incorporates:
  //   Constant: '<S30>/Weight'
  //   MinMax: '<S30>/andorMethod'

  fuzzy_logic_system_B.Weighting_p = fuzzy_logic_system_P.Weight_Value_al *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S31>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting;
  if (!((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S31>/Weighting' incorporates:
  //   Constant: '<S31>/Weight'
  //   MinMax: '<S31>/andorMethod'

  fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_P.Weight_Value_fm *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S32>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting;
  if (!((fuzzy_logic_system_B.Weighting <= rtb_Sum1_gk) || rtIsNaN(rtb_Sum1_gk)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  }

  // Product: '<S32>/Weighting' incorporates:
  //   Constant: '<S32>/Weight'
  //   MinMax: '<S32>/andorMethod'

  fuzzy_logic_system_B.Weighting = fuzzy_logic_system_P.Weight_Value_aj *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S28>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PM_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S28>/impMethod'

    // MinMax: '<S29>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S29>/impMethod'

    // MinMax: '<S30>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PS'
    //   Constant: '<S14>/PMS'

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PMS_Value_gw[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_gw[i])) {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_P.PMS_Value_gw[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_P.PS_Value_g[i];
    }

    // End of MinMax: '<S30>/impMethod'

    // MinMax: '<S31>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PMS'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PVL_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PVL_Value_f[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PMS_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_P.PMS_Value_g[i];
    }

    // End of MinMax: '<S31>/impMethod'

    // MinMax: '<S32>/impMethod' incorporates:
    //   Constant: '<S12>/PVL'
    //   Constant: '<S13>/PM'
    //   Constant: '<S14>/PVL'

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVL_Value_p[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_p[i])) {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_P.PVL_Value_p[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVL_Value_f[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_f[i])) {
      fuzzy_logic_system_B.impMethod[i + 101] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 101] =
        fuzzy_logic_system_P.PVL_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PM_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_n[i])) {
      fuzzy_logic_system_B.impMethod[i + 202] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 202] =
        fuzzy_logic_system_P.PM_Value_n[i];
    }

    // End of MinMax: '<S32>/impMethod'

    // MinMax: '<S7>/AggMethod1'
    if ((fuzzy_logic_system_B.impMethod_fm[i] >=
         fuzzy_logic_system_B.impMethod_b[i]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i])
        || rtIsNaN(fuzzy_logic_system_B.impMethod[i])) {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.impMethod[i];
    }

    // End of MinMax: '<S7>/AggMethod1'
  }

  // Sum: '<S8>/Sum1'
  rtb_Sum1_o = fuzzy_logic_system_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    rtb_Sum1_o += fuzzy_logic_system_B.AggMethod1[i + 1];
  }

  // End of Sum: '<S8>/Sum1'

  // If: '<S8>/If'
  if (rtb_Sum1_o <= 0.0) {
    // Outputs for IfAction SubSystem: '<S8>/Action: One' incorporates:
    //   ActionPort: '<S41>/Action Port'

    fuzzy_logic_system_ActionOne(&rtb_Sum1_o, (P_ActionOne_fuzzy_logic_syste_T *)
      &fuzzy_logic_system_P.ActionOne_h);

    // End of Outputs for SubSystem: '<S8>/Action: One'
  }

  // End of If: '<S8>/If'

  // MinMax: '<S7>/AggMethod2'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod_fm[i + 101] >=
         fuzzy_logic_system_B.impMethod_b[i + 101]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i + 101])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i +
        101];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        101];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i +
         101]) || rtIsNaN(fuzzy_logic_system_B.impMethod[i + 101])) {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.impMethod[i +
        101];
    }
  }

  // End of MinMax: '<S7>/AggMethod2'

  // Sum: '<S9>/Sum1'
  fuzzy_logic_system_B.Sum1_l = fuzzy_logic_system_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    fuzzy_logic_system_B.Sum1_l += fuzzy_logic_system_B.AggMethod2[i + 1];
  }

  // End of Sum: '<S9>/Sum1'

  // If: '<S9>/If'
  if (fuzzy_logic_system_B.Sum1_l <= 0.0) {
    // Outputs for IfAction SubSystem: '<S9>/Action: One' incorporates:
    //   ActionPort: '<S43>/Action Port'

    fuzzy_logic_system_ActionOne(&fuzzy_logic_system_B.Sum1_l,
      (P_ActionOne_fuzzy_logic_syste_T *)&fuzzy_logic_system_P.ActionOne_j);

    // End of Outputs for SubSystem: '<S9>/Action: One'
  }

  // End of If: '<S9>/If'

  // MinMax: '<S7>/AggMethod3'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod_fm[i + 202] >=
         fuzzy_logic_system_B.impMethod_b[i + 202]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i + 202])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i +
        202];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        202];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i +
         202]) || rtIsNaN(fuzzy_logic_system_B.impMethod[i + 202])) {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.impMethod[i +
        202];
    }
  }

  // End of MinMax: '<S7>/AggMethod3'

  // Sum: '<S10>/Sum1'
  fuzzy_logic_system_B.Sum1_h = fuzzy_logic_system_B.AggMethod3[0];
  for (i = 0; i < 100; i++) {
    fuzzy_logic_system_B.Sum1_h += fuzzy_logic_system_B.AggMethod3[i + 1];
  }

  // End of Sum: '<S10>/Sum1'

  // If: '<S10>/If'
  if (fuzzy_logic_system_B.Sum1_h <= 0.0) {
    // Outputs for IfAction SubSystem: '<S10>/Action: One' incorporates:
    //   ActionPort: '<S45>/Action Port'

    fuzzy_logic_system_ActionOne(&fuzzy_logic_system_B.Sum1_h,
      (P_ActionOne_fuzzy_logic_syste_T *)&fuzzy_logic_system_P.ActionOne_p);

    // End of Outputs for SubSystem: '<S10>/Action: One'
  }

  // End of If: '<S10>/If'

  // Switch: '<S7>/Switch' incorporates:
  //   Constant: '<S7>/MidRange'
  //   Constant: '<S7>/Zero'
  //   Product: '<S10>/Averaging (COA)'
  //   RelationalOperator: '<S7>/Zero Firing Strength?'
  //   Sum: '<S7>/Total Firing Strength'

  if ((real_T)((((((((((((((((((((((((fuzzy_logic_system_B.Merge_i +
      fuzzy_logic_system_B.Merge_mn) + fuzzy_logic_system_B.Merge_m) +
      fuzzy_logic_system_B.Merge_l) + fuzzy_logic_system_B.Merge_b) +
      fuzzy_logic_system_B.Merge_m2) + fuzzy_logic_system_B.Weighting_hg) +
      fuzzy_logic_system_B.Weighting_hpq) + fuzzy_logic_system_B.Merge) +
      fuzzy_logic_system_B.Weighting_hb) + fuzzy_logic_system_B.Weighting_ik) +
      fuzzy_logic_system_B.Weighting_n) + fuzzy_logic_system_B.Weighting_ol) +
                          fuzzy_logic_system_B.Weighting_o) +
                         fuzzy_logic_system_B.Weighting_c) +
                        fuzzy_logic_system_B.Weighting_b) +
                       fuzzy_logic_system_B.Weighting_k1) +
                      fuzzy_logic_system_B.Weighting_d) +
                     fuzzy_logic_system_B.Weighting_k) +
                    fuzzy_logic_system_B.Weighting_i) +
                   fuzzy_logic_system_B.Weighting_h) +
                  fuzzy_logic_system_B.Weighting_a) +
                 fuzzy_logic_system_B.Weighting_p) +
                fuzzy_logic_system_B.Weighting_g) +
               fuzzy_logic_system_B.Weighting >
               fuzzy_logic_system_P.Zero_Value_e) >=
      fuzzy_logic_system_P.Switch_Threshold_l) {
    // Product: '<S8>/Product (COA)' incorporates:
    //   Constant: '<S8>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod1[i] *= fuzzy_logic_system_P.xdata_Value[i];
    }

    // End of Product: '<S8>/Product (COA)'

    // Sum: '<S8>/Sum'
    fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting_g += fuzzy_logic_system_B.AggMethod1[i + 1];
    }

    // End of Sum: '<S8>/Sum'

    // Product: '<S8>/Averaging (COA)'
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g /
      rtb_Sum1_o;

    // Product: '<S9>/Product (COA)' incorporates:
    //   Constant: '<S9>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod2[i] *= fuzzy_logic_system_P.xdata_Value_c[i];
    }

    // End of Product: '<S9>/Product (COA)'

    // Sum: '<S9>/Sum'
    fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting_g += fuzzy_logic_system_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S9>/Sum'

    // Product: '<S9>/Averaging (COA)'
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_B.Weighting_g /
      fuzzy_logic_system_B.Sum1_l;

    // Product: '<S10>/Product (COA)' incorporates:
    //   Constant: '<S10>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod3[i] *= fuzzy_logic_system_P.xdata_Value_e[i];
    }

    // End of Product: '<S10>/Product (COA)'

    // Sum: '<S10>/Sum'
    fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_B.AggMethod3[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Weighting_g += fuzzy_logic_system_B.AggMethod3[i + 1];
    }

    // End of Sum: '<S10>/Sum'
    rtb_Switch_a_idx_0 = fuzzy_logic_system_B.AveragingCOA;
    rtb_Switch_a_idx_1 = fuzzy_logic_system_B.Merge;
    rtb_Switch_a_idx_2 = fuzzy_logic_system_B.Weighting_g /
      fuzzy_logic_system_B.Sum1_h;
  } else {
    rtb_Switch_a_idx_0 = fuzzy_logic_system_P.MidRange_Value[0];
    rtb_Switch_a_idx_1 = fuzzy_logic_system_P.MidRange_Value[1];
    rtb_Switch_a_idx_2 = fuzzy_logic_system_P.MidRange_Value[2];
  }

  // End of Switch: '<S7>/Switch'

  // If: '<S137>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionZ < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionZ > -4.0)) {
    // Outputs for IfAction SubSystem: '<S137>/If Action Subsystem' incorporates:
    //   ActionPort: '<S142>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_ks);

    // End of Outputs for SubSystem: '<S137>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ == -10.0) {
    // Outputs for IfAction SubSystem: '<S137>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S143>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Merge,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_jt);

    // End of Outputs for SubSystem: '<S137>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ < -10.0) {
    // Outputs for IfAction SubSystem: '<S137>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S145>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_a_j,
      fuzzy_logic_system_P.NL_b_c);

    // End of Outputs for SubSystem: '<S137>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S137>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S144>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Merge, fuzzy_logic_system_P.NL_b_c,
      fuzzy_logic_system_P.NL_c_p);

    // End of Outputs for SubSystem: '<S137>/If Action Subsystem2'
  }

  // End of If: '<S137>/If'

  // If: '<S162>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteZ < -10.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteZ > -4.0)) {
    // Outputs for IfAction SubSystem: '<S162>/If Action Subsystem' incorporates:
    //   ActionPort: '<S167>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_d);

    // End of Outputs for SubSystem: '<S162>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ == -10.0) {
    // Outputs for IfAction SubSystem: '<S162>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S168>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_fp);

    // End of Outputs for SubSystem: '<S162>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ < -10.0) {
    // Outputs for IfAction SubSystem: '<S162>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S170>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Weighting_h, fuzzy_logic_system_P.NL_a_e,
      fuzzy_logic_system_P.NL_b_jw);

    // End of Outputs for SubSystem: '<S162>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S162>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S169>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Weighting_h, fuzzy_logic_system_P.NL_b_jw,
      fuzzy_logic_system_P.NL_c_pi);

    // End of Outputs for SubSystem: '<S162>/If Action Subsystem2'
  }

  // End of If: '<S162>/If'

  // MinMax: '<S105>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S105>/Weighting' incorporates:
  //   Constant: '<S105>/Weight'
  //   MinMax: '<S105>/andorMethod'

  fuzzy_logic_system_B.Merge_i = fuzzy_logic_system_P.Weight_Value_n *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S105>/impMethod' incorporates:
  //   Constant: '<S102>/PVS'
  //   Constant: '<S103>/PM'
  //   Constant: '<S104>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVL_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PVS_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVS_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 101] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 101] =
        fuzzy_logic_system_P.PVS_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_i <= fuzzy_logic_system_P.PM_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_fm[i + 202] = fuzzy_logic_system_B.Merge_i;
    } else {
      fuzzy_logic_system_B.impMethod_fm[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }
  }

  // End of MinMax: '<S105>/impMethod'

  // If: '<S163>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteZ < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteZ > 4.0)) {
    // Outputs for IfAction SubSystem: '<S163>/If Action Subsystem' incorporates:
    //   ActionPort: '<S171>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_e);

    // End of Outputs for SubSystem: '<S163>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ == -5.0) {
    // Outputs for IfAction SubSystem: '<S163>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S172>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_c);

    // End of Outputs for SubSystem: '<S163>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ < -5.0) {
    // Outputs for IfAction SubSystem: '<S163>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S174>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &rtb_Sum1_o, fuzzy_logic_system_P.NS_a_j, fuzzy_logic_system_P.NS_b_o);

    // End of Outputs for SubSystem: '<S163>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S163>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S173>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &rtb_Sum1_o, fuzzy_logic_system_P.NS_b_o, fuzzy_logic_system_P.NS_c_m);

    // End of Outputs for SubSystem: '<S163>/If Action Subsystem2'
  }

  // End of If: '<S163>/If'

  // MinMax: '<S116>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= rtb_Sum1_o) || rtIsNaN(rtb_Sum1_o))) {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_o;
  }

  // Product: '<S116>/Weighting' incorporates:
  //   Constant: '<S116>/Weight'
  //   MinMax: '<S116>/andorMethod'

  fuzzy_logic_system_B.Merge_mn = fuzzy_logic_system_P.Weight_Value_k1 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S116>/impMethod' incorporates:
  //   Constant: '<S102>/PMS'
  //   Constant: '<S103>/PMS'
  //   Constant: '<S104>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PML_Value_i[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PMS_Value_c[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_c[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 101] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 101] =
        fuzzy_logic_system_P.PMS_Value_c[i];
    }

    if ((fuzzy_logic_system_B.Merge_mn <= fuzzy_logic_system_P.PMS_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_b[i + 202] = fuzzy_logic_system_B.Merge_mn;
    } else {
      fuzzy_logic_system_B.impMethod_b[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }
  }

  // End of MinMax: '<S116>/impMethod'

  // If: '<S166>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteZ < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteZ > 4.0)) {
    // Outputs for IfAction SubSystem: '<S166>/If Action Subsystem' incorporates:
    //   ActionPort: '<S183>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Sum1_l,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_is);

    // End of Outputs for SubSystem: '<S166>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ == 0.0) {
    // Outputs for IfAction SubSystem: '<S166>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S184>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Sum1_l,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_k);

    // End of Outputs for SubSystem: '<S166>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ < 0.0) {
    // Outputs for IfAction SubSystem: '<S166>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S186>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Sum1_l, fuzzy_logic_system_P.ZE_a_i,
      fuzzy_logic_system_P.ZE_b_p);

    // End of Outputs for SubSystem: '<S166>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S166>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S185>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Sum1_l, fuzzy_logic_system_P.ZE_b_p,
      fuzzy_logic_system_P.ZE_c_i);

    // End of Outputs for SubSystem: '<S166>/If Action Subsystem2'
  }

  // End of If: '<S166>/If'

  // MinMax: '<S123>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Sum1_l) || rtIsNaN
        (fuzzy_logic_system_B.Sum1_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_l;
  }

  // Product: '<S123>/Weighting' incorporates:
  //   Constant: '<S123>/Weight'
  //   MinMax: '<S123>/andorMethod'

  fuzzy_logic_system_B.Merge_m = fuzzy_logic_system_P.Weight_Value_ka *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S123>/impMethod' incorporates:
  //   Constant: '<S102>/PM'
  //   Constant: '<S103>/PS'
  //   Constant: '<S104>/PVS'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PVS_Value_g1[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVS_Value_g1[i])) {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i] = fuzzy_logic_system_P.PVS_Value_g1[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PM_Value_f[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_f[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 101] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 101] =
        fuzzy_logic_system_P.PM_Value_f[i];
    }

    if ((fuzzy_logic_system_B.Merge_m <= fuzzy_logic_system_P.PS_Value_d[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PS_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_o[i + 202] = fuzzy_logic_system_B.Merge_m;
    } else {
      fuzzy_logic_system_B.impMethod_o[i + 202] =
        fuzzy_logic_system_P.PS_Value_d[i];
    }
  }

  // End of MinMax: '<S123>/impMethod'

  // If: '<S165>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteZ < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteZ > 7.0)) {
    // Outputs for IfAction SubSystem: '<S165>/If Action Subsystem' incorporates:
    //   ActionPort: '<S179>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_g,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_i1);

    // End of Outputs for SubSystem: '<S165>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ == 5.0) {
    // Outputs for IfAction SubSystem: '<S165>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S180>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_g,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_kb);

    // End of Outputs for SubSystem: '<S165>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ < 5.0) {
    // Outputs for IfAction SubSystem: '<S165>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S182>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Weighting_g, fuzzy_logic_system_P.PS_a_g,
      fuzzy_logic_system_P.PS_b_j);

    // End of Outputs for SubSystem: '<S165>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S165>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S181>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Weighting_g, fuzzy_logic_system_P.PS_b_j,
      fuzzy_logic_system_P.PS_c_c);

    // End of Outputs for SubSystem: '<S165>/If Action Subsystem2'
  }

  // End of If: '<S165>/If'

  // MinMax: '<S124>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S124>/Weighting' incorporates:
  //   Constant: '<S124>/Weight'
  //   MinMax: '<S124>/andorMethod'

  fuzzy_logic_system_B.Merge_l = fuzzy_logic_system_P.Weight_Value_ft *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S124>/impMethod' incorporates:
  //   Constant: '<S102>/PML'
  //   Constant: '<S103>/PMS'
  //   Constant: '<S104>/PML'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PML_Value_i[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PML_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 101] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 101] =
        fuzzy_logic_system_P.PML_Value_o[i];
    }

    if ((fuzzy_logic_system_B.Merge_l <= fuzzy_logic_system_P.PMS_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_ch[i + 202] = fuzzy_logic_system_B.Merge_l;
    } else {
      fuzzy_logic_system_B.impMethod_ch[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }
  }

  // End of MinMax: '<S124>/impMethod'

  // If: '<S164>/If'
  if ((fuzzy_logic_system_B.In1.ErrorVelociteZ < 4.0) ||
      (fuzzy_logic_system_B.In1.ErrorVelociteZ > 10.0)) {
    // Outputs for IfAction SubSystem: '<S164>/If Action Subsystem' incorporates:
    //   ActionPort: '<S175>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Sum1_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_e5);

    // End of Outputs for SubSystem: '<S164>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ == 10.0) {
    // Outputs for IfAction SubSystem: '<S164>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S176>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Sum1_h,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_iw);

    // End of Outputs for SubSystem: '<S164>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorVelociteZ < 10.0) {
    // Outputs for IfAction SubSystem: '<S164>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S178>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Sum1_h, fuzzy_logic_system_P.PL_a_k,
      fuzzy_logic_system_P.PL_b_g);

    // End of Outputs for SubSystem: '<S164>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S164>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S177>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorVelociteZ,
      &fuzzy_logic_system_B.Sum1_h, fuzzy_logic_system_P.PL_b_g,
      fuzzy_logic_system_P.PL_c_a);

    // End of Outputs for SubSystem: '<S164>/If Action Subsystem2'
  }

  // End of If: '<S164>/If'

  // MinMax: '<S125>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Merge;
  if (!((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_B.Sum1_h) || rtIsNaN
        (fuzzy_logic_system_B.Sum1_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_h;
  }

  // Product: '<S125>/Weighting' incorporates:
  //   Constant: '<S125>/Weight'
  //   MinMax: '<S125>/andorMethod'

  fuzzy_logic_system_B.Merge_b = fuzzy_logic_system_P.Weight_Value_io *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S125>/impMethod' incorporates:
  //   Constant: '<S102>/PVL'
  //   Constant: '<S103>/PM'
  //   Constant: '<S104>/PVL'

  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PVL_Value_j[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 101] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Merge_b <= fuzzy_logic_system_P.PM_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_fi[i + 202] = fuzzy_logic_system_B.Merge_b;
    } else {
      fuzzy_logic_system_B.impMethod_fi[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }
  }

  // End of MinMax: '<S125>/impMethod'

  // If: '<S138>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionZ < -7.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionZ > 4.0)) {
    // Outputs for IfAction SubSystem: '<S138>/If Action Subsystem' incorporates:
    //   ActionPort: '<S146>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_h);

    // End of Outputs for SubSystem: '<S138>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ == -5.0) {
    // Outputs for IfAction SubSystem: '<S138>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S147>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_o,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_j4);

    // End of Outputs for SubSystem: '<S138>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ < -5.0) {
    // Outputs for IfAction SubSystem: '<S138>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S149>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_o, fuzzy_logic_system_P.NS_a_g,
      fuzzy_logic_system_P.NS_b_f);

    // End of Outputs for SubSystem: '<S138>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S138>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S148>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_o, fuzzy_logic_system_P.NS_b_f,
      fuzzy_logic_system_P.NS_c_n);

    // End of Outputs for SubSystem: '<S138>/If Action Subsystem2'
  }

  // End of If: '<S138>/If'

  // MinMax: '<S126>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S126>/Weighting' incorporates:
  //   Constant: '<S126>/Weight'
  //   MinMax: '<S126>/andorMethod'

  fuzzy_logic_system_B.Merge_m2 = fuzzy_logic_system_P.Weight_Value_id *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S127>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= rtb_Sum1_o) || rtIsNaN(rtb_Sum1_o)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_o;
  }

  // Product: '<S127>/Weighting' incorporates:
  //   Constant: '<S127>/Weight'
  //   MinMax: '<S127>/andorMethod'

  fuzzy_logic_system_B.Weighting_hg = fuzzy_logic_system_P.Weight_Value_o *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S128>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Sum1_l) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_l;
  }

  // Product: '<S128>/Weighting' incorporates:
  //   Constant: '<S128>/Weight'
  //   MinMax: '<S128>/andorMethod'

  fuzzy_logic_system_B.Weighting_hpq = fuzzy_logic_system_P.Weight_Value_a1 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S129>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S129>/Weighting' incorporates:
  //   Constant: '<S129>/Weight'
  //   MinMax: '<S129>/andorMethod'

  fuzzy_logic_system_B.Merge = fuzzy_logic_system_P.Weight_Value_co *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S106>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_o;
  if (!((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_B.Sum1_h) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_h;
  }

  // Product: '<S106>/Weighting' incorporates:
  //   Constant: '<S106>/Weight'
  //   MinMax: '<S106>/andorMethod'

  fuzzy_logic_system_B.Weighting_hb = fuzzy_logic_system_P.Weight_Value_f1 *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S126>/impMethod' incorporates:
    //   Constant: '<S102>/PML'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PVL_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PML_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 101] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 101] =
        fuzzy_logic_system_P.PML_Value_o[i];
    }

    if ((fuzzy_logic_system_B.Merge_m2 <= fuzzy_logic_system_P.PM_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_h[i + 202] = fuzzy_logic_system_B.Merge_m2;
    } else {
      fuzzy_logic_system_B.impMethod_h[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S126>/impMethod'

    // MinMax: '<S127>/impMethod' incorporates:
    //   Constant: '<S102>/PML'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PML'

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PML_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PML_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 101] =
        fuzzy_logic_system_P.PML_Value_o[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hg <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_B.Weighting_hg;
    } else {
      fuzzy_logic_system_B.impMethod_nj[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S127>/impMethod'

    // MinMax: '<S128>/impMethod' incorporates:
    //   Constant: '<S102>/PL'
    //   Constant: '<S103>/PS'
    //   Constant: '<S104>/PVS'

    if ((fuzzy_logic_system_B.Weighting_hpq <=
         fuzzy_logic_system_P.PVS_Value_g1[i]) || rtIsNaN
        (fuzzy_logic_system_P.PVS_Value_g1[i])) {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i] = fuzzy_logic_system_P.PVS_Value_g1[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <= fuzzy_logic_system_P.PL_Value_a[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_a[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 101] =
        fuzzy_logic_system_P.PL_Value_a[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hpq <= fuzzy_logic_system_P.PS_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_B.Weighting_hpq;
    } else {
      fuzzy_logic_system_B.impMethod_jt[i + 202] =
        fuzzy_logic_system_P.PS_Value_d[i];
    }

    // End of MinMax: '<S128>/impMethod'

    // MinMax: '<S129>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PML'

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PML_Value_i[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PVL_Value_j[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 101] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Merge <= fuzzy_logic_system_P.PMS_Value_n[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_j[i + 202] = fuzzy_logic_system_B.Merge;
    } else {
      fuzzy_logic_system_B.impMethod_j[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S129>/impMethod'

    // MinMax: '<S106>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_hb <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_B.Weighting_hb;
    } else {
      fuzzy_logic_system_B.impMethod_ah[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S106>/impMethod'
  }

  // If: '<S141>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionZ < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionZ > 4.0)) {
    // Outputs for IfAction SubSystem: '<S141>/If Action Subsystem' incorporates:
    //   ActionPort: '<S158>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_k,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_kg);

    // End of Outputs for SubSystem: '<S141>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ == 0.0) {
    // Outputs for IfAction SubSystem: '<S141>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S159>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_k,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_c3);

    // End of Outputs for SubSystem: '<S141>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ < 0.0) {
    // Outputs for IfAction SubSystem: '<S141>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S161>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_k, fuzzy_logic_system_P.ZE_a_jw,
      fuzzy_logic_system_P.ZE_b_a);

    // End of Outputs for SubSystem: '<S141>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S141>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S160>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_k, fuzzy_logic_system_P.ZE_b_a,
      fuzzy_logic_system_P.ZE_c_p);

    // End of Outputs for SubSystem: '<S141>/If Action Subsystem2'
  }

  // End of If: '<S141>/If'

  // MinMax: '<S107>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S107>/Weighting' incorporates:
  //   Constant: '<S107>/Weight'
  //   MinMax: '<S107>/andorMethod'

  fuzzy_logic_system_B.Weighting_ik = fuzzy_logic_system_P.Weight_Value_nc *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S108>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= rtb_Sum1_o) || rtIsNaN(rtb_Sum1_o)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_o;
  }

  // Product: '<S108>/Weighting' incorporates:
  //   Constant: '<S108>/Weight'
  //   MinMax: '<S108>/andorMethod'

  fuzzy_logic_system_B.Weighting_n = fuzzy_logic_system_P.Weight_Value_ci *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S109>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Sum1_l) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_l;
  }

  // Product: '<S109>/Weighting' incorporates:
  //   Constant: '<S109>/Weight'
  //   MinMax: '<S109>/andorMethod'

  fuzzy_logic_system_B.Weighting_ol = fuzzy_logic_system_P.Weight_Value_pm *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S110>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S110>/Weighting' incorporates:
  //   Constant: '<S110>/Weight'
  //   MinMax: '<S110>/andorMethod'

  fuzzy_logic_system_B.Weighting_o = fuzzy_logic_system_P.Weight_Value_es *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S111>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_k;
  if (!((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_B.Sum1_h) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_h;
  }

  // Product: '<S111>/Weighting' incorporates:
  //   Constant: '<S111>/Weight'
  //   MinMax: '<S111>/andorMethod'

  fuzzy_logic_system_B.Weighting_c = fuzzy_logic_system_P.Weight_Value_gu *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S107>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ik <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_B.Weighting_ik;
    } else {
      fuzzy_logic_system_B.impMethod_iw[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S107>/impMethod'

    // MinMax: '<S108>/impMethod' incorporates:
    //   Constant: '<S102>/PL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PML'

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PML_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PL_Value_a[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_a[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 101] =
        fuzzy_logic_system_P.PL_Value_a[i];
    }

    if ((fuzzy_logic_system_B.Weighting_n <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_B.Weighting_n;
    } else {
      fuzzy_logic_system_B.impMethod_f[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S108>/impMethod'

    // MinMax: '<S109>/impMethod' incorporates:
    //   Constant: '<S102>/PL'
    //   Constant: '<S103>/PVS'
    //   Constant: '<S104>/PS'

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PS_Value_k[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_k[i])) {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i] = fuzzy_logic_system_P.PS_Value_k[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PL_Value_a[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_a[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 101] =
        fuzzy_logic_system_P.PL_Value_a[i];
    }

    if ((fuzzy_logic_system_B.Weighting_ol <= fuzzy_logic_system_P.PVS_Value_p[i])
        || rtIsNaN(fuzzy_logic_system_P.PVS_Value_p[i])) {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_B.Weighting_ol;
    } else {
      fuzzy_logic_system_B.impMethod_d[i + 202] =
        fuzzy_logic_system_P.PVS_Value_p[i];
    }

    // End of MinMax: '<S109>/impMethod'

    // MinMax: '<S110>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PML'

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PML_Value_i[i])
        || rtIsNaN(fuzzy_logic_system_P.PML_Value_i[i])) {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i] = fuzzy_logic_system_P.PML_Value_i[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_o <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_B.Weighting_o;
    } else {
      fuzzy_logic_system_B.impMethod_m[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S110>/impMethod'

    // MinMax: '<S111>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_c <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_B.Weighting_c;
    } else {
      fuzzy_logic_system_B.impMethod_kx[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S111>/impMethod'
  }

  // If: '<S140>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionZ < -4.0) ||
      (fuzzy_logic_system_B.In1.ErrorPositionZ > 7.0)) {
    // Outputs for IfAction SubSystem: '<S140>/If Action Subsystem' incorporates:
    //   ActionPort: '<S154>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_lc);

    // End of Outputs for SubSystem: '<S140>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ == 5.0) {
    // Outputs for IfAction SubSystem: '<S140>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S155>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&fuzzy_logic_system_B.Weighting_i,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_jtp);

    // End of Outputs for SubSystem: '<S140>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ < 5.0) {
    // Outputs for IfAction SubSystem: '<S140>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S157>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_i, fuzzy_logic_system_P.PS_a_o,
      fuzzy_logic_system_P.PS_b_d);

    // End of Outputs for SubSystem: '<S140>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S140>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S156>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &fuzzy_logic_system_B.Weighting_i, fuzzy_logic_system_P.PS_b_d,
      fuzzy_logic_system_P.PS_c_o);

    // End of Outputs for SubSystem: '<S140>/If Action Subsystem2'
  }

  // End of If: '<S140>/If'

  // MinMax: '<S112>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_h) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S112>/Weighting' incorporates:
  //   Constant: '<S112>/Weight'
  //   MinMax: '<S112>/andorMethod'

  fuzzy_logic_system_B.Weighting_b = fuzzy_logic_system_P.Weight_Value_g5 *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S113>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= rtb_Sum1_o) || rtIsNaN(rtb_Sum1_o)))
  {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_o;
  }

  // Product: '<S113>/Weighting' incorporates:
  //   Constant: '<S113>/Weight'
  //   MinMax: '<S113>/andorMethod'

  fuzzy_logic_system_B.Weighting_k1 = fuzzy_logic_system_P.Weight_Value_ct *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S114>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Sum1_l) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_l;
  }

  // Product: '<S114>/Weighting' incorporates:
  //   Constant: '<S114>/Weight'
  //   MinMax: '<S114>/andorMethod'

  fuzzy_logic_system_B.Weighting_d = fuzzy_logic_system_P.Weight_Value_dx *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S115>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Weighting_g) ||
        rtIsNaN(fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S115>/Weighting' incorporates:
  //   Constant: '<S115>/Weight'
  //   MinMax: '<S115>/andorMethod'

  fuzzy_logic_system_B.Weighting_k = fuzzy_logic_system_P.Weight_Value_no *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S117>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_i;
  if (!((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_B.Sum1_h) ||
        rtIsNaN(fuzzy_logic_system_B.Sum1_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_h;
  }

  // Product: '<S117>/Weighting' incorporates:
  //   Constant: '<S117>/Weight'
  //   MinMax: '<S117>/andorMethod'

  fuzzy_logic_system_B.Weighting_i = fuzzy_logic_system_P.Weight_Value_g1 *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S112>/impMethod' incorporates:
    //   Constant: '<S102>/PL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PL_Value_a[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_a[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 101] =
        fuzzy_logic_system_P.PL_Value_a[i];
    }

    if ((fuzzy_logic_system_B.Weighting_b <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_B.Weighting_b;
    } else {
      fuzzy_logic_system_B.impMethod_k[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S112>/impMethod'

    // MinMax: '<S113>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PL'

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PL_Value_hs[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_hs[i])) {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i] = fuzzy_logic_system_P.PL_Value_hs[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k1 <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_B.Weighting_k1;
    } else {
      fuzzy_logic_system_B.impMethod_a[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S113>/impMethod'

    // MinMax: '<S114>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PS'
    //   Constant: '<S104>/PMS'

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PMS_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i] = fuzzy_logic_system_P.PMS_Value_m[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_d <= fuzzy_logic_system_P.PS_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_B.Weighting_d;
    } else {
      fuzzy_logic_system_B.impMethod_cb[i + 202] =
        fuzzy_logic_system_P.PS_Value_d[i];
    }

    // End of MinMax: '<S114>/impMethod'

    // MinMax: '<S115>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PL'

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PL_Value_hs[i])
        || rtIsNaN(fuzzy_logic_system_P.PL_Value_hs[i])) {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i] = fuzzy_logic_system_P.PL_Value_hs[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_k <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_B.Weighting_k;
    } else {
      fuzzy_logic_system_B.impMethod_n[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S115>/impMethod'

    // MinMax: '<S117>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_i <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_B.Weighting_i;
    } else {
      fuzzy_logic_system_B.impMethod_gt[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S117>/impMethod'
  }

  // If: '<S139>/If'
  if ((fuzzy_logic_system_B.In1.ErrorPositionZ < 3.788) ||
      (fuzzy_logic_system_B.In1.ErrorPositionZ > 9.788)) {
    // Outputs for IfAction SubSystem: '<S139>/If Action Subsystem' incorporates:
    //   ActionPort: '<S150>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_gk,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem_b);

    // End of Outputs for SubSystem: '<S139>/If Action Subsystem'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ == 9.788) {
    // Outputs for IfAction SubSystem: '<S139>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S151>/Action Port'

    fuzzy_logic_s_IfActionSubsystem(&rtb_Sum1_gk,
      (P_IfActionSubsystem_fuzzy_log_T *)
      &fuzzy_logic_system_P.IfActionSubsystem1_j2);

    // End of Outputs for SubSystem: '<S139>/If Action Subsystem1'
  } else if (fuzzy_logic_system_B.In1.ErrorPositionZ < 9.788) {
    // Outputs for IfAction SubSystem: '<S139>/If Action Subsystem3' incorporates:
    //   ActionPort: '<S153>/Action Port'

    fuzzy_logic__IfActionSubsystem3(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &rtb_Sum1_gk, fuzzy_logic_system_P.PL_a_ms, fuzzy_logic_system_P.PL_b_e);

    // End of Outputs for SubSystem: '<S139>/If Action Subsystem3'
  } else {
    // Outputs for IfAction SubSystem: '<S139>/If Action Subsystem2' incorporates:
    //   ActionPort: '<S152>/Action Port'

    fuzzy_logic__IfActionSubsystem2(fuzzy_logic_system_B.In1.ErrorPositionZ,
      &rtb_Sum1_gk, fuzzy_logic_system_P.PL_b_e, fuzzy_logic_system_P.PL_c_l);

    // End of Outputs for SubSystem: '<S139>/If Action Subsystem2'
  }

  // End of If: '<S139>/If'

  // MinMax: '<S118>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  if (!((rtb_Sum1_gk <= fuzzy_logic_system_B.Weighting_h) || rtIsNaN
        (fuzzy_logic_system_B.Weighting_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_h;
  }

  // Product: '<S118>/Weighting' incorporates:
  //   Constant: '<S118>/Weight'
  //   MinMax: '<S118>/andorMethod'

  fuzzy_logic_system_B.Weighting_h = fuzzy_logic_system_P.Weight_Value_hi *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S119>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  if (!((rtb_Sum1_gk <= rtb_Sum1_o) || rtIsNaN(rtb_Sum1_o))) {
    fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_o;
  }

  // Product: '<S119>/Weighting' incorporates:
  //   Constant: '<S119>/Weight'
  //   MinMax: '<S119>/andorMethod'

  fuzzy_logic_system_B.Weighting_a = fuzzy_logic_system_P.Weight_Value_gm *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S120>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  if (!((rtb_Sum1_gk <= fuzzy_logic_system_B.Sum1_l) || rtIsNaN
        (fuzzy_logic_system_B.Sum1_l))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_l;
  }

  // Product: '<S120>/Weighting' incorporates:
  //   Constant: '<S120>/Weight'
  //   MinMax: '<S120>/andorMethod'

  fuzzy_logic_system_B.Weighting_p = fuzzy_logic_system_P.Weight_Value_eo *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S121>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  if (!((rtb_Sum1_gk <= fuzzy_logic_system_B.Weighting_g) || rtIsNaN
        (fuzzy_logic_system_B.Weighting_g))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Weighting_g;
  }

  // Product: '<S121>/Weighting' incorporates:
  //   Constant: '<S121>/Weight'
  //   MinMax: '<S121>/andorMethod'

  fuzzy_logic_system_B.Weighting_g = fuzzy_logic_system_P.Weight_Value_js *
    fuzzy_logic_system_B.AveragingCOA;

  // MinMax: '<S122>/andorMethod'
  fuzzy_logic_system_B.AveragingCOA = rtb_Sum1_gk;
  if (!((rtb_Sum1_gk <= fuzzy_logic_system_B.Sum1_h) || rtIsNaN
        (fuzzy_logic_system_B.Sum1_h))) {
    fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.Sum1_h;
  }

  // Product: '<S122>/Weighting' incorporates:
  //   Constant: '<S122>/Weight'
  //   MinMax: '<S122>/andorMethod'

  fuzzy_logic_system_B.Weighting = fuzzy_logic_system_P.Weight_Value_iz *
    fuzzy_logic_system_B.AveragingCOA;
  for (i = 0; i < 101; i++) {
    // MinMax: '<S118>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_h <= fuzzy_logic_system_P.PM_Value_o[i])
        || rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_B.Weighting_h;
    } else {
      fuzzy_logic_system_B.impMethod_i[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S118>/impMethod'

    // MinMax: '<S119>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_a <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_B.Weighting_a;
    } else {
      fuzzy_logic_system_B.impMethod_g[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S119>/impMethod'

    // MinMax: '<S120>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PS'
    //   Constant: '<S104>/PMS'

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PMS_Value_m[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_m[i])) {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i] = fuzzy_logic_system_P.PMS_Value_m[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_p <= fuzzy_logic_system_P.PS_Value_d[i])
        || rtIsNaN(fuzzy_logic_system_P.PS_Value_d[i])) {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_B.Weighting_p;
    } else {
      fuzzy_logic_system_B.impMethod_l[i + 202] =
        fuzzy_logic_system_P.PS_Value_d[i];
    }

    // End of MinMax: '<S120>/impMethod'

    // MinMax: '<S121>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PMS'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PVL_Value_g[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PVL_Value_j[i])
        || rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting_g <= fuzzy_logic_system_P.PMS_Value_n[i])
        || rtIsNaN(fuzzy_logic_system_P.PMS_Value_n[i])) {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_B.Weighting_g;
    } else {
      fuzzy_logic_system_B.impMethod_c[i + 202] =
        fuzzy_logic_system_P.PMS_Value_n[i];
    }

    // End of MinMax: '<S121>/impMethod'

    // MinMax: '<S122>/impMethod' incorporates:
    //   Constant: '<S102>/PVL'
    //   Constant: '<S103>/PM'
    //   Constant: '<S104>/PVL'

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVL_Value_g[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_g[i])) {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i] = fuzzy_logic_system_P.PVL_Value_g[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PVL_Value_j[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PVL_Value_j[i])) {
      fuzzy_logic_system_B.impMethod[i + 101] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 101] =
        fuzzy_logic_system_P.PVL_Value_j[i];
    }

    if ((fuzzy_logic_system_B.Weighting <= fuzzy_logic_system_P.PM_Value_o[i]) ||
        rtIsNaN(fuzzy_logic_system_P.PM_Value_o[i])) {
      fuzzy_logic_system_B.impMethod[i + 202] = fuzzy_logic_system_B.Weighting;
    } else {
      fuzzy_logic_system_B.impMethod[i + 202] =
        fuzzy_logic_system_P.PM_Value_o[i];
    }

    // End of MinMax: '<S122>/impMethod'

    // MinMax: '<S97>/AggMethod1'
    if ((fuzzy_logic_system_B.impMethod_fm[i] >=
         fuzzy_logic_system_B.impMethod_b[i]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i])
        || rtIsNaN(fuzzy_logic_system_B.impMethod[i])) {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod1[i] = fuzzy_logic_system_B.impMethod[i];
    }

    // End of MinMax: '<S97>/AggMethod1'
  }

  // Sum: '<S98>/Sum1'
  rtb_Sum1_gk = fuzzy_logic_system_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    rtb_Sum1_gk += fuzzy_logic_system_B.AggMethod1[i + 1];
  }

  // End of Sum: '<S98>/Sum1'

  // If: '<S98>/If'
  if (rtb_Sum1_gk <= 0.0) {
    // Outputs for IfAction SubSystem: '<S98>/Action: One' incorporates:
    //   ActionPort: '<S131>/Action Port'

    fuzzy_logic_system_ActionOne(&rtb_Sum1_gk, (P_ActionOne_fuzzy_logic_syste_T *)
      &fuzzy_logic_system_P.ActionOne_f);

    // End of Outputs for SubSystem: '<S98>/Action: One'
  }

  // End of If: '<S98>/If'

  // MinMax: '<S97>/AggMethod2'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod_fm[i + 101] >=
         fuzzy_logic_system_B.impMethod_b[i + 101]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i + 101])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i +
        101];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        101];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i + 101]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i + 101]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        101];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i +
         101]) || rtIsNaN(fuzzy_logic_system_B.impMethod[i + 101])) {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod2[i] = fuzzy_logic_system_B.impMethod[i +
        101];
    }
  }

  // End of MinMax: '<S97>/AggMethod2'

  // Sum: '<S99>/Sum1'
  rtb_Sum1_o = fuzzy_logic_system_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    rtb_Sum1_o += fuzzy_logic_system_B.AggMethod2[i + 1];
  }

  // End of Sum: '<S99>/Sum1'

  // If: '<S99>/If'
  if (rtb_Sum1_o <= 0.0) {
    // Outputs for IfAction SubSystem: '<S99>/Action: One' incorporates:
    //   ActionPort: '<S133>/Action Port'

    fuzzy_logic_system_ActionOne(&rtb_Sum1_o, (P_ActionOne_fuzzy_logic_syste_T *)
      &fuzzy_logic_system_P.ActionOne_c);

    // End of Outputs for SubSystem: '<S99>/Action: One'
  }

  // End of If: '<S99>/If'

  // MinMax: '<S97>/AggMethod3'
  for (i = 0; i < 101; i++) {
    if ((fuzzy_logic_system_B.impMethod_fm[i + 202] >=
         fuzzy_logic_system_B.impMethod_b[i + 202]) || rtIsNaN
        (fuzzy_logic_system_B.impMethod_b[i + 202])) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fm[i +
        202];
    } else {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_b[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_o[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_o[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_o[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ch[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ch[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ch[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_fi[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_fi[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_fi[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_h[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_h[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_h[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_nj[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_nj[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_nj[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_jt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_jt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_jt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_j[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_j[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_j[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_ah[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_ah[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_ah[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_iw[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_iw[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_iw[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_f[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_f[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_f[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_d[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_d[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_d[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_m[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_m[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_m[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_kx[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_kx[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_kx[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_k[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_k[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_k[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_a[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_a[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_a[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_cb[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_cb[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_cb[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_n[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_n[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_n[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_gt[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_gt[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_gt[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_i[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_i[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_i[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_g[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_g[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_g[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_l[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_l[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_l[i +
        202];
    }

    if (!((fuzzy_logic_system_B.AveragingCOA >=
           fuzzy_logic_system_B.impMethod_c[i + 202]) || rtIsNaN
          (fuzzy_logic_system_B.impMethod_c[i + 202]))) {
      fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.impMethod_c[i +
        202];
    }

    if ((fuzzy_logic_system_B.AveragingCOA >= fuzzy_logic_system_B.impMethod[i +
         202]) || rtIsNaN(fuzzy_logic_system_B.impMethod[i + 202])) {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.AveragingCOA;
    } else {
      fuzzy_logic_system_B.AggMethod3[i] = fuzzy_logic_system_B.impMethod[i +
        202];
    }
  }

  // End of MinMax: '<S97>/AggMethod3'

  // Sum: '<S100>/Sum1'
  fuzzy_logic_system_B.AveragingCOA = fuzzy_logic_system_B.AggMethod3[0];
  for (i = 0; i < 100; i++) {
    fuzzy_logic_system_B.AveragingCOA += fuzzy_logic_system_B.AggMethod3[i + 1];
  }

  // End of Sum: '<S100>/Sum1'

  // If: '<S100>/If'
  if (fuzzy_logic_system_B.AveragingCOA <= 0.0) {
    // Outputs for IfAction SubSystem: '<S100>/Action: One' incorporates:
    //   ActionPort: '<S135>/Action Port'

    fuzzy_logic_system_ActionOne(&fuzzy_logic_system_B.AveragingCOA,
      (P_ActionOne_fuzzy_logic_syste_T *)&fuzzy_logic_system_P.ActionOne_o);

    // End of Outputs for SubSystem: '<S100>/Action: One'
  }

  // End of If: '<S100>/If'

  // Switch: '<S97>/Switch' incorporates:
  //   Constant: '<S97>/MidRange'
  //   Constant: '<S97>/Zero'
  //   Product: '<S100>/Averaging (COA)'
  //   RelationalOperator: '<S97>/Zero Firing Strength?'
  //   Sum: '<S97>/Total Firing Strength'

  if ((real_T)((((((((((((((((((((((((fuzzy_logic_system_B.Merge_i +
      fuzzy_logic_system_B.Merge_mn) + fuzzy_logic_system_B.Merge_m) +
      fuzzy_logic_system_B.Merge_l) + fuzzy_logic_system_B.Merge_b) +
      fuzzy_logic_system_B.Merge_m2) + fuzzy_logic_system_B.Weighting_hg) +
      fuzzy_logic_system_B.Weighting_hpq) + fuzzy_logic_system_B.Merge) +
      fuzzy_logic_system_B.Weighting_hb) + fuzzy_logic_system_B.Weighting_ik) +
      fuzzy_logic_system_B.Weighting_n) + fuzzy_logic_system_B.Weighting_ol) +
                          fuzzy_logic_system_B.Weighting_o) +
                         fuzzy_logic_system_B.Weighting_c) +
                        fuzzy_logic_system_B.Weighting_b) +
                       fuzzy_logic_system_B.Weighting_k1) +
                      fuzzy_logic_system_B.Weighting_d) +
                     fuzzy_logic_system_B.Weighting_k) +
                    fuzzy_logic_system_B.Weighting_i) +
                   fuzzy_logic_system_B.Weighting_h) +
                  fuzzy_logic_system_B.Weighting_a) +
                 fuzzy_logic_system_B.Weighting_p) +
                fuzzy_logic_system_B.Weighting_g) +
               fuzzy_logic_system_B.Weighting >
               fuzzy_logic_system_P.Zero_Value_i) >=
      fuzzy_logic_system_P.Switch_Threshold_e) {
    // Product: '<S98>/Product (COA)' incorporates:
    //   Constant: '<S98>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod1[i] *= fuzzy_logic_system_P.xdata_Value_d[i];
    }

    // End of Product: '<S98>/Product (COA)'

    // Sum: '<S98>/Sum'
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Merge += fuzzy_logic_system_B.AggMethod1[i + 1];
    }

    // End of Sum: '<S98>/Sum'

    // Product: '<S98>/Averaging (COA)'
    rtb_Sum1_gk = fuzzy_logic_system_B.Merge / rtb_Sum1_gk;

    // Product: '<S99>/Product (COA)' incorporates:
    //   Constant: '<S99>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod2[i] *= fuzzy_logic_system_P.xdata_Value_l[i];
    }

    // End of Product: '<S99>/Product (COA)'

    // Sum: '<S99>/Sum'
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Merge += fuzzy_logic_system_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S99>/Sum'

    // Product: '<S99>/Averaging (COA)'
    rtb_Sum1_o = fuzzy_logic_system_B.Merge / rtb_Sum1_o;

    // Product: '<S100>/Product (COA)' incorporates:
    //   Constant: '<S100>/x data'

    for (i = 0; i < 101; i++) {
      fuzzy_logic_system_B.AggMethod3[i] *= fuzzy_logic_system_P.xdata_Value_h[i];
    }

    // End of Product: '<S100>/Product (COA)'

    // Sum: '<S100>/Sum'
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_B.AggMethod3[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_system_B.Merge += fuzzy_logic_system_B.AggMethod3[i + 1];
    }

    // End of Sum: '<S100>/Sum'
    fuzzy_logic_system_B.Merge /= fuzzy_logic_system_B.AveragingCOA;
  } else {
    rtb_Sum1_gk = fuzzy_logic_system_P.MidRange_Value_f[0];
    rtb_Sum1_o = fuzzy_logic_system_P.MidRange_Value_f[1];
    fuzzy_logic_system_B.Merge = fuzzy_logic_system_P.MidRange_Value_f[2];
  }

  // End of Switch: '<S97>/Switch'

  // BusAssignment: '<Root>/Bus Assignment'
  fuzzy_logic_system_B.BusAssignment.KpX = fuzzy_logic_system_B.Merge_c;
  fuzzy_logic_system_B.BusAssignment.KdX = rtb_Sum1;
  fuzzy_logic_system_B.BusAssignment.KiX = rtb_Switch_idx_2;
  fuzzy_logic_system_B.BusAssignment.KpY = rtb_Switch_a_idx_0;
  fuzzy_logic_system_B.BusAssignment.KdY = rtb_Switch_a_idx_1;
  fuzzy_logic_system_B.BusAssignment.KiY = rtb_Switch_a_idx_2;
  fuzzy_logic_system_B.BusAssignment.KpZ = rtb_Sum1_gk;
  fuzzy_logic_system_B.BusAssignment.KdZ = rtb_Sum1_o;
  fuzzy_logic_system_B.BusAssignment.KiZ = fuzzy_logic_system_B.Merge;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   MATLABSystem: '<S5>/SinkBlock'

  Pub_fuzzy_logic_system_115.publish(&fuzzy_logic_system_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void fuzzy_logic_system_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(fuzzy_logic_system_M, (NULL));

  // block I/O
  (void) memset(((void *) &fuzzy_logic_system_B), 0,
                sizeof(B_fuzzy_logic_system_T));

  // states (dwork)
  (void) memset((void *)&fuzzy_logic_system_DW, 0,
                sizeof(DW_fuzzy_logic_system_T));

  {
    static const char_T tmp[5] = { '/', 'g', 'a', 'i', 'n' };

    static const char_T tmp_0[6] = { '/', 'e', 'r', 'r', 'o', 'r' };

    char_T tmp_1[6];
    char_T tmp_2[7];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    fuzzy_logic_system_DW.obj_d.isInitialized = 0;
    fuzzy_logic_system_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[6] = '\x00';
    Sub_fuzzy_logic_system_189.createSubscriber(tmp_2,
      fuzzy_logic_sys_MessageQueueLen);

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    fuzzy_logic_system_DW.obj.isInitialized = 0;
    fuzzy_logic_system_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[5] = '\x00';
    Pub_fuzzy_logic_system_115.createPublisher(tmp_1,
      fuzzy_logic_sys_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S277>/Out1'
    fuzzy_logic_system_B.In1 = fuzzy_logic_system_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void fuzzy_logic_system_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S6>/SourceBlock'

  if (fuzzy_logic_system_DW.obj_d.isInitialized == 1) {
    fuzzy_logic_system_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SinkBlock'

  if (fuzzy_logic_system_DW.obj.isInitialized == 1) {
    fuzzy_logic_system_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
