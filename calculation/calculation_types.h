//
// File: calculation_types.h
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
#ifndef RTW_HEADER_calculation_types_h_
#define RTW_HEADER_calculation_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_calculation_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_error_msgs_Error_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_error_msgs_Error_

// MsgType=error_msgs/Error
typedef struct {
  real_T ErrorPositionX;
  real_T ErrorPositionY;
  real_T ErrorPositionZ;
  real_T ErrorVelociteX;
  real_T ErrorVelociteY;
  real_T ErrorVelociteZ;
} SL_Bus_calculation_error_msgs_Error;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_calculation_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_calculation_ros_time_Time Stamp;
} SL_Bus_calculation_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_calculation_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust_
#define DEFINED_TYPEDEF_FOR_SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust_

// MsgType=mav_msgs/RollPitchYawrateThrust
typedef struct {
  real_T Roll;
  real_T Pitch;
  real_T YawRate;

  // MsgType=std_msgs/Header
  SL_Bus_calculation_std_msgs_Header Header;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_calculation_geometry_msgs_Vector3 Thrust;
} SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust;

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

#ifndef typedef_struct_T_calculation_T
#define typedef_struct_T_calculation_T

typedef struct {
  real_T f0[2];
} struct_T_calculation_T;

#endif                                 //typedef_struct_T_calculation_T

#ifndef typedef_struct_T_calculation_b_T
#define typedef_struct_T_calculation_b_T

typedef struct {
  char_T f0[4];
} struct_T_calculation_b_T;

#endif                                 //typedef_struct_T_calculation_b_T

#ifndef typedef_struct_T_calculation_br_T
#define typedef_struct_T_calculation_br_T

typedef struct {
  char_T f0[8];
} struct_T_calculation_br_T;

#endif                                 //typedef_struct_T_calculation_br_T

#ifndef typedef_struct_T_calculation_brr_T
#define typedef_struct_T_calculation_brr_T

typedef struct {
  char_T f0[7];
} struct_T_calculation_brr_T;

#endif                                 //typedef_struct_T_calculation_brr_T

#ifndef typedef_struct_T_calculation_brrr_T
#define typedef_struct_T_calculation_brrr_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_calculation_brrr_T;

#endif                                 //typedef_struct_T_calculation_brrr_T

// Parameters (auto storage)
typedef struct P_calculation_T_ P_calculation_T;

// Forward declaration for rtModel
typedef struct tag_RTM_calculation_T RT_MODEL_calculation_T;

#endif                                 // RTW_HEADER_calculation_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
