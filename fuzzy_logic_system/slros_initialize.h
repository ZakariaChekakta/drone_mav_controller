#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block fuzzy_logic_system/Subscribe
extern SimulinkSubscriber<error_msgs::Error, SL_Bus_fuzzy_logic_system_error_msgs_Error> Sub_fuzzy_logic_system_189;

// For Block fuzzy_logic_system/Publish
extern SimulinkPublisher<gain_msgs::pid, SL_Bus_fuzzy_logic_system_gain_msgs_pid> Pub_fuzzy_logic_system_115;

void slros_node_init(int argc, char** argv);

#endif
