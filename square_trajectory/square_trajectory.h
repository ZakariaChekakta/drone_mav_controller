//
// File: square_trajectory.h
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
#ifndef RTW_HEADER_square_trajectory_h_
#define RTW_HEADER_square_trajectory_h_
#include <string.h>
#include <stddef.h>
#ifndef square_trajectory_COMMON_INCLUDES_
# define square_trajectory_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // square_trajectory_COMMON_INCLUDES_

#include "square_trajectory_types.h"

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
  SL_Bus_square_trajectory_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
} B_square_trajectory_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SinkBlock_PWORK;               // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
} DW_square_trajectory_T;

// Parameters (auto storage)
struct P_square_trajectory_T_ {
  SL_Bus_square_trajectory_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                               //  Referenced by: '<S1>/Constant'

  real_T Step6_Time;                   // Expression: 5
                                       //  Referenced by: '<S5>/Step6'

  real_T Step6_Y0;                     // Expression: 0
                                       //  Referenced by: '<S5>/Step6'

  real_T Step6_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S5>/Step6'

  real_T Step1_Time;                   // Expression: 45
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_YFinal;                 // Expression: -1
                                       //  Referenced by: '<S5>/Step1'

  real_T Step6_Time_l;                 // Expression: 10
                                       //  Referenced by: '<S3>/Step6'

  real_T Step6_Y0_c;                   // Expression: 0
                                       //  Referenced by: '<S3>/Step6'

  real_T Step6_YFinal_n;               // Expression: 1
                                       //  Referenced by: '<S3>/Step6'

  real_T Step1_Time_c;                 // Expression: 30
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_Y0_e;                   // Expression: 0
                                       //  Referenced by: '<S3>/Step1'

  real_T Step1_YFinal_h;               // Expression: -1
                                       //  Referenced by: '<S3>/Step1'

  real_T Step6_Time_h;                 // Expression: 20
                                       //  Referenced by: '<S4>/Step6'

  real_T Step6_Y0_n;                   // Expression: 0
                                       //  Referenced by: '<S4>/Step6'

  real_T Step6_YFinal_g;               // Expression: 1
                                       //  Referenced by: '<S4>/Step6'

  real_T Step1_Time_b;                 // Expression: 40
                                       //  Referenced by: '<S4>/Step1'

  real_T Step1_Y0_h;                   // Expression: 0
                                       //  Referenced by: '<S4>/Step1'

  real_T Step1_YFinal_h5;              // Expression: -1
                                       //  Referenced by: '<S4>/Step1'

};

// Real-time Model Data Structure
struct tag_RTM_square_trajectory_T {
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

  extern P_square_trajectory_T square_trajectory_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_square_trajectory_T square_trajectory_B;

// Block states (auto storage)
extern DW_square_trajectory_T square_trajectory_DW;

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
  extern void square_trajectory_initialize(void);
  extern void square_trajectory_step(void);
  extern void square_trajectory_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_square_trajectory_T *const square_trajectory_M;

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
//  '<Root>' : 'square_trajectory'
//  '<S1>'   : 'square_trajectory/Blank Message'
//  '<S2>'   : 'square_trajectory/Publish'
//  '<S3>'   : 'square_trajectory/X'
//  '<S4>'   : 'square_trajectory/Y'
//  '<S5>'   : 'square_trajectory/Z'

#endif                                 // RTW_HEADER_square_trajectory_h_

//
// File trailer for generated code.
//
// [EOF]
//
