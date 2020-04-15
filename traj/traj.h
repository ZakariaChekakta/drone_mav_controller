//
// File: traj.h
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
#ifndef RTW_HEADER_traj_h_
#define RTW_HEADER_traj_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef traj_COMMON_INCLUDES_
# define traj_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // traj_COMMON_INCLUDES_

#include "traj_types.h"
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
  SL_Bus_traj_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment'
  real_T Add2;                         // '<S5>/Add2'
  real_T Product;                      // '<S3>/Product'
  real_T Product_g;                    // '<S4>/Product'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Derivative2;                  // '<Root>/Derivative2'
} B_traj_T;

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
} DW_traj_T;

// Parameters (auto storage)
struct P_traj_T_ {
  SL_Bus_traj_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                  //  Referenced by: '<S1>/Constant'

  real_T Step1_Time;                   // Expression: 15
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_Y0;                     // Expression: 1
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_YFinal;                 // Expression: 0
                                       //  Referenced by: '<S5>/Step1'

  real_T SineWave_Amp;                 // Expression: 5
                                       //  Referenced by: '<S5>/Sine Wave'

  real_T SineWave_Bias;                // Expression: 0
                                       //  Referenced by: '<S5>/Sine Wave'

  real_T SineWave_Freq;                // Expression: 2*pi/60
                                       //  Referenced by: '<S5>/Sine Wave'

  real_T SineWave_Phase;               // Expression: 0
                                       //  Referenced by: '<S5>/Sine Wave'

  real_T Step12_Time;                  // Expression: 15
                                       //  Referenced by: '<S5>/Step12'

  real_T Step12_Y0;                    // Expression: 0
                                       //  Referenced by: '<S5>/Step12'

  real_T Step12_YFinal;                // Expression: 1
                                       //  Referenced by: '<S5>/Step12'

  real_T Constant3_Value;              // Expression: 5
                                       //  Referenced by: '<S5>/Constant3'

  real_T Step_Time;                    // Expression: 20
                                       //  Referenced by: '<S3>/Step'

  real_T Step_Y0;                      // Expression: 0
                                       //  Referenced by: '<S3>/Step'

  real_T Step_YFinal;                  // Expression: 1
                                       //  Referenced by: '<S3>/Step'

  real_T Step_Time_g;                  // Expression: 20
                                       //  Referenced by: '<S4>/Step'

  real_T Step_Y0_m;                    // Expression: 0
                                       //  Referenced by: '<S4>/Step'

  real_T Step_YFinal_h;                // Expression: 1
                                       //  Referenced by: '<S4>/Step'

};

// Real-time Model Data Structure
struct tag_RTM_traj_T {
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

  extern P_traj_T traj_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_traj_T traj_B;

// Block states (auto storage)
extern DW_traj_T traj_DW;

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
  extern void traj_initialize(void);
  extern void traj_step(void);
  extern void traj_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_traj_T *const traj_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/To Workspace' : Unused code path elimination
//  Block '<Root>/To Workspace1' : Unused code path elimination
//  Block '<Root>/To Workspace2' : Unused code path elimination


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
//  '<Root>' : 'traj'
//  '<S1>'   : 'traj/Blank Message'
//  '<S2>'   : 'traj/Publish'
//  '<S3>'   : 'traj/X'
//  '<S4>'   : 'traj/Y'
//  '<S5>'   : 'traj/Z'

#endif                                 // RTW_HEADER_traj_h_

//
// File trailer for generated code.
//
// [EOF]
//
