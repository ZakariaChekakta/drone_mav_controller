#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "trajectory_c";

// For Block trajectory_c/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_trajectory_c_desired_msgs_Desired> Pub_trajectory_c_11;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

