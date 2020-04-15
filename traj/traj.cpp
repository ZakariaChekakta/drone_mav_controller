//
// File: traj.cpp
//
// Code generated for Simulink model 'traj'.
//
// Model version                  : 1.10
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Jan 18 22:16:48 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "traj.h"
#include "traj_private.h"
#define traj_MessageQueueLen           (1)

// Block signals (auto storage)
B_traj_T traj_B;

// Block states (auto storage)
DW_traj_T traj_DW;

// Real-time model
RT_MODEL_traj_T traj_M_;
RT_MODEL_traj_T *const traj_M = &traj_M_;

// Model step function
void traj_step(void)
{
  {
    real_T *lastU;
    real_T rtb_Derivative5;
    real_T rtb_Derivative4;
    real_T rtb_Derivative3;

    // Step: '<S5>/Step1'
    if (traj_M->Timing.t[0] < traj_P.Step1_Time) {
      rtb_Derivative5 = traj_P.Step1_Y0;
    } else {
      rtb_Derivative5 = traj_P.Step1_YFinal;
    }

    // End of Step: '<S5>/Step1'

    // Step: '<S5>/Step12'
    if (traj_M->Timing.t[0] < traj_P.Step12_Time) {
      rtb_Derivative3 = traj_P.Step12_Y0;
    } else {
      rtb_Derivative3 = traj_P.Step12_YFinal;
    }

    // End of Step: '<S5>/Step12'

    // Sum: '<S5>/Add2' incorporates:
    //   Clock: '<S5>/Clock1'
    //   Constant: '<S5>/Constant3'
    //   Product: '<S5>/Product1'
    //   Product: '<S5>/Product6'
    //   Sin: '<S5>/Sine Wave'

    traj_B.Add2 = (sin(traj_P.SineWave_Freq * traj_M->Timing.t[0] +
                       traj_P.SineWave_Phase) * traj_P.SineWave_Amp +
                   traj_P.SineWave_Bias) * rtb_Derivative5 + rtb_Derivative3 *
      traj_P.Constant3_Value;

    // Step: '<S3>/Step'
    if (traj_M->Timing.t[0] < traj_P.Step_Time) {
      rtb_Derivative5 = traj_P.Step_Y0;
    } else {
      rtb_Derivative5 = traj_P.Step_YFinal;
    }

    // End of Step: '<S3>/Step'

    // Product: '<S3>/Product' incorporates:
    //   Clock: '<S3>/Clock'
    //   Fcn: '<S3>/Fcn'

    traj_B.Product = (1.0 - cos((traj_M->Timing.t[0] - 20.0) * 0.25)) *
      rtb_Derivative5;

    // Step: '<S4>/Step'
    if (traj_M->Timing.t[0] < traj_P.Step_Time_g) {
      rtb_Derivative5 = traj_P.Step_Y0_m;
    } else {
      rtb_Derivative5 = traj_P.Step_YFinal_h;
    }

    // End of Step: '<S4>/Step'

    // Product: '<S4>/Product' incorporates:
    //   Clock: '<S4>/Clock'
    //   Fcn: '<S4>/Fcn'

    traj_B.Product_g = sin((traj_M->Timing.t[0] - 20.0) * 0.5) * rtb_Derivative5;

    // Derivative: '<Root>/Derivative'
    if ((traj_DW.TimeStampA >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB >=
         traj_M->Timing.t[0])) {
      traj_B.Derivative = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA;
      lastU = &traj_DW.LastUAtTimeA;
      if (traj_DW.TimeStampA < traj_DW.TimeStampB) {
        if (traj_DW.TimeStampB < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB;
          lastU = &traj_DW.LastUAtTimeB;
        }
      } else {
        if (traj_DW.TimeStampA >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB;
          lastU = &traj_DW.LastUAtTimeB;
        }
      }

      traj_B.Derivative = (traj_B.Add2 - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative'

    // Derivative: '<Root>/Derivative1'
    if ((traj_DW.TimeStampA_i >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB_c >=
         traj_M->Timing.t[0])) {
      traj_B.Derivative1 = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA_i;
      lastU = &traj_DW.LastUAtTimeA_c;
      if (traj_DW.TimeStampA_i < traj_DW.TimeStampB_c) {
        if (traj_DW.TimeStampB_c < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_c;
          lastU = &traj_DW.LastUAtTimeB_b;
        }
      } else {
        if (traj_DW.TimeStampA_i >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_c;
          lastU = &traj_DW.LastUAtTimeB_b;
        }
      }

      traj_B.Derivative1 = (traj_B.Product - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative1'

    // Derivative: '<Root>/Derivative2'
    if ((traj_DW.TimeStampA_i4 >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB_a >=
         traj_M->Timing.t[0])) {
      traj_B.Derivative2 = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA_i4;
      lastU = &traj_DW.LastUAtTimeA_f;
      if (traj_DW.TimeStampA_i4 < traj_DW.TimeStampB_a) {
        if (traj_DW.TimeStampB_a < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_a;
          lastU = &traj_DW.LastUAtTimeB_d;
        }
      } else {
        if (traj_DW.TimeStampA_i4 >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_a;
          lastU = &traj_DW.LastUAtTimeB_d;
        }
      }

      traj_B.Derivative2 = (traj_B.Product_g - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative2'

    // Derivative: '<Root>/Derivative3'
    if ((traj_DW.TimeStampA_a >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB_cp >=
         traj_M->Timing.t[0])) {
      rtb_Derivative3 = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA_a;
      lastU = &traj_DW.LastUAtTimeA_k;
      if (traj_DW.TimeStampA_a < traj_DW.TimeStampB_cp) {
        if (traj_DW.TimeStampB_cp < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_cp;
          lastU = &traj_DW.LastUAtTimeB_h;
        }
      } else {
        if (traj_DW.TimeStampA_a >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_cp;
          lastU = &traj_DW.LastUAtTimeB_h;
        }
      }

      rtb_Derivative3 = (traj_B.Derivative - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative3'

    // Derivative: '<Root>/Derivative4'
    if ((traj_DW.TimeStampA_b >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB_e >=
         traj_M->Timing.t[0])) {
      rtb_Derivative4 = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA_b;
      lastU = &traj_DW.LastUAtTimeA_c0;
      if (traj_DW.TimeStampA_b < traj_DW.TimeStampB_e) {
        if (traj_DW.TimeStampB_e < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_e;
          lastU = &traj_DW.LastUAtTimeB_e;
        }
      } else {
        if (traj_DW.TimeStampA_b >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_e;
          lastU = &traj_DW.LastUAtTimeB_e;
        }
      }

      rtb_Derivative4 = (traj_B.Derivative1 - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative4'

    // Derivative: '<Root>/Derivative5'
    if ((traj_DW.TimeStampA_n >= traj_M->Timing.t[0]) && (traj_DW.TimeStampB_m >=
         traj_M->Timing.t[0])) {
      rtb_Derivative5 = 0.0;
    } else {
      rtb_Derivative5 = traj_DW.TimeStampA_n;
      lastU = &traj_DW.LastUAtTimeA_d;
      if (traj_DW.TimeStampA_n < traj_DW.TimeStampB_m) {
        if (traj_DW.TimeStampB_m < traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_m;
          lastU = &traj_DW.LastUAtTimeB_p;
        }
      } else {
        if (traj_DW.TimeStampA_n >= traj_M->Timing.t[0]) {
          rtb_Derivative5 = traj_DW.TimeStampB_m;
          lastU = &traj_DW.LastUAtTimeB_p;
        }
      }

      rtb_Derivative5 = (traj_B.Derivative2 - *lastU) / (traj_M->Timing.t[0] -
        rtb_Derivative5);
    }

    // End of Derivative: '<Root>/Derivative5'

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<S1>/Constant'

    traj_B.BusAssignment = traj_P.Constant_Value;
    traj_B.BusAssignment.PositionDesired.Pose.Position.Z = traj_B.Add2;
    traj_B.BusAssignment.PositionDesired.Pose.Position.X = traj_B.Product;
    traj_B.BusAssignment.PositionDesired.Pose.Position.Y = traj_B.Product_g;
    traj_B.BusAssignment.VelociteDesired.Twist.Linear.Z = traj_B.Derivative;
    traj_B.BusAssignment.VelociteDesired.Twist.Linear.X = traj_B.Derivative1;
    traj_B.BusAssignment.VelociteDesired.Twist.Linear.Y = traj_B.Derivative2;
    traj_B.BusAssignment.AccelerationDesired.Accel.Linear.Z = rtb_Derivative3;
    traj_B.BusAssignment.AccelerationDesired.Accel.Linear.X = rtb_Derivative4;
    traj_B.BusAssignment.AccelerationDesired.Accel.Linear.Y = rtb_Derivative5;

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
    //   MATLABSystem: '<S2>/SinkBlock'

    Pub_traj_9.publish(&traj_B.BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'
  }

  {
    real_T *lastU;

    // Update for Derivative: '<Root>/Derivative'
    if (traj_DW.TimeStampA == (rtInf)) {
      traj_DW.TimeStampA = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA;
    } else if (traj_DW.TimeStampB == (rtInf)) {
      traj_DW.TimeStampB = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB;
    } else if (traj_DW.TimeStampA < traj_DW.TimeStampB) {
      traj_DW.TimeStampA = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA;
    } else {
      traj_DW.TimeStampB = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB;
    }

    *lastU = traj_B.Add2;

    // End of Update for Derivative: '<Root>/Derivative'

    // Update for Derivative: '<Root>/Derivative1'
    if (traj_DW.TimeStampA_i == (rtInf)) {
      traj_DW.TimeStampA_i = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_c;
    } else if (traj_DW.TimeStampB_c == (rtInf)) {
      traj_DW.TimeStampB_c = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_b;
    } else if (traj_DW.TimeStampA_i < traj_DW.TimeStampB_c) {
      traj_DW.TimeStampA_i = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_c;
    } else {
      traj_DW.TimeStampB_c = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_b;
    }

    *lastU = traj_B.Product;

    // End of Update for Derivative: '<Root>/Derivative1'

    // Update for Derivative: '<Root>/Derivative2'
    if (traj_DW.TimeStampA_i4 == (rtInf)) {
      traj_DW.TimeStampA_i4 = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_f;
    } else if (traj_DW.TimeStampB_a == (rtInf)) {
      traj_DW.TimeStampB_a = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_d;
    } else if (traj_DW.TimeStampA_i4 < traj_DW.TimeStampB_a) {
      traj_DW.TimeStampA_i4 = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_f;
    } else {
      traj_DW.TimeStampB_a = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_d;
    }

    *lastU = traj_B.Product_g;

    // End of Update for Derivative: '<Root>/Derivative2'

    // Update for Derivative: '<Root>/Derivative3'
    if (traj_DW.TimeStampA_a == (rtInf)) {
      traj_DW.TimeStampA_a = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_k;
    } else if (traj_DW.TimeStampB_cp == (rtInf)) {
      traj_DW.TimeStampB_cp = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_h;
    } else if (traj_DW.TimeStampA_a < traj_DW.TimeStampB_cp) {
      traj_DW.TimeStampA_a = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_k;
    } else {
      traj_DW.TimeStampB_cp = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_h;
    }

    *lastU = traj_B.Derivative;

    // End of Update for Derivative: '<Root>/Derivative3'

    // Update for Derivative: '<Root>/Derivative4'
    if (traj_DW.TimeStampA_b == (rtInf)) {
      traj_DW.TimeStampA_b = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_c0;
    } else if (traj_DW.TimeStampB_e == (rtInf)) {
      traj_DW.TimeStampB_e = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_e;
    } else if (traj_DW.TimeStampA_b < traj_DW.TimeStampB_e) {
      traj_DW.TimeStampA_b = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_c0;
    } else {
      traj_DW.TimeStampB_e = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_e;
    }

    *lastU = traj_B.Derivative1;

    // End of Update for Derivative: '<Root>/Derivative4'

    // Update for Derivative: '<Root>/Derivative5'
    if (traj_DW.TimeStampA_n == (rtInf)) {
      traj_DW.TimeStampA_n = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_d;
    } else if (traj_DW.TimeStampB_m == (rtInf)) {
      traj_DW.TimeStampB_m = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_p;
    } else if (traj_DW.TimeStampA_n < traj_DW.TimeStampB_m) {
      traj_DW.TimeStampA_n = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeA_d;
    } else {
      traj_DW.TimeStampB_m = traj_M->Timing.t[0];
      lastU = &traj_DW.LastUAtTimeB_p;
    }

    *lastU = traj_B.Derivative2;

    // End of Update for Derivative: '<Root>/Derivative5'
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  traj_M->Timing.t[0] =
    (++traj_M->Timing.clockTick0) * traj_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    traj_M->Timing.clockTick1++;
  }
}

// Model initialize function
void traj_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)traj_M, 0,
                sizeof(RT_MODEL_traj_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&traj_M->solverInfo, &traj_M->Timing.simTimeStep);
    rtsiSetTPtr(&traj_M->solverInfo, &rtmGetTPtr(traj_M));
    rtsiSetStepSizePtr(&traj_M->solverInfo, &traj_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&traj_M->solverInfo, (&rtmGetErrorStatus(traj_M)));
    rtsiSetRTModelPtr(&traj_M->solverInfo, traj_M);
  }

  rtsiSetSimTimeStep(&traj_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&traj_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(traj_M, &traj_M->Timing.tArray[0]);
  traj_M->Timing.stepSize0 = 0.01;

  // block I/O
  (void) memset(((void *) &traj_B), 0,
                sizeof(B_traj_T));

  // states (dwork)
  (void) memset((void *)&traj_DW, 0,
                sizeof(DW_traj_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    traj_DW.obj.isInitialized = 0;
    traj_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_traj_9.createPublisher(tmp_0, traj_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // InitializeConditions for Derivative: '<Root>/Derivative'
    traj_DW.TimeStampA = (rtInf);
    traj_DW.TimeStampB = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative1'
    traj_DW.TimeStampA_i = (rtInf);
    traj_DW.TimeStampB_c = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative2'
    traj_DW.TimeStampA_i4 = (rtInf);
    traj_DW.TimeStampB_a = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative3'
    traj_DW.TimeStampA_a = (rtInf);
    traj_DW.TimeStampB_cp = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative4'
    traj_DW.TimeStampA_b = (rtInf);
    traj_DW.TimeStampB_e = (rtInf);

    // InitializeConditions for Derivative: '<Root>/Derivative5'
    traj_DW.TimeStampA_n = (rtInf);
    traj_DW.TimeStampB_m = (rtInf);
  }
}

// Model terminate function
void traj_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (traj_DW.obj.isInitialized == 1) {
    traj_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
