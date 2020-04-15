//
// File: fuzzy_logic_control.cpp
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
#include "fuzzy_logic_control.h"
#include "fuzzy_logic_control_private.h"
#define fuzzy_logic_con_MessageQueueLen (1)

// Block signals (auto storage)
B_fuzzy_logic_control_T fuzzy_logic_control_B;

// Block states (auto storage)
DW_fuzzy_logic_control_T fuzzy_logic_control_DW;

// Real-time model
RT_MODEL_fuzzy_logic_control_T fuzzy_logic_control_M_;
RT_MODEL_fuzzy_logic_control_T *const fuzzy_logic_control_M =
  &fuzzy_logic_control_M_;

//
// Output and update for action system:
//    '<S8>/Action: One'
//    '<S9>/Action: One'
//    '<S94>/Action: One'
//    '<S95>/Action: One'
//    '<S180>/Action: One'
//    '<S181>/Action: One'
//
void fuzzy_logic_control_ActionOne(real_T *rty_Out1,
  P_ActionOne_fuzzy_logic_contr_T *localP)
{
  // SignalConversion: '<S39>/OutportBufferForOut1' incorporates:
  //   Constant: '<S39>/One'

  *rty_Out1 = localP->One_Value;
}

//
// Output and update for action system:
//    '<S43>/If Action Subsystem'
//    '<S43>/If Action Subsystem1'
//    '<S44>/If Action Subsystem'
//    '<S44>/If Action Subsystem1'
//    '<S45>/If Action Subsystem'
//    '<S45>/If Action Subsystem1'
//    '<S46>/If Action Subsystem'
//    '<S46>/If Action Subsystem1'
//    '<S47>/If Action Subsystem'
//    '<S47>/If Action Subsystem1'
//    ...
//
void fuzzy_logic_c_IfActionSubsystem(real_T *rty_Out1,
  P_IfActionSubsystem_fuzzy_log_T *localP)
{
  // SignalConversion: '<S48>/OutportBufferForOut1' incorporates:
  //   Constant: '<S48>/0'

  *rty_Out1 = localP->u_Value;
}

//
// Output and update for action system:
//    '<S43>/If Action Subsystem3'
//    '<S44>/If Action Subsystem3'
//    '<S45>/If Action Subsystem3'
//    '<S46>/If Action Subsystem3'
//    '<S47>/If Action Subsystem3'
//    '<S68>/If Action Subsystem3'
//    '<S69>/If Action Subsystem3'
//    '<S70>/If Action Subsystem3'
//    '<S71>/If Action Subsystem3'
//    '<S72>/If Action Subsystem3'
//    ...
//
void fuzzy_logic__IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  B_IfActionSubsystem3_fuzzy_lo_T *localB, real_T rtp_a, real_T rtp_b)
{
  // Sum: '<S51>/Sum1' incorporates:
  //   Constant: '<S51>/a'
  //   Constant: '<S51>/b'

  localB->ba = rtp_b - rtp_a;

  // Product: '<S51>/Product ab (trimf)' incorporates:
  //   Constant: '<S51>/a'
  //   Sum: '<S51>/Sum'

  *rty_Out1 = (rtu_x - rtp_a) / localB->ba;
}

//
// Output and update for action system:
//    '<S43>/If Action Subsystem2'
//    '<S44>/If Action Subsystem2'
//    '<S45>/If Action Subsystem2'
//    '<S46>/If Action Subsystem2'
//    '<S47>/If Action Subsystem2'
//    '<S68>/If Action Subsystem2'
//    '<S69>/If Action Subsystem2'
//    '<S70>/If Action Subsystem2'
//    '<S71>/If Action Subsystem2'
//    '<S72>/If Action Subsystem2'
//    ...
//
void fuzzy_logic__IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  B_IfActionSubsystem2_fuzzy_lo_T *localB, real_T rtp_b, real_T rtp_c)
{
  // Sum: '<S50>/Sum2' incorporates:
  //   Constant: '<S50>/b'
  //   Constant: '<S50>/c'

  localB->cb = rtp_c - rtp_b;

  // Product: '<S50>/Product cd (trimf)' incorporates:
  //   Constant: '<S50>/c'
  //   Sum: '<S50>/Sum3'

  *rty_Out1 = 1.0 / localB->cb * (rtp_c - rtu_x);
}

