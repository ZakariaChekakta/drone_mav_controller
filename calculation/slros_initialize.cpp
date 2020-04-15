#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "calculation";

// For Block calculation/Subscribe
SimulinkSubscriber<error_msgs::Error, SL_Bus_calculation_error_msgs_Error> Sub_calculation_4;

// For Block calculation/Subscribe1
SimulinkSubscriber<mav_msgs::RollPitchYawrateThrust, SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust> Sub_calculation_5;

// For Block calculation/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_calculation_std_msgs_Float64> Pub_calculation_22;

// For Block calculation/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_calculation_std_msgs_Float64> Pub_calculation_26;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

