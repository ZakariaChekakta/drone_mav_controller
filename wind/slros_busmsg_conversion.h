#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Vector3.h>
#include <ros/time.h>
#include <rotors_comm/WindSpeed.h>
#include <std_msgs/Header.h>
#include "wind_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_wind_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_wind_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_wind_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_wind_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(rotors_comm::WindSpeed* msgPtr, SL_Bus_wind_rotors_comm_WindSpeed const* busPtr);
void convertToBus(SL_Bus_wind_rotors_comm_WindSpeed* busPtr, rotors_comm::WindSpeed const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_wind_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_wind_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
