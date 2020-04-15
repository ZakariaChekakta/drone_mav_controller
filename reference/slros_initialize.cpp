#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "Reference";

// For Block Reference/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_Reference_desired_msgs_Desired> Pub_Reference_4;

// For Block Reference/Publish1
SimulinkPublisher<rosgraph_msgs::Clock, SL_Bus_Reference_rosgraph_msgs_Clock> Pub_Reference_81;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

