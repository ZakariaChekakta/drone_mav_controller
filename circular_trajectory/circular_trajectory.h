//
// File: circular_trajectory.h
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
#ifndef RTW_HEADER_circular_trajectory_h_
#define RTW_HEADER_circular_trajectory_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef circular_trajectory_COMMON_INCLUDES_
# define circular_trajectory_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // circular_trajectory_COMMON_INCLUDES_

#include "circular_trajectory_types.h"
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
  SL_Bus_circular_trajectory_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  real_T Product4;                     // '<S3>/Product4'
  real_T Product2;                     // '<S3>/Product2'
  real_T Product3;                     // '<S3>/Product3'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Derivative2;                  // '<Root>/Derivative2'
} B_circular_trajectory_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative'
  real_T LastUAtTimeA;                 // '<Root>/Derivative'
  real_T TimeStampB;                   // '<Root>/Derivative'
  real_T LastUAtTimeB;                 // '<Root>/Derivative'
  real_T TimeStampA_i;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_c;               // '<Root>/Derivative1'
  real_T TimeStampB_c;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_b;               // '<Root>/Derivative1'
  real_T TimeStampA_i4;                // '<Root>/Derivative2'
  real_T LastUAtTimeA_f;               // '<Root>/Derivative2'
  real_T TimeStampB_a;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_d;               // '<Root>/Derivative2'
  real_T TimeStampA_a;                 // '<Root>/Derivative3'
  real_T LastUAtTimeA_k;               // '<Root>/Derivative3'
  real_T TimeStampB_cp;                // '<Root>/Derivative3'
  real_T LastUAtTimeB_h;               // '<Root>/Derivative3'
  real_T TimeStampA_b;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_c0;              // '<Root>/Derivative4'
  real_T TimeStampB_e;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_e;               // '<Root>/Derivative4'
  real_T TimeStampA_n;                 // '<Root>/Derivative5'
  real_T LastUAtTimeA_d;               // '<Root>/Derivative5'
  real_T TimeStampB_m;                 // '<Root>/Derivative5'
  real_T LastUAtTimeB_p;               // '<Root>/Derivative5'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_circular_trajectory_T;

// Parameters (auto storage)
struct P_circular_trajectory_T_ {
  SL_Bus_circular_trajectory_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S1>/Constant'

  real_T Step1_Time;                   // Expression: 5
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S3>/Step1'

  real_T Constant_Value_f;             // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  real_T Constant1_Value;              // Expression: -5
                                       //  Referenced by: '<S3>/Constant1'

  real_T Switch_Threshold;             // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  real_T Gain_Gain;                    // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  real_T Step10_Time;                  // Expression: 2*pi+5
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_Y0;                    // Expression: 0
                                       //  Referenced by: '<S3>/Step10'

  real_T Step10_YFinal;                // Expression: 1
                                       //  Referenced by: '<S3>/Step10'

  real_T SineWave_Amp;                 // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave'

  real_T SineWave_Freq;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave'

  real_T SineWave_Phase;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave'

  real_T Step11_Time;                  // Expression: 4*pi+pi/2+pi/2+5
                                       //  Referenced by: '<S3>/Step11'

  real_T Step11_Y0;                    // Expression: 1
                                       //  Referenced by: '<S3>/Step11'

  real_T Step11_YFinal;                // Expression: 0
                                       //  Referenced by: '<S3>/Step11'

  real_T Step9_Time;                   // Expression: 2*pi-pi/2+5
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_Y0;                     // Expression: 0
                                       //  Referenced by: '<S3>/Step9'

  real_T Step9_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S3>/Step9'

  real_T SineWave1_Amp;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave1'

  real_T SineWave1_Bias;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave1'

  real_T SineWave1_Freq;               // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave1'

  real_T SineWave1_Phase;              // Expression: pi/2
                                       //  Referenced by: '<S3>/Sine Wave1'

  real_T Step12_Time;                  // Expression: 4*pi+pi/2+5
                                       //  Referenced by: '<S3>/Step12'

  real_T Step12_Y0;                    // Expression: 1
                                       //  Referenced by: '<S3>/Step12'

  real_T Step12_YFinal;                // Expression: 0
                                       //  Referenced by: '<S3>/Step12'

};

// Real-time Model Data Structure
struct tag_RTM_circular_trajectory_T {
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

  extern P_circular_trajectory_T circular_trajectory_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_circular_trajectory_T circular_trajectory_B;

// Block states (auto storage)
extern DW_circular_trajectory_T circular_trajectory_DW;

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
  extern void circular_trajectory_initialize(void);
  extern void circular_trajectory_step(void);
  extern void circular_trajectory_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_circular_trajectory_T *const circular_trajectory_M;

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
//  '<Root>' : 'circular_trajectory'
//  '<S1>'   : 'circular_trajectory/Blank Message'
//  '<S2>'   : 'circular_trajectory/Publish'
//  '<S3>'   : 'circular_trajectory/Subsystem8'

#endif                                 // RTW_HEADER_circular_trajectory_h_

//
// File trailer for generated code.
//
// [EOF]
//
