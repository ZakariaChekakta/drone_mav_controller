#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_wind_geometry_msgs_Vector3 and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_wind_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_wind_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_wind_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_wind_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_wind_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_wind_rotors_comm_WindSpeed and rotors_comm::WindSpeed

void convertFromBus(rotors_comm::WindSpeed* msgPtr, SL_Bus_wind_rotors_comm_WindSpeed const* busPtr)
{
  const std::string rosMessageType("rotors_comm/WindSpeed");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->velocity, &busPtr->Velocity);
}

void convertToBus(SL_Bus_wind_rotors_comm_WindSpeed* busPtr, rotors_comm::WindSpeed const* msgPtr)
{
  const std::string rosMessageType("rotors_comm/WindSpeed");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Velocity, &msgPtr->velocity);
}


// Conversions between SL_Bus_wind_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_wind_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_wind_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

