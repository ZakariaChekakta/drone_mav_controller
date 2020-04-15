//
// File: Trajectory_generation.h
//
// Code generated for Simulink model 'Trajectory_generation'.
//
// Model version                  : 1.269
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 12:40:16 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Trajectory_generation_h_
#define RTW_HEADER_Trajectory_generation_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Trajectory_generation_COMMON_INCLUDES_
# define Trajectory_generation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // Trajectory_generation_COMMON_INCLUDES_ 

#include "Trajectory_generation_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

// Block signals (auto storage)
typedef struct {
  SL_Bus_Trajectory_generation_desired_msgs_Desired BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk In1;// '<S14>/In1'
  SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk varargout_2;
  SL_Bus_Trajectory_generation_error_msgs_Error In1_g;// '<S13>/In1'
  SL_Bus_Trajectory_generation_error_msgs_Error varargout_2_m;
  char_T cv0[47];
  real_T Add2;                         // '<S6>/Add2'
  real_T Add;                          // '<S4>/Add'
  real_T Add_e;                        // '<S5>/Add'
  real_T Derivative;                   // '<Root>/Derivative'
  real_T Derivative1;                  // '<Root>/Derivative1'
  real_T Derivative2;                  // '<Root>/Derivative2'
  real_T Add_a;                        // '<S3>/Add'
  real_T MathFunction3;                // '<S3>/Math Function3'
  real_T currentTime;
  real_T currentTime_c;
  real_T currentTime_k;
  real_T currentTime_cx;
  real_T currentTime_b;
  real_T currentTime_p;
  SL_Bus_Trajectory_generation_std_msgs_Float64 BusAssignment2;// '<S3>/Bus Assignment2' 
  SL_Bus_Trajectory_generation_std_msgs_Float64 BusAssignment1;// '<S3>/Bus Assignment1' 
} B_Trajectory_generation_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  real_T TimeStampA;                   // '<Root>/Derivative'
  real_T LastUAtTimeA;                 // '<Root>/Derivative'
  real_T TimeStampB;                   // '<Root>/Derivative'
  real_T LastUAtTimeB;                 // '<Root>/Derivative'
  real_T TimeStampA_h;                 // '<Root>/Derivative1'
  real_T LastUAtTimeA_e;               // '<Root>/Derivative1'
  real_T TimeStampB_h;                 // '<Root>/Derivative1'
  real_T LastUAtTimeB_d;               // '<Root>/Derivative1'
  real_T TimeStampA_k;                 // '<Root>/Derivative2'
  real_T LastUAtTimeA_f;               // '<Root>/Derivative2'
  real_T TimeStampB_o;                 // '<Root>/Derivative2'
  real_T LastUAtTimeB_a;               // '<Root>/Derivative2'
  real_T TimeStampA_c;                 // '<Root>/Derivative3'
  real_T LastUAtTimeA_a;               // '<Root>/Derivative3'
  real_T TimeStampB_c;                 // '<Root>/Derivative3'
  real_T LastUAtTimeB_k;               // '<Root>/Derivative3'
  real_T TimeStampA_p;                 // '<Root>/Derivative4'
  real_T LastUAtTimeA_am;              // '<Root>/Derivative4'
  real_T TimeStampB_a;                 // '<Root>/Derivative4'
  real_T LastUAtTimeB_dm;              // '<Root>/Derivative4'
  real_T TimeStampA_l;                 // '<Root>/Derivative5'
  real_T LastUAtTimeA_o;               // '<Root>/Derivative5'
  real_T TimeStampB_ht;                // '<Root>/Derivative5'
  real_T LastUAtTimeB_l;               // '<Root>/Derivative5'
  void *SourceBlock_PWORK;             // '<S12>/SourceBlock'
  void *SourceBlock_PWORK_o;           // '<S11>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S10>/SinkBlock'
  void *SinkBlock_PWORK_n;             // '<S9>/SinkBlock'
  void *SinkBlock_PWORK_m;             // '<S2>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S10>/SinkBlock'
  robotics_slros_internal_block_T obj_g;// '<S9>/SinkBlock'
  robotics_slros_internal_block_T obj_c;// '<S2>/SinkBlock'
  robotics_slros_internal_blo_b_T obj_d;// '<S12>/SourceBlock'
  robotics_slros_internal_blo_b_T obj_e;// '<S11>/SourceBlock'
} DW_Trajectory_generation_T;

// Continuous states (auto storage)
typedef struct {
  real_T Integrator_CSTATE;            // '<S3>/Integrator'
  real_T Integrator1_CSTATE;           // '<S3>/Integrator1'
} X_Trajectory_generation_T;

// State derivatives (auto storage)
typedef struct {
  real_T Integrator_CSTATE;            // '<S3>/Integrator'
  real_T Integrator1_CSTATE;           // '<S3>/Integrator1'
} XDot_Trajectory_generation_T;

