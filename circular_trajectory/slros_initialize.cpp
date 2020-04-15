#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "circular_trajectory";

// For Block circular_trajectory/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_circular_trajectory_desired_msgs_Desired> Pub_circular_trajectory_9;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

