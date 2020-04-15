//
// File: fuzzy_logic_system_types.h
//
// Code generated for Simulink model 'fuzzy_logic_system'.
//
// Model version                  : 1.60
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Fri Dec  7 12:11:05 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_fuzzy_logic_system_types_h_
#define RTW_HEADER_fuzzy_logic_system_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_system_gain_msgs_pid_
#define DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_system_gain_msgs_pid_

// MsgType=gain_msgs/pid
typedef struct {
  real_T KpX;
  real_T KdX;
  real_T KiX;
  real_T KpY;
  real_T KdY;
  real_T KiY;
  real_T KpZ;
  real_T KdZ;
  real_T KiZ;
} SL_Bus_fuzzy_logic_system_gain_msgs_pid;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_system_error_msgs_Error_
#define DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_system_error_msgs_Error_

// MsgType=error_msgs/Error
typedef struct {
  real_T ErrorPositionX;
  real_T ErrorPositionY;
  real_T ErrorPositionZ;
  real_T ErrorVelociteX;
  real_T ErrorVelociteY;
  real_T ErrorVelociteZ;
} SL_Bus_fuzzy_logic_system_error_msgs_Error;

#endif

#ifndef struct_tag_saG5948SFTrUFnIbVUb0TZH
#define struct_tag_saG5948SFTrUFnIbVUb0TZH

struct tag_saG5948SFTrUFnIbVUb0TZH
{
  int32_T isInitialized;
};

#endif                                 //struct_tag_saG5948SFTrUFnIbVUb0TZH

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef struct_tag_saG5948SFTrUFnIbVUb0TZH
#define struct_tag_saG5948SFTrUFnIbVUb0TZH

struct tag_saG5948SFTrUFnIbVUb0TZH
{
  int32_T isInitialized;
};

#endif                                 //struct_tag_saG5948SFTrUFnIbVUb0TZH

#ifndef typedef_robotics_slros_internal_blo_l_T
#define typedef_robotics_slros_internal_blo_l_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_blo_l_T;

#endif                                 //typedef_robotics_slros_internal_blo_l_T

#ifndef typedef_struct_T_fuzzy_logic_system_T
#define typedef_struct_T_fuzzy_logic_system_T

typedef struct {
  real_T f0[2];
} struct_T_fuzzy_logic_system_T;

#endif                                 //typedef_struct_T_fuzzy_logic_system_T

#ifndef typedef_struct_T_fuzzy_logic_system_l_T
#define typedef_struct_T_fuzzy_logic_system_l_T

typedef struct {
  char_T f0[4];
} struct_T_fuzzy_logic_system_l_T;

#endif                                 //typedef_struct_T_fuzzy_logic_system_l_T

#ifndef typedef_struct_T_fuzzy_logic_syste_lr_T
#define typedef_struct_T_fuzzy_logic_syste_lr_T

typedef struct {
  char_T f0[8];
} struct_T_fuzzy_logic_syste_lr_T;

#endif                                 //typedef_struct_T_fuzzy_logic_syste_lr_T

#ifndef typedef_struct_T_fuzzy_logic_syst_lrj_T
#define typedef_struct_T_fuzzy_logic_syst_lrj_T

typedef struct {
  char_T f0[7];
} struct_T_fuzzy_logic_syst_lrj_T;

#endif                                 //typedef_struct_T_fuzzy_logic_syst_lrj_T

#ifndef typedef_struct_T_fuzzy_logic_sys_lrjx_T
#define typedef_struct_T_fuzzy_logic_sys_lrjx_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_fuzzy_logic_sys_lrjx_T;

#endif                                 //typedef_struct_T_fuzzy_logic_sys_lrjx_T

// Parameters for system: '<S8>/Action: One'
typedef struct P_ActionOne_fuzzy_logic_syste_T_ P_ActionOne_fuzzy_logic_syste_T;

// Parameters for system: '<S47>/If Action Subsystem'
typedef struct P_IfActionSubsystem_fuzzy_log_T_ P_IfActionSubsystem_fuzzy_log_T;

// Parameters (auto storage)
typedef struct P_fuzzy_logic_system_T_ P_fuzzy_logic_system_T;

// Forward declaration for rtModel
typedef struct tag_RTM_fuzzy_logic_system_T RT_MODEL_fuzzy_logic_system_T;

#endif                                 // RTW_HEADER_fuzzy_logic_system_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
