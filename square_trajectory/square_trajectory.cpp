//
// File: square_trajectory.cpp
//
// Code generated for Simulink model 'square_trajectory'.
//
// Model version                  : 1.22
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Jan 11 21:46:26 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "square_trajectory.h"
#include "square_trajectory_private.h"
#define square_trajecto_MessageQueueLen (1)

// Block signals (auto storage)
B_square_trajectory_T square_trajectory_B;

// Block states (auto storage)
DW_square_trajectory_T square_trajectory_DW;

// Real-time model
RT_MODEL_square_trajectory_T square_trajectory_M_;
RT_MODEL_square_trajectory_T *const square_trajectory_M = &square_trajectory_M_;

// Model step function
void square_trajectory_step(void)
{
  real_T currentTime;
  real_T currentTime_0;
  real_T currentTime_1;
  real_T currentTime_2;
  real_T currentTime_3;
  real_T currentTime_4;

  // Step: '<S5>/Step6'
  currentTime = square_trajectory_M->Timing.t[0];

  // Step: '<S5>/Step1'
  currentTime_0 = square_trajectory_M->Timing.t[0];

  // Step: '<S3>/Step6'
  currentTime_1 = square_trajectory_M->Timing.t[0];

  // Step: '<S3>/Step1'
  currentTime_2 = square_trajectory_M->Timing.t[0];

  // Step: '<S4>/Step6'
  currentTime_3 = square_trajectory_M->Timing.t[0];

  // Step: '<S4>/Step1'
  currentTime_4 = square_trajectory_M->Timing.t[0];

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  square_trajectory_B.BusAssignment = square_trajectory_P.Constant_Value;

  // Step: '<S5>/Step6'
  if (currentTime < square_trajectory_P.Step6_Time) {
    currentTime = square_trajectory_P.Step6_Y0;
  } else {
    currentTime = square_trajectory_P.Step6_YFinal;
  }

  // Step: '<S5>/Step1'
  if (currentTime_0 < square_trajectory_P.Step1_Time) {
    currentTime_0 = square_trajectory_P.Step1_Y0;
  } else {
    currentTime_0 = square_trajectory_P.Step1_YFinal;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Sum: '<S5>/Add'

  square_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Z =
    currentTime + currentTime_0;

  // Step: '<S3>/Step6'
  if (currentTime_1 < square_trajectory_P.Step6_Time_l) {
    currentTime = square_trajectory_P.Step6_Y0_c;
  } else {
    currentTime = square_trajectory_P.Step6_YFinal_n;
  }

  // Step: '<S3>/Step1'
  if (currentTime_2 < square_trajectory_P.Step1_Time_c) {
    currentTime_0 = square_trajectory_P.Step1_Y0_e;
  } else {
    currentTime_0 = square_trajectory_P.Step1_YFinal_h;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Sum: '<S3>/Add'

  square_trajectory_B.BusAssignment.PositionDesired.Pose.Position.X =
    currentTime + currentTime_0;

  // Step: '<S4>/Step6'
  if (currentTime_3 < square_trajectory_P.Step6_Time_h) {
    currentTime = square_trajectory_P.Step6_Y0_n;
  } else {
    currentTime = square_trajectory_P.Step6_YFinal_g;
  }

  // Step: '<S4>/Step1'
  if (currentTime_4 < square_trajectory_P.Step1_Time_b) {
    currentTime_0 = square_trajectory_P.Step1_Y0_h;
  } else {
    currentTime_0 = square_trajectory_P.Step1_YFinal_h5;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Sum: '<S4>/Add'

  square_trajectory_B.BusAssignment.PositionDesired.Pose.Position.Y =
    currentTime + currentTime_0;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   MATLABSystem: '<S2>/SinkBlock'

  Pub_square_trajectory_4.publish(&square_trajectory_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  square_trajectory_M->Timing.t[0] =
    (++square_trajectory_M->Timing.clockTick0) *
    square_trajectory_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    square_trajectory_M->Timing.clockTick1++;
  }
}

// Model initialize function
void square_trajectory_initialize(void)
{
  // Registration code

  // initialize real-time model
  (void) memset((void *)square_trajectory_M, 0,
                sizeof(RT_MODEL_square_trajectory_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&square_trajectory_M->solverInfo,
                          &square_trajectory_M->Timing.simTimeStep);
    rtsiSetTPtr(&square_trajectory_M->solverInfo, &rtmGetTPtr
                (square_trajectory_M));
    rtsiSetStepSizePtr(&square_trajectory_M->solverInfo,
                       &square_trajectory_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&square_trajectory_M->solverInfo, (&rtmGetErrorStatus
      (square_trajectory_M)));
    rtsiSetRTModelPtr(&square_trajectory_M->solverInfo, square_trajectory_M);
  }

  rtsiSetSimTimeStep(&square_trajectory_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&square_trajectory_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(square_trajectory_M, &square_trajectory_M->Timing.tArray[0]);
  square_trajectory_M->Timing.stepSize0 = 0.05;

  // states (dwork)
  (void) memset((void *)&square_trajectory_DW, 0,
                sizeof(DW_square_trajectory_T));

  {
    static const char_T tmp[18] = { '/', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c',
      'e', '_', 'd', 'e', 's', 'i', 'r', 'e', 'd' };

    char_T tmp_0[19];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    square_trajectory_DW.obj.isInitialized = 0;
    square_trajectory_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[18] = '\x00';
    Pub_square_trajectory_4.createPublisher(tmp_0,
      square_trajecto_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void square_trajectory_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (square_trajectory_DW.obj.isInitialized == 1) {
    square_trajectory_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
