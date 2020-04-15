//
// File: wind_disturbance_types.h
//
// Code generated for Simulink model 'wind_disturbance'.
//
// Model version                  : 1.15
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Jan 14 21:53:37 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_wind_disturbance_types_h_
#define RTW_HEADER_wind_disturbance_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_wind_disturbance_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_wind_disturbance_ros_time_Time Stamp;
} SL_Bus_wind_disturbance_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_wind_disturbance_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_rotors_comm_WindSpeed_
#define DEFINED_TYPEDEF_FOR_SL_Bus_wind_disturbance_rotors_comm_WindSpeed_

// MsgType=rotors_comm/WindSpeed
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_wind_disturbance_std_msgs_Header Header;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_wind_disturbance_geometry_msgs_Vector3 Velocity;
} SL_Bus_wind_disturbance_rotors_comm_WindSpeed;

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

#ifndef typedef_struct_T_wind_disturbance_T
#define typedef_struct_T_wind_disturbance_T

typedef struct {
  real_T f0[2];
} struct_T_wind_disturbance_T;

#endif                                 //typedef_struct_T_wind_disturbance_T

#ifndef typedef_struct_T_wind_disturbance_o_T
#define typedef_struct_T_wind_disturbance_o_T

typedef struct {
  char_T f0[4];
} struct_T_wind_disturbance_o_T;

#endif                                 //typedef_struct_T_wind_disturbance_o_T

#ifndef typedef_struct_T_wind_disturbance_om_T
#define typedef_struct_T_wind_disturbance_om_T

typedef struct {
  char_T f0[8];
} struct_T_wind_disturbance_om_T;

#endif                                 //typedef_struct_T_wind_disturbance_om_T

#ifndef typedef_struct_T_wind_disturbance_omt_T
#define typedef_struct_T_wind_disturbance_omt_T

typedef struct {
  char_T f0[7];
} struct_T_wind_disturbance_omt_T;

#endif                                 //typedef_struct_T_wind_disturbance_omt_T

#ifndef typedef_struct_T_wind_disturbanc_omto_T
#define typedef_struct_T_wind_disturbanc_omto_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_wind_disturbanc_omto_T;

#endif                                 //typedef_struct_T_wind_disturbanc_omto_T

// Parameters (auto storage)
typedef struct P_wind_disturbance_T_ P_wind_disturbance_T;

// Forward declaration for rtModel
typedef struct tag_RTM_wind_disturbance_T RT_MODEL_wind_disturbance_T;

#endif                                 // RTW_HEADER_wind_disturbance_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
