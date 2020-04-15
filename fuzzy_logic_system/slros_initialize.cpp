#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "fuzzy_logic_system";

// For Block fuzzy_logic_system/Subscribe
SimulinkSubscriber<error_msgs::Error, SL_Bus_fuzzy_logic_system_error_msgs_Error> Sub_fuzzy_logic_system_189;

// For Block fuzzy_logic_system/Publish
SimulinkPublisher<gain_msgs::pid, SL_Bus_fuzzy_logic_system_gain_msgs_pid> Pub_fuzzy_logic_system_115;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

