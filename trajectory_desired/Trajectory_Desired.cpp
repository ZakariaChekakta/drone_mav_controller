//
// File: Trajectory_Desired.cpp
//
// Code generated for Simulink model 'Trajectory_Desired'.
//
// Model version                  : 1.17
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Thu Jan 10 17:37:58 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Trajectory_Desired.h"
#include "Trajectory_Desired_private.h"
#define Trajectory_Desi_MessageQueueLen (1)

// Block signals (auto storage)
B_Trajectory_Desired_T Trajectory_Desired_B;

// Block states (auto storage)
DW_Trajectory_Desired_T Trajectory_Desired_DW;

// Real-time model
RT_MODEL_Trajectory_Desired_T Trajectory_Desired_M_;
RT_MODEL_Trajectory_Desired_T *const Trajectory_Desired_M =
  &Trajectory_Desired_M_;
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
void Trajectory_Desired_step(void)
{
  {
    real_T currentTime;
    real_T *lastU;
    real_T rtb_Clock;
    real_T rtb_Derivative4;
    real_T rtb_Derivative2;

    // Clock: '<S3>/Clock'
    rtb_Clock = Trajectory_Desired_M->Timing.t[0];

    // Switch: '<S3>/Switch' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn'

    if (rtb_Clock >= Trajectory_Desired_P.Switch_Threshold) {
      rtb_Derivative4 = Trajectory_Desired_P.Constant_Value_d;
    } else {
      rtb_Derivative4 = 10.0 * rt_powd_snf(rtb_Clock, 5.0) / (rt_powd_snf(6.0 -
        rtb_Clock, 5.0) + rt_powd_snf(rtb_Clock, 5.0));
    }

    // End of Switch: '<S3>/Switch'

    // Gain: '<S3>/Gain'
    Trajectory_Desired_B.Gain = Trajectory_Desired_P.Gain_Gain * rtb_Derivative4;

    // Step: '<S3>/Step9'
    currentTime = Trajectory_Desired_M->Timing.t[0];

    // Switch: '<S3>/Switch1' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn1'

    if (rtb_Clock >= Trajectory_Desired_P.Switch1_Threshold) {
      rtb_Derivative2 = Trajectory_Desired_P.Constant_Value_d;
    } else {
      rtb_Derivative2 = rt_powd_snf(rtb_Clock - 6.0, 5.0) * 10.0 / (rt_powd_snf
        ((12.0 - rtb_Clock) + 6.0, 5.0) + rt_powd_snf(rtb_Clock - 6.0, 5.0));
    }

    // End of Switch: '<S3>/Switch1'

    // Step: '<S3>/Step9'
    if (currentTime < Trajectory_Desired_P.Step9_Time) {
      currentTime = Trajectory_Desired_P.Step9_Y0;
    } else {
      currentTime = Trajectory_Desired_P.Step9_YFinal;
    }

    // Product: '<S3>/Product' incorporates:
    //   Gain: '<S3>/Gain1'

    Trajectory_Desired_B.Product = Trajectory_Desired_P.Gain1_Gain *
      rtb_Derivative2 * currentTime;

    // Step: '<S3>/Step10'
    currentTime = Trajectory_Desired_M->Timing.t[0];

    // Switch: '<S3>/Switch2' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn2'

    if (rtb_Clock >= Trajectory_Desired_P.Switch2_Threshold) {
      rtb_Derivative4 = Trajectory_Desired_P.Constant_Value_d;
    } else {
      rtb_Derivative4 = rt_powd_snf(rtb_Clock - 12.0, 5.0) * 10.0 / (rt_powd_snf
        ((18.0 - rtb_Clock) + 12.0, 5.0) + rt_powd_snf(rtb_Clock - 12.0, 5.0));
    }

    // End of Switch: '<S3>/Switch2'

    // Step: '<S3>/Step10'
    if (currentTime < Trajectory_Desired_P.Step10_Time) {
      currentTime = Trajectory_Desired_P.Step10_Y0;
    } else {
      currentTime = Trajectory_Desired_P.Step10_YFinal;
    }

    // Product: '<S3>/Product1' incorporates:
    //   Gain: '<S3>/Gain2'

    Trajectory_Desired_B.Product1 = Trajectory_Desired_P.Gain2_Gain *
      rtb_Derivative4 * currentTime;

    // Derivative: '<Root>/Derivative5'
    if ((Trajectory_Desired_DW.TimeStampA >= Trajectory_Desired_M->Timing.t[0]) &&
        (Trajectory_Desired_DW.TimeStampB >= Trajectory_Desired_M->Timing.t[0]))
    {
      Trajectory_Desired_B.Derivative5 = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA;
      if (Trajectory_Desired_DW.TimeStampA < Trajectory_Desired_DW.TimeStampB) {
        if (Trajectory_Desired_DW.TimeStampB < Trajectory_Desired_M->Timing.t[0])
        {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA >= Trajectory_Desired_M->Timing.t[0])
        {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB;
        }
      }

      Trajectory_Desired_B.Derivative5 = (Trajectory_Desired_B.Gain - *lastU) /
        (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative5'

    // Derivative: '<Root>/Derivative'
    if ((Trajectory_Desired_DW.TimeStampA_j >= Trajectory_Desired_M->Timing.t[0])
        && (Trajectory_Desired_DW.TimeStampB_p >= Trajectory_Desired_M->
            Timing.t[0])) {
      Trajectory_Desired_B.Derivative = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA_j;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_o;
      if (Trajectory_Desired_DW.TimeStampA_j <
          Trajectory_Desired_DW.TimeStampB_p) {
        if (Trajectory_Desired_DW.TimeStampB_p < Trajectory_Desired_M->Timing.t
            [0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_p;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_m;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA_j >= Trajectory_Desired_M->
            Timing.t[0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_p;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_m;
        }
      }

      Trajectory_Desired_B.Derivative = (Trajectory_Desired_B.Product - *lastU) /
        (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative1'
    if ((Trajectory_Desired_DW.TimeStampA_l >= Trajectory_Desired_M->Timing.t[0])
        && (Trajectory_Desired_DW.TimeStampB_n >= Trajectory_Desired_M->
            Timing.t[0])) {
      Trajectory_Desired_B.Derivative1 = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA_l;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_n;
      if (Trajectory_Desired_DW.TimeStampA_l <
          Trajectory_Desired_DW.TimeStampB_n) {
        if (Trajectory_Desired_DW.TimeStampB_n < Trajectory_Desired_M->Timing.t
            [0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_n;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_j;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA_l >= Trajectory_Desired_M->
            Timing.t[0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_n;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_j;
        }
      }

      Trajectory_Desired_B.Derivative1 = (Trajectory_Desired_B.Product1 - *lastU)
        / (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((Trajectory_Desired_DW.TimeStampA_d >= Trajectory_Desired_M->Timing.t[0])
        && (Trajectory_Desired_DW.TimeStampB_m >= Trajectory_Desired_M->
            Timing.t[0])) {
      rtb_Derivative2 = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA_d;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_g;
      if (Trajectory_Desired_DW.TimeStampA_d <
          Trajectory_Desired_DW.TimeStampB_m) {
        if (Trajectory_Desired_DW.TimeStampB_m < Trajectory_Desired_M->Timing.t
            [0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_m;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_m0;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA_d >= Trajectory_Desired_M->
            Timing.t[0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_m;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_m0;
        }
      }

      rtb_Derivative2 = (Trajectory_Desired_B.Derivative5 - *lastU) /
        (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Derivative: '<Root>/Derivative4'
    if ((Trajectory_Desired_DW.TimeStampA_k >= Trajectory_Desired_M->Timing.t[0])
        && (Trajectory_Desired_DW.TimeStampB_g >= Trajectory_Desired_M->
            Timing.t[0])) {
      rtb_Derivative4 = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA_k;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_gq;
      if (Trajectory_Desired_DW.TimeStampA_k <
          Trajectory_Desired_DW.TimeStampB_g) {
        if (Trajectory_Desired_DW.TimeStampB_g < Trajectory_Desired_M->Timing.t
            [0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_g;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_i;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA_k >= Trajectory_Desired_M->
            Timing.t[0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_g;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_i;
        }
      }

      rtb_Derivative4 = (Trajectory_Desired_B.Derivative - *lastU) /
        (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative3'
    if ((Trajectory_Desired_DW.TimeStampA_ln >= Trajectory_Desired_M->Timing.t[0])
        && (Trajectory_Desired_DW.TimeStampB_b >= Trajectory_Desired_M->
            Timing.t[0])) {
      rtb_Clock = 0.0;
    } else {
      rtb_Clock = Trajectory_Desired_DW.TimeStampA_ln;
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_b;
      if (Trajectory_Desired_DW.TimeStampA_ln <
          Trajectory_Desired_DW.TimeStampB_b) {
        if (Trajectory_Desired_DW.TimeStampB_b < Trajectory_Desired_M->Timing.t
            [0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_b;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_mu;
        }
      } else {
        if (Trajectory_Desired_DW.TimeStampA_ln >=
            Trajectory_Desired_M->Timing.t[0]) {
          rtb_Clock = Trajectory_Desired_DW.TimeStampB_b;
          lastU = &Trajectory_Desired_DW.LastUAtTimeB_mu;
        }
      }

      rtb_Clock = (Trajectory_Desired_B.Derivative1 - *lastU) /
        (Trajectory_Desired_M->Timing.t[0] - rtb_Clock);
    }

    // End of Derivative: '<Root>/Derivative3'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    Trajectory_Desired_B.BusAssignment = Trajectory_Desired_P.Constant_Value;
    Trajectory_Desired_B.BusAssignment.PositionDesired.Pose.Position.Z =
      Trajectory_Desired_B.Gain;
    Trajectory_Desired_B.BusAssignment.PositionDesired.Pose.Position.X =
      Trajectory_Desired_B.Product;
    Trajectory_Desired_B.BusAssignment.PositionDesired.Pose.Position.Y =
      Trajectory_Desired_B.Product1;
    Trajectory_Desired_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      Trajectory_Desired_B.Derivative5;
    Trajectory_Desired_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      Trajectory_Desired_B.Derivative;
    Trajectory_Desired_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      Trajectory_Desired_B.Derivative1;
    Trajectory_Desired_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Derivative2;
    Trajectory_Desired_B.BusAssignment.AccelerationDesired.Accel.Linear.X =
      rtb_Derivative4;
    Trajectory_Desired_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Clock;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_Trajectory_Desired_4.publish(&Trajectory_Desired_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative5'
    if (Trajectory_Desired_DW.TimeStampA == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA;
    } else if (Trajectory_Desired_DW.TimeStampB == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB;
    } else if (Trajectory_Desired_DW.TimeStampA <
               Trajectory_Desired_DW.TimeStampB) {
      Trajectory_Desired_DW.TimeStampA = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA;
    } else {
      Trajectory_Desired_DW.TimeStampB = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB;
    }

    *lastU = Trajectory_Desired_B.Gain;

    // End of Update for Derivative: '<Root>/Derivative5'

    // Update for Derivative: '<Root>/Derivative'
    if (Trajectory_Desired_DW.TimeStampA_j == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA_j = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_o;
    } else if (Trajectory_Desired_DW.TimeStampB_p == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB_p = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_m;
    } else if (Trajectory_Desired_DW.TimeStampA_j <
               Trajectory_Desired_DW.TimeStampB_p) {
      Trajectory_Desired_DW.TimeStampA_j = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_o;
    } else {
      Trajectory_Desired_DW.TimeStampB_p = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_m;
    }

    *lastU = Trajectory_Desired_B.Product;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative1'
    if (Trajectory_Desired_DW.TimeStampA_l == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA_l = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_n;
    } else if (Trajectory_Desired_DW.TimeStampB_n == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB_n = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_j;
    } else if (Trajectory_Desired_DW.TimeStampA_l <
               Trajectory_Desired_DW.TimeStampB_n) {
      Trajectory_Desired_DW.TimeStampA_l = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_n;
    } else {
      Trajectory_Desired_DW.TimeStampB_n = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_j;
    }

    *lastU = Trajectory_Desired_B.Product1;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (Trajectory_Desired_DW.TimeStampA_d == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA_d = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_g;
    } else if (Trajectory_Desired_DW.TimeStampB_m == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB_m = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_m0;
    } else if (Trajectory_Desired_DW.TimeStampA_d <
               Trajectory_Desired_DW.TimeStampB_m) {
      Trajectory_Desired_DW.TimeStampA_d = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_g;
    } else {
      Trajectory_Desired_DW.TimeStampB_m = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_m0;
    }

    *lastU = Trajectory_Desired_B.Derivative5;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative4'
    if (Trajectory_Desired_DW.TimeStampA_k == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA_k = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_gq;
    } else if (Trajectory_Desired_DW.TimeStampB_g == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB_g = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_i;
    } else if (Trajectory_Desired_DW.TimeStampA_k <
               Trajectory_Desired_DW.TimeStampB_g) {
      Trajectory_Desired_DW.TimeStampA_k = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_gq;
    } else {
      Trajectory_Desired_DW.TimeStampB_g = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_i;
    }

    *lastU = Trajectory_Desired_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative3'
    if (Trajectory_Desired_DW.TimeStampA_ln == (rtInf)) {
      Trajectory_Desired_DW.TimeStampA_ln = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_b;
    } else if (Trajectory_Desired_DW.TimeStampB_b == (rtInf)) {
      Trajectory_Desired_DW.TimeStampB_b = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_mu;
    } else if (Trajectory_Desired_DW.TimeStampA_ln <
               Trajectory_Desired_DW.TimeStampB_b) {
      Trajectory_Desired_DW.TimeStampA_ln = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeA_b;
    } else {
      Trajectory_Desired_DW.TimeStampB_b = Trajectory_Desired_M->Timing.t[0];
      lastU = &Trajectory_Desired_DW.LastUAtTimeB_mu;
    }

    *lastU = Trajectory_Desired_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative3'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  Trajectory_Desired_M->Timing.t[0] =
    (++Trajectory_Desired_M->Timing.clockTick0) *
    Trajectory_Desired_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.0038s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.0038, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    Trajectory_Desired_M->Timing.clockTick1++;
  }
}

// Model initialize function
void Trajectory_Desired_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)Trajectory_Desired_M, 0,
                sizeof(RT_MODEL_Trajectory_Desired_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&Trajectory_Desired_M->solverInfo,
                          &Trajectory_Desired_M->Timing.simTimeStep);
    rtsiSetTPtr(&Trajectory_Desired_M->solverInfo, &rtmGetTPtr
                (Trajectory_Desired_M));
    rtsiSetStepSizePtr(&Trajectory_Desired_M->solverInfo,
                       &Trajectory_Desired_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Trajectory_Desired_M->solverInfo, (&rtmGetErrorStatus
      (Trajectory_Desired_M)));
    rtsiSetRTModelPtr(&Trajectory_Desired_M->solverInfo, Trajectory_Desired_M);
  }

  rtsiSetSimTimeStep(&Trajectory_Desired_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Trajectory_Desired_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Trajectory_Desired_M, &Trajectory_Desired_M->Timing.tArray[0]);
  Trajectory_Desired_M->Timing.stepSize0 = 0.0038;

  // block I/O
  (void) memset(((void *) &Trajectory_Desired_B), 0,
                sizeof(B_Trajectory_Desired_T));

  // states (dwork)
  (void) memset((void *)&Trajectory_Desired_DW, 0,
                sizeof(DW_Trajectory_Desired_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    Trajectory_Desired_DW.obj.isInitialized = 0;
    Trajectory_Desired_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_Trajectory_Desired_4.createPublisher(tmp_0,
      Trajectory_Desi_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    Trajectory_Desired_DW.TimeStampA = (rtInf);
    Trajectory_Desired_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative'
    Trajectory_Desired_DW.TimeStampA_j = (rtInf);
    Trajectory_Desired_DW.TimeStampB_p = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    Trajectory_Desired_DW.TimeStampA_l = (rtInf);
    Trajectory_Desired_DW.TimeStampB_n = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    Trajectory_Desired_DW.TimeStampA_d = (rtInf);
    Trajectory_Desired_DW.TimeStampB_m = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    Trajectory_Desired_DW.TimeStampA_k = (rtInf);
    Trajectory_Desired_DW.TimeStampB_g = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    Trajectory_Desired_DW.TimeStampA_ln = (rtInf);
    Trajectory_Desired_DW.TimeStampB_b = (rtInf);
  }
}

// Model terminate function
void Trajectory_Desired_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (Trajectory_Desired_DW.obj.isInitialized == 1) {
    Trajectory_Desired_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
