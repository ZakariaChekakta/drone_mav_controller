//
// File: Trajectory_generation_types.h
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
#ifndef RTW_HEADER_Trajectory_generation_types_h_
#define RTW_HEADER_Trajectory_generation_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Trajectory_generation_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_Trajectory_generation_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_Trajectory_generation_ros_time_Time Stamp;
} SL_Bus_Trajectory_generation_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_Trajectory_generation_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_Trajectory_generation_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_Trajectory_generation_geometry_msgs_Quaternion Orientation;
} SL_Bus_Trajectory_generation_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped_

// MsgType=geometry_msgs/PoseStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_Trajectory_generation_std_msgs_Header Header;

  // MsgType=geometry_msgs/Pose
  SL_Bus_Trajectory_generation_geometry_msgs_Pose Pose;
} SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_Trajectory_generation_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_Trajectory_generation_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_Trajectory_generation_geometry_msgs_Vector3 Angular;
} SL_Bus_Trajectory_generation_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped_

// MsgType=geometry_msgs/TwistStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_Trajectory_generation_std_msgs_Header Header;

  // MsgType=geometry_msgs/Twist
  SL_Bus_Trajectory_generation_geometry_msgs_Twist Twist;
} SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Accel_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_Accel_

// MsgType=geometry_msgs/Accel
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_Trajectory_generation_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_Trajectory_generation_geometry_msgs_Vector3 Angular;
} SL_Bus_Trajectory_generation_geometry_msgs_Accel;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped_

// MsgType=geometry_msgs/AccelStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_Trajectory_generation_std_msgs_Header Header;

  // MsgType=geometry_msgs/Accel
  SL_Bus_Trajectory_generation_geometry_msgs_Accel Accel;
} SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_desired_msgs_Desired_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_desired_msgs_Desired_

// MsgType=desired_msgs/Desired
typedef struct {
  // MsgType=geometry_msgs/PoseStamped
  SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped PositionDesired;

  // MsgType=geometry_msgs/TwistStamped
  SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped VelociteDesired;

  // MsgType=geometry_msgs/AccelStamped
  SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped AccelerationDesired;
} SL_Bus_Trajectory_generation_desired_msgs_Desired;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_Trajectory_generation_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_error_msgs_Error_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_error_msgs_Error_

// MsgType=error_msgs/Error
typedef struct {
  real_T ErrorPositionX;
  real_T ErrorPositionY;
  real_T ErrorPositionZ;
  real_T ErrorVelociteX;
  real_T ErrorVelociteY;
  real_T ErrorVelociteZ;
} SL_Bus_Trajectory_generation_error_msgs_Error;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk_
#define DEFINED_TYPEDEF_FOR_SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk_

// MsgType=mav_msgs/RollPitchYawrateThrust
typedef struct {
  real_T Roll;
  real_T Pitch;
  real_T YawRate;

  // MsgType=std_msgs/Header
  SL_Bus_Trajectory_generation_std_msgs_Header Header;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_Trajectory_generation_geometry_msgs_Vector3 Thrust;
} SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk;

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

#ifndef typedef_struct_T_Trajectory_generatio_T
#define typedef_struct_T_Trajectory_generatio_T

typedef struct {
  real_T f0[2];
} struct_T_Trajectory_generatio_T;

#endif                                 //typedef_struct_T_Trajectory_generatio_T

#ifndef typedef_struct_T_Trajectory_generat_b_T
#define typedef_struct_T_Trajectory_generat_b_T

typedef struct {
  char_T f0[4];
} struct_T_Trajectory_generat_b_T;

#endif                                 //typedef_struct_T_Trajectory_generat_b_T

#ifndef typedef_struct_T_Trajectory_genera_bj_T
#define typedef_struct_T_Trajectory_genera_bj_T

typedef struct {
  char_T f0[8];
} struct_T_Trajectory_genera_bj_T;

#endif                                 //typedef_struct_T_Trajectory_genera_bj_T

#ifndef typedef_struct_T_Trajectory_gener_bjp_T
#define typedef_struct_T_Trajectory_gener_bjp_T

typedef struct {
  char_T f0[7];
} struct_T_Trajectory_gener_bjp_T;

#endif                                 //typedef_struct_T_Trajectory_gener_bjp_T

#ifndef typedef_struct_T_Trajectory_gene_bjpy_T
#define typedef_struct_T_Trajectory_gene_bjpy_T

typedef struct {
  char_T f0[8];
  char_T f1[7];
  char_T f2[6];
} struct_T_Trajectory_gene_bjpy_T;

#endif                                 //typedef_struct_T_Trajectory_gene_bjpy_T

// Parameters (auto storage)
typedef struct P_Trajectory_generation_T_ P_Trajectory_generation_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Trajectory_generation_T RT_MODEL_Trajectory_generatio_T;

#endif                                 // RTW_HEADER_Trajectory_generation_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
