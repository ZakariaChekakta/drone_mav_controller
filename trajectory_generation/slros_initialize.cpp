#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "Trajectory_generation";

// For Block Trajectory_generation/Subsystem/Subscribe
SimulinkSubscriber<error_msgs::Error, SL_Bus_Trajectory_generation_error_msgs_Error> Sub_Trajectory_generation_728;

// For Block Trajectory_generation/Subsystem/Subscribe1
SimulinkSubscriber<mav_msgs::RollPitchYawrateThrust, SL_Bus_Trajectory_generation_RollPitchYawrateThrust_uvfprk> Sub_Trajectory_generation_729;

// For Block Trajectory_generation/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_Trajectory_generation_desired_msgs_Desired> Pub_Trajectory_generation_157;

// For Block Trajectory_generation/Subsystem/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_Trajectory_generation_std_msgs_Float64> Pub_Trajectory_generation_726;

// For Block Trajectory_generation/Subsystem/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_Trajectory_generation_std_msgs_Float64> Pub_Trajectory_generation_727;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

