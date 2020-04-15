//
// File: wind_disturbance.cpp
//
// Code generated for Simulink model 'wind_disturbance'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 21:53:37 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "wind_disturbance.h"
#include "wind_disturbance_private.h"
#define wind_disturbanc_MessageQueueLen (1)

// Block signals (auto storage)
B_wind_disturbance_T wind_disturbance_B;

// Block states (auto storage)
DW_wind_disturbance_T wind_disturbance_DW;

// Real-time model
RT_MODEL_wind_disturbance_T wind_disturbance_M_;
RT_MODEL_wind_disturbance_T *const wind_disturbance_M = &wind_disturbance_M_;

// Model step function
void wind_disturbance_step(void)
{
  real_T currentTime;
  real_T currentTime_0;
  real_T currentTime_1;
  real_T currentTime_2;
  real_T rtb_Add2;
  real_T rtb_Step1;

  // Step: '<S3>/Step3'
  currentTime = wind_disturbance_M->Timing.t[0];

  // Sum: '<S3>/Add2' incorporates:
  //   Clock: '<S3>/Clock1'
  //   Constant: '<S3>/Constant12'

  rtb_Add2 = wind_disturbance_P.Constant12_Value + wind_disturbance_M->Timing.t
    [0];

  // Product: '<S3>/Product2' incorporates:
  //   Constant: '<S3>/Constant6'

  rtb_Step1 = wind_disturbance_P.Constant6_Value * rtb_Add2;

  // Step: '<S3>/Step'
  currentTime_0 = wind_disturbance_M->Timing.t[0];

  // Step: '<Root>/Step'
  currentTime_1 = wind_disturbance_M->Timing.t[0];

  // Step: '<Root>/Step1'
  currentTime_2 = wind_disturbance_M->Timing.t[0];

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  wind_disturbance_B.BusAssignment = wind_disturbance_P.Constant_Value;

  // Step: '<S3>/Step3'
  if (currentTime < wind_disturbance_P.Step3_Time) {
    currentTime = wind_disturbance_P.Step3_Y0;
  } else {
    currentTime = wind_disturbance_P.Step3_YFinal;
  }

  // Step: '<S3>/Step'
  if (currentTime_0 < wind_disturbance_P.Step_Time) {
    currentTime_0 = wind_disturbance_P.Step_Y0;
  } else {
    currentTime_0 = wind_disturbance_P.Step_YFinal;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S3>/Constant10'
  //   Constant: '<S3>/Constant11'
  //   Constant: '<S3>/Constant7'
  //   Constant: '<S3>/Constant8'
  //   Constant: '<S3>/Constant9'
  //   Gain: '<S3>/Gain4'
  //   Gain: '<S3>/Gain5'
  //   Gain: '<S3>/Gain6'
  //   Gain: '<S3>/Gain7'
  //   Product: '<S3>/Divide4'
  //   Product: '<S3>/Divide5'
  //   Product: '<S3>/Divide6'
  //   Product: '<S3>/Divide7'
  //   Product: '<S3>/Product3'
  //   Product: '<S3>/Product5'
  //   Sin: '<S3>/Sine Wave4'
  //   Sin: '<S3>/Sine Wave5'
  //   Sin: '<S3>/Sine Wave6'
  //   Sin: '<S3>/Sine Wave7'
  //   Sum: '<S3>/Add1'

  wind_disturbance_B.BusAssignment.Velocity.X = ((((sin(rtb_Step1 /
    wind_disturbance_P.Constant7_Value * wind_disturbance_P.SineWave4_Freq +
    wind_disturbance_P.SineWave4_Phase) * wind_disturbance_P.SineWave4_Amp +
    wind_disturbance_P.SineWave4_Bias) * wind_disturbance_P.Gain4_Gain + (sin
    (rtb_Step1 / wind_disturbance_P.Constant8_Value *
     wind_disturbance_P.SineWave5_Freq + wind_disturbance_P.SineWave5_Phase) *
    wind_disturbance_P.SineWave5_Amp + wind_disturbance_P.SineWave5_Bias) *
    wind_disturbance_P.Gain5_Gain) + (sin(rtb_Step1 /
    wind_disturbance_P.Constant9_Value * wind_disturbance_P.SineWave6_Freq +
    wind_disturbance_P.SineWave6_Phase) * wind_disturbance_P.SineWave6_Amp +
    wind_disturbance_P.SineWave6_Bias) * wind_disturbance_P.Gain6_Gain) + (sin
    (wind_disturbance_P.Constant11_Value * rtb_Add2 /
     wind_disturbance_P.Constant10_Value * wind_disturbance_P.SineWave7_Freq +
     wind_disturbance_P.SineWave7_Phase) * wind_disturbance_P.SineWave7_Amp +
    wind_disturbance_P.SineWave7_Bias) * wind_disturbance_P.Gain7_Gain) *
    currentTime * currentTime_0;

  // Step: '<Root>/Step'
  if (currentTime_1 < wind_disturbance_P.Step_Time_m) {
    currentTime = wind_disturbance_P.Step_Y0_b;
  } else {
    currentTime = wind_disturbance_P.Step_YFinal_d;
  }

  // Step: '<Root>/Step1'
  if (currentTime_2 < wind_disturbance_P.Step1_Time) {
    currentTime_0 = wind_disturbance_P.Step1_Y0;
  } else {
    currentTime_0 = wind_disturbance_P.Step1_YFinal;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Sum: '<Root>/Add'

  wind_disturbance_B.BusAssignment.Velocity.Y = currentTime + currentTime_0;
  wind_disturbance_B.BusAssignment.Velocity.Z =
    wind_disturbance_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   MATLABSystem: '<S2>/SinkBlock'

  Pub_wind_disturbance_3.publish(&wind_disturbance_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  wind_disturbance_M->Timing.t[0] =
    (++wind_disturbance_M->Timing.clockTick0) *
    wind_disturbance_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.01s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.01, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    wind_disturbance_M->Timing.clockTick1++;
  }
}

// Model initialize function
void wind_disturbance_initialize(void)
{
  // Registration code

  // initialize real-time model
  (void) memset((void *)wind_disturbance_M, 0,
                sizeof(RT_MODEL_wind_disturbance_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&wind_disturbance_M->solverInfo,
                          &wind_disturbance_M->Timing.simTimeStep);
    rtsiSetTPtr(&wind_disturbance_M->solverInfo, &rtmGetTPtr(wind_disturbance_M));
    rtsiSetStepSizePtr(&wind_disturbance_M->solverInfo,
                       &wind_disturbance_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&wind_disturbance_M->solverInfo, (&rtmGetErrorStatus
      (wind_disturbance_M)));
    rtsiSetRTModelPtr(&wind_disturbance_M->solverInfo, wind_disturbance_M);
  }

  rtsiSetSimTimeStep(&wind_disturbance_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&wind_disturbance_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(wind_disturbance_M, &wind_disturbance_M->Timing.tArray[0]);
  wind_disturbance_M->Timing.stepSize0 = 0.01;

  // states (dwork)
  (void) memset((void *)&wind_disturbance_DW, 0,
                sizeof(DW_wind_disturbance_T));

  {
    static const char_T tmp[23] = { '/', 'h', 'u', 'm', 'm', 'i', 'n', 'g', 'b',
      'i', 'r', 'd', '/', 'w', 'i', 'n', 'd', '_', 's', 'p', 'e', 'e', 'd' };

    char_T tmp_0[24];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    wind_disturbance_DW.obj.isInitialized = 0;
    wind_disturbance_DW.obj.isInitialized = 1;
    for (i = 0; i < 23; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[23] = '\x00';
    Pub_wind_disturbance_3.createPublisher(tmp_0,
      wind_disturbanc_MessageQueueLen);

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void wind_disturbance_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S2>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S2>/SinkBlock'

  if (wind_disturbance_DW.obj.isInitialized == 1) {
    wind_disturbance_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
