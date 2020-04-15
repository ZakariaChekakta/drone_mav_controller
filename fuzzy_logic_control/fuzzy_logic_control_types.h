//
// File: fuzzy_logic_control_types.h
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
#ifndef RTW_HEADER_fuzzy_logic_control_types_h_
#define RTW_HEADER_fuzzy_logic_control_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_control_gain_msgs_pid_
#define DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_control_gain_msgs_pid_

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
} SL_Bus_fuzzy_logic_control_gain_msgs_pid;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_control_error_msgs_Error_
#define DEFINED_TYPEDEF_FOR_SL_Bus_fuzzy_logic_control_error_msgs_Error_

// MsgType=error_msgs/Error
typedef struct {
  real_T ErrorPositionX;
  real_T ErrorPositionY;
  real_T ErrorPositionZ;
  real_T ErrorVelociteX;
  real_T ErrorVelociteY;
  real_T ErrorVelociteZ;
} SL_Bus_fuzzy_logic_control_error_msgs_Error;

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

#ifndef typedef_robotics_slros_internal_blo_b_T
#define typedef_robotics_slros_internal_blo_b_T

typedef struct tag_saG5948SFTrUFnIbVUb0TZH robotics_slros_internal_blo_b_T;

#endif                                 //typedef_robotics_slros_internal_blo_b_T

#ifndef typedef_struct_T_fuzzy_logic_control_T
#define typedef_struct_T_fuzzy_logic_control_T

typedef struct {
  real_T f0[2];
} struct_T_fuzzy_logic_control_T;

#endif                                 //typedef_struct_T_fuzzy_logic_control_T

#ifndef typedef_struct_T_fuzzy_logic_contro_b_T
#define typedef_struct_T_fuzzy_logic_contro_b_T

typedef struct {
  char_T f0[4];
} struct_T_fuzzy_logic_contro_b_T;

#endif                                 //typedef_struct_T_fuzzy_logic_contro_b_T

#ifndef typedef_struct_T_fuzzy_logic_contr_b1_T
#define typedef_struct_T_fuzzy_logic_contr_b1_T

typedef struct {
  char_T f0[8];
} struct_T_fuzzy_logic_contr_b1_T;

#endif                                 //typedef_struct_T_fuzzy_logic_contr_b1_T

#ifndef typedef_struct_T_fuzzy_logic_cont_b14_T
#define typedef_struct_T_fuzzy_logic_cont_b14_T

typedef struct {
  char_T f0[7];
} struct_T_fuzzy_logic_cont_b14_T;

#endif                                 //typedef_struct_T_fuzzy_logic_cont_b14_T

#ifndef typedef_struct_T_fuzzy_logic_con_b14r_T
#define typedef_struct_T_fuzzy_logic_con_b14r_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_fuzzy_logic_con_b14r_T;

#endif                                 //typedef_struct_T_fuzzy_logic_con_b14r_T

// Parameters for system: '<S8>/Action: One'
typedef struct P_ActionOne_fuzzy_logic_contr_T_ P_ActionOne_fuzzy_logic_contr_T;

// Parameters for system: '<S43>/If Action Subsystem'
typedef struct P_IfActionSubsystem_fuzzy_log_T_ P_IfActionSubsystem_fuzzy_log_T;

// Parameters (auto storage)
typedef struct P_fuzzy_logic_control_T_ P_fuzzy_logic_control_T;

// Forward declaration for rtModel
typedef struct tag_RTM_fuzzy_logic_control_T RT_MODEL_fuzzy_logic_control_T;

#endif                                 // RTW_HEADER_fuzzy_logic_control_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
