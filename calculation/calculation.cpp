//
// File: calculation.cpp
//
// Code generated for Simulink model 'calculation'.
//
// Model version                  : 1.3
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Sat Jan 12 03:02:42 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "calculation.h"
#include "calculation_private.h"
#define calculation_MessageQueueLen    (1)

// Block signals (auto storage)
B_calculation_T calculation_B;

// Continuous states
X_calculation_T calculation_X;

// Block states (auto storage)
DW_calculation_T calculation_DW;

// Real-time model
RT_MODEL_calculation_T calculation_M_;
RT_MODEL_calculation_T *const calculation_M = &calculation_M_;

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
  calculation_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  calculation_step();
  calculation_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  calculation_step();
  calculation_derivatives();

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

// Model step function
void calculation_step(void)
{
  boolean_T varargout_1;
  SL_Bus_calculation_std_msgs_Float64 rtb_BusAssignment1;
  SL_Bus_calculation_std_msgs_Float64 rtb_BusAssignment;
  if (rtmIsMajorTimeStep(calculation_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&calculation_M->solverInfo,
                          ((calculation_M->Timing.clockTick0+1)*
      calculation_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(calculation_M)) {
    calculation_M->Timing.t[0] = rtsiGetT(&calculation_M->solverInfo);
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Integrator: '<Root>/Integrator'

  rtb_BusAssignment.Data = calculation_X.Integrator_CSTATE;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   MATLABSystem: '<S3>/SinkBlock'

  Pub_calculation_22.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
  if (rtmIsMajorTimeStep(calculation_M)) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
    //   Inport: '<S7>/In1'
    //   MATLABSystem: '<S5>/SourceBlock'

    varargout_1 = Sub_calculation_4.getLatestMessage
      (&calculation_B.varargout_2_m);

    // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S7>/Enable'

    if (varargout_1) {
      calculation_B.In1_c = calculation_B.varargout_2_m;
    }

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Sum: '<Root>/Add' incorporates:
    //   Math: '<Root>/Math Function'
    //   Math: '<Root>/Math Function1'
    //   Math: '<Root>/Math Function2'

    calculation_B.Add = (calculation_B.In1_c.ErrorPositionX *
                         calculation_B.In1_c.ErrorPositionX +
                         calculation_B.In1_c.ErrorPositionY *
                         calculation_B.In1_c.ErrorPositionY) +
      calculation_B.In1_c.ErrorPositionZ * calculation_B.In1_c.ErrorPositionZ;
  }

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Integrator: '<Root>/Integrator1'

  rtb_BusAssignment1.Data = calculation_X.Integrator1_CSTATE;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
  //   MATLABSystem: '<S4>/SinkBlock'

  Pub_calculation_26.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'
  if (rtmIsMajorTimeStep(calculation_M)) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
    //   Inport: '<S8>/In1'
    //   MATLABSystem: '<S6>/SourceBlock'

    varargout_1 = Sub_calculation_5.getLatestMessage(&calculation_B.varargout_2);

    // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S8>/Enable'

    if (varargout_1) {
      calculation_B.In1 = calculation_B.varargout_2;
    }

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe1'

    // Math: '<Root>/Math Function3'
    calculation_B.MathFunction3 = calculation_B.In1.Thrust.Z *
      calculation_B.In1.Thrust.Z;
  }

  if (rtmIsMajorTimeStep(calculation_M)) {
    rt_ertODEUpdateContinuousStates(&calculation_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++calculation_M->Timing.clockTick0;
    calculation_M->Timing.t[0] = rtsiGetSolverStopTime
      (&calculation_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.001s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.001, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      calculation_M->Timing.clockTick1++;
    }
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void calculation_derivatives(void)
{
  XDot_calculation_T *_rtXdot;
  _rtXdot = ((XDot_calculation_T *) calculation_M->derivs);

  // Derivatives for Integrator: '<Root>/Integrator'
  _rtXdot->Integrator_CSTATE = calculation_B.Add;

  // Derivatives for Integrator: '<Root>/Integrator1'
  _rtXdot->Integrator1_CSTATE = calculation_B.MathFunction3;
}

// Model initialize function
void calculation_initialize(void)
{
  // Registration code

  // initialize real-time model
  (void) memset((void *)calculation_M, 0,
                sizeof(RT_MODEL_calculation_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&calculation_M->solverInfo,
                          &calculation_M->Timing.simTimeStep);
    rtsiSetTPtr(&calculation_M->solverInfo, &rtmGetTPtr(calculation_M));
    rtsiSetStepSizePtr(&calculation_M->solverInfo,
                       &calculation_M->Timing.stepSize0);
    rtsiSetdXPtr(&calculation_M->solverInfo, &calculation_M->derivs);
    rtsiSetContStatesPtr(&calculation_M->solverInfo, (real_T **)
                         &calculation_M->contStates);
    rtsiSetNumContStatesPtr(&calculation_M->solverInfo,
      &calculation_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&calculation_M->solverInfo,
      &calculation_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&calculation_M->solverInfo,
      &calculation_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&calculation_M->solverInfo,
      &calculation_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&calculation_M->solverInfo, (&rtmGetErrorStatus
      (calculation_M)));
    rtsiSetRTModelPtr(&calculation_M->solverInfo, calculation_M);
  }

  rtsiSetSimTimeStep(&calculation_M->solverInfo, MAJOR_TIME_STEP);
  calculation_M->intgData.y = calculation_M->odeY;
  calculation_M->intgData.f[0] = calculation_M->odeF[0];
  calculation_M->intgData.f[1] = calculation_M->odeF[1];
  calculation_M->intgData.f[2] = calculation_M->odeF[2];
  calculation_M->contStates = ((X_calculation_T *) &calculation_X);
  rtsiSetSolverData(&calculation_M->solverInfo, (void *)&calculation_M->intgData);
  rtsiSetSolverName(&calculation_M->solverInfo,"ode3");
  rtmSetTPtr(calculation_M, &calculation_M->Timing.tArray[0]);
  calculation_M->Timing.stepSize0 = 0.001;

  // block I/O
  (void) memset(((void *) &calculation_B), 0,
                sizeof(B_calculation_T));

  // states (continuous)
  {
    (void) memset((void *)&calculation_X, 0,
                  sizeof(X_calculation_T));
  }

  // states (dwork)
  (void) memset((void *)&calculation_DW, 0,
                sizeof(DW_calculation_T));

  {
    static const char_T tmp[46] = { '/', 'h', 'u', 'm', 'm', 'i', 'n', 'g', 'b',
      'i', 'r', 'd', '/', 'c', 'o', 'm', 'm', 'a', 'n', 'd', '/', 'r', 'o', 'l',
      'l', '_', 'p', 'i', 't', 'c', 'h', '_', 'y', 'a', 'w', 'r', 'a', 't', 'e',
      '_', 't', 'h', 'r', 'u', 's', 't' };

    static const char_T tmp_0[5] = { '/', 'I', 'S', 'C', 'I' };

    static const char_T tmp_1[6] = { '/', 'e', 'r', 'r', 'o', 'r' };

    char_T tmp_2[6];
    char_T tmp_3[7];
    char_T tmp_4[5];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    calculation_DW.obj_n.isInitialized = 0;
    calculation_DW.obj_n.isInitialized = 1;
    tmp_4[0] = '/';
    tmp_4[1] = 'I';
    tmp_4[2] = 'S';
    tmp_4[3] = 'E';
    tmp_4[4] = '\x00';
    Pub_calculation_22.createPublisher(tmp_4, calculation_MessageQueueLen);

    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    calculation_DW.obj_m.isInitialized = 0;
    calculation_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_3[i] = tmp_1[i];
    }

    tmp_3[6] = '\x00';
    Sub_calculation_4.createSubscriber(tmp_3, calculation_MessageQueueLen);

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    calculation_DW.obj.isInitialized = 0;
    calculation_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[5] = '\x00';
    Pub_calculation_26.createPublisher(tmp_2, calculation_MessageQueueLen);

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    calculation_DW.obj_l.isInitialized = 0;
    calculation_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 46; i++) {
      calculation_B.cv0[i] = tmp[i];
    }

    calculation_B.cv0[46] = '\x00';
    Sub_calculation_5.createSubscriber(calculation_B.cv0,
      calculation_MessageQueueLen);

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // InitializeConditions for Integrator: '<Root>/Integrator'
    calculation_X.Integrator_CSTATE = calculation_P.Integrator_IC;

    // InitializeConditions for Integrator: '<Root>/Integrator1'
    calculation_X.Integrator1_CSTATE = calculation_P.Integrator1_IC;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1'
    calculation_B.In1_c = calculation_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S8>/Out1'
    calculation_B.In1 = calculation_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'
  }
}

// Model terminate function
void calculation_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Start for MATLABSystem: '<S3>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S3>/SinkBlock'

  if (calculation_DW.obj_n.isInitialized == 1) {
    calculation_DW.obj_n.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S5>/SourceBlock'

  if (calculation_DW.obj_m.isInitialized == 1) {
    calculation_DW.obj_m.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Start for MATLABSystem: '<S4>/SinkBlock' incorporates:
  //   Terminate for MATLABSystem: '<S4>/SinkBlock'

  if (calculation_DW.obj.isInitialized == 1) {
    calculation_DW.obj.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Start for MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Terminate for MATLABSystem: '<S6>/SourceBlock'

  if (calculation_DW.obj_l.isInitialized == 1) {
    calculation_DW.obj_l.isInitialized = 2;
  }

  // End of Start for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'
}

//
// File trailer for generated code.
//
// [EOF]
//