// State disabled
typedef struct {
  boolean_T Integrator_CSTATE;         // '<S3>/Integrator'
  boolean_T Integrator1_CSTATE;        // '<S3>/Integrator1'
} XDis_Trajectory_generation_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (auto storage)
struct P_Trajectory_generation_T_ {
  SL_Bus_Trajectory_generation_desired_msgs_Desired Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S1>/Constant'

  SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk Out1_Y0;// Computed Parameter: Out1_Y0
                                                                     //  Referenced by: '<S14>/Out1'

  SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S12>/Constant'

  SL_Bus_Trajectory_generation_error_msgs_Error Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                          //  Referenced by: '<S13>/Out1'

  SL_Bus_Trajectory_generation_error_msgs_Error Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                 //  Referenced by: '<S11>/Constant'

  real_T Step10_Time;                  // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  real_T Step10_Y0;                    // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  real_T Step10_YFinal;                // Expression: 0
                                       //  Referenced by: '<S6>/Step10'

  real_T Constant2_Value;              // Expression: 0
                                       //  Referenced by: '<S6>/Constant2'

  real_T Step11_Time;                  // Expression: 5
                                       //  Referenced by: '<S6>/Step11'

  real_T Step11_Y0;                    // Expression: 0
                                       //  Referenced by: '<S6>/Step11'

  real_T Step11_YFinal;                // Expression: 0
                                       //  Referenced by: '<S6>/Step11'

  real_T Step1_Time;                   // Expression: 0
                                       //  Referenced by: '<S6>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                       //  Referenced by: '<S6>/Step1'

  real_T Step1_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S6>/Step1'

  real_T Step3_Time;                   // Expression: 10
                                       //  Referenced by: '<S6>/Step3'

  real_T Step3_Y0;                     // Expression: 1
                                       //  Referenced by: '<S6>/Step3'

  real_T Step3_YFinal;                 // Expression: 0
                                       //  Referenced by: '<S6>/Step3'

  real_T Step6_Time;                   // Expression: 10
                                       //  Referenced by: '<S6>/Step6'

  real_T Step6_Y0;                     // Expression: 0
                                       //  Referenced by: '<S6>/Step6'

  real_T Step6_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S6>/Step6'

  real_T Constant1_Value;              // Expression: 2
                                       //  Referenced by: '<S6>/Constant1'

  real_T Step7_Time;                   // Expression: 35
                                       //  Referenced by: '<S6>/Step7'

  real_T Step7_Y0;                     // Expression: 1
                                       //  Referenced by: '<S6>/Step7'

  real_T Step7_YFinal;                 // Expression: 0
                                       //  Referenced by: '<S6>/Step7'

  real_T Step4_Time;                   // Expression: 35
                                       //  Referenced by: '<S6>/Step4'

  real_T Step4_Y0;                     // Expression: 0
                                       //  Referenced by: '<S6>/Step4'

  real_T Step4_YFinal;                 // Expression: 1
                                       //  Referenced by: '<S6>/Step4'

  real_T Constant4_Value;              // Expression: -5
                                       //  Referenced by: '<S6>/Constant4'

  real_T Step5_Time;                   // Expression: 50
                                       //  Referenced by: '<S6>/Step5'

  real_T Step5_Y0;                     // Expression: 1
                                       //  Referenced by: '<S6>/Step5'

  real_T Step5_YFinal;                 // Expression: 0
                                       //  Referenced by: '<S6>/Step5'

  real_T Step12_Time;                  // Expression: 45
                                       //  Referenced by: '<S6>/Step12'

  real_T Step12_Y0;                    // Expression: 0
                                       //  Referenced by: '<S6>/Step12'

  real_T Step12_YFinal;                // Expression: 1
                                       //  Referenced by: '<S6>/Step12'

  real_T Constant3_Value;              // Expression: 0
                                       //  Referenced by: '<S6>/Constant3'

  real_T Step13_Time;                  // Expression: 50
                                       //  Referenced by: '<S6>/Step13'

  real_T Step13_Y0;                    // Expression: 1
                                       //  Referenced by: '<S6>/Step13'

  real_T Step13_YFinal;                // Expression: 0
                                       //  Referenced by: '<S6>/Step13'

  real_T Step_Time;                    // Expression: 5
                                       //  Referenced by: '<S4>/Step'

  real_T Step_Y0;                      // Expression: 0
                                       //  Referenced by: '<S4>/Step'

  real_T Step_YFinal;                  // Expression: 1
                                       //  Referenced by: '<S4>/Step'

  real_T Constant3_Value_i;            // Expression: -5
                                       //  Referenced by: '<S4>/Constant3'

  real_T Step1_Time_m;                 // Expression: 20
                                       //  Referenced by: '<S4>/Step1'

