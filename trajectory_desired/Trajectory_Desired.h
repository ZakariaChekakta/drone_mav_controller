//
// File: Trajectory_Desired.h
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
#ifndef RTW_HEADER_Trajectory_Desired_h_
#define RTW_HEADER_Trajectory_Desired_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Trajectory_Desired_COMMON_INCLUDES_
# define Trajectory_Desired_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // Trajectory_Desired_COMMON_INCLUDES_

#include "Trajectory_Desired_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_Trajectory_Desired_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  real_T Gain;                         // '<S3>/Gain'
  real_T Product;                      // '<S3>/Product'
  real_T Product1;                     // '<S3>/Product1'
  real_T Derivative5;                  // '<Root>/Derivative5'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Derivative1;                  // '<Root>/Derivative1'
} B_Trajectory_Desired_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative5'
  real_T LastUAtTimeA;                 // '<Root>/Derivative5'
  real_T TimeStampB;                   // '<Root>/Derivative5'
  real_T LastUAtTimeB;                 // '<Root>/Derivative5'
  real_T TimeStampA_j;                 // '<Root>/Derivative'
  real_T LastUAtTimeA_o;               // '<Root>/Derivative'
  real_T TimeStampB_p;                 // '<Root>/Derivative'
  real_T LastUAtTimeB_m;               // '<Root>/Derivative'
  real_T TimeStampA_l;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_n;               // '<Root>/Derivative1'
  real_T TimeStampB_n;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_j;               // '<Root>/Derivative1'
  real_T TimeStampA_d;                 // '<Root>/Derivative2'
  real_T LastUAtTimeA_g;               // '<Root>/Derivative2'
  real_T TimeStampB_m;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_m0;              // '<Root>/Derivative2'
  real_T TimeStampA_k;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_gq;              // '<Root>/Derivative4'
  real_T TimeStampB_g;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_i;               // '<Root>/Derivative4'
  real_T TimeStampA_ln;                // '<Root>/Derivative3'
  real_T LastUAtTimeA_b;               // '<Root>/Derivative3'
  real_T TimeStampB_b;                 // '<Root>/Derivative3'
  real_T LastUAtTimeB_mu;              // '<Root>/Derivative3'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_Trajectory_Desired_T;

// Parameters (auto storage)
struct P_Trajectory_Desired_T_ {
  SL_Bus_Trajectory_Desired_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S1>/Constant'

  real_T Constant_Value_d;             // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  real_T Switch_Threshold;             // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  real_T Gain_Gain;                    // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  real_T Step9_Time;                   // Expression: 5
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_Y0;                     // Expression: 0
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S3>/Step9'

  real_T Switch1_Threshold;            // Expression: 17.5
                                       //  Referenced by: '<S3>/Switch1'

  real_T Gain1_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain1'

  real_T Step10_Time;                  // Expression: 10
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_Y0;                    // Expression: 0
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_YFinal;                // Expression: 1
                                       //  Referenced by: '<S3>/Step10'

  real_T Switch2_Threshold;            // Expression: 28
                                       //  Referenced by: '<S3>/Switch2'

  real_T Gain2_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain2'

};

// Real-time Model Data Structure
struct tag_RTM_Trajectory_Desired_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Trajectory_Desired_T Trajectory_Desired_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_Trajectory_Desired_T Trajectory_Desired_B;

// Block states (auto storage)
extern DW_Trajectory_Desired_T Trajectory_Desired_DW;

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Trajectory_Desired_initialize(void);
  extern void Trajectory_Desired_step(void);
  extern void Trajectory_Desired_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Trajectory_Desired_T *const Trajectory_Desired_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Trajectory_Desired'
//  '<S1>'   : 'Trajectory_Desired/Blank Message'
//  '<S2>'   : 'Trajectory_Desired/Publish'
//  '<S3>'   : 'Trajectory_Desired/Subsystem8'

#endif                                 // RTW_HEADER_Trajectory_Desired_h_

//
// File trailer for generated code.
//
// [EOF]
//
