//
// File: trajectory_c.cpp
//
// Code generated for Simulink model 'trajectory_c'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Dec 21 18:22:29 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "trajectory_c.h"
#include "trajectory_c_private.h"
#define trajectory_c_MessageQueueLen   (1)

// Block signals (auto storage)
B_trajectory_c_T trajectory_c_B;

// Block states (auto storage)
DW_trajectory_c_T trajectory_c_DW;

// Real-time model
RT_MODEL_trajectory_c_T trajectory_c_M_;
RT_MODEL_trajectory_c_T *const trajectory_c_M = &trajectory_c_M_;
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
void trajectory_c_step(void)
{
  {
    real_T *lastU;
    real_T rtb_Clock;
    real_T rtb_Derivative5;
    real_T rtb_Derivative3;

    // Clock: '<S3>/Clock'
    rtb_Clock = trajectory_c_M->Timing.t[0];

    // Switch: '<S3>/Switch' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn'

    if (rtb_Clock >= trajectory_c_P.Switch_Threshold) {
      rtb_Clock = trajectory_c_P.Constant_Value_l;
    } else {
      rtb_Clock = 10.0 * rt_powd_snf(rtb_Clock, 5.0) / (rt_powd_snf(6.0 -
        rtb_Clock, 5.0) + rt_powd_snf(rtb_Clock, 5.0));
    }

    // End of Switch: '<S3>/Switch'

    // Gain: '<S3>/Gain'
    trajectory_c_B.Gain = trajectory_c_P.Gain_Gain * rtb_Clock;

    // Step: '<S3>/Step10'
    if (trajectory_c_M->Timing.t[0] < trajectory_c_P.Step10_Time) {
      rtb_Clock = trajectory_c_P.Step10_Y0;
    } else {
      rtb_Clock = trajectory_c_P.Step10_YFinal;
    }

    // End of Step: '<S3>/Step10'

    // Step: '<S3>/Step11'
    if (trajectory_c_M->Timing.t[0] < trajectory_c_P.Step11_Time) {
      rtb_Derivative5 = trajectory_c_P.Step11_Y0;
    } else {
      rtb_Derivative5 = trajectory_c_P.Step11_YFinal;
    }

    // End of Step: '<S3>/Step11'

    // Product: '<S3>/Product2' incorporates:
    //   Product: '<S3>/Product'
    //   Sin: '<S3>/Sine Wave'

    trajectory_c_B.Product2 = (sin(trajectory_c_P.SineWave_Freq *
      trajectory_c_M->Timing.t[0] + trajectory_c_P.SineWave_Phase) *
      trajectory_c_P.SineWave_Amp + trajectory_c_P.SineWave_Bias) * rtb_Clock *
      rtb_Derivative5;

    // Step: '<S3>/Step9'
    if (trajectory_c_M->Timing.t[0] < trajectory_c_P.Step9_Time) {
      rtb_Clock = trajectory_c_P.Step9_Y0;
    } else {
      rtb_Clock = trajectory_c_P.Step9_YFinal;
    }

    // End of Step: '<S3>/Step9'

    // Step: '<S3>/Step12'
    if (trajectory_c_M->Timing.t[0] < trajectory_c_P.Step12_Time) {
      rtb_Derivative5 = trajectory_c_P.Step12_Y0;
    } else {
      rtb_Derivative5 = trajectory_c_P.Step12_YFinal;
    }

    // End of Step: '<S3>/Step12'

    // Product: '<S3>/Product3' incorporates:
    //   Product: '<S3>/Product1'
    //   Sin: '<S3>/Sine Wave1'

    trajectory_c_B.Product3 = (sin(trajectory_c_P.SineWave1_Freq *
      trajectory_c_M->Timing.t[0] + trajectory_c_P.SineWave1_Phase) *
      trajectory_c_P.SineWave1_Amp + trajectory_c_P.SineWave1_Bias) * rtb_Clock *
      rtb_Derivative5;

    // Derivative: '<Root>/Derivative'
    if ((trajectory_c_DW.TimeStampA >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB >= trajectory_c_M->Timing.t[0])) {
      trajectory_c_B.Derivative = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA;
      lastU = &trajectory_c_DW.LastUAtTimeA;
      if (trajectory_c_DW.TimeStampA < trajectory_c_DW.TimeStampB) {
        if (trajectory_c_DW.TimeStampB < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB;
          lastU = &trajectory_c_DW.LastUAtTimeB;
        }
      } else {
        if (trajectory_c_DW.TimeStampA >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB;
          lastU = &trajectory_c_DW.LastUAtTimeB;
        }
      }

      trajectory_c_B.Derivative = (trajectory_c_B.Gain - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative1'
    if ((trajectory_c_DW.TimeStampA_n >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB_l >= trajectory_c_M->Timing.t[0])) {
      trajectory_c_B.Derivative1 = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA_n;
      lastU = &trajectory_c_DW.LastUAtTimeA_c;
      if (trajectory_c_DW.TimeStampA_n < trajectory_c_DW.TimeStampB_l) {
        if (trajectory_c_DW.TimeStampB_l < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_l;
          lastU = &trajectory_c_DW.LastUAtTimeB_d;
        }
      } else {
        if (trajectory_c_DW.TimeStampA_n >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_l;
          lastU = &trajectory_c_DW.LastUAtTimeB_d;
        }
      }

      trajectory_c_B.Derivative1 = (trajectory_c_B.Product2 - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((trajectory_c_DW.TimeStampA_d >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB_p >= trajectory_c_M->Timing.t[0])) {
      trajectory_c_B.Derivative2 = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA_d;
      lastU = &trajectory_c_DW.LastUAtTimeA_h;
      if (trajectory_c_DW.TimeStampA_d < trajectory_c_DW.TimeStampB_p) {
        if (trajectory_c_DW.TimeStampB_p < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_p;
          lastU = &trajectory_c_DW.LastUAtTimeB_p;
        }
      } else {
        if (trajectory_c_DW.TimeStampA_d >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_p;
          lastU = &trajectory_c_DW.LastUAtTimeB_p;
        }
      }

      trajectory_c_B.Derivative2 = (trajectory_c_B.Product3 - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Derivative: '<Root>/Derivative3'
    if ((trajectory_c_DW.TimeStampA_m >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB_n >= trajectory_c_M->Timing.t[0])) {
      rtb_Derivative3 = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA_m;
      lastU = &trajectory_c_DW.LastUAtTimeA_g;
      if (trajectory_c_DW.TimeStampA_m < trajectory_c_DW.TimeStampB_n) {
        if (trajectory_c_DW.TimeStampB_n < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_n;
          lastU = &trajectory_c_DW.LastUAtTimeB_b;
        }
      } else {
        if (trajectory_c_DW.TimeStampA_m >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_n;
          lastU = &trajectory_c_DW.LastUAtTimeB_b;
        }
      }

      rtb_Derivative3 = (trajectory_c_B.Derivative - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative4'
    if ((trajectory_c_DW.TimeStampA_j >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB_m >= trajectory_c_M->Timing.t[0])) {
      rtb_Clock = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA_j;
      lastU = &trajectory_c_DW.LastUAtTimeA_b;
      if (trajectory_c_DW.TimeStampA_j < trajectory_c_DW.TimeStampB_m) {
        if (trajectory_c_DW.TimeStampB_m < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_m;
          lastU = &trajectory_c_DW.LastUAtTimeB_c;
        }
      } else {
        if (trajectory_c_DW.TimeStampA_j >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_m;
          lastU = &trajectory_c_DW.LastUAtTimeB_c;
        }
      }

      rtb_Clock = (trajectory_c_B.Derivative1 - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative5'
    if ((trajectory_c_DW.TimeStampA_b >= trajectory_c_M->Timing.t[0]) &&
        (trajectory_c_DW.TimeStampB_g >= trajectory_c_M->Timing.t[0])) {
      rtb_Derivative5 = 0.0;
    } else {
      rtb_Derivative5 = trajectory_c_DW.TimeStampA_b;
      lastU = &trajectory_c_DW.LastUAtTimeA_bq;
      if (trajectory_c_DW.TimeStampA_b < trajectory_c_DW.TimeStampB_g) {
        if (trajectory_c_DW.TimeStampB_g < trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_g;
          lastU = &trajectory_c_DW.LastUAtTimeB_a;
        }
      } else {
        if (trajectory_c_DW.TimeStampA_b >= trajectory_c_M->Timing.t[0]) {
          rtb_Derivative5 = trajectory_c_DW.TimeStampB_g;
          lastU = &trajectory_c_DW.LastUAtTimeB_a;
        }
      }

      rtb_Derivative5 = (trajectory_c_B.Derivative2 - *lastU) /
        (trajectory_c_M->Timing.t[0] - rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative5'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    trajectory_c_B.BusAssignment = trajectory_c_P.Constant_Value;
    trajectory_c_B.BusAssignment.PositionDesired.Pose.Position.Z =
      trajectory_c_B.Gain;
    trajectory_c_B.BusAssignment.PositionDesired.Pose.Position.X =
      trajectory_c_B.Product2;
    trajectory_c_B.BusAssignment.PositionDesired.Pose.Position.Y =
      trajectory_c_B.Product3;
    trajectory_c_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      trajectory_c_B.Derivative;
    trajectory_c_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      trajectory_c_B.Derivative1;
    trajectory_c_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      trajectory_c_B.Derivative2;
    trajectory_c_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Derivative3;
    trajectory_c_B.BusAssignment.AccelerationDesired.Accel.Linear.X = rtb_Clock;
    trajectory_c_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Derivative5;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_trajectory_c_11.publish(&trajectory_c_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (trajectory_c_DW.TimeStampA == (rtInf)) {
      trajectory_c_DW.TimeStampA = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA;
    } else if (trajectory_c_DW.TimeStampB == (rtInf)) {
      trajectory_c_DW.TimeStampB = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB;
    } else if (trajectory_c_DW.TimeStampA < trajectory_c_DW.TimeStampB) {
      trajectory_c_DW.TimeStampA = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA;
    } else {
      trajectory_c_DW.TimeStampB = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB;
    }

    *lastU = trajectory_c_B.Gain;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative1'
    if (trajectory_c_DW.TimeStampA_n == (rtInf)) {
      trajectory_c_DW.TimeStampA_n = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_c;
    } else if (trajectory_c_DW.TimeStampB_l == (rtInf)) {
      trajectory_c_DW.TimeStampB_l = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_d;
    } else if (trajectory_c_DW.TimeStampA_n < trajectory_c_DW.TimeStampB_l) {
      trajectory_c_DW.TimeStampA_n = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_c;
    } else {
      trajectory_c_DW.TimeStampB_l = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_d;
    }

    *lastU = trajectory_c_B.Product2;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (trajectory_c_DW.TimeStampA_d == (rtInf)) {
      trajectory_c_DW.TimeStampA_d = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_h;
    } else if (trajectory_c_DW.TimeStampB_p == (rtInf)) {
      trajectory_c_DW.TimeStampB_p = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_p;
    } else if (trajectory_c_DW.TimeStampA_d < trajectory_c_DW.TimeStampB_p) {
      trajectory_c_DW.TimeStampA_d = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_h;
    } else {
      trajectory_c_DW.TimeStampB_p = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_p;
    }

    *lastU = trajectory_c_B.Product3;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (trajectory_c_DW.TimeStampA_m == (rtInf)) {
      trajectory_c_DW.TimeStampA_m = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_g;
    } else if (trajectory_c_DW.TimeStampB_n == (rtInf)) {
      trajectory_c_DW.TimeStampB_n = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_b;
    } else if (trajectory_c_DW.TimeStampA_m < trajectory_c_DW.TimeStampB_n) {
      trajectory_c_DW.TimeStampA_m = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_g;
    } else {
      trajectory_c_DW.TimeStampB_n = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_b;
    }

    *lastU = trajectory_c_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative4'
    if (trajectory_c_DW.TimeStampA_j == (rtInf)) {
      trajectory_c_DW.TimeStampA_j = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_b;
    } else if (trajectory_c_DW.TimeStampB_m == (rtInf)) {
      trajectory_c_DW.TimeStampB_m = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_c;
    } else if (trajectory_c_DW.TimeStampA_j < trajectory_c_DW.TimeStampB_m) {
      trajectory_c_DW.TimeStampA_j = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_b;
    } else {
      trajectory_c_DW.TimeStampB_m = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_c;
    }

    *lastU = trajectory_c_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative5'
    if (trajectory_c_DW.TimeStampA_b == (rtInf)) {
      trajectory_c_DW.TimeStampA_b = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_bq;
    } else if (trajectory_c_DW.TimeStampB_g == (rtInf)) {
      trajectory_c_DW.TimeStampB_g = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_a;
    } else if (trajectory_c_DW.TimeStampA_b < trajectory_c_DW.TimeStampB_g) {
      trajectory_c_DW.TimeStampA_b = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeA_bq;
    } else {
      trajectory_c_DW.TimeStampB_g = trajectory_c_M->Timing.t[0];
      lastU = &trajectory_c_DW.LastUAtTimeB_a;
    }

    *lastU = trajectory_c_B.Derivative2;

    // End of Update for Derivative: '<Root>/Derivative5'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  trajectory_c_M->Timing.t[0] =
    (++trajectory_c_M->Timing.clockTick0) * trajectory_c_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    trajectory_c_M->Timing.clockTick1++;
  }
}

// Model initialize function
void trajectory_c_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)trajectory_c_M, 0,
                sizeof(RT_MODEL_trajectory_c_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&trajectory_c_M->solverInfo,
                          &trajectory_c_M->Timing.simTimeStep);
    rtsiSetTPtr(&trajectory_c_M->solverInfo, &rtmGetTPtr(trajectory_c_M));
    rtsiSetStepSizePtr(&trajectory_c_M->solverInfo,
                       &trajectory_c_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&trajectory_c_M->solverInfo, (&rtmGetErrorStatus
      (trajectory_c_M)));
    rtsiSetRTModelPtr(&trajectory_c_M->solverInfo, trajectory_c_M);
  }

  rtsiSetSimTimeStep(&trajectory_c_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&trajectory_c_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(trajectory_c_M, &trajectory_c_M->Timing.tArray[0]);
  trajectory_c_M->Timing.stepSize0 = 0.05;

  // block I/O
  (void) memset(((void *) &trajectory_c_B), 0,
                sizeof(B_trajectory_c_T));

  // states (dwork)
  (void) memset((void *)&trajectory_c_DW, 0,
                sizeof(DW_trajectory_c_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    trajectory_c_DW.obj.isInitialized = 0;
    trajectory_c_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_trajectory_c_11.createPublisher(tmp_0, trajectory_c_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative'
    trajectory_c_DW.TimeStampA = (rtInf);
    trajectory_c_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    trajectory_c_DW.TimeStampA_n = (rtInf);
    trajectory_c_DW.TimeStampB_l = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    trajectory_c_DW.TimeStampA_d = (rtInf);
    trajectory_c_DW.TimeStampB_p = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    trajectory_c_DW.TimeStampA_m = (rtInf);
    trajectory_c_DW.TimeStampB_n = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    trajectory_c_DW.TimeStampA_j = (rtInf);
    trajectory_c_DW.TimeStampB_m = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    trajectory_c_DW.TimeStampA_b = (rtInf);
    trajectory_c_DW.TimeStampB_g = (rtInf);
  }
}

// Model terminate function
void trajectory_c_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (trajectory_c_DW.obj.isInitialized == 1) {
    trajectory_c_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
