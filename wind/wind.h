//
// File: wind.h
//
// Code generated for Simulink model 'wind'.
//
// Model version                  : 1.3
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Jan 18 23:23:46 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_wind_h_
#define RTW_HEADER_wind_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef wind_COMMON_INCLUDES_
# define wind_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // wind_COMMON_INCLUDES_

#include "wind_types.h"

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
  SL_Bus_wind_rotors_comm_WindSpeed BusAssignment;// '<Root>/Bus Assignment'
} B_wind_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_wind_T;

// Parameters (auto storage)
struct P_wind_T_ {
  SL_Bus_wind_rotors_comm_WindSpeed Constant_Value;// Computed Parameter: Constant_Value
                                                   //  Referenced by: '<S1>/Constant'

  real_T Constant6_Value;              // Expression: pi
                                       //  Referenced by: '<S3>/Constant6'

  real_T Constant12_Value;             // Expression: 5
                                       //  Referenced by: '<S3>/Constant12'

  real_T Constant7_Value;              // Expression: 55
                                       //  Referenced by: '<S3>/Constant7'

  real_T SineWave4_Amp;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave4'

  real_T SineWave4_Bias;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave4'

  real_T SineWave4_Freq;               // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave4'

  real_T SineWave4_Phase;              // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave4'

  real_T Gain4_Gain;                   // Expression: 1.35
                                       //  Referenced by: '<S3>/Gain4'

  real_T Constant8_Value;              // Expression: 2
                                       //  Referenced by: '<S3>/Constant8'

  real_T SineWave5_Amp;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave5'

  real_T SineWave5_Bias;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave5'

  real_T SineWave5_Freq;               // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave5'

  real_T SineWave5_Phase;              // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave5'

  real_T Gain5_Gain;                   // Expression: 0.15
                                       //  Referenced by: '<S3>/Gain5'

  real_T Constant9_Value;              // Expression: 5
                                       //  Referenced by: '<S3>/Constant9'

  real_T SineWave6_Amp;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave6'

  real_T SineWave6_Bias;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave6'

  real_T SineWave6_Freq;               // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave6'

  real_T SineWave6_Phase;              // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave6'

  real_T Gain6_Gain;                   // Expression: 0.225
                                       //  Referenced by: '<S3>/Gain6'

  real_T Constant11_Value;             // Expression: pi*24
                                       //  Referenced by: '<S3>/Constant11'

  real_T Constant10_Value;             // Expression: 11
                                       //  Referenced by: '<S3>/Constant10'

  real_T SineWave7_Amp;                // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave7'

  real_T SineWave7_Bias;               // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave7'

  real_T SineWave7_Freq;               // Expression: 1
                                       //  Referenced by: '<S3>/Sine Wave7'

  real_T SineWave7_Phase;              // Expression: 0
                                       //  Referenced by: '<S3>/Sine Wave7'

  real_T Gain7_Gain;                   // Expression: 0.105
                                       //  Referenced by: '<S3>/Gain7'

  real_T Step1_Time;                   // Expression: 0
                                       //  Referenced by: '<Root>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                       //  Referenced by: '<Root>/Step1'

  real_T Step1_YFinal;                 // Expression: 1
                                       //  Referenced by: '<Root>/Step1'

  real_T Constant1_Value;              // Expression: 0
                                       //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_wind_T {
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

  extern P_wind_T wind_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_wind_T wind_B;

// Block states (auto storage)
extern DW_wind_T wind_DW;

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
  extern void wind_initialize(void);
  extern void wind_step(void);
  extern void wind_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_wind_T *const wind_M;

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
//  '<Root>' : 'wind'
//  '<S1>'   : 'wind/Blank Message'
//  '<S2>'   : 'wind/Publish'
//  '<S3>'   : 'wind/Subsystem'

#endif                                 // RTW_HEADER_wind_h_

//
// File trailer for generated code.
//
// [EOF]
//
