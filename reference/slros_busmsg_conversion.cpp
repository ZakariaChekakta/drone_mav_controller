#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_Reference_desired_msgs_Desired and desired_msgs::Desired

void convertFromBus(desired_msgs::Desired* msgPtr, SL_Bus_Reference_desired_msgs_Desired const* busPtr)
{
  const std::string rosMessageType("desired_msgs/Desired");

  convertFromBus(&msgPtr->acceleration_desired, &busPtr->AccelerationDesired);
  convertFromBus(&msgPtr->position_desired, &busPtr->PositionDesired);
  convertFromBus(&msgPtr->velocite_desired, &busPtr->VelociteDesired);
}

void convertToBus(SL_Bus_Reference_desired_msgs_Desired* busPtr, desired_msgs::Desired const* msgPtr)
{
  const std::string rosMessageType("desired_msgs/Desired");

  convertToBus(&busPtr->AccelerationDesired, &msgPtr->acceleration_desired);
  convertToBus(&busPtr->PositionDesired, &msgPtr->position_desired);
  convertToBus(&busPtr->VelociteDesired, &msgPtr->velocite_desired);
}


// Conversions between SL_Bus_Reference_geometry_msgs_Accel and geometry_msgs::Accel

void convertFromBus(geometry_msgs::Accel* msgPtr, SL_Bus_Reference_geometry_msgs_Accel const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Accel");

  convertFromBus(&msgPtr->angular, &busPtr->Angular);
  convertFromBus(&msgPtr->linear, &busPtr->Linear);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Accel* busPtr, geometry_msgs::Accel const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Accel");

  convertToBus(&busPtr->Angular, &msgPtr->angular);
  convertToBus(&busPtr->Linear, &msgPtr->linear);
}


// Conversions between SL_Bus_Reference_geometry_msgs_AccelStamped and geometry_msgs::AccelStamped

void convertFromBus(geometry_msgs::AccelStamped* msgPtr, SL_Bus_Reference_geometry_msgs_AccelStamped const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/AccelStamped");

  convertFromBus(&msgPtr->accel, &busPtr->Accel);
  convertFromBus(&msgPtr->header, &busPtr->Header);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_AccelStamped* busPtr, geometry_msgs::AccelStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/AccelStamped");

  convertToBus(&busPtr->Accel, &msgPtr->accel);
  convertToBus(&busPtr->Header, &msgPtr->header);
}


// Conversions between SL_Bus_Reference_geometry_msgs_Point and geometry_msgs::Point

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_Reference_geometry_msgs_Point const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_Reference_geometry_msgs_Pose and geometry_msgs::Pose

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_Reference_geometry_msgs_Pose const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(&msgPtr->orientation, &busPtr->Orientation);
  convertFromBus(&msgPtr->position, &busPtr->Position);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->Orientation, &msgPtr->orientation);
  convertToBus(&busPtr->Position, &msgPtr->position);
}


// Conversions between SL_Bus_Reference_geometry_msgs_PoseStamped and geometry_msgs::PoseStamped

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_Reference_geometry_msgs_PoseStamped const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->pose, &busPtr->Pose);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_PoseStamped* busPtr, geometry_msgs::PoseStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Pose, &msgPtr->pose);
}


// Conversions between SL_Bus_Reference_geometry_msgs_Quaternion and geometry_msgs::Quaternion

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_Reference_geometry_msgs_Quaternion const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr->w =  busPtr->W;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->W =  msgPtr->w;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_Reference_geometry_msgs_Twist and geometry_msgs::Twist

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_Reference_geometry_msgs_Twist const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertFromBus(&msgPtr->angular, &busPtr->Angular);
  convertFromBus(&msgPtr->linear, &busPtr->Linear);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertToBus(&busPtr->Angular, &msgPtr->angular);
  convertToBus(&busPtr->Linear, &msgPtr->linear);
}


// Conversions between SL_Bus_Reference_geometry_msgs_TwistStamped and geometry_msgs::TwistStamped

void convertFromBus(geometry_msgs::TwistStamped* msgPtr, SL_Bus_Reference_geometry_msgs_TwistStamped const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistStamped");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->twist, &busPtr->Twist);
}

void convertToBus(SL_Bus_Reference_geometry_msgs_TwistStamped* busPtr, geometry_msgs::TwistStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistStamped");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Twist, &msgPtr->twist);
}


// Conversions between SL_Bus_Reference_geometry_msgs_Vector3 and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_Reference_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_Reference_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_Reference_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_Reference_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_Reference_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_Reference_rosgraph_msgs_Clock and rosgraph_msgs::Clock

void convertFromBus(rosgraph_msgs::Clock* msgPtr, SL_Bus_Reference_rosgraph_msgs_Clock const* busPtr)
{
  const std::string rosMessageType("rosgraph_msgs/Clock");

  convertFromBus(&msgPtr->clock, &busPtr->Clock_);
}

void convertToBus(SL_Bus_Reference_rosgraph_msgs_Clock* busPtr, rosgraph_msgs::Clock const* msgPtr)
{
  const std::string rosMessageType("rosgraph_msgs/Clock");

  convertToBus(&busPtr->Clock_, &msgPtr->clock);
}


// Conversions between SL_Bus_Reference_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_Reference_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_Reference_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