// Model step function
void fuzzy_logic_control_step(void)
{
  {
    real_T *lastU;
    boolean_T varargout_1;
    real_T Merge_b;
    real_T Merge_k;
    real_T Merge_j;
    real_T Merge;
    int32_T i;
    real_T rtb_Switch_idx_1;
    real_T rtb_Switch_g_idx_1;

    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
    //   Inport: '<S265>/In1'
    //   MATLABSystem: '<S6>/SourceBlock'

    varargout_1 = Sub_fuzzy_logic_control_189.getLatestMessage
      (&fuzzy_logic_control_B.varargout_2);

    // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S265>/Enable'

    if (varargout_1) {
      fuzzy_logic_control_B.In1 = fuzzy_logic_control_B.varargout_2;
    }

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // If: '<S215>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionX < -1.0) ||
        (fuzzy_logic_control_B.In1.ErrorPositionX > -0.4)) {
      // Outputs for IfAction SubSystem: '<S215>/If Action Subsystem' incorporates:
      //   ActionPort: '<S220>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem);

      // End of Outputs for SubSystem: '<S215>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX == -1.0) {
      // Outputs for IfAction SubSystem: '<S215>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S221>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1);

      // End of Outputs for SubSystem: '<S215>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX < -1.0) {
      // Outputs for IfAction SubSystem: '<S215>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S223>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem3,
        fuzzy_logic_control_P.NL_a, fuzzy_logic_control_P.NL_b);

      // End of Outputs for SubSystem: '<S215>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S215>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S222>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem2,
        fuzzy_logic_control_P.NL_b, fuzzy_logic_control_P.NL_c);

      // End of Outputs for SubSystem: '<S215>/If Action Subsystem2'
    }

    // End of If: '<S215>/If'

    // Derivative: '<Root>/Derivative2'
    if ((fuzzy_logic_control_DW.TimeStampA >= fuzzy_logic_control_M->Timing.t[0])
        && (fuzzy_logic_control_DW.TimeStampB >= fuzzy_logic_control_M->
            Timing.t[0])) {
      fuzzy_logic_control_B.rtb_Derivative2_m = 0.0;
    } else {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_DW.TimeStampA;
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA;
      if (fuzzy_logic_control_DW.TimeStampA < fuzzy_logic_control_DW.TimeStampB)
      {
        if (fuzzy_logic_control_DW.TimeStampB < fuzzy_logic_control_M->Timing.t
            [0]) {
          fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_DW.TimeStampB;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB;
        }
      } else {
        if (fuzzy_logic_control_DW.TimeStampA >= fuzzy_logic_control_M->
            Timing.t[0]) {
          fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_DW.TimeStampB;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB;
        }
      }

      fuzzy_logic_control_B.rtb_Derivative2_m =
        (fuzzy_logic_control_B.In1.ErrorPositionX - *lastU) /
        (fuzzy_logic_control_M->Timing.t[0] - fuzzy_logic_control_B.AveragingCOA);
    }

    // End of Derivative: '<Root>/Derivative2'

    // If: '<S240>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -1.0) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > -0.4)) {
      // Outputs for IfAction SubSystem: '<S240>/If Action Subsystem' incorporates:
      //   ActionPort: '<S245>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_j, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem_l);

      // End of Outputs for SubSystem: '<S240>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -1.0) {
      // Outputs for IfAction SubSystem: '<S240>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S246>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_j, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem1_g);

      // End of Outputs for SubSystem: '<S240>/If Action Subsystem1'
    } else {
      // Outputs for IfAction SubSystem: '<S240>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S247>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &Merge_j, &fuzzy_logic_control_B.IfActionSubsystem2_j,
        fuzzy_logic_control_P.NL_b_p, fuzzy_logic_control_P.NL_c_d);

      // End of Outputs for SubSystem: '<S240>/If Action Subsystem2'
    }

    // End of If: '<S240>/If'

    // MinMax: '<S185>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_j) || rtIsNaN(Merge_j))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_j;
    }

    // Product: '<S185>/Weighting' incorporates:
    //   Constant: '<S185>/Weight'
    //   MinMax: '<S185>/andorMethod'

    fuzzy_logic_control_B.Weighting = fuzzy_logic_control_P.Weight_Value *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S185>/impMethod' incorporates:
    //   Constant: '<S183>/PVS'
    //   Constant: '<S184>/PVL'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Weighting <= fuzzy_logic_control_P.PVL_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting <= fuzzy_logic_control_P.PVS_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PVS_Value[i])) {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_P.PVS_Value[i];
      }
    }

    // End of MinMax: '<S185>/impMethod'

    // If: '<S241>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.7) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S241>/If Action Subsystem' incorporates:
      //   ActionPort: '<S249>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_k, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem_d);

      // End of Outputs for SubSystem: '<S241>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -0.5) {
      // Outputs for IfAction SubSystem: '<S241>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S250>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_k, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem1_o);

      // End of Outputs for SubSystem: '<S241>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < -0.5) {
      // Outputs for IfAction SubSystem: '<S241>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S252>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &Merge_k, &fuzzy_logic_control_B.IfActionSubsystem3_d,
        fuzzy_logic_control_P.NS_a, fuzzy_logic_control_P.NS_b);

      // End of Outputs for SubSystem: '<S241>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S241>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S251>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &Merge_k, &fuzzy_logic_control_B.IfActionSubsystem2_i,
        fuzzy_logic_control_P.NS_b, fuzzy_logic_control_P.NS_c);

      // End of Outputs for SubSystem: '<S241>/If Action Subsystem2'
    }

    // End of If: '<S241>/If'

    // MinMax: '<S196>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_k) || rtIsNaN(Merge_k))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_k;
    }

    // Product: '<S196>/Weighting' incorporates:
    //   Constant: '<S196>/Weight'
    //   MinMax: '<S196>/andorMethod'

    fuzzy_logic_control_B.Weighting_g = fuzzy_logic_control_P.Weight_Value_d *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S196>/impMethod' incorporates:
    //   Constant: '<S183>/PMS'
    //   Constant: '<S184>/PML'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_c[i] = fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PMS_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value[i])) {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_P.PMS_Value[i];
      }
    }

    // End of MinMax: '<S196>/impMethod'

    // If: '<S244>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem' incorporates:
      //   ActionPort: '<S261>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_b, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem_h);

      // End of Outputs for SubSystem: '<S244>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.0) {
      // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S262>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge_b, (P_IfActionSubsystem_fuzzy_log_T
        *)&fuzzy_logic_control_P.IfActionSubsystem1_m);

      // End of Outputs for SubSystem: '<S244>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.0) {
      // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S264>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &Merge_b, &fuzzy_logic_control_B.IfActionSubsystem3_l,
        fuzzy_logic_control_P.ZE_a, fuzzy_logic_control_P.ZE_b);

      // End of Outputs for SubSystem: '<S244>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S244>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S263>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &Merge_b, &fuzzy_logic_control_B.IfActionSubsystem2_d,
        fuzzy_logic_control_P.ZE_b, fuzzy_logic_control_P.ZE_c);

      // End of Outputs for SubSystem: '<S244>/If Action Subsystem2'
    }

    // End of If: '<S244>/If'

    // MinMax: '<S203>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_b) || rtIsNaN(Merge_b))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_b;
    }

    // Product: '<S203>/Weighting' incorporates:
    //   Constant: '<S203>/Weight'
    //   MinMax: '<S203>/andorMethod'

    fuzzy_logic_control_B.Weighting_p = fuzzy_logic_control_P.Weight_Value_a *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S203>/impMethod' incorporates:
    //   Constant: '<S183>/PM'
    //   Constant: '<S184>/PVS'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Weighting_p <=
           fuzzy_logic_control_P.PVS_Value_p[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_p[i])) {
        fuzzy_logic_control_B.impMethod_l[i] = fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i] =
          fuzzy_logic_control_P.PVS_Value_p[i];
      }

      if ((fuzzy_logic_control_B.Weighting_p <= fuzzy_logic_control_P.PM_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PM_Value[i])) {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_P.PM_Value[i];
      }
    }

    // End of MinMax: '<S203>/impMethod'

    // If: '<S243>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.7)) {
      // Outputs for IfAction SubSystem: '<S243>/If Action Subsystem' incorporates:
      //   ActionPort: '<S257>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_b4,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_b);

      // End of Outputs for SubSystem: '<S243>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.5) {
      // Outputs for IfAction SubSystem: '<S243>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S258>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_b4,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_k);

      // End of Outputs for SubSystem: '<S243>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.5) {
      // Outputs for IfAction SubSystem: '<S243>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S260>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Merge_b4,
        &fuzzy_logic_control_B.IfActionSubsystem3_m, fuzzy_logic_control_P.PS_a,
        fuzzy_logic_control_P.PS_b);

      // End of Outputs for SubSystem: '<S243>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S243>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S259>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Merge_b4,
        &fuzzy_logic_control_B.IfActionSubsystem2_e, fuzzy_logic_control_P.PS_b,
        fuzzy_logic_control_P.PS_c);

      // End of Outputs for SubSystem: '<S243>/If Action Subsystem2'
    }

    // End of If: '<S243>/If'

    // MinMax: '<S204>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_b4) || rtIsNaN
          (fuzzy_logic_control_B.Merge_b4))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_b4;
    }

    // Product: '<S204>/Weighting' incorporates:
    //   Constant: '<S204>/Weight'
    //   MinMax: '<S204>/andorMethod'

    fuzzy_logic_control_B.Weighting_a = fuzzy_logic_control_P.Weight_Value_f *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S204>/impMethod' incorporates:
    //   Constant: '<S183>/PML'
    //   Constant: '<S184>/PML'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_g[i] = fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PML_Value_c[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_c[i])) {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_P.PML_Value_c[i];
      }
    }

    // End of MinMax: '<S204>/impMethod'

    // If: '<S242>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < 0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 1.0)) {
      // Outputs for IfAction SubSystem: '<S242>/If Action Subsystem' incorporates:
      //   ActionPort: '<S253>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_n,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_j);

      // End of Outputs for SubSystem: '<S242>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 1.0) {
      // Outputs for IfAction SubSystem: '<S242>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S254>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_n,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_g2);

      // End of Outputs for SubSystem: '<S242>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 1.0) {
      // Outputs for IfAction SubSystem: '<S242>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S256>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Merge_n,
        &fuzzy_logic_control_B.IfActionSubsystem3_k, fuzzy_logic_control_P.PL_a,
        fuzzy_logic_control_P.PL_b);

      // End of Outputs for SubSystem: '<S242>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S242>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S255>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Merge_n,
        &fuzzy_logic_control_B.IfActionSubsystem2_ie, fuzzy_logic_control_P.PL_b,
        fuzzy_logic_control_P.PL_c);

      // End of Outputs for SubSystem: '<S242>/If Action Subsystem2'
    }

    // End of If: '<S242>/If'

    // MinMax: '<S205>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_n) || rtIsNaN
          (fuzzy_logic_control_B.Merge_n))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_n;
    }

    // Product: '<S205>/Weighting' incorporates:
    //   Constant: '<S205>/Weight'
    //   MinMax: '<S205>/andorMethod'

    fuzzy_logic_control_B.Weighting_h = fuzzy_logic_control_P.Weight_Value_n *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S205>/impMethod' incorporates:
    //   Constant: '<S183>/PVL'
    //   Constant: '<S184>/PVL'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_i[i] = fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i] = fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }
    }

    // End of MinMax: '<S205>/impMethod'

    // If: '<S216>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionX < -0.7) ||
        (fuzzy_logic_control_B.In1.ErrorPositionX > 0.4)) {
      // Outputs for IfAction SubSystem: '<S216>/If Action Subsystem' incorporates:
      //   ActionPort: '<S224>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_k);

      // End of Outputs for SubSystem: '<S216>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX == -0.5) {
      // Outputs for IfAction SubSystem: '<S216>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S225>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_a);

      // End of Outputs for SubSystem: '<S216>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX < -0.5) {
      // Outputs for IfAction SubSystem: '<S216>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S227>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem3_dd,
        fuzzy_logic_control_P.NS_a_l, fuzzy_logic_control_P.NS_b_d);

      // End of Outputs for SubSystem: '<S216>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S216>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S226>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem2_l,
        fuzzy_logic_control_P.NS_b_d, fuzzy_logic_control_P.NS_c_n);

      // End of Outputs for SubSystem: '<S216>/If Action Subsystem2'
    }

    // End of If: '<S216>/If'

    // MinMax: '<S206>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_j) || rtIsNaN(Merge_j))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_j;
    }

    // Product: '<S206>/Weighting' incorporates:
    //   Constant: '<S206>/Weight'
    //   MinMax: '<S206>/andorMethod'

    fuzzy_logic_control_B.Weighting_i = fuzzy_logic_control_P.Weight_Value_e *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S207>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_k) || rtIsNaN(Merge_k))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_k;
    }

    // Product: '<S207>/Weighting' incorporates:
    //   Constant: '<S207>/Weight'
    //   MinMax: '<S207>/andorMethod'

    fuzzy_logic_control_B.Weighting_k = fuzzy_logic_control_P.Weight_Value_k *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S208>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_b) || rtIsNaN(Merge_b))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_b;
    }

    // Product: '<S208>/Weighting' incorporates:
    //   Constant: '<S208>/Weight'
    //   MinMax: '<S208>/andorMethod'

    fuzzy_logic_control_B.Weighting_d = fuzzy_logic_control_P.Weight_Value_l *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S209>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_b4) || rtIsNaN
          (fuzzy_logic_control_B.Merge_b4))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_b4;
    }

    // Product: '<S209>/Weighting' incorporates:
    //   Constant: '<S209>/Weight'
    //   MinMax: '<S209>/andorMethod'

    fuzzy_logic_control_B.Weighting_k1 = fuzzy_logic_control_P.Weight_Value_ls *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S186>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_n) || rtIsNaN
          (fuzzy_logic_control_B.Merge_n))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_n;
    }

    // Product: '<S186>/Weighting' incorporates:
    //   Constant: '<S186>/Weight'
    //   MinMax: '<S186>/andorMethod'

    fuzzy_logic_control_B.Weighting_b = fuzzy_logic_control_P.Weight_Value_o *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S206>/impMethod' incorporates:
      //   Constant: '<S183>/PML'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PML_Value_c[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_c[i])) {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_P.PML_Value_c[i];
      }

      // End of MinMax: '<S206>/impMethod'

      // MinMax: '<S207>/impMethod' incorporates:
      //   Constant: '<S183>/PML'
      //   Constant: '<S184>/PML'

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_n[i] = fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PML_Value_c[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_c[i])) {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_P.PML_Value_c[i];
      }

      // End of MinMax: '<S207>/impMethod'

      // MinMax: '<S208>/impMethod' incorporates:
      //   Constant: '<S183>/PL'
      //   Constant: '<S184>/PVS'

      if ((fuzzy_logic_control_B.Weighting_d <=
           fuzzy_logic_control_P.PVS_Value_p[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_p[i])) {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_P.PVS_Value_p[i];
      }

      if ((fuzzy_logic_control_B.Weighting_d <= fuzzy_logic_control_P.PL_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PL_Value[i])) {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_P.PL_Value[i];
      }

      // End of MinMax: '<S208>/impMethod'

      // MinMax: '<S209>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PML'

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_a[i] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S209>/impMethod'

      // MinMax: '<S186>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_k[i] = fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i] = fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S186>/impMethod'
    }

    // If: '<S219>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionX < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionX > 0.4)) {
      // Outputs for IfAction SubSystem: '<S219>/If Action Subsystem' incorporates:
      //   ActionPort: '<S236>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_m);

      // End of Outputs for SubSystem: '<S219>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX == 0.0) {
      // Outputs for IfAction SubSystem: '<S219>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S237>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_kt);

      // End of Outputs for SubSystem: '<S219>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX < 0.0) {
      // Outputs for IfAction SubSystem: '<S219>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S239>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem3_h,
        fuzzy_logic_control_P.ZE_a_b, fuzzy_logic_control_P.ZE_b_h);

      // End of Outputs for SubSystem: '<S219>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S219>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S238>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionX,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem2_k,
        fuzzy_logic_control_P.ZE_b_h, fuzzy_logic_control_P.ZE_c_e);

      // End of Outputs for SubSystem: '<S219>/If Action Subsystem2'
    }

    // End of If: '<S219>/If'

    // MinMax: '<S187>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_j) || rtIsNaN(Merge_j))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_j;
    }

    // Product: '<S187>/Weighting' incorporates:
    //   Constant: '<S187>/Weight'
    //   MinMax: '<S187>/andorMethod'

    fuzzy_logic_control_B.Weighting_c = fuzzy_logic_control_P.Weight_Value_h *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S188>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_k) || rtIsNaN(Merge_k))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_k;
    }

    // Product: '<S188>/Weighting' incorporates:
    //   Constant: '<S188>/Weight'
    //   MinMax: '<S188>/andorMethod'

    fuzzy_logic_control_B.Weighting_o = fuzzy_logic_control_P.Weight_Value_b *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S189>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= Merge_b) || rtIsNaN(Merge_b))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_b;
    }

    // Product: '<S189>/Weighting' incorporates:
    //   Constant: '<S189>/Weight'
    //   MinMax: '<S189>/andorMethod'

    fuzzy_logic_control_B.Weighting_ol = fuzzy_logic_control_P.Weight_Value_m *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S190>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_b4) || rtIsNaN
          (fuzzy_logic_control_B.Merge_b4))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_b4;
    }

    // Product: '<S190>/Weighting' incorporates:
    //   Constant: '<S190>/Weight'
    //   MinMax: '<S190>/andorMethod'

    fuzzy_logic_control_B.Weighting_n = fuzzy_logic_control_P.Weight_Value_br *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S191>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Merge_n) || rtIsNaN
          (fuzzy_logic_control_B.Merge_n))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_n;
    }

    // Product: '<S191>/Weighting' incorporates:
    //   Constant: '<S191>/Weight'
    //   MinMax: '<S191>/andorMethod'

    fuzzy_logic_control_B.Weighting_ik = fuzzy_logic_control_P.Weight_Value_ap *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S187>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S187>/impMethod'

      // MinMax: '<S188>/impMethod' incorporates:
      //   Constant: '<S183>/PL'
      //   Constant: '<S184>/PML'

      if ((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_m[i] = fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_o <= fuzzy_logic_control_P.PL_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PL_Value[i])) {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_P.PL_Value[i];
      }

      // End of MinMax: '<S188>/impMethod'

      // MinMax: '<S189>/impMethod' incorporates:
      //   Constant: '<S183>/PL'
      //   Constant: '<S184>/PS'

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PS_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PS_Value[i])) {
        fuzzy_logic_control_B.impMethod_d[i] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i] = fuzzy_logic_control_P.PS_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value[i])) {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_P.PL_Value[i];
      }

      // End of MinMax: '<S189>/impMethod'

      // MinMax: '<S190>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PML'

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PML_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value[i])) {
        fuzzy_logic_control_B.impMethod_f[i] = fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i] = fuzzy_logic_control_P.PML_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S190>/impMethod'

      // MinMax: '<S191>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S191>/impMethod'
    }

    // If: '<S218>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionX < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionX > 0.7)) {
      // Outputs for IfAction SubSystem: '<S218>/If Action Subsystem' incorporates:
      //   ActionPort: '<S232>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_cg,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_c);

      // End of Outputs for SubSystem: '<S218>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX == 0.5) {
      // Outputs for IfAction SubSystem: '<S218>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S233>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_cg,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_l);

      // End of Outputs for SubSystem: '<S218>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX < 0.5) {
      // Outputs for IfAction SubSystem: '<S218>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S235>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionX,
        &fuzzy_logic_control_B.Merge_cg,
        &fuzzy_logic_control_B.IfActionSubsystem3_h0,
        fuzzy_logic_control_P.PS_a_j, fuzzy_logic_control_P.PS_b_f);

      // End of Outputs for SubSystem: '<S218>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S218>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S234>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionX,
        &fuzzy_logic_control_B.Merge_cg,
        &fuzzy_logic_control_B.IfActionSubsystem2_lq,
        fuzzy_logic_control_P.PS_b_f, fuzzy_logic_control_P.PS_c_b);

      // End of Outputs for SubSystem: '<S218>/If Action Subsystem2'
    }

    // End of If: '<S218>/If'

    // MinMax: '<S192>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_cg;
    if (!((fuzzy_logic_control_B.Merge_cg <= Merge_j) || rtIsNaN(Merge_j))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_j;
    }

    // Product: '<S192>/Weighting' incorporates:
    //   Constant: '<S192>/Weight'
    //   MinMax: '<S192>/andorMethod'

    fuzzy_logic_control_B.Weighting_hb = fuzzy_logic_control_P.Weight_Value_i *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S193>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_cg;
    if (!((fuzzy_logic_control_B.Merge_cg <= Merge_k) || rtIsNaN(Merge_k))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_k;
    }

    // Product: '<S193>/Weighting' incorporates:
    //   Constant: '<S193>/Weight'
    //   MinMax: '<S193>/andorMethod'

    Merge = fuzzy_logic_control_P.Weight_Value_f3 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S194>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_cg;
    if (!((fuzzy_logic_control_B.Merge_cg <= Merge_b) || rtIsNaN(Merge_b))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_b;
    }

    // Product: '<S194>/Weighting' incorporates:
    //   Constant: '<S194>/Weight'
    //   MinMax: '<S194>/andorMethod'

    fuzzy_logic_control_B.rtb_Derivative2_m =
      fuzzy_logic_control_P.Weight_Value_ky * fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S195>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_cg;
    if (!((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_B.Merge_b4) ||
          rtIsNaN(fuzzy_logic_control_B.Merge_b4))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_b4;
    }

    // Product: '<S195>/Weighting' incorporates:
    //   Constant: '<S195>/Weight'
    //   MinMax: '<S195>/andorMethod'

    fuzzy_logic_control_B.Weighting_hg = fuzzy_logic_control_P.Weight_Value_g *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S197>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_cg;
    if (!((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_B.Merge_n) ||
          rtIsNaN(fuzzy_logic_control_B.Merge_n))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_n;
    }

    // Product: '<S197>/Weighting' incorporates:
    //   Constant: '<S197>/Weight'
    //   MinMax: '<S197>/andorMethod'

    fuzzy_logic_control_B.Merge_cg = fuzzy_logic_control_P.Weight_Value_fz *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S192>/impMethod' incorporates:
      //   Constant: '<S183>/PL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value[i])) {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_P.PL_Value[i];
      }

      // End of MinMax: '<S192>/impMethod'

      // MinMax: '<S193>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PL'

      if ((Merge <= fuzzy_logic_control_P.PL_Value_m[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_m[i])) {
        fuzzy_logic_control_B.impMethod_j[i] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i] =
          fuzzy_logic_control_P.PL_Value_m[i];
      }

      if ((Merge <= fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_j[i + 101] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S193>/impMethod'

      // MinMax: '<S194>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PMS'

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PMS_Value_f[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_f[i])) {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_P.PMS_Value_f[i];
      }

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S194>/impMethod'

      // MinMax: '<S195>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PL'

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PL_Value_m[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_m[i])) {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_P.PL_Value_m[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S195>/impMethod'

      // MinMax: '<S197>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_P.PVL_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_h[i] = fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i] = fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_P.PVL_Value_b[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S197>/impMethod'
    }

    // If: '<S217>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionX < 0.3788) ||
        (fuzzy_logic_control_B.In1.ErrorPositionX > 0.9788)) {
      // Outputs for IfAction SubSystem: '<S217>/If Action Subsystem' incorporates:
      //   ActionPort: '<S228>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_d,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_g);

      // End of Outputs for SubSystem: '<S217>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX == 0.9788) {
      // Outputs for IfAction SubSystem: '<S217>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S229>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Merge_d,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_al);

      // End of Outputs for SubSystem: '<S217>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionX < 0.9788) {
      // Outputs for IfAction SubSystem: '<S217>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S231>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionX,
        &fuzzy_logic_control_B.Merge_d,
        &fuzzy_logic_control_B.IfActionSubsystem3_b,
        fuzzy_logic_control_P.PL_a_j, fuzzy_logic_control_P.PL_b_j);

      // End of Outputs for SubSystem: '<S217>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S217>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S230>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionX,
        &fuzzy_logic_control_B.Merge_d,
        &fuzzy_logic_control_B.IfActionSubsystem2_o,
        fuzzy_logic_control_P.PL_b_j, fuzzy_logic_control_P.PL_c_a);

      // End of Outputs for SubSystem: '<S217>/If Action Subsystem2'
    }

    // End of If: '<S217>/If'

    // MinMax: '<S198>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_d;
    if (!((fuzzy_logic_control_B.Merge_d <= Merge_j) || rtIsNaN(Merge_j))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_j;
    }

    // Product: '<S198>/Weighting' incorporates:
    //   Constant: '<S198>/Weight'
    //   MinMax: '<S198>/andorMethod'

    Merge_j = fuzzy_logic_control_P.Weight_Value_hd *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S199>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_d;
    if (!((fuzzy_logic_control_B.Merge_d <= Merge_k) || rtIsNaN(Merge_k))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_k;
    }

    // Product: '<S199>/Weighting' incorporates:
    //   Constant: '<S199>/Weight'
    //   MinMax: '<S199>/andorMethod'

    Merge_k = fuzzy_logic_control_P.Weight_Value_ii *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S200>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_d;
    if (!((fuzzy_logic_control_B.Merge_d <= Merge_b) || rtIsNaN(Merge_b))) {
      fuzzy_logic_control_B.AveragingCOA = Merge_b;
    }

    // Product: '<S200>/Weighting' incorporates:
    //   Constant: '<S200>/Weight'
    //   MinMax: '<S200>/andorMethod'

    Merge_b = fuzzy_logic_control_P.Weight_Value_ex *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S201>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_d;
    if (!((fuzzy_logic_control_B.Merge_d <= fuzzy_logic_control_B.Merge_b4) ||
          rtIsNaN(fuzzy_logic_control_B.Merge_b4))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_b4;
    }

    // Product: '<S201>/Weighting' incorporates:
    //   Constant: '<S201>/Weight'
    //   MinMax: '<S201>/andorMethod'

    fuzzy_logic_control_B.Merge_b4 = fuzzy_logic_control_P.Weight_Value_fo *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S202>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_d;
    if (!((fuzzy_logic_control_B.Merge_d <= fuzzy_logic_control_B.Merge_n) ||
          rtIsNaN(fuzzy_logic_control_B.Merge_n))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Merge_n;
    }

    // Product: '<S202>/Weighting' incorporates:
    //   Constant: '<S202>/Weight'
    //   MinMax: '<S202>/andorMethod'

    fuzzy_logic_control_B.Merge_n = fuzzy_logic_control_P.Weight_Value_j *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S198>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_fi[i] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_fi[i + 101] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S198>/impMethod'

      // MinMax: '<S199>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((Merge_k <= fuzzy_logic_control_P.PVL_Value[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_ch[i] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((Merge_k <= fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_ch[i + 101] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S199>/impMethod'

      // MinMax: '<S200>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PMS'

      if ((Merge_b <= fuzzy_logic_control_P.PMS_Value_f[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_f[i])) {
        fuzzy_logic_control_B.impMethod_o[i] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i] =
          fuzzy_logic_control_P.PMS_Value_f[i];
      }

      if ((Merge_b <= fuzzy_logic_control_P.PVL_Value_b[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_o[i + 101] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S200>/impMethod'

      // MinMax: '<S201>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PVL_Value[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_b[i] = fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i] = fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PVL_Value_b[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S201>/impMethod'

      // MinMax: '<S202>/impMethod' incorporates:
      //   Constant: '<S183>/PVL'
      //   Constant: '<S184>/PVL'

      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVL_Value[i]) ||
          rtIsNaN(fuzzy_logic_control_P.PVL_Value[i])) {
        fuzzy_logic_control_B.impMethod_fm[i] = fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i] =
          fuzzy_logic_control_P.PVL_Value[i];
      }

      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVL_Value_b[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_b[i])) {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_P.PVL_Value_b[i];
      }

      // End of MinMax: '<S202>/impMethod'

      // MinMax: '<S179>/AggMethod1'
      if ((fuzzy_logic_control_B.impMethod[i] >=
           fuzzy_logic_control_B.impMethod_c[i]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_c[i])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod[i];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_b[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_b[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_fm[i])
          || rtIsNaN(fuzzy_logic_control_B.impMethod_fm[i])) {
        fuzzy_logic_control_B.AggMethod1[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod1[i] =
          fuzzy_logic_control_B.impMethod_fm[i];
      }

      // End of MinMax: '<S179>/AggMethod1'
    }

    // Sum: '<S180>/Sum1'
    fuzzy_logic_control_B.Merge_d = fuzzy_logic_control_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.Merge_d += fuzzy_logic_control_B.AggMethod1[i + 1];
    }

    // End of Sum: '<S180>/Sum1'

    // If: '<S180>/If'
    if (fuzzy_logic_control_B.Merge_d <= 0.0) {
      // Outputs for IfAction SubSystem: '<S180>/Action: One' incorporates:
      //   ActionPort: '<S211>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.Merge_d,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne);

      // End of Outputs for SubSystem: '<S180>/Action: One'
    }

    // End of If: '<S180>/If'

    // MinMax: '<S179>/AggMethod2'
    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.impMethod[i + 101] >=
           fuzzy_logic_control_B.impMethod_c[i + 101]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_c[i + 101])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod[i + 101];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_b[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_b[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i + 101];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_fm[i
           + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_fm[i + 101])) {
        fuzzy_logic_control_B.AggMethod2[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod2[i] =
          fuzzy_logic_control_B.impMethod_fm[i + 101];
      }
    }

    // End of MinMax: '<S179>/AggMethod2'

    // Sum: '<S181>/Sum1'
    fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.Sum1_c += fuzzy_logic_control_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S181>/Sum1'

    // If: '<S181>/If'
    if (fuzzy_logic_control_B.Sum1_c <= 0.0) {
      // Outputs for IfAction SubSystem: '<S181>/Action: One' incorporates:
      //   ActionPort: '<S213>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.Sum1_c,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne_k);

      // End of Outputs for SubSystem: '<S181>/Action: One'
    }

    // End of If: '<S181>/If'

    // Switch: '<S179>/Switch' incorporates:
    //   Constant: '<S179>/MidRange'
    //   Constant: '<S179>/Zero'
    //   Product: '<S181>/Averaging (COA)'
    //   RelationalOperator: '<S179>/Zero Firing Strength?'
    //   Sum: '<S179>/Total Firing Strength'

    if ((real_T)((((((((((((((((((((((((fuzzy_logic_control_B.Weighting +
        fuzzy_logic_control_B.Weighting_g) + fuzzy_logic_control_B.Weighting_p)
        + fuzzy_logic_control_B.Weighting_a) + fuzzy_logic_control_B.Weighting_h)
      + fuzzy_logic_control_B.Weighting_i) + fuzzy_logic_control_B.Weighting_k)
        + fuzzy_logic_control_B.Weighting_d) +
        fuzzy_logic_control_B.Weighting_k1) + fuzzy_logic_control_B.Weighting_b)
      + fuzzy_logic_control_B.Weighting_c) + fuzzy_logic_control_B.Weighting_o)
        + fuzzy_logic_control_B.Weighting_ol) +
                            fuzzy_logic_control_B.Weighting_n) +
                           fuzzy_logic_control_B.Weighting_ik) +
                          fuzzy_logic_control_B.Weighting_hb) + Merge) +
                        fuzzy_logic_control_B.rtb_Derivative2_m) +
                       fuzzy_logic_control_B.Weighting_hg) +
                      fuzzy_logic_control_B.Merge_cg) + Merge_j) + Merge_k) +
                   Merge_b) + fuzzy_logic_control_B.Merge_b4) +
                 fuzzy_logic_control_B.Merge_n >
                 fuzzy_logic_control_P.Zero_Value) >=
        fuzzy_logic_control_P.Switch_Threshold) {
      // Product: '<S180>/Product (COA)' incorporates:
      //   Constant: '<S180>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod1[i] *=
          fuzzy_logic_control_P.xdata_Value[i];
      }

      // End of Product: '<S180>/Product (COA)'

      // Sum: '<S180>/Sum'
      fuzzy_logic_control_B.Sum = fuzzy_logic_control_B.AggMethod1[0];
      for (i = 0; i < 100; i++) {
        fuzzy_logic_control_B.Sum += fuzzy_logic_control_B.AggMethod1[i + 1];
      }

      // End of Sum: '<S180>/Sum'

      // Product: '<S180>/Averaging (COA)'
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum /
        fuzzy_logic_control_B.Merge_d;

      // Product: '<S181>/Product (COA)' incorporates:
      //   Constant: '<S181>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod2[i] *=
          fuzzy_logic_control_P.xdata_Value_l[i];
      }

      // End of Product: '<S181>/Product (COA)'

      // Sum: '<S181>/Sum'
      fuzzy_logic_control_B.Sum = fuzzy_logic_control_B.AggMethod2[0];
      for (i = 0; i < 100; i++) {
        fuzzy_logic_control_B.Sum += fuzzy_logic_control_B.AggMethod2[i + 1];
      }

      // End of Sum: '<S181>/Sum'
      fuzzy_logic_control_B.Merge_d = fuzzy_logic_control_B.AveragingCOA;
      rtb_Switch_idx_1 = fuzzy_logic_control_B.Sum /
        fuzzy_logic_control_B.Sum1_c;
    } else {
      fuzzy_logic_control_B.Merge_d = fuzzy_logic_control_P.MidRange_Value[0];
      rtb_Switch_idx_1 = fuzzy_logic_control_P.MidRange_Value[1];
    }

    // End of Switch: '<S179>/Switch'

    // If: '<S43>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionY < -1.0) ||
        (fuzzy_logic_control_B.In1.ErrorPositionY > -0.4)) {
      // Outputs for IfAction SubSystem: '<S43>/If Action Subsystem' incorporates:
      //   ActionPort: '<S48>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_ks);

      // End of Outputs for SubSystem: '<S43>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY == -1.0) {
      // Outputs for IfAction SubSystem: '<S43>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S49>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_n);

      // End of Outputs for SubSystem: '<S43>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY < -1.0) {
      // Outputs for IfAction SubSystem: '<S43>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S51>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionY,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem3_c,
        fuzzy_logic_control_P.NL_a_g, fuzzy_logic_control_P.NL_b_i);

      // End of Outputs for SubSystem: '<S43>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S43>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S50>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionY,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem2_b,
        fuzzy_logic_control_P.NL_b_i, fuzzy_logic_control_P.NL_c_c);

      // End of Outputs for SubSystem: '<S43>/If Action Subsystem2'
    }

    // End of If: '<S43>/If'

    // Derivative: '<Root>/Derivative1'
    if ((fuzzy_logic_control_DW.TimeStampA_p >= fuzzy_logic_control_M->Timing.t
         [0]) && (fuzzy_logic_control_DW.TimeStampB_l >=
                  fuzzy_logic_control_M->Timing.t[0])) {
      fuzzy_logic_control_B.rtb_Derivative2_m = 0.0;
    } else {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_DW.TimeStampA_p;
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_j;
      if (fuzzy_logic_control_DW.TimeStampA_p <
          fuzzy_logic_control_DW.TimeStampB_l) {
        if (fuzzy_logic_control_DW.TimeStampB_l <
            fuzzy_logic_control_M->Timing.t[0]) {
          fuzzy_logic_control_B.AveragingCOA =
            fuzzy_logic_control_DW.TimeStampB_l;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB_g;
        }
      } else {
        if (fuzzy_logic_control_DW.TimeStampA_p >=
            fuzzy_logic_control_M->Timing.t[0]) {
          fuzzy_logic_control_B.AveragingCOA =
            fuzzy_logic_control_DW.TimeStampB_l;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB_g;
        }
      }

      fuzzy_logic_control_B.rtb_Derivative2_m =
        (fuzzy_logic_control_B.In1.ErrorPositionY - *lastU) /
        (fuzzy_logic_control_M->Timing.t[0] - fuzzy_logic_control_B.AveragingCOA);
    }

    // End of Derivative: '<Root>/Derivative1'

    // If: '<S68>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -1.0) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > -0.4)) {
      // Outputs for IfAction SubSystem: '<S68>/If Action Subsystem' incorporates:
      //   ActionPort: '<S73>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_h,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_dp);

      // End of Outputs for SubSystem: '<S68>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -1.0) {
      // Outputs for IfAction SubSystem: '<S68>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S74>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_h,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_d);

      // End of Outputs for SubSystem: '<S68>/If Action Subsystem1'
    } else {
      // Outputs for IfAction SubSystem: '<S68>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S75>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_h,
        &fuzzy_logic_control_B.IfActionSubsystem2_f,
        fuzzy_logic_control_P.NL_b_it, fuzzy_logic_control_P.NL_c_l);

      // End of Outputs for SubSystem: '<S68>/If Action Subsystem2'
    }

    // End of If: '<S68>/If'

    // MinMax: '<S13>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S13>/Weighting' incorporates:
    //   Constant: '<S13>/Weight'
    //   MinMax: '<S13>/andorMethod'

    fuzzy_logic_control_B.Merge_n = fuzzy_logic_control_P.Weight_Value_c *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S13>/impMethod' incorporates:
    //   Constant: '<S11>/PVS'
    //   Constant: '<S12>/PVL'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVL_Value_j[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_fm[i] = fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVS_Value_d[i])
          || rtIsNaN(fuzzy_logic_control_P.PVS_Value_d[i])) {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_P.PVS_Value_d[i];
      }
    }

    // End of MinMax: '<S13>/impMethod'

    // If: '<S69>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.7) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S69>/If Action Subsystem' incorporates:
      //   ActionPort: '<S77>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_a,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_ck);

      // End of Outputs for SubSystem: '<S69>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -0.5) {
      // Outputs for IfAction SubSystem: '<S69>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S78>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_a,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_g5);

      // End of Outputs for SubSystem: '<S69>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < -0.5) {
      // Outputs for IfAction SubSystem: '<S69>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S80>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_a,
        &fuzzy_logic_control_B.IfActionSubsystem3_ny,
        fuzzy_logic_control_P.NS_a_lo, fuzzy_logic_control_P.NS_b_c);

      // End of Outputs for SubSystem: '<S69>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S69>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S79>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_a,
        &fuzzy_logic_control_B.IfActionSubsystem2_a,
        fuzzy_logic_control_P.NS_b_c, fuzzy_logic_control_P.NS_c_j);

      // End of Outputs for SubSystem: '<S69>/If Action Subsystem2'
    }

    // End of If: '<S69>/If'

    // MinMax: '<S24>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S24>/Weighting' incorporates:
    //   Constant: '<S24>/Weight'
    //   MinMax: '<S24>/andorMethod'

    fuzzy_logic_control_B.Merge_b4 = fuzzy_logic_control_P.Weight_Value_he *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S24>/impMethod' incorporates:
    //   Constant: '<S11>/PMS'
    //   Constant: '<S12>/PML'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PML_Value_k[i])
          || rtIsNaN(fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_b[i] = fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PMS_Value_i[i])
          || rtIsNaN(fuzzy_logic_control_P.PMS_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_P.PMS_Value_i[i];
      }
    }

    // End of MinMax: '<S24>/impMethod'

    // If: '<S72>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem' incorporates:
      //   ActionPort: '<S89>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_p,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_lk);

      // End of Outputs for SubSystem: '<S72>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.0) {
      // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S90>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_p,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_nr);

      // End of Outputs for SubSystem: '<S72>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.0) {
      // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S92>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_p,
        &fuzzy_logic_control_B.IfActionSubsystem3_j,
        fuzzy_logic_control_P.ZE_a_c, fuzzy_logic_control_P.ZE_b_l);

      // End of Outputs for SubSystem: '<S72>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S72>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S91>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_p,
        &fuzzy_logic_control_B.IfActionSubsystem2_dd,
        fuzzy_logic_control_P.ZE_b_l, fuzzy_logic_control_P.ZE_c_b);

      // End of Outputs for SubSystem: '<S72>/If Action Subsystem2'
    }

    // End of If: '<S72>/If'

    // MinMax: '<S31>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_p) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_p))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_p;
    }

    // Product: '<S31>/Weighting' incorporates:
    //   Constant: '<S31>/Weight'
    //   MinMax: '<S31>/andorMethod'

    Merge_b = fuzzy_logic_control_P.Weight_Value_o0 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S31>/impMethod' incorporates:
    //   Constant: '<S11>/PM'
    //   Constant: '<S12>/PVS'

    for (i = 0; i < 101; i++) {
      if ((Merge_b <= fuzzy_logic_control_P.PVS_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_o[i] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i] =
          fuzzy_logic_control_P.PVS_Value_a[i];
      }

      if ((Merge_b <= fuzzy_logic_control_P.PM_Value_o[i]) || rtIsNaN
          (fuzzy_logic_control_P.PM_Value_o[i])) {
        fuzzy_logic_control_B.impMethod_o[i + 101] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i + 101] =
          fuzzy_logic_control_P.PM_Value_o[i];
      }
    }

    // End of MinMax: '<S31>/impMethod'

    // If: '<S71>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.7)) {
      // Outputs for IfAction SubSystem: '<S71>/If Action Subsystem' incorporates:
      //   ActionPort: '<S85>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_g,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_i);

      // End of Outputs for SubSystem: '<S71>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.5) {
      // Outputs for IfAction SubSystem: '<S71>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S86>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_g,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_h);

      // End of Outputs for SubSystem: '<S71>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.5) {
      // Outputs for IfAction SubSystem: '<S71>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S88>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_g,
        &fuzzy_logic_control_B.IfActionSubsystem3_dn,
        fuzzy_logic_control_P.PS_a_jo, fuzzy_logic_control_P.PS_b_g);

      // End of Outputs for SubSystem: '<S71>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S71>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S87>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_g,
        &fuzzy_logic_control_B.IfActionSubsystem2_jh,
        fuzzy_logic_control_P.PS_b_g, fuzzy_logic_control_P.PS_c_c);

      // End of Outputs for SubSystem: '<S71>/If Action Subsystem2'
    }

    // End of If: '<S71>/If'

    // MinMax: '<S32>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S32>/Weighting' incorporates:
    //   Constant: '<S32>/Weight'
    //   MinMax: '<S32>/andorMethod'

    Merge_k = fuzzy_logic_control_P.Weight_Value_p *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S32>/impMethod' incorporates:
    //   Constant: '<S11>/PML'
    //   Constant: '<S12>/PML'

    for (i = 0; i < 101; i++) {
      if ((Merge_k <= fuzzy_logic_control_P.PML_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_ch[i] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((Merge_k <= fuzzy_logic_control_P.PML_Value_kh[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_kh[i])) {
        fuzzy_logic_control_B.impMethod_ch[i + 101] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i + 101] =
          fuzzy_logic_control_P.PML_Value_kh[i];
      }
    }

    // End of MinMax: '<S32>/impMethod'

    // If: '<S70>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < 0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 1.0)) {
      // Outputs for IfAction SubSystem: '<S70>/If Action Subsystem' incorporates:
      //   ActionPort: '<S81>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_c,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_cb);

      // End of Outputs for SubSystem: '<S70>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 1.0) {
      // Outputs for IfAction SubSystem: '<S70>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S82>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_c,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_i);

      // End of Outputs for SubSystem: '<S70>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 1.0) {
      // Outputs for IfAction SubSystem: '<S70>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S84>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_c,
        &fuzzy_logic_control_B.IfActionSubsystem3_p,
        fuzzy_logic_control_P.PL_a_m, fuzzy_logic_control_P.PL_b_e);

      // End of Outputs for SubSystem: '<S70>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S70>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S83>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_c,
        &fuzzy_logic_control_B.IfActionSubsystem2_bd,
        fuzzy_logic_control_P.PL_b_e, fuzzy_logic_control_P.PL_c_m);

      // End of Outputs for SubSystem: '<S70>/If Action Subsystem2'
    }

    // End of If: '<S70>/If'

    // MinMax: '<S33>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Sum1_c) || rtIsNaN
          (fuzzy_logic_control_B.Sum1_c))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    }

    // Product: '<S33>/Weighting' incorporates:
    //   Constant: '<S33>/Weight'
    //   MinMax: '<S33>/andorMethod'

    Merge_j = fuzzy_logic_control_P.Weight_Value_je *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S33>/impMethod' incorporates:
    //   Constant: '<S11>/PVL'
    //   Constant: '<S12>/PVL'

    for (i = 0; i < 101; i++) {
      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_fi[i] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_fi[i + 101] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }
    }

    // End of MinMax: '<S33>/impMethod'

    // If: '<S44>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionY < -0.7) ||
        (fuzzy_logic_control_B.In1.ErrorPositionY > 0.4)) {
      // Outputs for IfAction SubSystem: '<S44>/If Action Subsystem' incorporates:
      //   ActionPort: '<S52>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_o,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_a);

      // End of Outputs for SubSystem: '<S44>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY == -0.5) {
      // Outputs for IfAction SubSystem: '<S44>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S53>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_o,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_n5);

      // End of Outputs for SubSystem: '<S44>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY < -0.5) {
      // Outputs for IfAction SubSystem: '<S44>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S55>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_o,
        &fuzzy_logic_control_B.IfActionSubsystem3_b3,
        fuzzy_logic_control_P.NS_a_b, fuzzy_logic_control_P.NS_b_j);

      // End of Outputs for SubSystem: '<S44>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S44>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S54>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_o,
        &fuzzy_logic_control_B.IfActionSubsystem2_m,
        fuzzy_logic_control_P.NS_b_j, fuzzy_logic_control_P.NS_c_p);

      // End of Outputs for SubSystem: '<S44>/If Action Subsystem2'
    }

    // End of If: '<S44>/If'

    // MinMax: '<S34>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S34>/Weighting' incorporates:
    //   Constant: '<S34>/Weight'
    //   MinMax: '<S34>/andorMethod'

    fuzzy_logic_control_B.Merge_cg = fuzzy_logic_control_P.Weight_Value_bi *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S35>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S35>/Weighting' incorporates:
    //   Constant: '<S35>/Weight'
    //   MinMax: '<S35>/andorMethod'

    fuzzy_logic_control_B.Weighting_hg = fuzzy_logic_control_P.Weight_Value_io *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S36>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_p) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_p))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_p;
    }

    // Product: '<S36>/Weighting' incorporates:
    //   Constant: '<S36>/Weight'
    //   MinMax: '<S36>/andorMethod'

    fuzzy_logic_control_B.rtb_Derivative2_m =
      fuzzy_logic_control_P.Weight_Value_md * fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S37>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S37>/Weighting' incorporates:
    //   Constant: '<S37>/Weight'
    //   MinMax: '<S37>/andorMethod'

    Merge = fuzzy_logic_control_P.Weight_Value_ko *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S14>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <= fuzzy_logic_control_B.Sum1_c) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_c))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    }

    // Product: '<S14>/Weighting' incorporates:
    //   Constant: '<S14>/Weight'
    //   MinMax: '<S14>/andorMethod'

    fuzzy_logic_control_B.Weighting_hb = fuzzy_logic_control_P.Weight_Value_lz *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S34>/impMethod' incorporates:
      //   Constant: '<S11>/PML'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_P.PVL_Value_j[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_h[i] = fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Merge_cg <=
           fuzzy_logic_control_P.PML_Value_kh[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_kh[i])) {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_P.PML_Value_kh[i];
      }

      // End of MinMax: '<S34>/impMethod'

      // MinMax: '<S35>/impMethod' incorporates:
      //   Constant: '<S11>/PML'
      //   Constant: '<S12>/PML'

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PML_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PML_Value_kh[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_kh[i])) {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_P.PML_Value_kh[i];
      }

      // End of MinMax: '<S35>/impMethod'

      // MinMax: '<S36>/impMethod' incorporates:
      //   Constant: '<S11>/PL'
      //   Constant: '<S12>/PVS'

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PVS_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_P.PVS_Value_a[i];
      }

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PL_Value_ml[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_ml[i])) {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_P.PL_Value_ml[i];
      }

      // End of MinMax: '<S36>/impMethod'

      // MinMax: '<S37>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PML'

      if ((Merge <= fuzzy_logic_control_P.PML_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_j[i] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((Merge <= fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_j[i + 101] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S37>/impMethod'

      // MinMax: '<S14>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S14>/impMethod'
    }

    // If: '<S47>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionY < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionY > 0.4)) {
      // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem' incorporates:
      //   ActionPort: '<S64>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_k,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_gi);

      // End of Outputs for SubSystem: '<S47>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY == 0.0) {
      // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S65>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_k,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_kx);

      // End of Outputs for SubSystem: '<S47>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY < 0.0) {
      // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S67>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_k,
        &fuzzy_logic_control_B.IfActionSubsystem3_e,
        fuzzy_logic_control_P.ZE_a_d, fuzzy_logic_control_P.ZE_b_he);

      // End of Outputs for SubSystem: '<S47>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S47>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S66>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_k,
        &fuzzy_logic_control_B.IfActionSubsystem2_h,
        fuzzy_logic_control_P.ZE_b_he, fuzzy_logic_control_P.ZE_c_er);

      // End of Outputs for SubSystem: '<S47>/If Action Subsystem2'
    }

    // End of If: '<S47>/If'

    // MinMax: '<S15>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S15>/Weighting' incorporates:
    //   Constant: '<S15>/Weight'
    //   MinMax: '<S15>/andorMethod'

    fuzzy_logic_control_B.Weighting_ik = fuzzy_logic_control_P.Weight_Value_is *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S16>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S16>/Weighting' incorporates:
    //   Constant: '<S16>/Weight'
    //   MinMax: '<S16>/andorMethod'

    fuzzy_logic_control_B.Weighting_n = fuzzy_logic_control_P.Weight_Value_a4 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S17>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_p) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_p))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_p;
    }

    // Product: '<S17>/Weighting' incorporates:
    //   Constant: '<S17>/Weight'
    //   MinMax: '<S17>/andorMethod'

    fuzzy_logic_control_B.Weighting_ol = fuzzy_logic_control_P.Weight_Value_lk *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S18>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S18>/Weighting' incorporates:
    //   Constant: '<S18>/Weight'
    //   MinMax: '<S18>/andorMethod'

    fuzzy_logic_control_B.Weighting_o = fuzzy_logic_control_P.Weight_Value_j1 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S19>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <= fuzzy_logic_control_B.Sum1_c) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_c))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    }

    // Product: '<S19>/Weighting' incorporates:
    //   Constant: '<S19>/Weight'
    //   MinMax: '<S19>/andorMethod'

    fuzzy_logic_control_B.Weighting_c = fuzzy_logic_control_P.Weight_Value_dm *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S15>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S15>/impMethod'

      // MinMax: '<S16>/impMethod' incorporates:
      //   Constant: '<S11>/PL'
      //   Constant: '<S12>/PML'

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PML_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_f[i] = fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PL_Value_ml[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_ml[i])) {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_P.PL_Value_ml[i];
      }

      // End of MinMax: '<S16>/impMethod'

      // MinMax: '<S17>/impMethod' incorporates:
      //   Constant: '<S11>/PL'
      //   Constant: '<S12>/PS'

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PS_Value_n[i]) || rtIsNaN
          (fuzzy_logic_control_P.PS_Value_n[i])) {
        fuzzy_logic_control_B.impMethod_d[i] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i] =
          fuzzy_logic_control_P.PS_Value_n[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PL_Value_ml[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_ml[i])) {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_P.PL_Value_ml[i];
      }

      // End of MinMax: '<S17>/impMethod'

      // MinMax: '<S18>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PML'

      if ((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_P.PML_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_m[i] = fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i] =
          fuzzy_logic_control_P.PML_Value_k[i];
      }

      if ((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S18>/impMethod'

      // MinMax: '<S19>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S19>/impMethod'
    }

    // If: '<S46>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionY < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionY > 0.7)) {
      // Outputs for IfAction SubSystem: '<S46>/If Action Subsystem' incorporates:
      //   ActionPort: '<S60>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_i,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_n);

      // End of Outputs for SubSystem: '<S46>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY == 0.5) {
      // Outputs for IfAction SubSystem: '<S46>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S61>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_i,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_j);

      // End of Outputs for SubSystem: '<S46>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY < 0.5) {
      // Outputs for IfAction SubSystem: '<S46>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S63>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_i,
        &fuzzy_logic_control_B.IfActionSubsystem3_f3,
        fuzzy_logic_control_P.PS_a_b, fuzzy_logic_control_P.PS_b_c);

      // End of Outputs for SubSystem: '<S46>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S46>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S62>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Weighting_i,
        &fuzzy_logic_control_B.IfActionSubsystem2_lb,
        fuzzy_logic_control_P.PS_b_c, fuzzy_logic_control_P.PS_c_e);

      // End of Outputs for SubSystem: '<S46>/If Action Subsystem2'
    }

    // End of If: '<S46>/If'

    // MinMax: '<S20>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S20>/Weighting' incorporates:
    //   Constant: '<S20>/Weight'
    //   MinMax: '<S20>/andorMethod'

    fuzzy_logic_control_B.Weighting_b = fuzzy_logic_control_P.Weight_Value_nh *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S21>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S21>/Weighting' incorporates:
    //   Constant: '<S21>/Weight'
    //   MinMax: '<S21>/andorMethod'

    fuzzy_logic_control_B.Weighting_k1 = fuzzy_logic_control_P.Weight_Value_bt *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S22>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_p) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_p))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_p;
    }

    // Product: '<S22>/Weighting' incorporates:
    //   Constant: '<S22>/Weight'
    //   MinMax: '<S22>/andorMethod'

    fuzzy_logic_control_B.Weighting_d = fuzzy_logic_control_P.Weight_Value_j0 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S23>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S23>/Weighting' incorporates:
    //   Constant: '<S23>/Weight'
    //   MinMax: '<S23>/andorMethod'

    fuzzy_logic_control_B.Weighting_k = fuzzy_logic_control_P.Weight_Value_lk2 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S25>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <= fuzzy_logic_control_B.Sum1_c) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_c))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    }

    // Product: '<S25>/Weighting' incorporates:
    //   Constant: '<S25>/Weight'
    //   MinMax: '<S25>/andorMethod'

    fuzzy_logic_control_B.Weighting_i = fuzzy_logic_control_P.Weight_Value_me *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S20>/impMethod' incorporates:
      //   Constant: '<S11>/PL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_k[i] = fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PL_Value_ml[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_ml[i])) {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_P.PL_Value_ml[i];
      }

      // End of MinMax: '<S20>/impMethod'

      // MinMax: '<S21>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PL'

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PL_Value_h[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_h[i])) {
        fuzzy_logic_control_B.impMethod_a[i] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i] =
          fuzzy_logic_control_P.PL_Value_h[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S21>/impMethod'

      // MinMax: '<S22>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PMS'

      if ((fuzzy_logic_control_B.Weighting_d <=
           fuzzy_logic_control_P.PMS_Value_h[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_h[i])) {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_P.PMS_Value_h[i];
      }

      if ((fuzzy_logic_control_B.Weighting_d <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S22>/impMethod'

      // MinMax: '<S23>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PL'

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PL_Value_h[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_h[i])) {
        fuzzy_logic_control_B.impMethod_n[i] = fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i] =
          fuzzy_logic_control_P.PL_Value_h[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S23>/impMethod'

      // MinMax: '<S25>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S25>/impMethod'
    }

    // If: '<S45>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionY < 0.3788) ||
        (fuzzy_logic_control_B.In1.ErrorPositionY > 0.9788)) {
      // Outputs for IfAction SubSystem: '<S45>/If Action Subsystem' incorporates:
      //   ActionPort: '<S56>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_lr);

      // End of Outputs for SubSystem: '<S45>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY == 0.9788) {
      // Outputs for IfAction SubSystem: '<S45>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S57>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_e);

      // End of Outputs for SubSystem: '<S45>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionY < 0.9788) {
      // Outputs for IfAction SubSystem: '<S45>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S59>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Sum, &fuzzy_logic_control_B.IfActionSubsystem3_pe,
        fuzzy_logic_control_P.PL_a_h, fuzzy_logic_control_P.PL_b_d);

      // End of Outputs for SubSystem: '<S45>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S45>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S58>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionY,
        &fuzzy_logic_control_B.Sum, &fuzzy_logic_control_B.IfActionSubsystem2_jx,
        fuzzy_logic_control_P.PL_b_d, fuzzy_logic_control_P.PL_c_ak);

      // End of Outputs for SubSystem: '<S45>/If Action Subsystem2'
    }

    // End of If: '<S45>/If'

    // MinMax: '<S26>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum;
    if (!((fuzzy_logic_control_B.Sum <= fuzzy_logic_control_B.Weighting_h) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S26>/Weighting' incorporates:
    //   Constant: '<S26>/Weight'
    //   MinMax: '<S26>/andorMethod'

    fuzzy_logic_control_B.Weighting_h = fuzzy_logic_control_P.Weight_Value_cn *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S27>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum;
    if (!((fuzzy_logic_control_B.Sum <= fuzzy_logic_control_B.Weighting_a) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S27>/Weighting' incorporates:
    //   Constant: '<S27>/Weight'
    //   MinMax: '<S27>/andorMethod'

    fuzzy_logic_control_B.Weighting_a = fuzzy_logic_control_P.Weight_Value_eg *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S28>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum;
    if (!((fuzzy_logic_control_B.Sum <= fuzzy_logic_control_B.Weighting_p) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_p))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_p;
    }

    // Product: '<S28>/Weighting' incorporates:
    //   Constant: '<S28>/Weight'
    //   MinMax: '<S28>/andorMethod'

    fuzzy_logic_control_B.Weighting_p = fuzzy_logic_control_P.Weight_Value_ak *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S29>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum;
    if (!((fuzzy_logic_control_B.Sum <= fuzzy_logic_control_B.Weighting_g) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S29>/Weighting' incorporates:
    //   Constant: '<S29>/Weight'
    //   MinMax: '<S29>/andorMethod'

    fuzzy_logic_control_B.Weighting_g = fuzzy_logic_control_P.Weight_Value_pj *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S30>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum;
    if (!((fuzzy_logic_control_B.Sum <= fuzzy_logic_control_B.Sum1_c) || rtIsNaN
          (fuzzy_logic_control_B.Sum1_c))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    }

    // Product: '<S30>/Weighting' incorporates:
    //   Constant: '<S30>/Weight'
    //   MinMax: '<S30>/andorMethod'

    fuzzy_logic_control_B.Weighting = fuzzy_logic_control_P.Weight_Value_cu *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S26>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_i[i] = fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S26>/impMethod'

      // MinMax: '<S27>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_g[i] = fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S27>/impMethod'

      // MinMax: '<S28>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PMS'

      if ((fuzzy_logic_control_B.Weighting_p <=
           fuzzy_logic_control_P.PMS_Value_h[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_h[i])) {
        fuzzy_logic_control_B.impMethod_l[i] = fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i] =
          fuzzy_logic_control_P.PMS_Value_h[i];
      }

      if ((fuzzy_logic_control_B.Weighting_p <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S28>/impMethod'

      // MinMax: '<S29>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod_c[i] = fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i] =
          fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S29>/impMethod'

      // MinMax: '<S30>/impMethod' incorporates:
      //   Constant: '<S11>/PVL'
      //   Constant: '<S12>/PVL'

      if ((fuzzy_logic_control_B.Weighting <=
           fuzzy_logic_control_P.PVL_Value_j[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_j[i])) {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_P.PVL_Value_j[i];
      }

      if ((fuzzy_logic_control_B.Weighting <=
           fuzzy_logic_control_P.PVL_Value_ji[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_ji[i])) {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_P.PVL_Value_ji[i];
      }

      // End of MinMax: '<S30>/impMethod'

      // MinMax: '<S7>/AggMethod1'
      if ((fuzzy_logic_control_B.impMethod_fm[i] >=
           fuzzy_logic_control_B.impMethod_b[i]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_b[i])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fm[i];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_c[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_c[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod[i]) ||
          rtIsNaN(fuzzy_logic_control_B.impMethod[i])) {
        fuzzy_logic_control_B.AggMethod1[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod1[i] = fuzzy_logic_control_B.impMethod[i];
      }

      // End of MinMax: '<S7>/AggMethod1'
    }

    // Sum: '<S8>/Sum1'
    fuzzy_logic_control_B.Sum1_j = fuzzy_logic_control_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.Sum1_j += fuzzy_logic_control_B.AggMethod1[i + 1];
    }

    // End of Sum: '<S8>/Sum1'

    // If: '<S8>/If'
    if (fuzzy_logic_control_B.Sum1_j <= 0.0) {
      // Outputs for IfAction SubSystem: '<S8>/Action: One' incorporates:
      //   ActionPort: '<S39>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.Sum1_j,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne_c);

      // End of Outputs for SubSystem: '<S8>/Action: One'
    }

    // End of If: '<S8>/If'

    // MinMax: '<S7>/AggMethod2'
    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.impMethod_fm[i + 101] >=
           fuzzy_logic_control_B.impMethod_b[i + 101]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_b[i + 101])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fm[i +
          101];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_c[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_c[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i + 101];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod[i +
           101]) || rtIsNaN(fuzzy_logic_control_B.impMethod[i + 101])) {
        fuzzy_logic_control_B.AggMethod2[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod2[i] = fuzzy_logic_control_B.impMethod[i
          + 101];
      }
    }

    // End of MinMax: '<S7>/AggMethod2'

    // Sum: '<S9>/Sum1'
    fuzzy_logic_control_B.Sum1_cz = fuzzy_logic_control_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.Sum1_cz += fuzzy_logic_control_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S9>/Sum1'

    // If: '<S9>/If'
    if (fuzzy_logic_control_B.Sum1_cz <= 0.0) {
      // Outputs for IfAction SubSystem: '<S9>/Action: One' incorporates:
      //   ActionPort: '<S41>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.Sum1_cz,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne_a);

      // End of Outputs for SubSystem: '<S9>/Action: One'
    }

    // End of If: '<S9>/If'

    // Switch: '<S7>/Switch' incorporates:
    //   Constant: '<S7>/MidRange'
    //   Constant: '<S7>/Zero'
    //   Product: '<S9>/Averaging (COA)'
    //   RelationalOperator: '<S7>/Zero Firing Strength?'
    //   Sum: '<S7>/Total Firing Strength'

    if ((real_T)((((((((((((((((((((((((fuzzy_logic_control_B.Merge_n +
        fuzzy_logic_control_B.Merge_b4) + Merge_b) + Merge_k) + Merge_j) +
        fuzzy_logic_control_B.Merge_cg) + fuzzy_logic_control_B.Weighting_hg) +
        fuzzy_logic_control_B.rtb_Derivative2_m) + Merge) +
        fuzzy_logic_control_B.Weighting_hb) + fuzzy_logic_control_B.Weighting_ik)
      + fuzzy_logic_control_B.Weighting_n) + fuzzy_logic_control_B.Weighting_ol)
      + fuzzy_logic_control_B.Weighting_o) + fuzzy_logic_control_B.Weighting_c)
                          + fuzzy_logic_control_B.Weighting_b) +
                         fuzzy_logic_control_B.Weighting_k1) +
                        fuzzy_logic_control_B.Weighting_d) +
                       fuzzy_logic_control_B.Weighting_k) +
                      fuzzy_logic_control_B.Weighting_i) +
                     fuzzy_logic_control_B.Weighting_h) +
                    fuzzy_logic_control_B.Weighting_a) +
                   fuzzy_logic_control_B.Weighting_p) +
                  fuzzy_logic_control_B.Weighting_g) +
                 fuzzy_logic_control_B.Weighting >
                 fuzzy_logic_control_P.Zero_Value_o) >=
        fuzzy_logic_control_P.Switch_Threshold_h) {
      // Product: '<S8>/Product (COA)' incorporates:
      //   Constant: '<S8>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod1[i] *=
          fuzzy_logic_control_P.xdata_Value_o[i];
      }

      // End of Product: '<S8>/Product (COA)'

      // Sum: '<S8>/Sum'
      fuzzy_logic_control_B.Weighting_g = fuzzy_logic_control_B.AggMethod1[0];
      for (i = 0; i < 100; i++) {
        fuzzy_logic_control_B.Weighting_g += fuzzy_logic_control_B.AggMethod1[i
          + 1];
      }

      // End of Sum: '<S8>/Sum'

      // Product: '<S8>/Averaging (COA)'
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g /
        fuzzy_logic_control_B.Sum1_j;

      // Product: '<S9>/Product (COA)' incorporates:
      //   Constant: '<S9>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod2[i] *=
          fuzzy_logic_control_P.xdata_Value_h[i];
      }

      // End of Product: '<S9>/Product (COA)'

      // Sum: '<S9>/Sum'
      fuzzy_logic_control_B.Weighting_g = fuzzy_logic_control_B.AggMethod2[0];
      for (i = 0; i < 100; i++) {
        fuzzy_logic_control_B.Weighting_g += fuzzy_logic_control_B.AggMethod2[i
          + 1];
      }

      // End of Sum: '<S9>/Sum'
      fuzzy_logic_control_B.Sum = fuzzy_logic_control_B.AveragingCOA;
      rtb_Switch_g_idx_1 = fuzzy_logic_control_B.Weighting_g /
        fuzzy_logic_control_B.Sum1_cz;
    } else {
      fuzzy_logic_control_B.Sum = fuzzy_logic_control_P.MidRange_Value_d[0];
      rtb_Switch_g_idx_1 = fuzzy_logic_control_P.MidRange_Value_d[1];
    }

    // End of Switch: '<S7>/Switch'

    // If: '<S129>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionZ < -1.0) ||
        (fuzzy_logic_control_B.In1.ErrorPositionZ > -0.4)) {
      // Outputs for IfAction SubSystem: '<S129>/If Action Subsystem' incorporates:
      //   ActionPort: '<S134>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_ks0);

      // End of Outputs for SubSystem: '<S129>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ == -1.0) {
      // Outputs for IfAction SubSystem: '<S129>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S135>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&Merge, (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_jt);

      // End of Outputs for SubSystem: '<S129>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ < -1.0) {
      // Outputs for IfAction SubSystem: '<S129>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S137>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem3_p4,
        fuzzy_logic_control_P.NL_a_j, fuzzy_logic_control_P.NL_b_c);

      // End of Outputs for SubSystem: '<S129>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S129>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S136>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &Merge, &fuzzy_logic_control_B.IfActionSubsystem2_hc,
        fuzzy_logic_control_P.NL_b_c, fuzzy_logic_control_P.NL_c_p);

      // End of Outputs for SubSystem: '<S129>/If Action Subsystem2'
    }

    // End of If: '<S129>/If'

    // Derivative: '<Root>/Derivative'
    if ((fuzzy_logic_control_DW.TimeStampA_g >= fuzzy_logic_control_M->Timing.t
         [0]) && (fuzzy_logic_control_DW.TimeStampB_d >=
                  fuzzy_logic_control_M->Timing.t[0])) {
      fuzzy_logic_control_B.rtb_Derivative2_m = 0.0;
    } else {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_DW.TimeStampA_g;
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_c;
      if (fuzzy_logic_control_DW.TimeStampA_g <
          fuzzy_logic_control_DW.TimeStampB_d) {
        if (fuzzy_logic_control_DW.TimeStampB_d <
            fuzzy_logic_control_M->Timing.t[0]) {
          fuzzy_logic_control_B.AveragingCOA =
            fuzzy_logic_control_DW.TimeStampB_d;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB_d;
        }
      } else {
        if (fuzzy_logic_control_DW.TimeStampA_g >=
            fuzzy_logic_control_M->Timing.t[0]) {
          fuzzy_logic_control_B.AveragingCOA =
            fuzzy_logic_control_DW.TimeStampB_d;
          lastU = &fuzzy_logic_control_DW.LastUAtTimeB_d;
        }
      }

      fuzzy_logic_control_B.rtb_Derivative2_m =
        (fuzzy_logic_control_B.In1.ErrorPositionZ - *lastU) /
        (fuzzy_logic_control_M->Timing.t[0] - fuzzy_logic_control_B.AveragingCOA);
    }

    // End of Derivative: '<Root>/Derivative'

    // If: '<S154>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -1.0) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > -0.4)) {
      // Outputs for IfAction SubSystem: '<S154>/If Action Subsystem' incorporates:
      //   ActionPort: '<S159>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_h,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_dq);

      // End of Outputs for SubSystem: '<S154>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -1.0) {
      // Outputs for IfAction SubSystem: '<S154>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S160>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_h,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_f);

      // End of Outputs for SubSystem: '<S154>/If Action Subsystem1'
    } else {
      // Outputs for IfAction SubSystem: '<S154>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S161>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_h,
        &fuzzy_logic_control_B.IfActionSubsystem2_bz,
        fuzzy_logic_control_P.NL_b_j, fuzzy_logic_control_P.NL_c_pi);

      // End of Outputs for SubSystem: '<S154>/If Action Subsystem2'
    }

    // End of If: '<S154>/If'

    // MinMax: '<S99>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S99>/Weighting' incorporates:
    //   Constant: '<S99>/Weight'
    //   MinMax: '<S99>/andorMethod'

    fuzzy_logic_control_B.Merge_n = fuzzy_logic_control_P.Weight_Value_nk *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S99>/impMethod' incorporates:
    //   Constant: '<S97>/PVS'
    //   Constant: '<S98>/PVL'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVL_Value_g[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_fm[i] = fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Merge_n <= fuzzy_logic_control_P.PVS_Value_g[i])
          || rtIsNaN(fuzzy_logic_control_P.PVS_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_B.Merge_n;
      } else {
        fuzzy_logic_control_B.impMethod_fm[i + 101] =
          fuzzy_logic_control_P.PVS_Value_g[i];
      }
    }

    // End of MinMax: '<S99>/impMethod'

    // If: '<S155>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.7) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S155>/If Action Subsystem' incorporates:
      //   ActionPort: '<S163>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_a,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_e);

      // End of Outputs for SubSystem: '<S155>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == -0.5) {
      // Outputs for IfAction SubSystem: '<S155>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S164>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_a,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_c);

      // End of Outputs for SubSystem: '<S155>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < -0.5) {
      // Outputs for IfAction SubSystem: '<S155>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S166>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_a,
        &fuzzy_logic_control_B.IfActionSubsystem3_ef,
        fuzzy_logic_control_P.NS_a_j, fuzzy_logic_control_P.NS_b_o);

      // End of Outputs for SubSystem: '<S155>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S155>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S165>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_a,
        &fuzzy_logic_control_B.IfActionSubsystem2_d3,
        fuzzy_logic_control_P.NS_b_o, fuzzy_logic_control_P.NS_c_m);

      // End of Outputs for SubSystem: '<S155>/If Action Subsystem2'
    }

    // End of If: '<S155>/If'

    // MinMax: '<S110>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S110>/Weighting' incorporates:
    //   Constant: '<S110>/Weight'
    //   MinMax: '<S110>/andorMethod'

    fuzzy_logic_control_B.Merge_b4 = fuzzy_logic_control_P.Weight_Value_k1 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S110>/impMethod' incorporates:
    //   Constant: '<S97>/PMS'
    //   Constant: '<S98>/PML'

    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PML_Value_i[i])
          || rtIsNaN(fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_b[i] = fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((fuzzy_logic_control_B.Merge_b4 <= fuzzy_logic_control_P.PMS_Value_c[i])
          || rtIsNaN(fuzzy_logic_control_P.PMS_Value_c[i])) {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_B.Merge_b4;
      } else {
        fuzzy_logic_control_B.impMethod_b[i + 101] =
          fuzzy_logic_control_P.PMS_Value_c[i];
      }
    }

    // End of MinMax: '<S110>/impMethod'

    // If: '<S158>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.4)) {
      // Outputs for IfAction SubSystem: '<S158>/If Action Subsystem' incorporates:
      //   ActionPort: '<S175>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_j,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_is);

      // End of Outputs for SubSystem: '<S158>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.0) {
      // Outputs for IfAction SubSystem: '<S158>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S176>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_j,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_ku);

      // End of Outputs for SubSystem: '<S158>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.0) {
      // Outputs for IfAction SubSystem: '<S158>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S178>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_j,
        &fuzzy_logic_control_B.IfActionSubsystem3_ff,
        fuzzy_logic_control_P.ZE_a_i, fuzzy_logic_control_P.ZE_b_p);

      // End of Outputs for SubSystem: '<S158>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S158>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S177>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_j,
        &fuzzy_logic_control_B.IfActionSubsystem2_od,
        fuzzy_logic_control_P.ZE_b_p, fuzzy_logic_control_P.ZE_c_i);

      // End of Outputs for SubSystem: '<S158>/If Action Subsystem2'
    }

    // End of If: '<S158>/If'

    // MinMax: '<S117>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Sum1_j) || rtIsNaN
          (fuzzy_logic_control_B.Sum1_j))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_j;
    }

    // Product: '<S117>/Weighting' incorporates:
    //   Constant: '<S117>/Weight'
    //   MinMax: '<S117>/andorMethod'

    Merge_b = fuzzy_logic_control_P.Weight_Value_ka *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S117>/impMethod' incorporates:
    //   Constant: '<S97>/PM'
    //   Constant: '<S98>/PVS'

    for (i = 0; i < 101; i++) {
      if ((Merge_b <= fuzzy_logic_control_P.PVS_Value_g1[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_g1[i])) {
        fuzzy_logic_control_B.impMethod_o[i] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i] =
          fuzzy_logic_control_P.PVS_Value_g1[i];
      }

      if ((Merge_b <= fuzzy_logic_control_P.PM_Value_f[i]) || rtIsNaN
          (fuzzy_logic_control_P.PM_Value_f[i])) {
        fuzzy_logic_control_B.impMethod_o[i + 101] = Merge_b;
      } else {
        fuzzy_logic_control_B.impMethod_o[i + 101] =
          fuzzy_logic_control_P.PM_Value_f[i];
      }
    }

    // End of MinMax: '<S117>/impMethod'

    // If: '<S157>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < -0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 0.7)) {
      // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem' incorporates:
      //   ActionPort: '<S171>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_g,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_i1);

      // End of Outputs for SubSystem: '<S157>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 0.5) {
      // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S172>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_g,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_kb);

      // End of Outputs for SubSystem: '<S157>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 0.5) {
      // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S174>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_g,
        &fuzzy_logic_control_B.IfActionSubsystem3_lz,
        fuzzy_logic_control_P.PS_a_g, fuzzy_logic_control_P.PS_b_j);

      // End of Outputs for SubSystem: '<S157>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S157>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S173>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Weighting_g,
        &fuzzy_logic_control_B.IfActionSubsystem2_fa,
        fuzzy_logic_control_P.PS_b_j, fuzzy_logic_control_P.PS_c_cr);

      // End of Outputs for SubSystem: '<S157>/If Action Subsystem2'
    }

    // End of If: '<S157>/If'

    // MinMax: '<S118>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S118>/Weighting' incorporates:
    //   Constant: '<S118>/Weight'
    //   MinMax: '<S118>/andorMethod'

    Merge_k = fuzzy_logic_control_P.Weight_Value_ft *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S118>/impMethod' incorporates:
    //   Constant: '<S97>/PML'
    //   Constant: '<S98>/PML'

    for (i = 0; i < 101; i++) {
      if ((Merge_k <= fuzzy_logic_control_P.PML_Value_i[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_ch[i] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((Merge_k <= fuzzy_logic_control_P.PML_Value_o[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_o[i])) {
        fuzzy_logic_control_B.impMethod_ch[i + 101] = Merge_k;
      } else {
        fuzzy_logic_control_B.impMethod_ch[i + 101] =
          fuzzy_logic_control_P.PML_Value_o[i];
      }
    }

    // End of MinMax: '<S118>/impMethod'

    // If: '<S156>/If'
    if ((fuzzy_logic_control_B.rtb_Derivative2_m < 0.4) ||
        (fuzzy_logic_control_B.rtb_Derivative2_m > 1.0)) {
      // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
      //   ActionPort: '<S167>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_cz,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_e5);

      // End of Outputs for SubSystem: '<S156>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m == 1.0) {
      // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S168>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_cz,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_iw);

      // End of Outputs for SubSystem: '<S156>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.rtb_Derivative2_m < 1.0) {
      // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S170>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_cz,
        &fuzzy_logic_control_B.IfActionSubsystem3_ey,
        fuzzy_logic_control_P.PL_a_k, fuzzy_logic_control_P.PL_b_g);

      // End of Outputs for SubSystem: '<S156>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S156>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S169>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.rtb_Derivative2_m,
        &fuzzy_logic_control_B.Sum1_cz,
        &fuzzy_logic_control_B.IfActionSubsystem2_oh,
        fuzzy_logic_control_P.PL_b_g, fuzzy_logic_control_P.PL_c_as);

      // End of Outputs for SubSystem: '<S156>/If Action Subsystem2'
    }

    // End of If: '<S156>/If'

    // MinMax: '<S119>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = Merge;
    if (!((Merge <= fuzzy_logic_control_B.Sum1_cz) || rtIsNaN
          (fuzzy_logic_control_B.Sum1_cz))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_cz;
    }

    // Product: '<S119>/Weighting' incorporates:
    //   Constant: '<S119>/Weight'
    //   MinMax: '<S119>/andorMethod'

    Merge_j = fuzzy_logic_control_P.Weight_Value_io4 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S119>/impMethod' incorporates:
    //   Constant: '<S97>/PVL'
    //   Constant: '<S98>/PVL'

    for (i = 0; i < 101; i++) {
      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_fi[i] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((Merge_j <= fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_fi[i + 101] = Merge_j;
      } else {
        fuzzy_logic_control_B.impMethod_fi[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }
    }

    // End of MinMax: '<S119>/impMethod'

    // If: '<S130>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionZ < -0.7) ||
        (fuzzy_logic_control_B.In1.ErrorPositionZ > 0.4)) {
      // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem' incorporates:
      //   ActionPort: '<S138>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_o,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_h3);

      // End of Outputs for SubSystem: '<S130>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ == -0.5) {
      // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S139>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_o,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_j4);

      // End of Outputs for SubSystem: '<S130>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ < -0.5) {
      // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S141>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_o,
        &fuzzy_logic_control_B.IfActionSubsystem3_i,
        fuzzy_logic_control_P.NS_a_g, fuzzy_logic_control_P.NS_b_f);

      // End of Outputs for SubSystem: '<S130>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S140>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_o,
        &fuzzy_logic_control_B.IfActionSubsystem2_p,
        fuzzy_logic_control_P.NS_b_f, fuzzy_logic_control_P.NS_c_nb);

      // End of Outputs for SubSystem: '<S130>/If Action Subsystem2'
    }

    // End of If: '<S130>/If'

    // MinMax: '<S120>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S120>/Weighting' incorporates:
    //   Constant: '<S120>/Weight'
    //   MinMax: '<S120>/andorMethod'

    fuzzy_logic_control_B.Merge_cg = fuzzy_logic_control_P.Weight_Value_id *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S121>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S121>/Weighting' incorporates:
    //   Constant: '<S121>/Weight'
    //   MinMax: '<S121>/andorMethod'

    fuzzy_logic_control_B.Weighting_hg = fuzzy_logic_control_P.Weight_Value_oy *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S122>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <= fuzzy_logic_control_B.Sum1_j) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_j))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_j;
    }

    // Product: '<S122>/Weighting' incorporates:
    //   Constant: '<S122>/Weight'
    //   MinMax: '<S122>/andorMethod'

    fuzzy_logic_control_B.rtb_Derivative2_m =
      fuzzy_logic_control_P.Weight_Value_a1 * fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S123>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S123>/Weighting' incorporates:
    //   Constant: '<S123>/Weight'
    //   MinMax: '<S123>/andorMethod'

    Merge = fuzzy_logic_control_P.Weight_Value_co *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S100>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_o;
    if (!((fuzzy_logic_control_B.Weighting_o <= fuzzy_logic_control_B.Sum1_cz) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_cz))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_cz;
    }

    // Product: '<S100>/Weighting' incorporates:
    //   Constant: '<S100>/Weight'
    //   MinMax: '<S100>/andorMethod'

    fuzzy_logic_control_B.Weighting_hb = fuzzy_logic_control_P.Weight_Value_f1 *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S120>/impMethod' incorporates:
      //   Constant: '<S97>/PML'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_P.PVL_Value_g[i])
          || rtIsNaN(fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_h[i] = fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Merge_cg <= fuzzy_logic_control_P.PML_Value_o[i])
          || rtIsNaN(fuzzy_logic_control_P.PML_Value_o[i])) {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_B.Merge_cg;
      } else {
        fuzzy_logic_control_B.impMethod_h[i + 101] =
          fuzzy_logic_control_P.PML_Value_o[i];
      }

      // End of MinMax: '<S120>/impMethod'

      // MinMax: '<S121>/impMethod' incorporates:
      //   Constant: '<S97>/PML'
      //   Constant: '<S98>/PML'

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PML_Value_i[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hg <=
           fuzzy_logic_control_P.PML_Value_o[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_o[i])) {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_B.Weighting_hg;
      } else {
        fuzzy_logic_control_B.impMethod_nj[i + 101] =
          fuzzy_logic_control_P.PML_Value_o[i];
      }

      // End of MinMax: '<S121>/impMethod'

      // MinMax: '<S122>/impMethod' incorporates:
      //   Constant: '<S97>/PL'
      //   Constant: '<S98>/PVS'

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PVS_Value_g1[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVS_Value_g1[i])) {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i] =
          fuzzy_logic_control_P.PVS_Value_g1[i];
      }

      if ((fuzzy_logic_control_B.rtb_Derivative2_m <=
           fuzzy_logic_control_P.PL_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_B.rtb_Derivative2_m;
      } else {
        fuzzy_logic_control_B.impMethod_jt[i + 101] =
          fuzzy_logic_control_P.PL_Value_a[i];
      }

      // End of MinMax: '<S122>/impMethod'

      // MinMax: '<S123>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PML'

      if ((Merge <= fuzzy_logic_control_P.PML_Value_i[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_j[i] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((Merge <= fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_j[i + 101] = Merge;
      } else {
        fuzzy_logic_control_B.impMethod_j[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S123>/impMethod'

      // MinMax: '<S100>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_hb <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_B.Weighting_hb;
      } else {
        fuzzy_logic_control_B.impMethod_ah[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S100>/impMethod'
    }

    // If: '<S133>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionZ < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionZ > 0.4)) {
      // Outputs for IfAction SubSystem: '<S133>/If Action Subsystem' incorporates:
      //   ActionPort: '<S150>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_k,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_kg);

      // End of Outputs for SubSystem: '<S133>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ == 0.0) {
      // Outputs for IfAction SubSystem: '<S133>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S151>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_k,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_c3);

      // End of Outputs for SubSystem: '<S133>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ < 0.0) {
      // Outputs for IfAction SubSystem: '<S133>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S153>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_k,
        &fuzzy_logic_control_B.IfActionSubsystem3_a,
        fuzzy_logic_control_P.ZE_a_j, fuzzy_logic_control_P.ZE_b_a);

      // End of Outputs for SubSystem: '<S133>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S133>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S152>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_k,
        &fuzzy_logic_control_B.IfActionSubsystem2_o0,
        fuzzy_logic_control_P.ZE_b_a, fuzzy_logic_control_P.ZE_c_p);

      // End of Outputs for SubSystem: '<S133>/If Action Subsystem2'
    }

    // End of If: '<S133>/If'

    // MinMax: '<S101>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S101>/Weighting' incorporates:
    //   Constant: '<S101>/Weight'
    //   MinMax: '<S101>/andorMethod'

    fuzzy_logic_control_B.Weighting_ik = fuzzy_logic_control_P.Weight_Value_nc *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S102>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S102>/Weighting' incorporates:
    //   Constant: '<S102>/Weight'
    //   MinMax: '<S102>/andorMethod'

    fuzzy_logic_control_B.Weighting_n = fuzzy_logic_control_P.Weight_Value_ci *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S103>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <= fuzzy_logic_control_B.Sum1_j) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_j))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_j;
    }

    // Product: '<S103>/Weighting' incorporates:
    //   Constant: '<S103>/Weight'
    //   MinMax: '<S103>/andorMethod'

    fuzzy_logic_control_B.Weighting_ol = fuzzy_logic_control_P.Weight_Value_pm *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S104>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S104>/Weighting' incorporates:
    //   Constant: '<S104>/Weight'
    //   MinMax: '<S104>/andorMethod'

    fuzzy_logic_control_B.Weighting_o = fuzzy_logic_control_P.Weight_Value_es *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S105>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_k;
    if (!((fuzzy_logic_control_B.Weighting_k <= fuzzy_logic_control_B.Sum1_cz) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_cz))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_cz;
    }

    // Product: '<S105>/Weighting' incorporates:
    //   Constant: '<S105>/Weight'
    //   MinMax: '<S105>/andorMethod'

    fuzzy_logic_control_B.Weighting_c = fuzzy_logic_control_P.Weight_Value_gu *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S101>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ik <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_B.Weighting_ik;
      } else {
        fuzzy_logic_control_B.impMethod_iw[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S101>/impMethod'

      // MinMax: '<S102>/impMethod' incorporates:
      //   Constant: '<S97>/PL'
      //   Constant: '<S98>/PML'

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PML_Value_i[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_f[i] = fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((fuzzy_logic_control_B.Weighting_n <=
           fuzzy_logic_control_P.PL_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_B.Weighting_n;
      } else {
        fuzzy_logic_control_B.impMethod_f[i + 101] =
          fuzzy_logic_control_P.PL_Value_a[i];
      }

      // End of MinMax: '<S102>/impMethod'

      // MinMax: '<S103>/impMethod' incorporates:
      //   Constant: '<S97>/PL'
      //   Constant: '<S98>/PS'

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PS_Value_k[i]) || rtIsNaN
          (fuzzy_logic_control_P.PS_Value_k[i])) {
        fuzzy_logic_control_B.impMethod_d[i] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i] =
          fuzzy_logic_control_P.PS_Value_k[i];
      }

      if ((fuzzy_logic_control_B.Weighting_ol <=
           fuzzy_logic_control_P.PL_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_B.Weighting_ol;
      } else {
        fuzzy_logic_control_B.impMethod_d[i + 101] =
          fuzzy_logic_control_P.PL_Value_a[i];
      }

      // End of MinMax: '<S103>/impMethod'

      // MinMax: '<S104>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PML'

      if ((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_P.PML_Value_i[i]) || rtIsNaN
          (fuzzy_logic_control_P.PML_Value_i[i])) {
        fuzzy_logic_control_B.impMethod_m[i] = fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i] =
          fuzzy_logic_control_P.PML_Value_i[i];
      }

      if ((fuzzy_logic_control_B.Weighting_o <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_B.Weighting_o;
      } else {
        fuzzy_logic_control_B.impMethod_m[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S104>/impMethod'

      // MinMax: '<S105>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_c <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_B.Weighting_c;
      } else {
        fuzzy_logic_control_B.impMethod_kx[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S105>/impMethod'
    }

    // If: '<S132>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionZ < -0.4) ||
        (fuzzy_logic_control_B.In1.ErrorPositionZ > 0.7)) {
      // Outputs for IfAction SubSystem: '<S132>/If Action Subsystem' incorporates:
      //   ActionPort: '<S146>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_i,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_lc);

      // End of Outputs for SubSystem: '<S132>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ == 0.5) {
      // Outputs for IfAction SubSystem: '<S132>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S147>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Weighting_i,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_jtp);

      // End of Outputs for SubSystem: '<S132>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ < 0.5) {
      // Outputs for IfAction SubSystem: '<S132>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S149>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_i,
        &fuzzy_logic_control_B.IfActionSubsystem3_nm,
        fuzzy_logic_control_P.PS_a_o, fuzzy_logic_control_P.PS_b_d);

      // End of Outputs for SubSystem: '<S132>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S132>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S148>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Weighting_i,
        &fuzzy_logic_control_B.IfActionSubsystem2_hl,
        fuzzy_logic_control_P.PS_b_d, fuzzy_logic_control_P.PS_c_o);

      // End of Outputs for SubSystem: '<S132>/If Action Subsystem2'
    }

    // End of If: '<S132>/If'

    // MinMax: '<S106>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_h) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S106>/Weighting' incorporates:
    //   Constant: '<S106>/Weight'
    //   MinMax: '<S106>/andorMethod'

    fuzzy_logic_control_B.Weighting_b = fuzzy_logic_control_P.Weight_Value_g5 *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S107>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_a) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S107>/Weighting' incorporates:
    //   Constant: '<S107>/Weight'
    //   MinMax: '<S107>/andorMethod'

    fuzzy_logic_control_B.Weighting_k1 = fuzzy_logic_control_P.Weight_Value_ct *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S108>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <= fuzzy_logic_control_B.Sum1_j) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_j))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_j;
    }

    // Product: '<S108>/Weighting' incorporates:
    //   Constant: '<S108>/Weight'
    //   MinMax: '<S108>/andorMethod'

    fuzzy_logic_control_B.Weighting_d = fuzzy_logic_control_P.Weight_Value_dx *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S109>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_B.Weighting_g) || rtIsNaN
          (fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S109>/Weighting' incorporates:
    //   Constant: '<S109>/Weight'
    //   MinMax: '<S109>/andorMethod'

    fuzzy_logic_control_B.Weighting_k = fuzzy_logic_control_P.Weight_Value_no *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S111>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_i;
    if (!((fuzzy_logic_control_B.Weighting_i <= fuzzy_logic_control_B.Sum1_cz) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_cz))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_cz;
    }

    // Product: '<S111>/Weighting' incorporates:
    //   Constant: '<S111>/Weight'
    //   MinMax: '<S111>/andorMethod'

    fuzzy_logic_control_B.Weighting_i = fuzzy_logic_control_P.Weight_Value_g1 *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S106>/impMethod' incorporates:
      //   Constant: '<S97>/PL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_k[i] = fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_b <=
           fuzzy_logic_control_P.PL_Value_a[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_a[i])) {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_B.Weighting_b;
      } else {
        fuzzy_logic_control_B.impMethod_k[i + 101] =
          fuzzy_logic_control_P.PL_Value_a[i];
      }

      // End of MinMax: '<S106>/impMethod'

      // MinMax: '<S107>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PL'

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PL_Value_hs[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_hs[i])) {
        fuzzy_logic_control_B.impMethod_a[i] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i] =
          fuzzy_logic_control_P.PL_Value_hs[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k1 <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_B.Weighting_k1;
      } else {
        fuzzy_logic_control_B.impMethod_a[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S107>/impMethod'

      // MinMax: '<S108>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PMS'

      if ((fuzzy_logic_control_B.Weighting_d <=
           fuzzy_logic_control_P.PMS_Value_m[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_m[i])) {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i] =
          fuzzy_logic_control_P.PMS_Value_m[i];
      }

      if ((fuzzy_logic_control_B.Weighting_d <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_B.Weighting_d;
      } else {
        fuzzy_logic_control_B.impMethod_cb[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S108>/impMethod'

      // MinMax: '<S109>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PL'

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PL_Value_hs[i]) || rtIsNaN
          (fuzzy_logic_control_P.PL_Value_hs[i])) {
        fuzzy_logic_control_B.impMethod_n[i] = fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i] =
          fuzzy_logic_control_P.PL_Value_hs[i];
      }

      if ((fuzzy_logic_control_B.Weighting_k <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_B.Weighting_k;
      } else {
        fuzzy_logic_control_B.impMethod_n[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S109>/impMethod'

      // MinMax: '<S111>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_i <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_B.Weighting_i;
      } else {
        fuzzy_logic_control_B.impMethod_gt[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S111>/impMethod'
    }

    // If: '<S131>/If'
    if ((fuzzy_logic_control_B.In1.ErrorPositionZ < 0.3788) ||
        (fuzzy_logic_control_B.In1.ErrorPositionZ > 0.9788)) {
      // Outputs for IfAction SubSystem: '<S131>/If Action Subsystem' incorporates:
      //   ActionPort: '<S142>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_c,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem_b2);

      // End of Outputs for SubSystem: '<S131>/If Action Subsystem'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ == 0.9788) {
      // Outputs for IfAction SubSystem: '<S131>/If Action Subsystem1' incorporates:
      //   ActionPort: '<S143>/Action Port'

      fuzzy_logic_c_IfActionSubsystem(&fuzzy_logic_control_B.Sum1_c,
        (P_IfActionSubsystem_fuzzy_log_T *)
        &fuzzy_logic_control_P.IfActionSubsystem1_j2);

      // End of Outputs for SubSystem: '<S131>/If Action Subsystem1'
    } else if (fuzzy_logic_control_B.In1.ErrorPositionZ < 0.9788) {
      // Outputs for IfAction SubSystem: '<S131>/If Action Subsystem3' incorporates:
      //   ActionPort: '<S145>/Action Port'

      fuzzy_logic__IfActionSubsystem3(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Sum1_c,
        &fuzzy_logic_control_B.IfActionSubsystem3_kc,
        fuzzy_logic_control_P.PL_a_ms, fuzzy_logic_control_P.PL_b_e4);

      // End of Outputs for SubSystem: '<S131>/If Action Subsystem3'
    } else {
      // Outputs for IfAction SubSystem: '<S131>/If Action Subsystem2' incorporates:
      //   ActionPort: '<S144>/Action Port'

      fuzzy_logic__IfActionSubsystem2(fuzzy_logic_control_B.In1.ErrorPositionZ,
        &fuzzy_logic_control_B.Sum1_c,
        &fuzzy_logic_control_B.IfActionSubsystem2_fw,
        fuzzy_logic_control_P.PL_b_e4, fuzzy_logic_control_P.PL_c_l);

      // End of Outputs for SubSystem: '<S131>/If Action Subsystem2'
    }

    // End of If: '<S131>/If'

    // MinMax: '<S112>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    if (!((fuzzy_logic_control_B.Sum1_c <= fuzzy_logic_control_B.Weighting_h) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_h))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_h;
    }

    // Product: '<S112>/Weighting' incorporates:
    //   Constant: '<S112>/Weight'
    //   MinMax: '<S112>/andorMethod'

    fuzzy_logic_control_B.Weighting_h = fuzzy_logic_control_P.Weight_Value_hi *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S113>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    if (!((fuzzy_logic_control_B.Sum1_c <= fuzzy_logic_control_B.Weighting_a) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_a))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_a;
    }

    // Product: '<S113>/Weighting' incorporates:
    //   Constant: '<S113>/Weight'
    //   MinMax: '<S113>/andorMethod'

    fuzzy_logic_control_B.Weighting_a = fuzzy_logic_control_P.Weight_Value_gm *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S114>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    if (!((fuzzy_logic_control_B.Sum1_c <= fuzzy_logic_control_B.Sum1_j) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_j))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_j;
    }

    // Product: '<S114>/Weighting' incorporates:
    //   Constant: '<S114>/Weight'
    //   MinMax: '<S114>/andorMethod'

    fuzzy_logic_control_B.Weighting_p = fuzzy_logic_control_P.Weight_Value_eo *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S115>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    if (!((fuzzy_logic_control_B.Sum1_c <= fuzzy_logic_control_B.Weighting_g) ||
          rtIsNaN(fuzzy_logic_control_B.Weighting_g))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Weighting_g;
    }

    // Product: '<S115>/Weighting' incorporates:
    //   Constant: '<S115>/Weight'
    //   MinMax: '<S115>/andorMethod'

    fuzzy_logic_control_B.Weighting_g = fuzzy_logic_control_P.Weight_Value_js *
      fuzzy_logic_control_B.AveragingCOA;

    // MinMax: '<S116>/andorMethod'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_c;
    if (!((fuzzy_logic_control_B.Sum1_c <= fuzzy_logic_control_B.Sum1_cz) ||
          rtIsNaN(fuzzy_logic_control_B.Sum1_cz))) {
      fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.Sum1_cz;
    }

    // Product: '<S116>/Weighting' incorporates:
    //   Constant: '<S116>/Weight'
    //   MinMax: '<S116>/andorMethod'

    fuzzy_logic_control_B.Weighting = fuzzy_logic_control_P.Weight_Value_iz *
      fuzzy_logic_control_B.AveragingCOA;
    for (i = 0; i < 101; i++) {
      // MinMax: '<S112>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_i[i] = fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_h <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_B.Weighting_h;
      } else {
        fuzzy_logic_control_B.impMethod_i[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S112>/impMethod'

      // MinMax: '<S113>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_g[i] = fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_a <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_B.Weighting_a;
      } else {
        fuzzy_logic_control_B.impMethod_g[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S113>/impMethod'

      // MinMax: '<S114>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PMS'

      if ((fuzzy_logic_control_B.Weighting_p <=
           fuzzy_logic_control_P.PMS_Value_m[i]) || rtIsNaN
          (fuzzy_logic_control_P.PMS_Value_m[i])) {
        fuzzy_logic_control_B.impMethod_l[i] = fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i] =
          fuzzy_logic_control_P.PMS_Value_m[i];
      }

      if ((fuzzy_logic_control_B.Weighting_p <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_B.Weighting_p;
      } else {
        fuzzy_logic_control_B.impMethod_l[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S114>/impMethod'

      // MinMax: '<S115>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod_c[i] = fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i] =
          fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting_g <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_B.Weighting_g;
      } else {
        fuzzy_logic_control_B.impMethod_c[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S115>/impMethod'

      // MinMax: '<S116>/impMethod' incorporates:
      //   Constant: '<S97>/PVL'
      //   Constant: '<S98>/PVL'

      if ((fuzzy_logic_control_B.Weighting <=
           fuzzy_logic_control_P.PVL_Value_g[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_g[i])) {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i] = fuzzy_logic_control_P.PVL_Value_g[i];
      }

      if ((fuzzy_logic_control_B.Weighting <=
           fuzzy_logic_control_P.PVL_Value_jw[i]) || rtIsNaN
          (fuzzy_logic_control_P.PVL_Value_jw[i])) {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_B.Weighting;
      } else {
        fuzzy_logic_control_B.impMethod[i + 101] =
          fuzzy_logic_control_P.PVL_Value_jw[i];
      }

      // End of MinMax: '<S116>/impMethod'

      // MinMax: '<S93>/AggMethod1'
      if ((fuzzy_logic_control_B.impMethod_fm[i] >=
           fuzzy_logic_control_B.impMethod_b[i]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_b[i])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fm[i];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_c[i])
            || rtIsNaN(fuzzy_logic_control_B.impMethod_c[i]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod[i]) ||
          rtIsNaN(fuzzy_logic_control_B.impMethod[i])) {
        fuzzy_logic_control_B.AggMethod1[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod1[i] = fuzzy_logic_control_B.impMethod[i];
      }

      // End of MinMax: '<S93>/AggMethod1'
    }

    // Sum: '<S94>/Sum1'
    fuzzy_logic_control_B.AveragingCOA = fuzzy_logic_control_B.AggMethod1[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.AveragingCOA += fuzzy_logic_control_B.AggMethod1[i +
        1];
    }

    // End of Sum: '<S94>/Sum1'

    // If: '<S94>/If'
    if (fuzzy_logic_control_B.AveragingCOA <= 0.0) {
      // Outputs for IfAction SubSystem: '<S94>/Action: One' incorporates:
      //   ActionPort: '<S125>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.AveragingCOA,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne_f);

      // End of Outputs for SubSystem: '<S94>/Action: One'
    }

    // End of If: '<S94>/If'

    // MinMax: '<S93>/AggMethod2'
    for (i = 0; i < 101; i++) {
      if ((fuzzy_logic_control_B.impMethod_fm[i + 101] >=
           fuzzy_logic_control_B.impMethod_b[i + 101]) || rtIsNaN
          (fuzzy_logic_control_B.impMethod_b[i + 101])) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fm[i +
          101];
      } else {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_b[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_o[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_o[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_o[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ch[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ch[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ch[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_fi[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_fi[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_fi[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_h[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_h[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_h[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_nj[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_nj[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_nj[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_jt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_jt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_jt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_j[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_j[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_j[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_ah[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_ah[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_ah[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_iw[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_iw[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_iw[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_f[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_f[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_f[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_d[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_d[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_d[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_m[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_m[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_m[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_kx[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_kx[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_kx[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_k[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_k[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_k[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_a[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_a[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_a[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_cb[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_cb[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_cb[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_n[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_n[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_n[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >=
             fuzzy_logic_control_B.impMethod_gt[i + 101]) || rtIsNaN
            (fuzzy_logic_control_B.impMethod_gt[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_gt[i +
          101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_i[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_i[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_i[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_g[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_g[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_g[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_l[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_l[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_l[i + 101];
      }

      if (!((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod_c[i
             + 101]) || rtIsNaN(fuzzy_logic_control_B.impMethod_c[i + 101]))) {
        fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.impMethod_c[i + 101];
      }

      if ((fuzzy_logic_control_B.Sum1_c >= fuzzy_logic_control_B.impMethod[i +
           101]) || rtIsNaN(fuzzy_logic_control_B.impMethod[i + 101])) {
        fuzzy_logic_control_B.AggMethod2[i] = fuzzy_logic_control_B.Sum1_c;
      } else {
        fuzzy_logic_control_B.AggMethod2[i] = fuzzy_logic_control_B.impMethod[i
          + 101];
      }
    }

    // End of MinMax: '<S93>/AggMethod2'

    // Sum: '<S95>/Sum1'
    fuzzy_logic_control_B.Sum1_c = fuzzy_logic_control_B.AggMethod2[0];
    for (i = 0; i < 100; i++) {
      fuzzy_logic_control_B.Sum1_c += fuzzy_logic_control_B.AggMethod2[i + 1];
    }

    // End of Sum: '<S95>/Sum1'

    // If: '<S95>/If'
    if (fuzzy_logic_control_B.Sum1_c <= 0.0) {
      // Outputs for IfAction SubSystem: '<S95>/Action: One' incorporates:
      //   ActionPort: '<S127>/Action Port'

      fuzzy_logic_control_ActionOne(&fuzzy_logic_control_B.Sum1_c,
        (P_ActionOne_fuzzy_logic_contr_T *)&fuzzy_logic_control_P.ActionOne_ck);

      // End of Outputs for SubSystem: '<S95>/Action: One'
    }

    // End of If: '<S95>/If'

    // Switch: '<S93>/Switch' incorporates:
    //   Constant: '<S93>/MidRange'
    //   Constant: '<S93>/Zero'
    //   Product: '<S95>/Averaging (COA)'
    //   RelationalOperator: '<S93>/Zero Firing Strength?'
    //   Sum: '<S93>/Total Firing Strength'

    if ((real_T)((((((((((((((((((((((((fuzzy_logic_control_B.Merge_n +
        fuzzy_logic_control_B.Merge_b4) + Merge_b) + Merge_k) + Merge_j) +
        fuzzy_logic_control_B.Merge_cg) + fuzzy_logic_control_B.Weighting_hg) +
        fuzzy_logic_control_B.rtb_Derivative2_m) + Merge) +
        fuzzy_logic_control_B.Weighting_hb) + fuzzy_logic_control_B.Weighting_ik)
      + fuzzy_logic_control_B.Weighting_n) + fuzzy_logic_control_B.Weighting_ol)
      + fuzzy_logic_control_B.Weighting_o) + fuzzy_logic_control_B.Weighting_c)
                          + fuzzy_logic_control_B.Weighting_b) +
                         fuzzy_logic_control_B.Weighting_k1) +
                        fuzzy_logic_control_B.Weighting_d) +
                       fuzzy_logic_control_B.Weighting_k) +
                      fuzzy_logic_control_B.Weighting_i) +
                     fuzzy_logic_control_B.Weighting_h) +
                    fuzzy_logic_control_B.Weighting_a) +
                   fuzzy_logic_control_B.Weighting_p) +
                  fuzzy_logic_control_B.Weighting_g) +
                 fuzzy_logic_control_B.Weighting >
                 fuzzy_logic_control_P.Zero_Value_i) >=
        fuzzy_logic_control_P.Switch_Threshold_e) {
      // Product: '<S94>/Product (COA)' incorporates:
      //   Constant: '<S94>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod1[i] *=
          fuzzy_logic_control_P.xdata_Value_d[i];
      }

      // End of Product: '<S94>/Product (COA)'

      // Sum: '<S94>/Sum'
      Merge = fuzzy_logic_control_B.AggMethod1[0];
      for (i = 0; i < 100; i++) {
        Merge += fuzzy_logic_control_B.AggMethod1[i + 1];
      }

      // End of Sum: '<S94>/Sum'

      // Product: '<S94>/Averaging (COA)'
      fuzzy_logic_control_B.AveragingCOA = Merge /
        fuzzy_logic_control_B.AveragingCOA;

      // Product: '<S95>/Product (COA)' incorporates:
      //   Constant: '<S95>/x data'

      for (i = 0; i < 101; i++) {
        fuzzy_logic_control_B.AggMethod2[i] *=
          fuzzy_logic_control_P.xdata_Value_lq[i];
      }

      // End of Product: '<S95>/Product (COA)'

      // Sum: '<S95>/Sum'
      Merge = fuzzy_logic_control_B.AggMethod2[0];
      for (i = 0; i < 100; i++) {
        Merge += fuzzy_logic_control_B.AggMethod2[i + 1];
      }

      // End of Sum: '<S95>/Sum'
      Merge /= fuzzy_logic_control_B.Sum1_c;
    } else {
      fuzzy_logic_control_B.AveragingCOA =
        fuzzy_logic_control_P.MidRange_Value_f[0];
      Merge = fuzzy_logic_control_P.MidRange_Value_f[1];
    }

    // End of Switch: '<S93>/Switch'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    fuzzy_logic_control_B.BusAssignment = fuzzy_logic_control_P.Constant_Value;
    fuzzy_logic_control_B.BusAssignment.KpX = fuzzy_logic_control_B.Merge_d;
    fuzzy_logic_control_B.BusAssignment.KdX = rtb_Switch_idx_1;
    fuzzy_logic_control_B.BusAssignment.KpY = fuzzy_logic_control_B.Sum;
    fuzzy_logic_control_B.BusAssignment.KdY = rtb_Switch_g_idx_1;
    fuzzy_logic_control_B.BusAssignment.KpZ = fuzzy_logic_control_B.AveragingCOA;
    fuzzy_logic_control_B.BusAssignment.KdZ = Merge;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
    //   MATLABSystem: '<S5>/SinkBlock'

    Pub_fuzzy_logic_control_115.publish(&fuzzy_logic_control_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative2'
    if (fuzzy_logic_control_DW.TimeStampA == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampA = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA;
    } else if (fuzzy_logic_control_DW.TimeStampB == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampB = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB;
    } else if (fuzzy_logic_control_DW.TimeStampA <
               fuzzy_logic_control_DW.TimeStampB) {
      fuzzy_logic_control_DW.TimeStampA = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA;
    } else {
      fuzzy_logic_control_DW.TimeStampB = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB;
    }

    *lastU = fuzzy_logic_control_B.In1.ErrorPositionX;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative1'
    if (fuzzy_logic_control_DW.TimeStampA_p == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampA_p = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_j;
    } else if (fuzzy_logic_control_DW.TimeStampB_l == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampB_l = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB_g;
    } else if (fuzzy_logic_control_DW.TimeStampA_p <
               fuzzy_logic_control_DW.TimeStampB_l) {
      fuzzy_logic_control_DW.TimeStampA_p = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_j;
    } else {
      fuzzy_logic_control_DW.TimeStampB_l = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB_g;
    }

    *lastU = fuzzy_logic_control_B.In1.ErrorPositionY;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative'
    if (fuzzy_logic_control_DW.TimeStampA_g == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampA_g = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_c;
    } else if (fuzzy_logic_control_DW.TimeStampB_d == (rtInf)) {
      fuzzy_logic_control_DW.TimeStampB_d = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB_d;
    } else if (fuzzy_logic_control_DW.TimeStampA_g <
               fuzzy_logic_control_DW.TimeStampB_d) {
      fuzzy_logic_control_DW.TimeStampA_g = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeA_c;
    } else {
      fuzzy_logic_control_DW.TimeStampB_d = fuzzy_logic_control_M->Timing.t[0];
      lastU = &fuzzy_logic_control_DW.LastUAtTimeB_d;
    }

    *lastU = fuzzy_logic_control_B.In1.ErrorPositionZ;

    // End of Update for Derivative: '<Root>/Derivative'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  fuzzy_logic_control_M->Timing.t[0] =
    (++fuzzy_logic_control_M->Timing.clockTick0) *
    fuzzy_logic_control_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    fuzzy_logic_control_M->Timing.clockTick1++;
  }
}

// Model initialize function
void fuzzy_logic_control_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)fuzzy_logic_control_M, 0,
                sizeof(RT_MODEL_fuzzy_logic_control_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&fuzzy_logic_control_M->solverInfo,
                          &fuzzy_logic_control_M->Timing.simTimeStep);
    rtsiSetTPtr(&fuzzy_logic_control_M->solverInfo, &rtmGetTPtr
                (fuzzy_logic_control_M));
    rtsiSetStepSizePtr(&fuzzy_logic_control_M->solverInfo,
                       &fuzzy_logic_control_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&fuzzy_logic_control_M->solverInfo,
                          (&rtmGetErrorStatus(fuzzy_logic_control_M)));
    rtsiSetRTModelPtr(&fuzzy_logic_control_M->solverInfo, fuzzy_logic_control_M);
  }

  rtsiSetSimTimeStep(&fuzzy_logic_control_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&fuzzy_logic_control_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(fuzzy_logic_control_M, &fuzzy_logic_control_M->Timing.tArray[0]);
  fuzzy_logic_control_M->Timing.stepSize0 = 0.01;

  // block I/O
  (void) memset(((void *) &fuzzy_logic_control_B), 0,
                sizeof(B_fuzzy_logic_control_T));

  // states (dwork)
  (void) memset((void *)&fuzzy_logic_control_DW, 0,
                sizeof(DW_fuzzy_logic_control_T));

  {
    static const char_T tmp[5] = { '/', 'g', 'a', 'i', 'n' };

    static const char_T tmp_0[6] = { '/', 'e', 'r', 'r', 'o', 'r' };

    char_T tmp_1[6];
    char_T tmp_2[7];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    fuzzy_logic_control_DW.obj_d.isInitialized = 0;
    fuzzy_logic_control_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[6] = '\x00';
    Sub_fuzzy_logic_control_189.createSubscriber(tmp_2,
      fuzzy_logic_con_MessageQueueLen);

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    fuzzy_logic_control_DW.obj.isInitialized = 0;
    fuzzy_logic_control_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[5] = '\x00';
    Pub_fuzzy_logic_control_115.createPublisher(tmp_1,
      fuzzy_logic_con_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    fuzzy_logic_control_DW.TimeStampA = (rtInf);
    fuzzy_logic_control_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    fuzzy_logic_control_DW.TimeStampA_p = (rtInf);
    fuzzy_logic_control_DW.TimeStampB_l = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative'
    fuzzy_logic_control_DW.TimeStampA_g = (rtInf);
    fuzzy_logic_control_DW.TimeStampB_d = (rtInf);

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S265>/Out1'
    fuzzy_logic_control_B.In1 = fuzzy_logic_control_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void fuzzy_logic_control_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S6>/SourceBlock'

  if (fuzzy_logic_control_DW.obj_d.isInitialized == 1) {
    fuzzy_logic_control_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S5>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SinkBlock'

  if (fuzzy_logic_control_DW.obj.isInitialized == 1) {
    fuzzy_logic_control_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
