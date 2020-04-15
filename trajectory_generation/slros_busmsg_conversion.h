#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <desired_msgs/Desired.h>
#include <error_msgs/Error.h>
#include <geometry_msgs/Accel.h>
#include <geometry_msgs/AccelStamped.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistStamped.h>
#include <geometry_msgs/Vector3.h>
#include <mav_msgs/RollPitchYawrateThrust.h>
#include <ros/time.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include "Trajectory_generation_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(desired_msgs::Desired* msgPtr, SL_Bus_Trajectory_generation_desired_msgs_Desired const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_desired_msgs_Desired* busPtr, desired_msgs::Desired const* msgPtr);

void convertFromBus(error_msgs::Error* msgPtr, SL_Bus_Trajectory_generation_error_msgs_Error const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_error_msgs_Error* busPtr, error_msgs::Error const* msgPtr);

void convertFromBus(geometry_msgs::Accel* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Accel const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Accel* busPtr, geometry_msgs::Accel const* msgPtr);

void convertFromBus(geometry_msgs::AccelStamped* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_AccelStamped* busPtr, geometry_msgs::AccelStamped const* msgPtr);

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Pose const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_PoseStamped* busPtr, geometry_msgs::PoseStamped const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Quaternion const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::TwistStamped* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_TwistStamped* busPtr, geometry_msgs::TwistStamped const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_Trajectory_generation_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(mav_msgs::RollPitchYawrateThrust* msgPtr, SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk* busPtr, mav_msgs::RollPitchYawrateThrust const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_Trajectory_generation_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_Trajectory_generation_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_Trajectory_generation_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_Trajectory_generation_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
