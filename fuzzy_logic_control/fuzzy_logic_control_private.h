//
// File: fuzzy_logic_control_private.h
//
// Code generated for Simulink model 'fuzzy_logic_control'.
//
// Model version                  : 1.77
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Jan 11 18:26:20 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_fuzzy_logic_control_private_h_
#define RTW_HEADER_fuzzy_logic_control_private_h_
#include "rtwtypes.h"
#include "fuzzy_logic_control.h"

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

extern void fuzzy_logic_control_ActionOne(real_T *rty_Out1,
  P_ActionOne_fuzzy_logic_contr_T *localP);
extern void fuzzy_logic_c_IfActionSubsystem(real_T *rty_Out1,
  P_IfActionSubsystem_fuzzy_log_T *localP);
extern void fuzzy_logic__IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  B_IfActionSubsystem3_fuzzy_lo_T *localB, real_T rtp_a, real_T rtp_b);
extern void fuzzy_logic__IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  B_IfActionSubsystem2_fuzzy_lo_T *localB, real_T rtp_b, real_T rtp_c);

#endif                                 // RTW_HEADER_fuzzy_logic_control_private_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
