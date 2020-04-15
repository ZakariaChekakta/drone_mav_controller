#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block calculation/Subscribe
extern SimulinkSubscriber<error_msgs::Error, SL_Bus_calculation_error_msgs_Error> Sub_calculation_4;

// For Block calculation/Subscribe1
extern SimulinkSubscriber<mav_msgs::RollPitchYawrateThrust, SL_Bus_calculation_mav_msgs_RollPitchYawrateThrust> Sub_calculation_5;

// For Block calculation/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_calculation_std_msgs_Float64> Pub_calculation_22;

// For Block calculation/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_calculation_std_msgs_Float64> Pub_calculation_26;

void slros_node_init(int argc, char** argv);

#endif
