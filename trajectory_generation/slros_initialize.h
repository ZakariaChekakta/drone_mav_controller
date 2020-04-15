#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block Trajectory_generation/Subsystem/Subscribe
extern SimulinkSubscriber<error_msgs::Error, SL_Bus_Trajectory_generation_error_msgs_Error> Sub_Trajectory_generation_728;

// For Block Trajectory_generation/Subsystem/Subscribe1
extern SimulinkSubscriber<mav_msgs::RollPitchYawrateThrust, SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk> Sub_Trajectory_generation_729;

// For Block Trajectory_generation/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_Trajectory_generation_desired_msgs_Desired> Pub_Trajectory_generation_157;

// For Block Trajectory_generation/Subsystem/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_Trajectory_generation_std_msgs_Float64> Pub_Trajectory_generation_726;

// For Block Trajectory_generation/Subsystem/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_Trajectory_generation_std_msgs_Float64> Pub_Trajectory_generation_727;

void slros_node_init(int argc, char** argv);

#endif
