//
// File: circular_trajectory_private.h
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
#ifndef RTW_HEADER_circular_trajectory_private_h_
#define RTW_HEADER_circular_trajectory_private_h_
#include "rtwtypes.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

extern real_T rt_powd_snf(real_T u0, real_T u1);

#endif                                 // RTW_HEADER_circular_trajectory_private_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
