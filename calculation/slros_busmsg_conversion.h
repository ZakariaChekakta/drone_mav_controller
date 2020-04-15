#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <error_msgs/Error.h>
#include <geometry_msgs/Vector3.h>
#include <mav_msgs/RollPitchYawrateThrust.h>
#include <ros/time.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include "calculation_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(error_msgs::Error* msgPtr, SL_Bus_calculation_error_msgs_Error const* busPtr);
void convertToBus(SL_Bus_calculation_error_msgs_Error* busPtr, error_msgs::Error const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_calculation_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_calculation_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(mav_msgs::RollPitchYawrateThrust* msgPtr, SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust const* busPtr);
void convertToBus(SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust* busPtr, mav_msgs::RollPitchYawrateThrust const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_calculation_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_calculation_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_calculation_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_calculation_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_calculation_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_calculation_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
