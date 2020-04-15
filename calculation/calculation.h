//
// File: calculation.h
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
#ifndef RTW_HEADER_calculation_h_
#define RTW_HEADER_calculation_h_
#include <string.h>
#include <stddef.h>
#ifndef calculation_COMMON_INCLUDES_
# define calculation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // calculation_COMMON_INCLUDES_

#include "calculation_types.h"

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
  SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust In1;// '<S8>/In1'
  SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust varargout_2;
  SL_Bus_calculation_error_msgs_Error In1_c;// '<S7>/In1'
  SL_Bus_calculation_error_msgs_Error varargout_2_m;
  char_T cv0[47];
  real_T Add;                          // '<Root>/Add'
  real_T MathFunction3;                // '<Root>/Math Function3'
} B_calculation_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  void *SourceBlock_PWORK;             // '<S6>/SourceBlock'
  void *SourceBlock_PWORK_c;           // '<S5>/SourceBlock'
  void *SinkBlock_PWORK;               // '<S4>/SinkBlock'
  void *SinkBlock_PWORK_j;             // '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj; // '<S4>/SinkBlock'
  robotics_slros_internal_block_T obj_n;// '<S3>/SinkBlock'
  robotics_slros_internal_blo_b_T obj_l;// '<S6>/SourceBlock'
  robotics_slros_internal_blo_b_T obj_m;// '<S5>/SourceBlock'
} DW_calculation_T;

// Continuous states (auto storage)
typedef struct {
  real_T Integrator_CSTATE;            // '<Root>/Integrator'
  real_T Integrator1_CSTATE;           // '<Root>/Integrator1'
} X_calculation_T;

// State derivatives (auto storage)
typedef struct {
  real_T Integrator_CSTATE;            // '<Root>/Integrator'
  real_T Integrator1_CSTATE;           // '<Root>/Integrator1'
} XDot_calculation_T;

// State disabled
typedef struct {
  boolean_T Integrator_CSTATE;         // '<Root>/Integrator'
  boolean_T Integrator1_CSTATE;        // '<Root>/Integrator1'
} XDis_calculation_T;

#ifndef ODE3_INTG
#define ODE3_INTG

// ODE3 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[3];                        // derivatives
} ODE3_IntgData;

#endif

// Parameters (auto storage)
struct P_calculation_T_ {
  SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S8>/Out1'

  SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S6>/Constant'

  SL_Bus_calculation_error_msgs_Error Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                //  Referenced by: '<S7>/Out1'

  SL_Bus_calculation_error_msgs_Error Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                       //  Referenced by: '<S5>/Constant'

  real_T Integrator_IC;                // Expression: 0
                                       //  Referenced by: '<Root>/Integrator'

  real_T Integrator1_IC;               // Expression: 0
                                       //  Referenced by: '<Root>/Integrator1'

  SL_Bus_calculation_std_msgs_Float64 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                       //  Referenced by: '<S1>/Constant'

  SL_Bus_calculation_std_msgs_Float64 Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                       //  Referenced by: '<S2>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_calculation_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_calculation_T *contStates;
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

  extern P_calculation_T calculation_P;

#ifdef __cplusplus

}
#endif

// Block signals (auto storage)
extern B_calculation_T calculation_B;

// Continuous states (auto storage)
extern X_calculation_T calculation_X;

// Block states (auto storage)
extern DW_calculation_T calculation_DW;

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
  extern void calculation_initialize(void);
  extern void calculation_step(void);
  extern void calculation_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_calculation_T *const calculation_M;

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
//  '<Root>' : 'calculation'
//  '<S1>'   : 'calculation/Blank Message'
//  '<S2>'   : 'calculation/Blank Message1'
//  '<S3>'   : 'calculation/Publish'
//  '<S4>'   : 'calculation/Publish1'
//  '<S5>'   : 'calculation/Subscribe'
//  '<S6>'   : 'calculation/Subscribe1'
//  '<S7>'   : 'calculation/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'calculation/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_calculation_h_

//
// File trailer for generated code.
//
// [EOF]
//
