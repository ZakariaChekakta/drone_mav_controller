#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_calculation_error_msgs_Error and error_msgs::Error

void convertFromBus(error_msgs::Error* msgPtr, SL_Bus_calculation_error_msgs_Error const* busPtr)
{
  const std::string rosMessageType("error_msgs/Error");

  msgPtr->Error_position_x =  busPtr->ErrorPositionX;
  msgPtr->Error_position_y =  busPtr->ErrorPositionY;
  msgPtr->Error_position_z =  busPtr->ErrorPositionZ;
  msgPtr->Error_velocite_x =  busPtr->ErrorVelociteX;
  msgPtr->Error_velocite_y =  busPtr->ErrorVelociteY;
  msgPtr->Error_velocite_z =  busPtr->ErrorVelociteZ;
}

void convertToBus(SL_Bus_calculation_error_msgs_Error* busPtr, error_msgs::Error const* msgPtr)
{
  const std::string rosMessageType("error_msgs/Error");

  busPtr->ErrorPositionX =  msgPtr->Error_position_x;
  busPtr->ErrorPositionY =  msgPtr->Error_position_y;
  busPtr->ErrorPositionZ =  msgPtr->Error_position_z;
  busPtr->ErrorVelociteX =  msgPtr->Error_velocite_x;
  busPtr->ErrorVelociteY =  msgPtr->Error_velocite_y;
  busPtr->ErrorVelociteZ =  msgPtr->Error_velocite_z;
}


// Conversions between SL_Bus_calculation_geometry_msgs_Vector3 and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_calculation_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_calculation_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust and mav_msgs::RollPitchYawrateThrust

void convertFromBus(mav_msgs::RollPitchYawrateThrust* msgPtr, SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust const* busPtr)
{
  const std::string rosMessageType("mav_msgs/RollPitchYawrateThrust");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  msgPtr->pitch =  busPtr->Pitch;
  msgPtr->roll =  busPtr->Roll;
  convertFromBus(&msgPtr->thrust, &busPtr->Thrust);
  msgPtr->yaw_rate =  busPtr->YawRate;
}

void convertToBus(SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust* busPtr, mav_msgs::RollPitchYawrateThrust const* msgPtr)
{
  const std::string rosMessageType("mav_msgs/RollPitchYawrateThrust");

  convertToBus(&busPtr->Header, &msgPtr->header);
  busPtr->Pitch =  msgPtr->pitch;
  busPtr->Roll =  msgPtr->roll;
  convertToBus(&busPtr->Thrust, &msgPtr->thrust);
  busPtr->YawRate =  msgPtr->yaw_rate;
}


// Conversions between SL_Bus_calculation_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_calculation_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_calculation_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_calculation_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_calculation_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_calculation_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_calculation_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_calculation_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_calculation_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

