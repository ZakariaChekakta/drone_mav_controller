//
// File: Trajectory_generation.cpp
//
// Code generated for Simulink model 'Trajectory_generation'.
//
// Model version                  : 1.269
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 12:40:16 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Trajectory_generation.h"
#include "Trajectory_generation_private.h"
#define Trajectory_gene_MessageQueueLen (1)

// Block signals (auto storage)
B_Trajectory_generation_T Trajectory_generation_B;

// Continuous states
X_Trajectory_generation_T Trajectory_generation_X;

// Block states (auto storage)
DW_Trajectory_generation_T Trajectory_generation_DW;

// Real-time model
RT_MODEL_Trajectory_generatio_T Trajectory_generation_M_;
RT_MODEL_Trajectory_generatio_T *const Trajectory_generation_M =
  &Trajectory_generation_M_;

//
// This function updates continuous states using the ODE3 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  Trajectory_generation_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  Trajectory_generation_step();
  Trajectory_generation_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  Trajectory_generation_step();
  Trajectory_generation_derivatives();

  // tnew = t + hA(3);
  // ynew = y + f*hB(:,3);
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

// Model step function
void Trajectory_generation_step(void)
{
  if (rtmIsMajorTimeStep(Trajectory_generation_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&Trajectory_generation_M->solverInfo,
                          ((Trajectory_generation_M->Timing.clockTick0+1)*
      Trajectory_generation_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(Trajectory_generation_M)) {
    Trajectory_generation_M->Timing.t[0] = rtsiGetT
      (&Trajectory_generation_M->solverInfo);
  }

  {
    real_T *lastU;
    boolean_T varargout_1;
    real_T rtb_Derivative5;
    real_T rtb_Integrator1;
    real_T rtb_Product1;
    real_T tmp;

    // Step: '<S6>/Step11'
    rtb_Integrator1 = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step1'
    Trajectory_generation_B.currentTime = Trajectory_generation_M->Timing.t[0];

    // Clock: '<S6>/Clock1'
    rtb_Derivative5 = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step3'
    Trajectory_generation_B.currentTime_c = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step1'
    if (Trajectory_generation_B.currentTime < Trajectory_generation_P.Step1_Time)
    {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step1_Y0;
    } else {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step1_YFinal;
    }

    // Step: '<S6>/Step3'
    if (Trajectory_generation_B.currentTime_c <
        Trajectory_generation_P.Step3_Time) {
      Trajectory_generation_B.currentTime_c = Trajectory_generation_P.Step3_Y0;
    } else {
      Trajectory_generation_B.currentTime_c =
        Trajectory_generation_P.Step3_YFinal;
    }

    // Product: '<S6>/Product1' incorporates:
    //   Fcn: '<S6>/Fcn'

    rtb_Product1 = rt_powd_snf(5.0, rtb_Derivative5 - 5.0) * 2.0 / (((5.0 -
      rtb_Derivative5) + 5.0) + rt_powd_snf(5.0, rtb_Derivative5 - 5.0)) *
      Trajectory_generation_B.currentTime *
      Trajectory_generation_B.currentTime_c;

    // Step: '<S6>/Step6'
    Trajectory_generation_B.currentTime = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step7'
    Trajectory_generation_B.currentTime_c = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step4'
    Trajectory_generation_B.currentTime_k = Trajectory_generation_M->Timing.t[0];

    // Sum: '<S6>/Add1' incorporates:
    //   Constant: '<S6>/Constant4'

    rtb_Derivative5 += Trajectory_generation_P.Constant4_Value;

    // Step: '<S6>/Step5'
    Trajectory_generation_B.currentTime_cx = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step12'
    Trajectory_generation_B.currentTime_b = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step13'
    Trajectory_generation_B.currentTime_p = Trajectory_generation_M->Timing.t[0];

    // Step: '<S6>/Step10'
    if (Trajectory_generation_M->Timing.t[0] <
        Trajectory_generation_P.Step10_Time) {
      tmp = Trajectory_generation_P.Step10_Y0;
    } else {
      tmp = Trajectory_generation_P.Step10_YFinal;
    }

    // End of Step: '<S6>/Step10'

    // Step: '<S6>/Step11'
    if (rtb_Integrator1 < Trajectory_generation_P.Step11_Time) {
      rtb_Integrator1 = Trajectory_generation_P.Step11_Y0;
    } else {
      rtb_Integrator1 = Trajectory_generation_P.Step11_YFinal;
    }

    // Step: '<S6>/Step6'
    if (Trajectory_generation_B.currentTime < Trajectory_generation_P.Step6_Time)
    {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step6_Y0;
    } else {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step6_YFinal;
    }

    // Step: '<S6>/Step7'
    if (Trajectory_generation_B.currentTime_c <
        Trajectory_generation_P.Step7_Time) {
      Trajectory_generation_B.currentTime_c = Trajectory_generation_P.Step7_Y0;
    } else {
      Trajectory_generation_B.currentTime_c =
        Trajectory_generation_P.Step7_YFinal;
    }

    // Step: '<S6>/Step4'
    if (Trajectory_generation_B.currentTime_k <
        Trajectory_generation_P.Step4_Time) {
      Trajectory_generation_B.currentTime_k = Trajectory_generation_P.Step4_Y0;
    } else {
      Trajectory_generation_B.currentTime_k =
        Trajectory_generation_P.Step4_YFinal;
    }

    // Step: '<S6>/Step5'
    if (Trajectory_generation_B.currentTime_cx <
        Trajectory_generation_P.Step5_Time) {
      Trajectory_generation_B.currentTime_cx = Trajectory_generation_P.Step5_Y0;
    } else {
      Trajectory_generation_B.currentTime_cx =
        Trajectory_generation_P.Step5_YFinal;
    }

    // Step: '<S6>/Step12'
    if (Trajectory_generation_B.currentTime_b <
        Trajectory_generation_P.Step12_Time) {
      Trajectory_generation_B.currentTime_b = Trajectory_generation_P.Step12_Y0;
    } else {
      Trajectory_generation_B.currentTime_b =
        Trajectory_generation_P.Step12_YFinal;
    }

    // Step: '<S6>/Step13'
    if (Trajectory_generation_B.currentTime_p <
        Trajectory_generation_P.Step13_Time) {
      Trajectory_generation_B.currentTime_p = Trajectory_generation_P.Step13_Y0;
    } else {
      Trajectory_generation_B.currentTime_p =
        Trajectory_generation_P.Step13_YFinal;
    }

    // Sum: '<S6>/Add2' incorporates:
    //   Constant: '<S6>/Constant1'
    //   Constant: '<S6>/Constant2'
    //   Constant: '<S6>/Constant3'
    //   Fcn: '<S6>/Fcn2'
    //   Product: '<S6>/Product2'
    //   Product: '<S6>/Product3'
    //   Product: '<S6>/Product5'
    //   Product: '<S6>/Product6'

    Trajectory_generation_B.Add2 = ((2.0 - rt_powd_snf(5.0, rtb_Derivative5 -
      35.0) * 2.0 / (((5.0 - rtb_Derivative5) + 35.0) + rt_powd_snf(5.0,
      rtb_Derivative5 - 35.0))) * Trajectory_generation_B.currentTime_k *
      Trajectory_generation_B.currentTime_cx + ((tmp *
      Trajectory_generation_P.Constant2_Value * rtb_Integrator1 + rtb_Product1)
      + Trajectory_generation_B.currentTime *
      Trajectory_generation_P.Constant1_Value *
      Trajectory_generation_B.currentTime_c)) +
      Trajectory_generation_B.currentTime_b *
      Trajectory_generation_P.Constant3_Value *
      Trajectory_generation_B.currentTime_p;

    // Sum: '<S4>/Add1' incorporates:
    //   Clock: '<S4>/Clock'
    //   Constant: '<S4>/Constant3'

    rtb_Product1 = Trajectory_generation_P.Constant3_Value_i +
      Trajectory_generation_M->Timing.t[0];

    // Step: '<S4>/Step1'
    rtb_Integrator1 = Trajectory_generation_M->Timing.t[0];

    // Step: '<S4>/Step4'
    Trajectory_generation_B.currentTime = Trajectory_generation_M->Timing.t[0];

    // Step: '<S4>/Step5'
    Trajectory_generation_B.currentTime_c = Trajectory_generation_M->Timing.t[0];

    // Step: '<S4>/Step'
    if (Trajectory_generation_M->Timing.t[0] < Trajectory_generation_P.Step_Time)
    {
      tmp = Trajectory_generation_P.Step_Y0;
    } else {
      tmp = Trajectory_generation_P.Step_YFinal;
    }

    // End of Step: '<S4>/Step'

    // Step: '<S4>/Step1'
    if (rtb_Integrator1 < Trajectory_generation_P.Step1_Time_m) {
      rtb_Integrator1 = Trajectory_generation_P.Step1_Y0_f;
    } else {
      rtb_Integrator1 = Trajectory_generation_P.Step1_YFinal_j;
    }

    // Step: '<S4>/Step4'
    if (Trajectory_generation_B.currentTime <
        Trajectory_generation_P.Step4_Time_m) {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step4_Y0_h;
    } else {
      Trajectory_generation_B.currentTime =
        Trajectory_generation_P.Step4_YFinal_j;
    }

    // Step: '<S4>/Step5'
    if (Trajectory_generation_B.currentTime_c <
        Trajectory_generation_P.Step5_Time_j) {
      Trajectory_generation_B.currentTime_c = Trajectory_generation_P.Step5_Y0_d;
    } else {
      Trajectory_generation_B.currentTime_c =
        Trajectory_generation_P.Step5_YFinal_c;
    }

    // Sum: '<S4>/Add' incorporates:
    //   Fcn: '<S4>/Fcn'
    //   Fcn: '<S4>/Fcn2'
    //   Product: '<S4>/Product'
    //   Product: '<S4>/Product2'

    Trajectory_generation_B.Add = (2.0 - rt_powd_snf(5.0, rtb_Product1 - 25.0) *
      2.0 / (((5.0 - rtb_Product1) + 25.0) + rt_powd_snf(5.0, rtb_Product1 -
      25.0))) * Trajectory_generation_B.currentTime *
      Trajectory_generation_B.currentTime_c + rt_powd_snf(5.0, rtb_Product1 -
      5.0) * 2.0 / (((5.0 - rtb_Product1) + 5.0) + rt_powd_snf(5.0, rtb_Product1
      - 5.0)) * tmp * rtb_Integrator1;

    // Sum: '<S5>/Add1' incorporates:
    //   Clock: '<S5>/Clock'
    //   Constant: '<S5>/Constant3'

    rtb_Product1 = Trajectory_generation_P.Constant3_Value_l +
      Trajectory_generation_M->Timing.t[0];

    // Step: '<S5>/Step1'
    rtb_Integrator1 = Trajectory_generation_M->Timing.t[0];

    // Step: '<S5>/Step4'
    Trajectory_generation_B.currentTime = Trajectory_generation_M->Timing.t[0];

    // Step: '<S5>/Step5'
    Trajectory_generation_B.currentTime_c = Trajectory_generation_M->Timing.t[0];

    // Step: '<S5>/Step'
    if (Trajectory_generation_M->Timing.t[0] <
        Trajectory_generation_P.Step_Time_j) {
      tmp = Trajectory_generation_P.Step_Y0_h;
    } else {
      tmp = Trajectory_generation_P.Step_YFinal_k;
    }

    // End of Step: '<S5>/Step'

    // Step: '<S5>/Step1'
    if (rtb_Integrator1 < Trajectory_generation_P.Step1_Time_c) {
      rtb_Integrator1 = Trajectory_generation_P.Step1_Y0_k;
    } else {
      rtb_Integrator1 = Trajectory_generation_P.Step1_YFinal_f;
    }

    // Step: '<S5>/Step4'
    if (Trajectory_generation_B.currentTime <
        Trajectory_generation_P.Step4_Time_b) {
      Trajectory_generation_B.currentTime = Trajectory_generation_P.Step4_Y0_b;
    } else {
      Trajectory_generation_B.currentTime =
        Trajectory_generation_P.Step4_YFinal_b;
    }

    // Step: '<S5>/Step5'
    if (Trajectory_generation_B.currentTime_c <
        Trajectory_generation_P.Step5_Time_d) {
      Trajectory_generation_B.currentTime_c = Trajectory_generation_P.Step5_Y0_m;
    } else {
      Trajectory_generation_B.currentTime_c =
        Trajectory_generation_P.Step5_YFinal_g;
    }

    // Sum: '<S5>/Add' incorporates:
    //   Fcn: '<S5>/Fcn'
    //   Fcn: '<S5>/Fcn2'
    //   Product: '<S5>/Product'
    //   Product: '<S5>/Product2'

    Trajectory_generation_B.Add_e = (2.0 - rt_powd_snf(5.0, rtb_Product1 - 30.0)
      * 2.0 / (((5.0 - rtb_Product1) + 30.0) + rt_powd_snf(5.0, rtb_Product1 -
      30.0))) * Trajectory_generation_B.currentTime *
      Trajectory_generation_B.currentTime_c + rt_powd_snf(5.0, rtb_Product1 -
      10.0) * 2.0 / (((5.0 - rtb_Product1) + 10.0) + rt_powd_snf(5.0,
      rtb_Product1 - 10.0)) * tmp * rtb_Integrator1;

    // Derivative: '<Root>/Derivative'
    if ((Trajectory_generation_DW.TimeStampA >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB >=
         Trajectory_generation_M->Timing.t[0])) {
      Trajectory_generation_B.Derivative = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA;
      lastU = &Trajectory_generation_DW.LastUAtTimeA;
      if (Trajectory_generation_DW.TimeStampA <
          Trajectory_generation_DW.TimeStampB) {
        if (Trajectory_generation_DW.TimeStampB <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB;
          lastU = &Trajectory_generation_DW.LastUAtTimeB;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB;
          lastU = &Trajectory_generation_DW.LastUAtTimeB;
        }
      }

      Trajectory_generation_B.Derivative = (Trajectory_generation_B.Add2 -
        *lastU) / (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative1'
    if ((Trajectory_generation_DW.TimeStampA_h >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB_h >=
         Trajectory_generation_M->Timing.t[0])) {
      Trajectory_generation_B.Derivative1 = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA_h;
      lastU = &Trajectory_generation_DW.LastUAtTimeA_e;
      if (Trajectory_generation_DW.TimeStampA_h <
          Trajectory_generation_DW.TimeStampB_h) {
        if (Trajectory_generation_DW.TimeStampB_h <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_h;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_d;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA_h >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_h;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_d;
        }
      }

      Trajectory_generation_B.Derivative1 = (Trajectory_generation_B.Add -
        *lastU) / (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((Trajectory_generation_DW.TimeStampA_k >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB_o >=
         Trajectory_generation_M->Timing.t[0])) {
      Trajectory_generation_B.Derivative2 = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA_k;
      lastU = &Trajectory_generation_DW.LastUAtTimeA_f;
      if (Trajectory_generation_DW.TimeStampA_k <
          Trajectory_generation_DW.TimeStampB_o) {
        if (Trajectory_generation_DW.TimeStampB_o <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_o;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_a;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA_k >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_o;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_a;
        }
      }

      Trajectory_generation_B.Derivative2 = (Trajectory_generation_B.Add_e -
        *lastU) / (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Derivative: '<Root>/Derivative3'
    if ((Trajectory_generation_DW.TimeStampA_c >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB_c >=
         Trajectory_generation_M->Timing.t[0])) {
      rtb_Integrator1 = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA_c;
      lastU = &Trajectory_generation_DW.LastUAtTimeA_a;
      if (Trajectory_generation_DW.TimeStampA_c <
          Trajectory_generation_DW.TimeStampB_c) {
        if (Trajectory_generation_DW.TimeStampB_c <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_c;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_k;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA_c >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_c;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_k;
        }
      }

      rtb_Integrator1 = (Trajectory_generation_B.Derivative - *lastU) /
        (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative4'
    if ((Trajectory_generation_DW.TimeStampA_p >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB_a >=
         Trajectory_generation_M->Timing.t[0])) {
      rtb_Product1 = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA_p;
      lastU = &Trajectory_generation_DW.LastUAtTimeA_am;
      if (Trajectory_generation_DW.TimeStampA_p <
          Trajectory_generation_DW.TimeStampB_a) {
        if (Trajectory_generation_DW.TimeStampB_a <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_a;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_dm;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA_p >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_a;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_dm;
        }
      }

      rtb_Product1 = (Trajectory_generation_B.Derivative1 - *lastU) /
        (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative5'
    if ((Trajectory_generation_DW.TimeStampA_l >=
         Trajectory_generation_M->Timing.t[0]) &&
        (Trajectory_generation_DW.TimeStampB_ht >=
         Trajectory_generation_M->Timing.t[0])) {
      rtb_Derivative5 = 0.0;
    } else {
      rtb_Derivative5 = Trajectory_generation_DW.TimeStampA_l;
      lastU = &Trajectory_generation_DW.LastUAtTimeA_o;
      if (Trajectory_generation_DW.TimeStampA_l <
          Trajectory_generation_DW.TimeStampB_ht) {
        if (Trajectory_generation_DW.TimeStampB_ht <
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_ht;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_l;
        }
      } else {
        if (Trajectory_generation_DW.TimeStampA_l >=
            Trajectory_generation_M->Timing.t[0]) {
          rtb_Derivative5 = Trajectory_generation_DW.TimeStampB_ht;
          lastU = &Trajectory_generation_DW.LastUAtTimeB_l;
        }
      }

      rtb_Derivative5 = (Trajectory_generation_B.Derivative2 - *lastU) /
        (Trajectory_generation_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative5'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    Trajectory_generation_B.BusAssignment =
      Trajectory_generation_P.Constant_Value;
    Trajectory_generation_B.BusAssignment.PositionDesired.Pose.Position.Z =
      Trajectory_generation_B.Add2;
    Trajectory_generation_B.BusAssignment.PositionDesired.Pose.Position.X =
      Trajectory_generation_B.Add;
    Trajectory_generation_B.BusAssignment.PositionDesired.Pose.Position.Y =
      Trajectory_generation_B.Add_e;
    Trajectory_generation_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      Trajectory_generation_B.Derivative;
    Trajectory_generation_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      Trajectory_generation_B.Derivative1;
    Trajectory_generation_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      Trajectory_generation_B.Derivative2;
    Trajectory_generation_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Integrator1;
    Trajectory_generation_B.BusAssignment.AccelerationDesired.Accel.Linear.X =
      rtb_Product1;
    Trajectory_generation_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Derivative5;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_Trajectory_generation_157.publish(&Trajectory_generation_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'

    // BusAssignment: '<S3>/Bus Assignment1' incorporates:
    //   Integrator: '<S3>/Integrator'

    Trajectory_generation_B.BusAssignment1.Data =
      Trajectory_generation_X.Integrator_CSTATE;

    // Outputs for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
    //   MATLABSystem: '<S9>/SinkBlock'

    Pub_Trajectory_generation_726.publish
      (&Trajectory_generation_B.BusAssignment1);

    // End of Outputs for SubSystem: '<S3>/Publish1'
    if (rtmIsMajorTimeStep(Trajectory_generation_M)) {
      // Outputs for Atomic SubSystem: '<S3>/Subscribe'
      // Start for MATLABSystem: '<S11>/SourceBlock' incorporates:
      //   Inport: '<S13>/In1'
      //   MATLABSystem: '<S11>/SourceBlock'

      varargout_1 = Sub_Trajectory_generation_728.getLatestMessage
        (&Trajectory_generation_B.varargout_2_m);

      // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S13>/Enable'

      if (varargout_1) {
        Trajectory_generation_B.In1_g = Trajectory_generation_B.varargout_2_m;
      }

      // End of Start for MATLABSystem: '<S11>/SourceBlock'
      // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<S3>/Subscribe'

      // Sum: '<S3>/Add' incorporates:
      //   Math: '<S3>/Math Function'
      //   Math: '<S3>/Math Function1'
      //   Math: '<S3>/Math Function2'

      Trajectory_generation_B.Add_a =
        (Trajectory_generation_B.In1_g.ErrorPositionX *
         Trajectory_generation_B.In1_g.ErrorPositionX +
         Trajectory_generation_B.In1_g.ErrorPositionY *
         Trajectory_generation_B.In1_g.ErrorPositionY) +
        Trajectory_generation_B.In1_g.ErrorPositionZ *
        Trajectory_generation_B.In1_g.ErrorPositionZ;
    }

    // BusAssignment: '<S3>/Bus Assignment2' incorporates:
    //   Integrator: '<S3>/Integrator1'

    Trajectory_generation_B.BusAssignment2.Data =
      Trajectory_generation_X.Integrator1_CSTATE;

    // Outputs for Atomic SubSystem: '<S3>/Publish2'
    // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
    //   MATLABSystem: '<S10>/SinkBlock'

    Pub_Trajectory_generation_727.publish
      (&Trajectory_generation_B.BusAssignment2);

    // End of Outputs for SubSystem: '<S3>/Publish2'
    if (rtmIsMajorTimeStep(Trajectory_generation_M)) {
      // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
      // Start for MATLABSystem: '<S12>/SourceBlock' incorporates:
      //   Inport: '<S14>/In1'
      //   MATLABSystem: '<S12>/SourceBlock'

      varargout_1 = Sub_Trajectory_generation_729.getLatestMessage
        (&Trajectory_generation_B.varargout_2);

      // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S14>/Enable'

      if (varargout_1) {
        Trajectory_generation_B.In1 = Trajectory_generation_B.varargout_2;
      }

      // End of Start for MATLABSystem: '<S12>/SourceBlock'
      // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<S3>/Subscribe1'

      // Math: '<S3>/Math Function3'
      Trajectory_generation_B.MathFunction3 =
        Trajectory_generation_B.In1.Thrust.Z *
        Trajectory_generation_B.In1.Thrust.Z;
    }
  }

  if (rtmIsMajorTimeStep(Trajectory_generation_M)) {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (Trajectory_generation_DW.TimeStampA == (rtInf)) {
      Trajectory_generation_DW.TimeStampA = Trajectory_generation_M->Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA;
    } else if (Trajectory_generation_DW.TimeStampB == (rtInf)) {
      Trajectory_generation_DW.TimeStampB = Trajectory_generation_M->Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB;
    } else if (Trajectory_generation_DW.TimeStampA <
               Trajectory_generation_DW.TimeStampB) {
      Trajectory_generation_DW.TimeStampA = Trajectory_generation_M->Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA;
    } else {
      Trajectory_generation_DW.TimeStampB = Trajectory_generation_M->Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB;
    }

    *lastU = Trajectory_generation_B.Add2;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative1'
    if (Trajectory_generation_DW.TimeStampA_h == (rtInf)) {
      Trajectory_generation_DW.TimeStampA_h = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_e;
    } else if (Trajectory_generation_DW.TimeStampB_h == (rtInf)) {
      Trajectory_generation_DW.TimeStampB_h = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_d;
    } else if (Trajectory_generation_DW.TimeStampA_h <
               Trajectory_generation_DW.TimeStampB_h) {
      Trajectory_generation_DW.TimeStampA_h = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_e;
    } else {
      Trajectory_generation_DW.TimeStampB_h = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_d;
    }

    *lastU = Trajectory_generation_B.Add;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (Trajectory_generation_DW.TimeStampA_k == (rtInf)) {
      Trajectory_generation_DW.TimeStampA_k = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_f;
    } else if (Trajectory_generation_DW.TimeStampB_o == (rtInf)) {
      Trajectory_generation_DW.TimeStampB_o = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_a;
    } else if (Trajectory_generation_DW.TimeStampA_k <
               Trajectory_generation_DW.TimeStampB_o) {
      Trajectory_generation_DW.TimeStampA_k = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_f;
    } else {
      Trajectory_generation_DW.TimeStampB_o = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_a;
    }

    *lastU = Trajectory_generation_B.Add_e;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (Trajectory_generation_DW.TimeStampA_c == (rtInf)) {
      Trajectory_generation_DW.TimeStampA_c = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_a;
    } else if (Trajectory_generation_DW.TimeStampB_c == (rtInf)) {
      Trajectory_generation_DW.TimeStampB_c = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_k;
    } else if (Trajectory_generation_DW.TimeStampA_c <
               Trajectory_generation_DW.TimeStampB_c) {
      Trajectory_generation_DW.TimeStampA_c = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_a;
    } else {
      Trajectory_generation_DW.TimeStampB_c = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_k;
    }

    *lastU = Trajectory_generation_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative4'
    if (Trajectory_generation_DW.TimeStampA_p == (rtInf)) {
      Trajectory_generation_DW.TimeStampA_p = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_am;
    } else if (Trajectory_generation_DW.TimeStampB_a == (rtInf)) {
      Trajectory_generation_DW.TimeStampB_a = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_dm;
    } else if (Trajectory_generation_DW.TimeStampA_p <
               Trajectory_generation_DW.TimeStampB_a) {
      Trajectory_generation_DW.TimeStampA_p = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_am;
    } else {
      Trajectory_generation_DW.TimeStampB_a = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_dm;
    }

    *lastU = Trajectory_generation_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative5'
    if (Trajectory_generation_DW.TimeStampA_l == (rtInf)) {
      Trajectory_generation_DW.TimeStampA_l = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_o;
    } else if (Trajectory_generation_DW.TimeStampB_ht == (rtInf)) {
      Trajectory_generation_DW.TimeStampB_ht = Trajectory_generation_M->
        Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_l;
    } else if (Trajectory_generation_DW.TimeStampA_l <
               Trajectory_generation_DW.TimeStampB_ht) {
      Trajectory_generation_DW.TimeStampA_l = Trajectory_generation_M->Timing.t
        [0];
      lastU = &Trajectory_generation_DW.LastUAtTimeA_o;
    } else {
      Trajectory_generation_DW.TimeStampB_ht = Trajectory_generation_M->
        Timing.t[0];
      lastU = &Trajectory_generation_DW.LastUAtTimeB_l;
    }

    *lastU = Trajectory_generation_B.Derivative2;

    // End of Update for Derivative: '<Root>/Derivative5'
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(Trajectory_generation_M)) {
    rt_ertODEUpdateContinuousStates(&Trajectory_generation_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++Trajectory_generation_M->Timing.clockTick0;
    Trajectory_generation_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Trajectory_generation_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.01s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.01, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      Trajectory_generation_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void Trajectory_generation_derivatives(void)
{
  XDot_Trajectory_generation_T *_rtXdot;
  _rtXdot = ((XDot_Trajectory_generation_T *) Trajectory_generation_M->derivs);

  // Derivatives for Integrator: '<S3>/Integrator'
  _rtXdot->Integrator_CSTATE = Trajectory_generation_B.Add_a;

  // Derivatives for Integrator: '<S3>/Integrator1'
  _rtXdot->Integrator1_CSTATE = Trajectory_generation_B.MathFunction3;
}

// Model initialize function
void Trajectory_generation_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)Trajectory_generation_M, 0,
                sizeof(RT_MODEL_Trajectory_generatio_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&Trajectory_generation_M->solverInfo,
                          &Trajectory_generation_M->Timing.simTimeStep);
    rtsiSetTPtr(&Trajectory_generation_M->solverInfo, &rtmGetTPtr
                (Trajectory_generation_M));
    rtsiSetStepSizePtr(&Trajectory_generation_M->solverInfo,
                       &Trajectory_generation_M->Timing.stepSize0);
    rtsiSetdXPtr(&Trajectory_generation_M->solverInfo,
                 &Trajectory_generation_M->derivs);
    rtsiSetContStatesPtr(&Trajectory_generation_M->solverInfo, (real_T **)
                         &Trajectory_generation_M->contStates);
    rtsiSetNumContStatesPtr(&Trajectory_generation_M->solverInfo,
      &Trajectory_generation_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Trajectory_generation_M->solverInfo,
      &Trajectory_generation_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Trajectory_generation_M->solverInfo,
      &Trajectory_generation_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Trajectory_generation_M->solverInfo,
      &Trajectory_generation_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Trajectory_generation_M->solverInfo,
                          (&rtmGetErrorStatus(Trajectory_generation_M)));
    rtsiSetRTModelPtr(&Trajectory_generation_M->solverInfo,
                      Trajectory_generation_M);
  }

  rtsiSetSimTimeStep(&Trajectory_generation_M->solverInfo, MAJOR_TIME_STEP);
  Trajectory_generation_M->intgData.y = Trajectory_generation_M->odeY;
  Trajectory_generation_M->intgData.f[0] = Trajectory_generation_M->odeF[0];
  Trajectory_generation_M->intgData.f[1] = Trajectory_generation_M->odeF[1];
  Trajectory_generation_M->intgData.f[2] = Trajectory_generation_M->odeF[2];
  Trajectory_generation_M->contStates = ((X_Trajectory_generation_T *)
    &Trajectory_generation_X);
  rtsiSetSolverData(&Trajectory_generation_M->solverInfo, (void *)
                    &Trajectory_generation_M->intgData);
  rtsiSetSolverName(&Trajectory_generation_M->solverInfo,"ode3");
  rtmSetTPtr(Trajectory_generation_M, &Trajectory_generation_M->Timing.tArray[0]);
  Trajectory_generation_M->Timing.stepSize0 = 0.01;

  // block I/O
  (void) memset(((void *) &Trajectory_generation_B), 0,
                sizeof(B_Trajectory_generation_T));

  // states (continuous)
  {
    (void) memset((void *)&Trajectory_generation_X, 0,
                  sizeof(X_Trajectory_generation_T));
  }

  // states (dwork)
  (void) memset((void *)&Trajectory_generation_DW, 0,
                sizeof(DW_Trajectory_generation_T));

  {
    static const char_T tmp[46] = { '/', 'h', 'u', 'm', 'm', 'i', 'n', 'g', 'b',
      'i', 'r', 'd', '/', 'c', 'o', 'm', 'm', 'a', 'n', 'd', '/', 'r', 'o', 'l',
      'l', '_', 'p', 'i', 't', 'c', 'h', '_', 'y', 'a', 'w', 'r', 'a', 't', 'e',
      '_', 't', 'h', 'r', 'u', 's', 't' };

    static const char_T tmp_0[5] = { '/', 'I', 'S', 'C', 'I' };

    static const char_T tmp_1[6] = { '/', 'e', 'r', 'r', 'o', 'r' };

    static const char_T tmp_2[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n',
      'c', 'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_3[6];
    char_T tmp_4[7];
    char_T tmp_5[5];
    char_T tmp_6[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    Trajectory_generation_DW.obj_c.isInitialized = 0;
    Trajectory_generation_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_6[i] = tmp_2[i];
    }

    tmp_6[18] = '\x00';
    Pub_Trajectory_generation_157.createPublisher(tmp_6,
      Trajectory_gene_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    Trajectory_generation_DW.obj_g.isInitialized = 0;
    Trajectory_generation_DW.obj_g.isInitialized = 1;
    tmp_5[0] = '/';
    tmp_5[1] = 'I';
    tmp_5[2] = 'S';
    tmp_5[3] = 'E';
    tmp_5[4] = '\x00';
    Pub_Trajectory_generation_726.createPublisher(tmp_5,
      Trajectory_gene_MessageQueueLen);

    // End of Start for SubSystem: '<S3>/Publish1'

    // Start for Atomic SubSystem: '<S3>/Subscribe'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    Trajectory_generation_DW.obj_e.isInitialized = 0;
    Trajectory_generation_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_4[i] = tmp_1[i];
    }

    tmp_4[6] = '\x00';
    Sub_Trajectory_generation_728.createSubscriber(tmp_4,
      Trajectory_gene_MessageQueueLen);

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe'

    // Start for Atomic SubSystem: '<S3>/Publish2'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    Trajectory_generation_DW.obj.isInitialized = 0;
    Trajectory_generation_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_3[i] = tmp_0[i];
    }

    tmp_3[5] = '\x00';
    Pub_Trajectory_generation_727.createPublisher(tmp_3,
      Trajectory_gene_MessageQueueLen);

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish2'

    // Start for Atomic SubSystem: '<S3>/Subscribe1'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    Trajectory_generation_DW.obj_d.isInitialized = 0;
    Trajectory_generation_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 46; i++) {
      Trajectory_generation_B.cv0[i] = tmp[i];
    }

    Trajectory_generation_B.cv0[46] = '\x00';
    Sub_Trajectory_generation_729.createSubscriber(Trajectory_generation_B.cv0,
      Trajectory_gene_MessageQueueLen);

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe1'

    // InitializeConditions for Derivative: '<Root>/Derivative'
    Trajectory_generation_DW.TimeStampA = (rtInf);
    Trajectory_generation_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    Trajectory_generation_DW.TimeStampA_h = (rtInf);
    Trajectory_generation_DW.TimeStampB_h = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    Trajectory_generation_DW.TimeStampA_k = (rtInf);
    Trajectory_generation_DW.TimeStampB_o = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    Trajectory_generation_DW.TimeStampA_c = (rtInf);
    Trajectory_generation_DW.TimeStampB_c = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    Trajectory_generation_DW.TimeStampA_p = (rtInf);
    Trajectory_generation_DW.TimeStampB_a = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    Trajectory_generation_DW.TimeStampA_l = (rtInf);
    Trajectory_generation_DW.TimeStampB_ht = (rtInf);

    // InitializeConditions for Integrator: '<S3>/Integrator'
    Trajectory_generation_X.Integrator_CSTATE =
      Trajectory_generation_P.Integrator_IC;

    // InitializeConditions for Integrator: '<S3>/Integrator1'
    Trajectory_generation_X.Integrator1_CSTATE =
      Trajectory_generation_P.Integrator1_IC;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1'
    Trajectory_generation_B.In1_g = Trajectory_generation_P.Out1_Y0_g;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1'
    Trajectory_generation_B.In1 = Trajectory_generation_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'
  }
}

// Model terminate function
void Trajectory_generation_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (Trajectory_generation_DW.obj_c.isInitialized == 1) {
    Trajectory_generation_DW.obj_c.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Start for MATLABSystem: '<S9>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S9>/SinkBlock'

  if (Trajectory_generation_DW.obj_g.isInitialized == 1) {
    Trajectory_generation_DW.obj_g.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish1'

  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Start for MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S11>/SourceBlock'

  if (Trajectory_generation_DW.obj_e.isInitialized == 1) {
    Trajectory_generation_DW.obj_e.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe'

  // Terminate for Atomic SubSystem: '<S3>/Publish2'
  // Start for MATLABSystem: '<S10>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S10>/SinkBlock'

  if (Trajectory_generation_DW.obj.isInitialized == 1) {
    Trajectory_generation_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S3>/Publish2'

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Start for MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S12>/SourceBlock'

  if (Trajectory_generation_DW.obj_d.isInitialized == 1) {
    Trajectory_generation_DW.obj_d.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S12>/SourceBlock'
  // End of Terminate for SubSystem: '<S3>/Subscribe1'
}

//
// File trailer for generated code.
//
// [EOF]
//
