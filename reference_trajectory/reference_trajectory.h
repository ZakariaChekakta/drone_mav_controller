//
// File: reference_trajectory.h
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
#ifndef RTW_HEADER_reference_trajectory_h_
#define RTW_HEADER_reference_trajectory_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef reference_trajectory_COMMON_INCLUDES_
# define reference_trajectory_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // reference_trajectory_COMMON_INCLUDES_

#include "reference_trajectory_types.h"
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
  SL_Bus_reference_trajectory_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  real_T Product2;                     // '<S3>/Product2'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Product;                      // '<S3>/Product'
  real_T Derivative4;                  // '<Root>/Derivative4'
  real_T Product1;                     // '<S3>/Product1'
  real_T Derivative3;                  // '<Root>/Derivative3'
} B_reference_trajectory_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative1'
  real_T LastUAtTimeA;                 // '<Root>/Derivative1'
  real_T TimeStampB;                   // '<Root>/Derivative1'
  real_T LastUAtTimeB;                 // '<Root>/Derivative1'
  real_T TimeStampA_n;                 // '<Root>/Derivative'
  real_T LastUAtTimeA_i;               // '<Root>/Derivative'
  real_T TimeStampB_g;                 // '<Root>/Derivative'
  real_T LastUAtTimeB_h;               // '<Root>/Derivative'
  real_T TimeStampA_o;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_h;               // '<Root>/Derivative4'
  real_T TimeStampB_f;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_f;               // '<Root>/Derivative4'
  real_T TimeStampA_or;                // '<Root>/Derivative2'
  real_T LastUAtTimeA_m;               // '<Root>/Derivative2'
  real_T TimeStampB_p;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_j;               // '<Root>/Derivative2'
  real_T TimeStampA_m;                 // '<Root>/Derivative3'
  real_T LastUAtTimeA_e;               // '<Root>/Derivative3'
  real_T TimeStampB_e;                 // '<Root>/Derivative3'
  real_T LastUAtTimeB_c;               // '<Root>/Derivative3'
  real_T TimeStampA_k;                 // '<Root>/Derivative5'
  real_T LastUAtTimeA_g;               // '<Root>/Derivative5'
  real_T TimeStampB_b;                 // '<Root>/Derivative5'
  real_T LastUAtTimeB_cg;              // '<Root>/Derivative5'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_reference_trajectory_T;

// Parameters (auto storage)
struct P_reference_trajectory_T_ {
  SL_Bus_reference_trajectory_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S1>/Constant'

  real_T Step1_Time;                   // Expression: 10
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S3>/Step1'

  real_T Constant_Value_n;             // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  real_T Constant1_Value;              // Expression: -10
                                       //  Referenced by: '<S3>/Constant1'

  real_T Switch_Threshold;             // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  real_T Gain_Gain;                    // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  real_T Step9_Time;                   // Expression: 20
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_Y0;                     // Expression: 0
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S3>/Step9'

  real_T Constant2_Value;              // Expression: -15
                                       //  Referenced by: '<S3>/Constant2'

  real_T Switch1_Threshold;            // Expression: 17.5
                                       //  Referenced by: '<S3>/Switch1'

  real_T Gain1_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain1'

  real_T Step10_Time;                  // Expression: 30
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_Y0;                    // Expression: 0
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_YFinal;                // Expression: 1
                                       //  Referenced by: '<S3>/Step10'

  real_T Constant3_Value;              // Expression: -20
                                       //  Referenced by: '<S3>/Constant3'

  real_T Switch2_Threshold;            // Expression: 28
                                       //  Referenced by: '<S3>/Switch2'

  real_T Gain2_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain2'

};

// Real-time Model Data Structure
struct tag_RTM_reference_trajectory_T {
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

  extern P_reference_trajectory_T reference_trajectory_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_reference_trajectory_T reference_trajectory_B;

// Block states (auto storage)
extern DW_reference_trajectory_T reference_trajectory_DW;

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
  extern void reference_trajectory_initialize(void);
  extern void reference_trajectory_step(void);
  extern void reference_trajectory_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_reference_trajectory_T *const reference_trajectory_M;

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
//  '<Root>' : 'reference_trajectory'
//  '<S1>'   : 'reference_trajectory/Blank Message'
//  '<S2>'   : 'reference_trajectory/Publish'
//  '<S3>'   : 'reference_trajectory/Subsystem8'

#endif                                 // RTW_HEADER_reference_trajectory_h_

//
// File trailer for generated code.
//
// [EOF]
//
