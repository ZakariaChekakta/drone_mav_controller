#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_fuzzy_logic_system_error_msgs_Error and error_msgs::Error

void convertFromBus(error_msgs::Error* msgPtr, SL_Bus_fuzzy_logic_system_error_msgs_Error const* busPtr)
{
  const std::string rosMessageType("error_msgs/Error");

  msgPtr->Error_position_x =  busPtr->ErrorPositionX;
  msgPtr->Error_position_y =  busPtr->ErrorPositionY;
  msgPtr->Error_position_z =  busPtr->ErrorPositionZ;
  msgPtr->Error_velocite_x =  busPtr->ErrorVelociteX;
  msgPtr->Error_velocite_y =  busPtr->ErrorVelociteY;
  msgPtr->Error_velocite_z =  busPtr->ErrorVelociteZ;
}

void convertToBus(SL_Bus_fuzzy_logic_system_error_msgs_Error* busPtr, error_msgs::Error const* msgPtr)
{
  const std::string rosMessageType("error_msgs/Error");

  busPtr->ErrorPositionX =  msgPtr->Error_position_x;
  busPtr->ErrorPositionY =  msgPtr->Error_position_y;
  busPtr->ErrorPositionZ =  msgPtr->Error_position_z;
  busPtr->ErrorVelociteX =  msgPtr->Error_velocite_x;
  busPtr->ErrorVelociteY =  msgPtr->Error_velocite_y;
  busPtr->ErrorVelociteZ =  msgPtr->Error_velocite_z;
}


// Conversions between SL_Bus_fuzzy_logic_system_gain_msgs_pid and gain_msgs::pid

void convertFromBus(gain_msgs::pid* msgPtr, SL_Bus_fuzzy_logic_system_gain_msgs_pid const* busPtr)
{
  const std::string rosMessageType("gain_msgs/pid");

  msgPtr->kd_x =  busPtr->KdX;
  msgPtr->kd_y =  busPtr->KdY;
  msgPtr->kd_z =  busPtr->KdZ;
  msgPtr->ki_x =  busPtr->KiX;
  msgPtr->ki_y =  busPtr->KiY;
  msgPtr->ki_z =  busPtr->KiZ;
  msgPtr->kp_x =  busPtr->KpX;
  msgPtr->kp_y =  busPtr->KpY;
  msgPtr->kp_z =  busPtr->KpZ;
}

void convertToBus(SL_Bus_fuzzy_logic_system_gain_msgs_pid* busPtr, gain_msgs::pid const* msgPtr)
{
  const std::string rosMessageType("gain_msgs/pid");

  busPtr->KdX =  msgPtr->kd_x;
  busPtr->KdY =  msgPtr->kd_y;
  busPtr->KdZ =  msgPtr->kd_z;
  busPtr->KiX =  msgPtr->ki_x;
  busPtr->KiY =  msgPtr->ki_y;
  busPtr->KiZ =  msgPtr->ki_z;
  busPtr->KpX =  msgPtr->kp_x;
  busPtr->KpY =  msgPtr->kp_y;
  busPtr->KpZ =  msgPtr->kp_z;
}

