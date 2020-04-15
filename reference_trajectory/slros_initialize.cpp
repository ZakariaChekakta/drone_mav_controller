#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "reference_trajectory";

// For Block reference_trajectory/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_reference_trajectory_desired_msgs_Desired> Pub_reference_trajectory_9;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

