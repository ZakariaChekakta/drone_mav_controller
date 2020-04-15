//
// File: circular_trajectory.cpp
//
// Code generated for Simulink model 'circular_trajectory'.
//
// Model version                  : 1.4
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Tue Jan 15 20:41:42 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "circular_trajectory.h"
#include "circular_trajectory_private.h"
#define circular_trajec_MessageQueueLen (1)

// Block signals (auto storage)
B_circular_trajectory_T circular_trajectory_B;

// Block states (auto storage)
DW_circular_trajectory_T circular_trajectory_DW;

// Real-time model
RT_MODEL_circular_trajectory_T circular_trajectory_M_;
RT_MODEL_circular_trajectory_T *const circular_trajectory_M =
  &circular_trajectory_M_;
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
void circular_trajectory_step(void)
{
  {
    real_T *lastU;
    real_T rtb_Add;
    real_T rtb_Derivative4;
    real_T rtb_Derivative3;

    // Sum: '<S3>/Add' incorporates:
    //   Clock: '<S3>/Clock'
    //   Constant: '<S3>/Constant1'

    rtb_Add = circular_trajectory_P.Constant1_Value +
      circular_trajectory_M->Timing.t[0];

    // Switch: '<S3>/Switch' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn'

    if (rtb_Add >= circular_trajectory_P.Switch_Threshold) {
      rtb_Derivative3 = circular_trajectory_P.Constant_Value_f;
    } else {
      rtb_Derivative3 = 10.0 * rt_powd_snf(rtb_Add, 5.0) / (rt_powd_snf(6.0 -
        rtb_Add, 5.0) + rt_powd_snf(rtb_Add, 5.0));
    }

    // End of Switch: '<S3>/Switch'

    // Step: '<S3>/Step1'
    if (circular_trajectory_M->Timing.t[0] < circular_trajectory_P.Step1_Time) {
      rtb_Derivative4 = circular_trajectory_P.Step1_Y0;
    } else {
      rtb_Derivative4 = circular_trajectory_P.Step1_YFinal;
    }

    // End of Step: '<S3>/Step1'

    // Product: '<S3>/Product4' incorporates:
    //   Gain: '<S3>/Gain'

    circular_trajectory_B.Product4 = circular_trajectory_P.Gain_Gain *
      rtb_Derivative3 * rtb_Derivative4;

    // Step: '<S3>/Step10'
    if (circular_trajectory_M->Timing.t[0] < circular_trajectory_P.Step10_Time)
    {
      rtb_Derivative4 = circular_trajectory_P.Step10_Y0;
    } else {
      rtb_Derivative4 = circular_trajectory_P.Step10_YFinal;
    }

    // End of Step: '<S3>/Step10'

    // Step: '<S3>/Step11'
    if (circular_trajectory_M->Timing.t[0] < circular_trajectory_P.Step11_Time)
    {
      rtb_Derivative3 = circular_trajectory_P.Step11_Y0;
    } else {
      rtb_Derivative3 = circular_trajectory_P.Step11_YFinal;
    }

    // End of Step: '<S3>/Step11'

    // Product: '<S3>/Product2' incorporates:
    //   Product: '<S3>/Product'
    //   Sin: '<S3>/Sine Wave'

    circular_trajectory_B.Product2 = (sin(circular_trajectory_P.SineWave_Freq *
      rtb_Add + circular_trajectory_P.SineWave_Phase) *
      circular_trajectory_P.SineWave_Amp + circular_trajectory_P.SineWave_Bias) *
      rtb_Derivative4 * rtb_Derivative3;

    // Step: '<S3>/Step9'
    if (circular_trajectory_M->Timing.t[0] < circular_trajectory_P.Step9_Time) {
      rtb_Derivative4 = circular_trajectory_P.Step9_Y0;
    } else {
      rtb_Derivative4 = circular_trajectory_P.Step9_YFinal;
    }

    // End of Step: '<S3>/Step9'

    // Step: '<S3>/Step12'
    if (circular_trajectory_M->Timing.t[0] < circular_trajectory_P.Step12_Time)
    {
      rtb_Derivative3 = circular_trajectory_P.Step12_Y0;
    } else {
      rtb_Derivative3 = circular_trajectory_P.Step12_YFinal;
    }

    // End of Step: '<S3>/Step12'

    // Product: '<S3>/Product3' incorporates:
    //   Product: '<S3>/Product1'
    //   Sin: '<S3>/Sine Wave1'

    circular_trajectory_B.Product3 = (sin(circular_trajectory_P.SineWave1_Freq *
      rtb_Add + circular_trajectory_P.SineWave1_Phase) *
      circular_trajectory_P.SineWave1_Amp + circular_trajectory_P.SineWave1_Bias)
      * rtb_Derivative4 * rtb_Derivative3;

    // Derivative: '<Root>/Derivative'
    if ((circular_trajectory_DW.TimeStampA >= circular_trajectory_M->Timing.t[0])
        && (circular_trajectory_DW.TimeStampB >= circular_trajectory_M->
            Timing.t[0])) {
      circular_trajectory_B.Derivative = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA;
      lastU = &circular_trajectory_DW.LastUAtTimeA;
      if (circular_trajectory_DW.TimeStampA < circular_trajectory_DW.TimeStampB)
      {
        if (circular_trajectory_DW.TimeStampB < circular_trajectory_M->Timing.t
            [0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB;
          lastU = &circular_trajectory_DW.LastUAtTimeB;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA >= circular_trajectory_M->
            Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB;
          lastU = &circular_trajectory_DW.LastUAtTimeB;
        }
      }

      circular_trajectory_B.Derivative = (circular_trajectory_B.Product4 -
        *lastU) / (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative1'
    if ((circular_trajectory_DW.TimeStampA_i >= circular_trajectory_M->Timing.t
         [0]) && (circular_trajectory_DW.TimeStampB_c >=
                  circular_trajectory_M->Timing.t[0])) {
      circular_trajectory_B.Derivative1 = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA_i;
      lastU = &circular_trajectory_DW.LastUAtTimeA_c;
      if (circular_trajectory_DW.TimeStampA_i <
          circular_trajectory_DW.TimeStampB_c) {
        if (circular_trajectory_DW.TimeStampB_c <
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_c;
          lastU = &circular_trajectory_DW.LastUAtTimeB_b;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA_i >=
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_c;
          lastU = &circular_trajectory_DW.LastUAtTimeB_b;
        }
      }

      circular_trajectory_B.Derivative1 = (circular_trajectory_B.Product2 -
        *lastU) / (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((circular_trajectory_DW.TimeStampA_i4 >= circular_trajectory_M->
         Timing.t[0]) && (circular_trajectory_DW.TimeStampB_a >=
                          circular_trajectory_M->Timing.t[0])) {
      circular_trajectory_B.Derivative2 = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA_i4;
      lastU = &circular_trajectory_DW.LastUAtTimeA_f;
      if (circular_trajectory_DW.TimeStampA_i4 <
          circular_trajectory_DW.TimeStampB_a) {
        if (circular_trajectory_DW.TimeStampB_a <
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_a;
          lastU = &circular_trajectory_DW.LastUAtTimeB_d;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA_i4 >=
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_a;
          lastU = &circular_trajectory_DW.LastUAtTimeB_d;
        }
      }

      circular_trajectory_B.Derivative2 = (circular_trajectory_B.Product3 -
        *lastU) / (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Derivative: '<Root>/Derivative3'
    if ((circular_trajectory_DW.TimeStampA_a >= circular_trajectory_M->Timing.t
         [0]) && (circular_trajectory_DW.TimeStampB_cp >=
                  circular_trajectory_M->Timing.t[0])) {
      rtb_Derivative3 = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA_a;
      lastU = &circular_trajectory_DW.LastUAtTimeA_k;
      if (circular_trajectory_DW.TimeStampA_a <
          circular_trajectory_DW.TimeStampB_cp) {
        if (circular_trajectory_DW.TimeStampB_cp <
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_cp;
          lastU = &circular_trajectory_DW.LastUAtTimeB_h;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA_a >=
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_cp;
          lastU = &circular_trajectory_DW.LastUAtTimeB_h;
        }
      }

      rtb_Derivative3 = (circular_trajectory_B.Derivative - *lastU) /
        (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative4'
    if ((circular_trajectory_DW.TimeStampA_b >= circular_trajectory_M->Timing.t
         [0]) && (circular_trajectory_DW.TimeStampB_e >=
                  circular_trajectory_M->Timing.t[0])) {
      rtb_Derivative4 = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA_b;
      lastU = &circular_trajectory_DW.LastUAtTimeA_c0;
      if (circular_trajectory_DW.TimeStampA_b <
          circular_trajectory_DW.TimeStampB_e) {
        if (circular_trajectory_DW.TimeStampB_e <
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_e;
          lastU = &circular_trajectory_DW.LastUAtTimeB_e;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA_b >=
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_e;
          lastU = &circular_trajectory_DW.LastUAtTimeB_e;
        }
      }

      rtb_Derivative4 = (circular_trajectory_B.Derivative1 - *lastU) /
        (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative5'
    if ((circular_trajectory_DW.TimeStampA_n >= circular_trajectory_M->Timing.t
         [0]) && (circular_trajectory_DW.TimeStampB_m >=
                  circular_trajectory_M->Timing.t[0])) {
      rtb_Add = 0.0;
    } else {
      rtb_Add = circular_trajectory_DW.TimeStampA_n;
      lastU = &circular_trajectory_DW.LastUAtTimeA_d;
      if (circular_trajectory_DW.TimeStampA_n <
          circular_trajectory_DW.TimeStampB_m) {
        if (circular_trajectory_DW.TimeStampB_m <
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_m;
          lastU = &circular_trajectory_DW.LastUAtTimeB_p;
        }
      } else {
        if (circular_trajectory_DW.TimeStampA_n >=
            circular_trajectory_M->Timing.t[0]) {
          rtb_Add = circular_trajectory_DW.TimeStampB_m;
          lastU = &circular_trajectory_DW.LastUAtTimeB_p;
        }
      }

      rtb_Add = (circular_trajectory_B.Derivative2 - *lastU) /
        (circular_trajectory_M->Timing.t[0] - rtb_Add);
    }

    // End of Derivative: '<Root>/Derivative5'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    circular_trajectory_B.BusAssignment = circular_trajectory_P.Constant_Value;
    circular_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Z =
      circular_trajectory_B.Product4;
    circular_trajectory_B.BusAssignment.PositionDesired.Pose.Position.X =
      circular_trajectory_B.Product2;
    circular_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Y =
      circular_trajectory_B.Product3;
    circular_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      circular_trajectory_B.Derivative;
    circular_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      circular_trajectory_B.Derivative1;
    circular_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      circular_trajectory_B.Derivative2;
    circular_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Derivative3;
    circular_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.X =
      rtb_Derivative4;
    circular_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Add;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_circular_trajectory_9.publish(&circular_trajectory_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (circular_trajectory_DW.TimeStampA == (rtInf)) {
      circular_trajectory_DW.TimeStampA = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA;
    } else if (circular_trajectory_DW.TimeStampB == (rtInf)) {
      circular_trajectory_DW.TimeStampB = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB;
    } else if (circular_trajectory_DW.TimeStampA <
               circular_trajectory_DW.TimeStampB) {
      circular_trajectory_DW.TimeStampA = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA;
    } else {
      circular_trajectory_DW.TimeStampB = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB;
    }

    *lastU = circular_trajectory_B.Product4;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative1'
    if (circular_trajectory_DW.TimeStampA_i == (rtInf)) {
      circular_trajectory_DW.TimeStampA_i = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_c;
    } else if (circular_trajectory_DW.TimeStampB_c == (rtInf)) {
      circular_trajectory_DW.TimeStampB_c = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_b;
    } else if (circular_trajectory_DW.TimeStampA_i <
               circular_trajectory_DW.TimeStampB_c) {
      circular_trajectory_DW.TimeStampA_i = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_c;
    } else {
      circular_trajectory_DW.TimeStampB_c = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_b;
    }

    *lastU = circular_trajectory_B.Product2;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (circular_trajectory_DW.TimeStampA_i4 == (rtInf)) {
      circular_trajectory_DW.TimeStampA_i4 = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_f;
    } else if (circular_trajectory_DW.TimeStampB_a == (rtInf)) {
      circular_trajectory_DW.TimeStampB_a = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_d;
    } else if (circular_trajectory_DW.TimeStampA_i4 <
               circular_trajectory_DW.TimeStampB_a) {
      circular_trajectory_DW.TimeStampA_i4 = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_f;
    } else {
      circular_trajectory_DW.TimeStampB_a = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_d;
    }

    *lastU = circular_trajectory_B.Product3;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (circular_trajectory_DW.TimeStampA_a == (rtInf)) {
      circular_trajectory_DW.TimeStampA_a = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_k;
    } else if (circular_trajectory_DW.TimeStampB_cp == (rtInf)) {
      circular_trajectory_DW.TimeStampB_cp = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_h;
    } else if (circular_trajectory_DW.TimeStampA_a <
               circular_trajectory_DW.TimeStampB_cp) {
      circular_trajectory_DW.TimeStampA_a = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_k;
    } else {
      circular_trajectory_DW.TimeStampB_cp = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_h;
    }

    *lastU = circular_trajectory_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative4'
    if (circular_trajectory_DW.TimeStampA_b == (rtInf)) {
      circular_trajectory_DW.TimeStampA_b = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_c0;
    } else if (circular_trajectory_DW.TimeStampB_e == (rtInf)) {
      circular_trajectory_DW.TimeStampB_e = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_e;
    } else if (circular_trajectory_DW.TimeStampA_b <
               circular_trajectory_DW.TimeStampB_e) {
      circular_trajectory_DW.TimeStampA_b = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_c0;
    } else {
      circular_trajectory_DW.TimeStampB_e = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_e;
    }

    *lastU = circular_trajectory_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative5'
    if (circular_trajectory_DW.TimeStampA_n == (rtInf)) {
      circular_trajectory_DW.TimeStampA_n = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_d;
    } else if (circular_trajectory_DW.TimeStampB_m == (rtInf)) {
      circular_trajectory_DW.TimeStampB_m = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_p;
    } else if (circular_trajectory_DW.TimeStampA_n <
               circular_trajectory_DW.TimeStampB_m) {
      circular_trajectory_DW.TimeStampA_n = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeA_d;
    } else {
      circular_trajectory_DW.TimeStampB_m = circular_trajectory_M->Timing.t[0];
      lastU = &circular_trajectory_DW.LastUAtTimeB_p;
    }

    *lastU = circular_trajectory_B.Derivative2;

    // End of Update for Derivative: '<Root>/Derivative5'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  circular_trajectory_M->Timing.t[0] =
    (++circular_trajectory_M->Timing.clockTick0) *
    circular_trajectory_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.001s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.001, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    circular_trajectory_M->Timing.clockTick1++;
  }
}

// Model initialize function
void circular_trajectory_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)circular_trajectory_M, 0,
                sizeof(RT_MODEL_circular_trajectory_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&circular_trajectory_M->solverInfo,
                          &circular_trajectory_M->Timing.simTimeStep);
    rtsiSetTPtr(&circular_trajectory_M->solverInfo, &rtmGetTPtr
                (circular_trajectory_M));
    rtsiSetStepSizePtr(&circular_trajectory_M->solverInfo,
                       &circular_trajectory_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&circular_trajectory_M->solverInfo,
                          (&rtmGetErrorStatus(circular_trajectory_M)));
    rtsiSetRTModelPtr(&circular_trajectory_M->solverInfo, circular_trajectory_M);
  }

  rtsiSetSimTimeStep(&circular_trajectory_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&circular_trajectory_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(circular_trajectory_M, &circular_trajectory_M->Timing.tArray[0]);
  circular_trajectory_M->Timing.stepSize0 = 0.001;

  // block I/O
  (void) memset(((void *) &circular_trajectory_B), 0,
                sizeof(B_circular_trajectory_T));

  // states (dwork)
  (void) memset((void *)&circular_trajectory_DW, 0,
                sizeof(DW_circular_trajectory_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    circular_trajectory_DW.obj.isInitialized = 0;
    circular_trajectory_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_circular_trajectory_9.createPublisher(tmp_0,
      circular_trajec_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative'
    circular_trajectory_DW.TimeStampA = (rtInf);
    circular_trajectory_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    circular_trajectory_DW.TimeStampA_i = (rtInf);
    circular_trajectory_DW.TimeStampB_c = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    circular_trajectory_DW.TimeStampA_i4 = (rtInf);
    circular_trajectory_DW.TimeStampB_a = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    circular_trajectory_DW.TimeStampA_a = (rtInf);
    circular_trajectory_DW.TimeStampB_cp = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    circular_trajectory_DW.TimeStampA_b = (rtInf);
    circular_trajectory_DW.TimeStampB_e = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    circular_trajectory_DW.TimeStampA_n = (rtInf);
    circular_trajectory_DW.TimeStampB_m = (rtInf);
  }
}

// Model terminate function
void circular_trajectory_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (circular_trajectory_DW.obj.isInitialized == 1) {
    circular_trajectory_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
