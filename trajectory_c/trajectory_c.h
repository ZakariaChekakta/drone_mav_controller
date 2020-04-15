//
// File: trajectory_c.h
//
// Code generated for Simulink model 'trajectory_c'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Dec 21 18:22:29 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_trajectory_c_h_
#define RTW_HEADER_trajectory_c_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef trajectory_c_COMMON_INCLUDES_
# define trajectory_c_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // trajectory_c_COMMON_INCLUDES_

#include "trajectory_c_types.h"
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
  SL_Bus_trajectory_c_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  real_T Gain;                         // '<S3>/Gain'
  real_T Product2;                     // '<S3>/Product2'
  real_T Product3;                     // '<S3>/Product3'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Derivative2;                  // '<Root>/Derivative2'
} B_trajectory_c_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative'
  real_T LastUAtTimeA;                 // '<Root>/Derivative'
  real_T TimeStampB;                   // '<Root>/Derivative'
  real_T LastUAtTimeB;                 // '<Root>/Derivative'
  real_T TimeStampA_n;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_c;               // '<Root>/Derivative1'
  real_T TimeStampB_l;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_d;               // '<Root>/Derivative1'
  real_T TimeStampA_d;                 // '<Root>/Derivative2'
  real_T LastUAtTimeA_h;               // '<Root>/Derivative2'
  real_T TimeStampB_p;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_p;               // '<Root>/Derivative2'
  real_T TimeStampA_m;                 // '<Root>/Derivative3'
  real_T LastUAtTimeA_g;               // '<Root>/Derivative3'
  real_T TimeStampB_n;                 // '<Root>/Derivative3'
  real_T LastUAtTimeB_b;               // '<Root>/Derivative3'
  real_T TimeStampA_j;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_b;               // '<Root>/Derivative4'
  real_T TimeStampB_m;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_c;               // '<Root>/Derivative4'
  real_T TimeStampA_b;                 // '<Root>/Derivative5'
  real_T LastUAtTimeA_bq;              // '<Root>/Derivative5'
  real_T TimeStampB_g;                 // '<Root>/Derivative5'
  real_T LastUAtTimeB_a;               // '<Root>/Derivative5'
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_trajectory_c_T;

// Parameters (auto storage)
struct P_trajectory_c_T_ {
  SL_Bus_trajectory_c_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S1>/Constant'

  real_T Constant_Value_l;             // Expression: 10
                                       //  Referenced by: '<S3>/Constant'

  real_T Switch_Threshold;             // Expression: 6
                                       //  Referenced by: '<S3>/Switch'

  real_T Gain_Gain;                    // Expression: 1/5
                                       //  Referenced by: '<S3>/Gain'

  real_T Step10_Time;                  // Expression: 2*pi
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

  real_T Step11_Time;                  // Expression: 4*pi+pi/2+pi/2
                                       //  Referenced by: '<S3>/Step11'

  real_T Step11_Y0;                    // Expression: 1
                                       //  Referenced by: '<S3>/Step11'

  real_T Step11_YFinal;                // Expression: 0
                                       //  Referenced by: '<S3>/Step11'

  real_T Step9_Time;                   // Expression: 2*pi-pi/2
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

  real_T Step12_Time;                  // Expression: 4*pi+pi/2
                                       //  Referenced by: '<S3>/Step12'

  real_T Step12_Y0;                    // Expression: 1
                                       //  Referenced by: '<S3>/Step12'

  real_T Step12_YFinal;                // Expression: 0
                                       //  Referenced by: '<S3>/Step12'

};

// Real-time Model Data Structure
struct tag_RTM_trajectory_c_T {
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

  extern P_trajectory_c_T trajectory_c_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_trajectory_c_T trajectory_c_B;

// Block states (auto storage)
extern DW_trajectory_c_T trajectory_c_DW;

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
  extern void trajectory_c_initialize(void);
  extern void trajectory_c_step(void);
  extern void trajectory_c_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_trajectory_c_T *const trajectory_c_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S3>/Step' : Unused code path elimination
//  Block '<S3>/Step1' : Unused code path elimination
//  Block '<S3>/Step2' : Unused code path elimination
//  Block '<S3>/Step3' : Unused code path elimination
//  Block '<S3>/Step4' : Unused code path elimination
//  Block '<S3>/Step5' : Unused code path elimination
//  Block '<S3>/Step6' : Unused code path elimination
//  Block '<S3>/Step7' : Unused code path elimination
//  Block '<S3>/Step8' : Unused code path elimination
//  Block '<S3>/Sum' : Unused code path elimination
//  Block '<S3>/Sum1' : Unused code path elimination
//  Block '<S3>/Sum2' : Unused code path elimination


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
//  '<Root>' : 'trajectory_c'
//  '<S1>'   : 'trajectory_c/Blank Message'
//  '<S2>'   : 'trajectory_c/Publish'
//  '<S3>'   : 'trajectory_c/Subsystem8'

#endif                                 // RTW_HEADER_trajectory_c_h_

//
// File trailer for generated code.
//
// [EOF]
//