  real_T Step1_Y0_f;                   // Expression: 1
                                       //  Referenced by: '<S4>/Step1'

  real_T Step1_YFinal_j;               // Expression: 0
                                       //  Referenced by: '<S4>/Step1'

  real_T Step4_Time_m;                 // Expression: 20
                                       //  Referenced by: '<S4>/Step4'

  real_T Step4_Y0_h;                   // Expression: 0
                                       //  Referenced by: '<S4>/Step4'

  real_T Step4_YFinal_j;               // Expression: 1
                                       //  Referenced by: '<S4>/Step4'

  real_T Step5_Time_j;                 // Expression: 35
                                       //  Referenced by: '<S4>/Step5'

  real_T Step5_Y0_d;                   // Expression: 1
                                       //  Referenced by: '<S4>/Step5'

  real_T Step5_YFinal_c;               // Expression: 0
                                       //  Referenced by: '<S4>/Step5'

  real_T Step_Time_j;                  // Expression: 5
                                       //  Referenced by: '<S5>/Step'

  real_T Step_Y0_h;                    // Expression: 0
                                       //  Referenced by: '<S5>/Step'

  real_T Step_YFinal_k;                // Expression: 1
                                       //  Referenced by: '<S5>/Step'

  real_T Constant3_Value_l;            // Expression: -5
                                       //  Referenced by: '<S5>/Constant3'

  real_T Step1_Time_c;                 // Expression: 25
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_Y0_k;                   // Expression: 1
                                       //  Referenced by: '<S5>/Step1'

  real_T Step1_YFinal_f;               // Expression: 0
                                       //  Referenced by: '<S5>/Step1'

  real_T Step4_Time_b;                 // Expression: 25
                                       //  Referenced by: '<S5>/Step4'

  real_T Step4_Y0_b;                   // Expression: 0
                                       //  Referenced by: '<S5>/Step4'

  real_T Step4_YFinal_b;               // Expression: 1
                                       //  Referenced by: '<S5>/Step4'

  real_T Step5_Time_d;                 // Expression: 40
                                       //  Referenced by: '<S5>/Step5'

  real_T Step5_Y0_m;                   // Expression: 1
                                       //  Referenced by: '<S5>/Step5'

  real_T Step5_YFinal_g;               // Expression: 0
                                       //  Referenced by: '<S5>/Step5'

  real_T Integrator_IC;                // Expression: 0
                                       //  Referenced by: '<S3>/Integrator'

  real_T Integrator1_IC;               // Expression: 0
                                       //  Referenced by: '<S3>/Integrator1'

  SL_Bus_Trajectory_generation_std_msgs_Float64 Constant_Value_h4;// Computed Parameter: Constant_Value_h4
                                                                  //  Referenced by: '<S7>/Constant'

  SL_Bus_Trajectory_generation_std_msgs_Float64 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                 //  Referenced by: '<S8>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_Trajectory_generation_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Trajectory_generation_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeY[2];
  real_T odeF[3][2];
  ODE3_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (auto storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Trajectory_generation_T Trajectory_generation_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_Trajectory_generation_T Trajectory_generation_B;

// Continuous states (auto storage)
extern X_Trajectory_generation_T Trajectory_generation_X;

// Block states (auto storage)
extern DW_Trajectory_generation_T Trajectory_generation_DW;

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
  extern void Trajectory_generation_initialize(void);
  extern void Trajectory_generation_step(void);
  extern void Trajectory_generation_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Trajectory_generatio_T *const Trajectory_generation_M;

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
//  '<Root>' : 'Trajectory_generation'
//  '<S1>'   : 'Trajectory_generation/Blank Message'
//  '<S2>'   : 'Trajectory_generation/Publish'
//  '<S3>'   : 'Trajectory_generation/Subsystem'
//  '<S4>'   : 'Trajectory_generation/X'
//  '<S5>'   : 'Trajectory_generation/Y'
//  '<S6>'   : 'Trajectory_generation/Z'
//  '<S7>'   : 'Trajectory_generation/Subsystem/Blank Message1'
//  '<S8>'   : 'Trajectory_generation/Subsystem/Blank Message2'
//  '<S9>'   : 'Trajectory_generation/Subsystem/Publish1'
//  '<S10>'  : 'Trajectory_generation/Subsystem/Publish2'
//  '<S11>'  : 'Trajectory_generation/Subsystem/Subscribe'
//  '<S12>'  : 'Trajectory_generation/Subsystem/Subscribe1'
//  '<S13>'  : 'Trajectory_generation/Subsystem/Subscribe/Enabled Subsystem'
//  '<S14>'  : 'Trajectory_generation/Subsystem/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_Trajectory_generation_h_

//
// File trailer for generated code.
//
// [EOF]
//
