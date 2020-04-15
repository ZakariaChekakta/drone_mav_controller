//
// File: reference_trajectory.cpp
//
// Code generated for Simulink model 'reference_trajectory'.
//
// Model version                  : 1.14
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Sat Jan 12 23:09:33 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "reference_trajectory.h"
#include "reference_trajectory_private.h"
#define reference_traje_MessageQueueLen (1)

// Block signals (auto storage)
B_reference_trajectory_T reference_trajectory_B;

// Block states (auto storage)
DW_reference_trajectory_T reference_trajectory_DW;

// Real-time model
RT_MODEL_reference_trajectory_T reference_trajectory_M_;
RT_MODEL_reference_trajectory_T *const reference_trajectory_M =
  &reference_trajectory_M_;
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
void reference_trajectory_step(void)
{
  {
    real_T currentTime;
    real_T *lastU;
    real_T rtb_Add2;
    real_T rtb_Add1;
    real_T rtb_Add;

    // Step: '<S3>/Step1'
    currentTime = reference_trajectory_M->Timing.t[0];

    // Sum: '<S3>/Add' incorporates:
    //   Clock: '<S3>/Clock'
    //   Constant: '<S3>/Constant1'

    rtb_Add = reference_trajectory_P.Constant1_Value +
      reference_trajectory_M->Timing.t[0];

    // Switch: '<S3>/Switch' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn'

    if (rtb_Add >= reference_trajectory_P.Switch_Threshold) {
      rtb_Add = reference_trajectory_P.Constant_Value_n;
    } else {
      rtb_Add = 10.0 * rt_powd_snf(rtb_Add, 5.0) / (rt_powd_snf(6.0 - rtb_Add,
        5.0) + rt_powd_snf(rtb_Add, 5.0));
    }

    // End of Switch: '<S3>/Switch'

    // Step: '<S3>/Step1'
    if (currentTime < reference_trajectory_P.Step1_Time) {
      currentTime = reference_trajectory_P.Step1_Y0;
    } else {
      currentTime = reference_trajectory_P.Step1_YFinal;
    }

    // Product: '<S3>/Product2' incorporates:
    //   Gain: '<S3>/Gain'

    reference_trajectory_B.Product2 = reference_trajectory_P.Gain_Gain * rtb_Add
      * currentTime;

    // Derivative: '<Root>/Derivative1'
    if ((reference_trajectory_DW.TimeStampA >= reference_trajectory_M->Timing.t
         [0]) && (reference_trajectory_DW.TimeStampB >=
                  reference_trajectory_M->Timing.t[0])) {
      reference_trajectory_B.Derivative1 = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA;
      lastU = &reference_trajectory_DW.LastUAtTimeA;
      if (reference_trajectory_DW.TimeStampA <
          reference_trajectory_DW.TimeStampB) {
        if (reference_trajectory_DW.TimeStampB <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB;
          lastU = &reference_trajectory_DW.LastUAtTimeB;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB;
          lastU = &reference_trajectory_DW.LastUAtTimeB;
        }
      }

      reference_trajectory_B.Derivative1 = (reference_trajectory_B.Product2 -
        *lastU) / (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative'
    if ((reference_trajectory_DW.TimeStampA_n >=
         reference_trajectory_M->Timing.t[0]) &&
        (reference_trajectory_DW.TimeStampB_g >=
         reference_trajectory_M->Timing.t[0])) {
      rtb_Add = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA_n;
      lastU = &reference_trajectory_DW.LastUAtTimeA_i;
      if (reference_trajectory_DW.TimeStampA_n <
          reference_trajectory_DW.TimeStampB_g) {
        if (reference_trajectory_DW.TimeStampB_g <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_g;
          lastU = &reference_trajectory_DW.LastUAtTimeB_h;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA_n >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_g;
          lastU = &reference_trajectory_DW.LastUAtTimeB_h;
        }
      }

      rtb_Add = (reference_trajectory_B.Derivative1 - *lastU) /
        (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative'

    // Step: '<S3>/Step9'
    currentTime = reference_trajectory_M->Timing.t[0];

    // Sum: '<S3>/Add1' incorporates:
    //   Clock: '<S3>/Clock1'
    //   Constant: '<S3>/Constant2'

    rtb_Add1 = reference_trajectory_P.Constant2_Value +
      reference_trajectory_M->Timing.t[0];

    // Switch: '<S3>/Switch1' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn1'

    if (rtb_Add1 >= reference_trajectory_P.Switch1_Threshold) {
      rtb_Add1 = reference_trajectory_P.Constant_Value_n;
    } else {
      rtb_Add1 = rt_powd_snf(rtb_Add1 - 6.0, 5.0) * 10.0 / (rt_powd_snf((12.0 -
        rtb_Add1) + 6.0, 5.0) + rt_powd_snf(rtb_Add1 - 6.0, 5.0));
    }

    // End of Switch: '<S3>/Switch1'

    // Step: '<S3>/Step9'
    if (currentTime < reference_trajectory_P.Step9_Time) {
      currentTime = reference_trajectory_P.Step9_Y0;
    } else {
      currentTime = reference_trajectory_P.Step9_YFinal;
    }

    // Product: '<S3>/Product' incorporates:
    //   Gain: '<S3>/Gain1'

    reference_trajectory_B.Product = reference_trajectory_P.Gain1_Gain *
      rtb_Add1 * currentTime;

    // Derivative: '<Root>/Derivative4'
    if ((reference_trajectory_DW.TimeStampA_o >=
         reference_trajectory_M->Timing.t[0]) &&
        (reference_trajectory_DW.TimeStampB_f >=
         reference_trajectory_M->Timing.t[0])) {
      reference_trajectory_B.Derivative4 = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA_o;
      lastU = &reference_trajectory_DW.LastUAtTimeA_h;
      if (reference_trajectory_DW.TimeStampA_o <
          reference_trajectory_DW.TimeStampB_f) {
        if (reference_trajectory_DW.TimeStampB_f <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_f;
          lastU = &reference_trajectory_DW.LastUAtTimeB_f;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA_o >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_f;
          lastU = &reference_trajectory_DW.LastUAtTimeB_f;
        }
      }

      reference_trajectory_B.Derivative4 = (reference_trajectory_B.Product -
        *lastU) / (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative2'
    if ((reference_trajectory_DW.TimeStampA_or >=
         reference_trajectory_M->Timing.t[0]) &&
        (reference_trajectory_DW.TimeStampB_p >=
         reference_trajectory_M->Timing.t[0])) {
      rtb_Add1 = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA_or;
      lastU = &reference_trajectory_DW.LastUAtTimeA_m;
      if (reference_trajectory_DW.TimeStampA_or <
          reference_trajectory_DW.TimeStampB_p) {
        if (reference_trajectory_DW.TimeStampB_p <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_p;
          lastU = &reference_trajectory_DW.LastUAtTimeB_j;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA_or >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_p;
          lastU = &reference_trajectory_DW.LastUAtTimeB_j;
        }
      }

      rtb_Add1 = (reference_trajectory_B.Derivative4 - *lastU) /
        (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Step: '<S3>/Step10'
    currentTime = reference_trajectory_M->Timing.t[0];

    // Sum: '<S3>/Add2' incorporates:
    //   Clock: '<S3>/Clock2'
    //   Constant: '<S3>/Constant3'

    rtb_Add2 = reference_trajectory_P.Constant3_Value +
      reference_trajectory_M->Timing.t[0];

    // Switch: '<S3>/Switch2' incorporates:
    //   Constant: '<S3>/Constant'
    //   Fcn: '<S3>/Fcn2'

    if (rtb_Add2 >= reference_trajectory_P.Switch2_Threshold) {
      rtb_Add2 = reference_trajectory_P.Constant_Value_n;
    } else {
      rtb_Add2 = rt_powd_snf(rtb_Add2 - 12.0, 5.0) * 10.0 / (rt_powd_snf((18.0 -
        rtb_Add2) + 12.0, 5.0) + rt_powd_snf(rtb_Add2 - 12.0, 5.0));
    }

    // End of Switch: '<S3>/Switch2'

    // Step: '<S3>/Step10'
    if (currentTime < reference_trajectory_P.Step10_Time) {
      currentTime = reference_trajectory_P.Step10_Y0;
    } else {
      currentTime = reference_trajectory_P.Step10_YFinal;
    }

    // Product: '<S3>/Product1' incorporates:
    //   Gain: '<S3>/Gain2'

    reference_trajectory_B.Product1 = reference_trajectory_P.Gain2_Gain *
      rtb_Add2 * currentTime;

    // Derivative: '<Root>/Derivative3'
    if ((reference_trajectory_DW.TimeStampA_m >=
         reference_trajectory_M->Timing.t[0]) &&
        (reference_trajectory_DW.TimeStampB_e >=
         reference_trajectory_M->Timing.t[0])) {
      reference_trajectory_B.Derivative3 = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA_m;
      lastU = &reference_trajectory_DW.LastUAtTimeA_e;
      if (reference_trajectory_DW.TimeStampA_m <
          reference_trajectory_DW.TimeStampB_e) {
        if (reference_trajectory_DW.TimeStampB_e <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_e;
          lastU = &reference_trajectory_DW.LastUAtTimeB_c;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA_m >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_e;
          lastU = &reference_trajectory_DW.LastUAtTimeB_c;
        }
      }

      reference_trajectory_B.Derivative3 = (reference_trajectory_B.Product1 -
        *lastU) / (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative5'
    if ((reference_trajectory_DW.TimeStampA_k >=
         reference_trajectory_M->Timing.t[0]) &&
        (reference_trajectory_DW.TimeStampB_b >=
         reference_trajectory_M->Timing.t[0])) {
      rtb_Add2 = 0.0;
    } else {
      currentTime = reference_trajectory_DW.TimeStampA_k;
      lastU = &reference_trajectory_DW.LastUAtTimeA_g;
      if (reference_trajectory_DW.TimeStampA_k <
          reference_trajectory_DW.TimeStampB_b) {
        if (reference_trajectory_DW.TimeStampB_b <
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_b;
          lastU = &reference_trajectory_DW.LastUAtTimeB_cg;
        }
      } else {
        if (reference_trajectory_DW.TimeStampA_k >=
            reference_trajectory_M->Timing.t[0]) {
          currentTime = reference_trajectory_DW.TimeStampB_b;
          lastU = &reference_trajectory_DW.LastUAtTimeB_cg;
        }
      }

      rtb_Add2 = (reference_trajectory_B.Derivative3 - *lastU) /
        (reference_trajectory_M->Timing.t[0] - currentTime);
    }

    // End of Derivative: '<Root>/Derivative5'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    reference_trajectory_B.BusAssignment = reference_trajectory_P.Constant_Value;
    reference_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Z =
      reference_trajectory_B.Product2;
    reference_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      reference_trajectory_B.Derivative1;
    reference_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Add;
    reference_trajectory_B.BusAssignment.PositionDesired.Pose.Position.X =
      reference_trajectory_B.Product;
    reference_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      reference_trajectory_B.Derivative4;
    reference_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.X =
      rtb_Add1;
    reference_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Y =
      reference_trajectory_B.Product1;
    reference_trajectory_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      reference_trajectory_B.Derivative3;
    reference_trajectory_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Add2;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_reference_trajectory_9.publish(&reference_trajectory_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative1'
    if (reference_trajectory_DW.TimeStampA == (rtInf)) {
      reference_trajectory_DW.TimeStampA = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA;
    } else if (reference_trajectory_DW.TimeStampB == (rtInf)) {
      reference_trajectory_DW.TimeStampB = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB;
    } else if (reference_trajectory_DW.TimeStampA <
               reference_trajectory_DW.TimeStampB) {
      reference_trajectory_DW.TimeStampA = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA;
    } else {
      reference_trajectory_DW.TimeStampB = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB;
    }

    *lastU = reference_trajectory_B.Product2;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative'
    if (reference_trajectory_DW.TimeStampA_n == (rtInf)) {
      reference_trajectory_DW.TimeStampA_n = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_i;
    } else if (reference_trajectory_DW.TimeStampB_g == (rtInf)) {
      reference_trajectory_DW.TimeStampB_g = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_h;
    } else if (reference_trajectory_DW.TimeStampA_n <
               reference_trajectory_DW.TimeStampB_g) {
      reference_trajectory_DW.TimeStampA_n = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_i;
    } else {
      reference_trajectory_DW.TimeStampB_g = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_h;
    }

    *lastU = reference_trajectory_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative4'
    if (reference_trajectory_DW.TimeStampA_o == (rtInf)) {
      reference_trajectory_DW.TimeStampA_o = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_h;
    } else if (reference_trajectory_DW.TimeStampB_f == (rtInf)) {
      reference_trajectory_DW.TimeStampB_f = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_f;
    } else if (reference_trajectory_DW.TimeStampA_o <
               reference_trajectory_DW.TimeStampB_f) {
      reference_trajectory_DW.TimeStampA_o = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_h;
    } else {
      reference_trajectory_DW.TimeStampB_f = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_f;
    }

    *lastU = reference_trajectory_B.Product;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative2'
    if (reference_trajectory_DW.TimeStampA_or == (rtInf)) {
      reference_trajectory_DW.TimeStampA_or = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_m;
    } else if (reference_trajectory_DW.TimeStampB_p == (rtInf)) {
      reference_trajectory_DW.TimeStampB_p = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_j;
    } else if (reference_trajectory_DW.TimeStampA_or <
               reference_trajectory_DW.TimeStampB_p) {
      reference_trajectory_DW.TimeStampA_or = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_m;
    } else {
      reference_trajectory_DW.TimeStampB_p = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_j;
    }

    *lastU = reference_trajectory_B.Derivative4;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (reference_trajectory_DW.TimeStampA_m == (rtInf)) {
      reference_trajectory_DW.TimeStampA_m = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_e;
    } else if (reference_trajectory_DW.TimeStampB_e == (rtInf)) {
      reference_trajectory_DW.TimeStampB_e = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_c;
    } else if (reference_trajectory_DW.TimeStampA_m <
               reference_trajectory_DW.TimeStampB_e) {
      reference_trajectory_DW.TimeStampA_m = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_e;
    } else {
      reference_trajectory_DW.TimeStampB_e = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_c;
    }

    *lastU = reference_trajectory_B.Product1;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative5'
    if (reference_trajectory_DW.TimeStampA_k == (rtInf)) {
      reference_trajectory_DW.TimeStampA_k = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_g;
    } else if (reference_trajectory_DW.TimeStampB_b == (rtInf)) {
      reference_trajectory_DW.TimeStampB_b = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_cg;
    } else if (reference_trajectory_DW.TimeStampA_k <
               reference_trajectory_DW.TimeStampB_b) {
      reference_trajectory_DW.TimeStampA_k = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeA_g;
    } else {
      reference_trajectory_DW.TimeStampB_b = reference_trajectory_M->Timing.t[0];
      lastU = &reference_trajectory_DW.LastUAtTimeB_cg;
    }

    *lastU = reference_trajectory_B.Derivative3;

    // End of Update for Derivative: '<Root>/Derivative5'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  reference_trajectory_M->Timing.t[0] =
    (++reference_trajectory_M->Timing.clockTick0) *
    reference_trajectory_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.0038s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.0038, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    reference_trajectory_M->Timing.clockTick1++;
  }
}

// Model initialize function
void reference_trajectory_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)reference_trajectory_M, 0,
                sizeof(RT_MODEL_reference_trajectory_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&reference_trajectory_M->solverInfo,
                          &reference_trajectory_M->Timing.simTimeStep);
    rtsiSetTPtr(&reference_trajectory_M->solverInfo, &rtmGetTPtr
                (reference_trajectory_M));
    rtsiSetStepSizePtr(&reference_trajectory_M->solverInfo,
                       &reference_trajectory_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&reference_trajectory_M->solverInfo,
                          (&rtmGetErrorStatus(reference_trajectory_M)));
    rtsiSetRTModelPtr(&reference_trajectory_M->solverInfo,
                      reference_trajectory_M);
  }

  rtsiSetSimTimeStep(&reference_trajectory_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&reference_trajectory_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(reference_trajectory_M, &reference_trajectory_M->Timing.tArray[0]);
  reference_trajectory_M->Timing.stepSize0 = 0.0038;

  // block I/O
  (void) memset(((void *) &reference_trajectory_B), 0,
                sizeof(B_reference_trajectory_T));

  // states (dwork)
  (void) memset((void *)&reference_trajectory_DW, 0,
                sizeof(DW_reference_trajectory_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    reference_trajectory_DW.obj.isInitialized = 0;
    reference_trajectory_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_reference_trajectory_9.createPublisher(tmp_0,
      reference_traje_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    reference_trajectory_DW.TimeStampA = (rtInf);
    reference_trajectory_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative'
    reference_trajectory_DW.TimeStampA_n = (rtInf);
    reference_trajectory_DW.TimeStampB_g = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    reference_trajectory_DW.TimeStampA_o = (rtInf);
    reference_trajectory_DW.TimeStampB_f = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    reference_trajectory_DW.TimeStampA_or = (rtInf);
    reference_trajectory_DW.TimeStampB_p = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    reference_trajectory_DW.TimeStampA_m = (rtInf);
    reference_trajectory_DW.TimeStampB_e = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    reference_trajectory_DW.TimeStampA_k = (rtInf);
    reference_trajectory_DW.TimeStampB_b = (rtInf);
  }
}

// Model terminate function
void reference_trajectory_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (reference_trajectory_DW.obj.isInitialized == 1) {
    reference_trajectory_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
