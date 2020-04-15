//
// File: Reference.cpp
//
// Code generated for Simulink model 'Reference'.
//
// Model version                  : 1.40
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Wed Dec 19 12:43:46 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Reference.h"
#include "Reference_private.h"
#define Reference_MessageQueueLen      (1)

// Block signals (auto storage)
B_Reference_T Reference_B;

// Block states (auto storage)
DW_Reference_T Reference_DW;

// Real-time model
RT_MODEL_Reference_T Reference_M_;
RT_MODEL_Reference_T *const Reference_M = &Reference_M_;
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
void Reference_step(void)
{
  {
    real_T *lastU;
    real_T rtb_Clock;
    real_T rtb_Derivative4;
    real_T rtb_Derivative2;
    real_T rtb_Derivative5;

    // Clock: '<S5>/Clock'
    rtb_Clock = Reference_M->Timing.t[0];

    // Switch: '<S5>/Switch' incorporates:
    //   Constant: '<S5>/Constant'
    //   Fcn: '<S5>/Fcn'

    if (rtb_Clock >= Reference_P.Switch_Threshold) {
      rtb_Derivative5 = Reference_P.Constant_Value_g;
    } else {
      rtb_Derivative5 = 10.0 * rt_powd_snf(rtb_Clock, 5.0) / (rt_powd_snf(6.0 -
        rtb_Clock, 5.0) + rt_powd_snf(rtb_Clock, 5.0));
    }

    // End of Switch: '<S5>/Switch'

    // Gain: '<S5>/Gain'
    Reference_B.Gain = Reference_P.Gain_Gain * rtb_Derivative5;

    // Derivative: '<Root>/Derivative'
    if ((Reference_DW.TimeStampA >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB >= Reference_M->Timing.t[0])) {
      Reference_B.Derivative = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA;
      lastU = &Reference_DW.LastUAtTimeA;
      if (Reference_DW.TimeStampA < Reference_DW.TimeStampB) {
        if (Reference_DW.TimeStampB < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB;
          lastU = &Reference_DW.LastUAtTimeB;
        }
      } else {
        if (Reference_DW.TimeStampA >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB;
          lastU = &Reference_DW.LastUAtTimeB;
        }
      }

      Reference_B.Derivative = (Reference_B.Gain - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative5'
    if ((Reference_DW.TimeStampA_p >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB_p >= Reference_M->Timing.t[0])) {
      rtb_Derivative5 = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA_p;
      lastU = &Reference_DW.LastUAtTimeA_n;
      if (Reference_DW.TimeStampA_p < Reference_DW.TimeStampB_p) {
        if (Reference_DW.TimeStampB_p < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_p;
          lastU = &Reference_DW.LastUAtTimeB_c;
        }
      } else {
        if (Reference_DW.TimeStampA_p >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_p;
          lastU = &Reference_DW.LastUAtTimeB_c;
        }
      }

      rtb_Derivative5 = (Reference_B.Derivative - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative5'

    // Switch: '<S5>/Switch1' incorporates:
    //   Constant: '<S5>/Constant'
    //   Fcn: '<S5>/Fcn1'

    if (rtb_Clock >= Reference_P.Switch1_Threshold) {
      rtb_Derivative2 = Reference_P.Constant_Value_g;
    } else {
      rtb_Derivative2 = rt_powd_snf(rtb_Clock - 6.0, 5.0) * 10.0 / (rt_powd_snf
        ((12.0 - rtb_Clock) + 6.0, 5.0) + rt_powd_snf(rtb_Clock - 6.0, 5.0));
    }

    // End of Switch: '<S5>/Switch1'

    // Gain: '<S5>/Gain1'
    Reference_B.Gain1 = Reference_P.Gain1_Gain * rtb_Derivative2;

    // Derivative: '<Root>/Derivative1'
    if ((Reference_DW.TimeStampA_c >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB_d >= Reference_M->Timing.t[0])) {
      Reference_B.Derivative1 = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA_c;
      lastU = &Reference_DW.LastUAtTimeA_h;
      if (Reference_DW.TimeStampA_c < Reference_DW.TimeStampB_d) {
        if (Reference_DW.TimeStampB_d < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_d;
          lastU = &Reference_DW.LastUAtTimeB_p;
        }
      } else {
        if (Reference_DW.TimeStampA_c >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_d;
          lastU = &Reference_DW.LastUAtTimeB_p;
        }
      }

      Reference_B.Derivative1 = (Reference_B.Gain1 - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((Reference_DW.TimeStampA_n >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB_l >= Reference_M->Timing.t[0])) {
      rtb_Derivative2 = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA_n;
      lastU = &Reference_DW.LastUAtTimeA_c;
      if (Reference_DW.TimeStampA_n < Reference_DW.TimeStampB_l) {
        if (Reference_DW.TimeStampB_l < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_l;
          lastU = &Reference_DW.LastUAtTimeB_d;
        }
      } else {
        if (Reference_DW.TimeStampA_n >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_l;
          lastU = &Reference_DW.LastUAtTimeB_d;
        }
      }

      rtb_Derivative2 = (Reference_B.Derivative1 - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Switch: '<S5>/Switch2' incorporates:
    //   Constant: '<S5>/Constant'
    //   Fcn: '<S5>/Fcn2'

    if (rtb_Clock >= Reference_P.Switch2_Threshold) {
      rtb_Derivative4 = Reference_P.Constant_Value_g;
    } else {
      rtb_Derivative4 = rt_powd_snf(rtb_Clock - 12.0, 5.0) * 10.0 / (rt_powd_snf
        ((18.0 - rtb_Clock) + 12.0, 5.0) + rt_powd_snf(rtb_Clock - 12.0, 5.0));
    }

    // End of Switch: '<S5>/Switch2'

    // Gain: '<S5>/Gain2'
    Reference_B.Gain2 = Reference_P.Gain2_Gain * rtb_Derivative4;

    // Derivative: '<Root>/Derivative3'
    if ((Reference_DW.TimeStampA_d >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB_p1 >= Reference_M->Timing.t[0])) {
      Reference_B.Derivative3 = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA_d;
      lastU = &Reference_DW.LastUAtTimeA_ha;
      if (Reference_DW.TimeStampA_d < Reference_DW.TimeStampB_p1) {
        if (Reference_DW.TimeStampB_p1 < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_p1;
          lastU = &Reference_DW.LastUAtTimeB_pj;
        }
      } else {
        if (Reference_DW.TimeStampA_d >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_p1;
          lastU = &Reference_DW.LastUAtTimeB_pj;
        }
      }

      Reference_B.Derivative3 = (Reference_B.Gain2 - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative4'
    if ((Reference_DW.TimeStampA_no >= Reference_M->Timing.t[0]) &&
        (Reference_DW.TimeStampB_b >= Reference_M->Timing.t[0])) {
      rtb_Derivative4 = 0.0;
    } else {
      rtb_Derivative4 = Reference_DW.TimeStampA_no;
      lastU = &Reference_DW.LastUAtTimeA_j;
      if (Reference_DW.TimeStampA_no < Reference_DW.TimeStampB_b) {
        if (Reference_DW.TimeStampB_b < Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_b;
          lastU = &Reference_DW.LastUAtTimeB_m;
        }
      } else {
        if (Reference_DW.TimeStampA_no >= Reference_M->Timing.t[0]) {
          rtb_Derivative4 = Reference_DW.TimeStampB_b;
          lastU = &Reference_DW.LastUAtTimeB_m;
        }
      }

      rtb_Derivative4 = (Reference_B.Derivative3 - *lastU) /
        (Reference_M->Timing.t[0] - rtb_Derivative4);
    }

    // End of Derivative: '<Root>/Derivative4'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    Reference_B.BusAssignment = Reference_P.Constant_Value;
    Reference_B.BusAssignment.PositionDesired.Pose.Position.Z = Reference_B.Gain;
    Reference_B.BusAssignment.VelociteDesired.Twist.Linear.Z =
      Reference_B.Derivative;
    Reference_B.BusAssignment.AccelerationDesired.Accel.Linear.Z =
      rtb_Derivative5;
    Reference_B.BusAssignment.PositionDesired.Pose.Position.X =
      Reference_B.Gain1;
    Reference_B.BusAssignment.VelociteDesired.Twist.Linear.X =
      Reference_B.Derivative1;
    Reference_B.BusAssignment.AccelerationDesired.Accel.Linear.X =
      rtb_Derivative2;
    Reference_B.BusAssignment.PositionDesired.Pose.Position.Y =
      Reference_B.Gain2;
    Reference_B.BusAssignment.VelociteDesired.Twist.Linear.Y =
      Reference_B.Derivative3;
    Reference_B.BusAssignment.AccelerationDesired.Accel.Linear.Y =
      rtb_Derivative4;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
    //   MATLABSystem: '<S3>/SinkBlock'

    Pub_Reference_4.publish(&Reference_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'

    // BusAssignment: '<Root>/Bus Assignment1' incorporates:
    //   Constant: '<S2>/Constant'

    Reference_B.BusAssignment1 = Reference_P.Constant_Value_i;
    Reference_B.BusAssignment1.Clock_.Sec = rtb_Clock;

    // Outputs for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
    //   MATLABSystem: '<S4>/SinkBlock'

    Pub_Reference_81.publish(&Reference_B.BusAssignment1);

    // End of Outputs for SubSystem: '<Root>/Publish1'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (Reference_DW.TimeStampA == (rtInf)) {
      Reference_DW.TimeStampA = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA;
    } else if (Reference_DW.TimeStampB == (rtInf)) {
      Reference_DW.TimeStampB = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB;
    } else if (Reference_DW.TimeStampA < Reference_DW.TimeStampB) {
      Reference_DW.TimeStampA = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA;
    } else {
      Reference_DW.TimeStampB = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB;
    }

    *lastU = Reference_B.Gain;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative5'
    if (Reference_DW.TimeStampA_p == (rtInf)) {
      Reference_DW.TimeStampA_p = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_n;
    } else if (Reference_DW.TimeStampB_p == (rtInf)) {
      Reference_DW.TimeStampB_p = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_c;
    } else if (Reference_DW.TimeStampA_p < Reference_DW.TimeStampB_p) {
      Reference_DW.TimeStampA_p = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_n;
    } else {
      Reference_DW.TimeStampB_p = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_c;
    }

    *lastU = Reference_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative5'

    // Update for Derivative: '<Root>/Derivative1'
    if (Reference_DW.TimeStampA_c == (rtInf)) {
      Reference_DW.TimeStampA_c = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_h;
    } else if (Reference_DW.TimeStampB_d == (rtInf)) {
      Reference_DW.TimeStampB_d = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_p;
    } else if (Reference_DW.TimeStampA_c < Reference_DW.TimeStampB_d) {
      Reference_DW.TimeStampA_c = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_h;
    } else {
      Reference_DW.TimeStampB_d = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_p;
    }

    *lastU = Reference_B.Gain1;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (Reference_DW.TimeStampA_n == (rtInf)) {
      Reference_DW.TimeStampA_n = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_c;
    } else if (Reference_DW.TimeStampB_l == (rtInf)) {
      Reference_DW.TimeStampB_l = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_d;
    } else if (Reference_DW.TimeStampA_n < Reference_DW.TimeStampB_l) {
      Reference_DW.TimeStampA_n = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_c;
    } else {
      Reference_DW.TimeStampB_l = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_d;
    }

    *lastU = Reference_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (Reference_DW.TimeStampA_d == (rtInf)) {
      Reference_DW.TimeStampA_d = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_ha;
    } else if (Reference_DW.TimeStampB_p1 == (rtInf)) {
      Reference_DW.TimeStampB_p1 = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_pj;
    } else if (Reference_DW.TimeStampA_d < Reference_DW.TimeStampB_p1) {
      Reference_DW.TimeStampA_d = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_ha;
    } else {
      Reference_DW.TimeStampB_p1 = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_pj;
    }

    *lastU = Reference_B.Gain2;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative4'
    if (Reference_DW.TimeStampA_no == (rtInf)) {
      Reference_DW.TimeStampA_no = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_j;
    } else if (Reference_DW.TimeStampB_b == (rtInf)) {
      Reference_DW.TimeStampB_b = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_m;
    } else if (Reference_DW.TimeStampA_no < Reference_DW.TimeStampB_b) {
      Reference_DW.TimeStampA_no = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeA_j;
    } else {
      Reference_DW.TimeStampB_b = Reference_M->Timing.t[0];
      lastU = &Reference_DW.LastUAtTimeB_m;
    }

    *lastU = Reference_B.Derivative3;

    // End of Update for Derivative: '<Root>/Derivative4'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  Reference_M->Timing.t[0] =
    (++Reference_M->Timing.clockTick0) * Reference_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    Reference_M->Timing.clockTick1++;
  }
}

// Model initialize function
void Reference_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)Reference_M, 0,
                sizeof(RT_MODEL_Reference_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&Reference_M->solverInfo,
                          &Reference_M->Timing.simTimeStep);
    rtsiSetTPtr(&Reference_M->solverInfo, &rtmGetTPtr(Reference_M));
    rtsiSetStepSizePtr(&Reference_M->solverInfo, &Reference_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Reference_M->solverInfo, (&rtmGetErrorStatus
      (Reference_M)));
    rtsiSetRTModelPtr(&Reference_M->solverInfo, Reference_M);
  }

  rtsiSetSimTimeStep(&Reference_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Reference_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Reference_M, &Reference_M->Timing.tArray[0]);
  Reference_M->Timing.stepSize0 = 0.01;

  // block I/O
  (void) memset(((void *) &Reference_B), 0,
                sizeof(B_Reference_T));

  // states (dwork)
  (void) memset((void *)&Reference_DW, 0,
                sizeof(DW_Reference_T));

  {
    static const char_T tmp[15] = { '/', 't', 'i', 'm', 'e', '_', 'r', 'e', 'f',
      'e', 'r', 'e', 'n', 'c', 'e' };

    static const char_T tmp_0[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n',
      'c', 'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_1[16];
    char_T tmp_2[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    Reference_DW.obj_b.isInitialized = 0;
    Reference_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[18] = '\x00';
    Pub_Reference_4.createPublisher(tmp_2, Reference_MessageQueueLen);

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    Reference_DW.obj.isInitialized = 0;
    Reference_DW.obj.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[15] = '\x00';
    Pub_Reference_81.createPublisher(tmp_1, Reference_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // InitializeConditions for Derivative: '<Root>/Derivative'
    Reference_DW.TimeStampA = (rtInf);
    Reference_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    Reference_DW.TimeStampA_p = (rtInf);
    Reference_DW.TimeStampB_p = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    Reference_DW.TimeStampA_c = (rtInf);
    Reference_DW.TimeStampB_d = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    Reference_DW.TimeStampA_n = (rtInf);
    Reference_DW.TimeStampB_l = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    Reference_DW.TimeStampA_d = (rtInf);
    Reference_DW.TimeStampB_p1 = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    Reference_DW.TimeStampA_no = (rtInf);
    Reference_DW.TimeStampB_b = (rtInf);
  }
}

// Model terminate function
void Reference_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (Reference_DW.obj_b.isInitialized == 1) {
    Reference_DW.obj_b.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SinkBlock'

  if (Reference_DW.obj.isInitialized == 1) {
    Reference_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
