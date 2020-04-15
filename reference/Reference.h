//
// File: Reference.h
//
// Code generated for Simulink model 'Reference'.
//
// Model version                  : 1.40
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Wed Dec 19 12:43:46 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Reference_h_
#define RTW_HEADER_Reference_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Reference_COMMON_INCLUDES_
# define Reference_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // Reference_COMMON_INCLUDES_

#include "Reference_types.h"
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
  SL_Bus_Reference_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_Reference_rosgraph_msgs_Clock BusAssignment1;// '<Root>/Bus Assignment1' 
  real_T Gain;                         // '<S5>/Gain'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Gain1;                        // '<S5>/Gain1'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Gain2;                        // '<S5>/Gain2'
  real_T Derivative3;                  // '<Root>/Derivative3'
} B_Reference_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative'
  real_T LastUAtTimeA;                 // '<Root>/Derivative'
  real_T TimeStampB;                   // '<Root>/Derivative'
  real_T LastUAtTimeB;                 // '<Root>/Derivative'
  real_T TimeStampA_p;                 // '<Root>/Derivative5'
  real_T LastUAtTimeA_n;               // '<Root>/Derivative5'
  real_T TimeStampB_p;                 // '<Root>/Derivative5'
  real_T LastUAtTimeB_c;               // '<Root>/Derivative5'
  real_T TimeStampA_c;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_h;               // '<Root>/Derivative1'
  real_T TimeStampB_d;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_p;               // '<Root>/Derivative1'
  real_T TimeStampA_n;                 // '<Root>/Derivative2'
  real_T LastUAtTimeA_c;               // '<Root>/Derivative2'
  real_T TimeStampB_l;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_d;               // '<Root>/Derivative2'
  real_T TimeStampA_d;                 // '<Root>/Derivative3'
  real_T LastUAtTimeA_ha;              // '<Root>/Derivative3'
  real_T TimeStampB_p1;                // '<Root>/Derivative3'
  real_T LastUAtTimeB_pj;              // '<Root>/Derivative3'
  real_T TimeStampA_no;                // '<Root>/Derivative4'
  real_T LastUAtTimeA_j;               // '<Root>/Derivative4'
  real_T TimeStampB_b;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_m;               // '<Root>/Derivative4'
  void *SinkBlock_PWORK;               // '<S4>/SinkBlock'
  void *SinkBlock_PWORK_a;             // '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S4>/SinkBlock'
  robotics_slros_internal_block_T obj_b;// '<S3>/SinkBlock'
} DW_Reference_T;

// Parameters (auto storage)
struct P_Reference_T_ {
  SL_Bus_Reference_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                       //  Referenced by: '<S1>/Constant'

  SL_Bus_Reference_rosgraph_msgs_Clock Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                        //  Referenced by: '<S2>/Constant'

  real_T Constant_Value_g;             // Expression: 10
                                       //  Referenced by: '<S5>/Constant'

  real_T Switch_Threshold;             // Expression: 6
                                       //  Referenced by: '<S5>/Switch'

  real_T Gain_Gain;                    // Expression: 1/5
                                       //  Referenced by: '<S5>/Gain'

  real_T Switch1_Threshold;            // Expression: 17.5
                                       //  Referenced by: '<S5>/Switch1'

  real_T Gain1_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S5>/Gain1'

  real_T Switch2_Threshold;            // Expression: 28
                                       //  Referenced by: '<S5>/Switch2'

  real_T Gain2_Gain;                   // Expression: 1/5
                                       //  Referenced by: '<S5>/Gain2'

};

// Real-time Model Data Structure
struct tag_RTM_Reference_T {
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

  extern P_Reference_T Reference_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_Reference_T Reference_B;

// Block states (auto storage)
extern DW_Reference_T Reference_DW;

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
  extern void Reference_initialize(void);
  extern void Reference_step(void);
  extern void Reference_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Reference_T *const Reference_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S5>/Step' : Unused code path elimination
//  Block '<S5>/Step1' : Unused code path elimination
//  Block '<S5>/Step2' : Unused code path elimination
//  Block '<S5>/Step3' : Unused code path elimination
//  Block '<S5>/Step4' : Unused code path elimination
//  Block '<S5>/Step5' : Unused code path elimination
//  Block '<S5>/Step6' : Unused code path elimination
//  Block '<S5>/Step7' : Unused code path elimination
//  Block '<S5>/Step8' : Unused code path elimination
//  Block '<S5>/Sum' : Unused code path elimination
//  Block '<S5>/Sum1' : Unused code path elimination
//  Block '<S5>/Sum2' : Unused code path elimination


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
//  '<Root>' : 'Reference'
//  '<S1>'   : 'Reference/Blank Message'
//  '<S2>'   : 'Reference/Blank Message1'
//  '<S3>'   : 'Reference/Publish'
//  '<S4>'   : 'Reference/Publish1'
//  '<S5>'   : 'Reference/Subsystem8'

#endif                                 // RTW_HEADER_Reference_h_

//
// File trailer for generated code.
//
// [EOF]
//
