#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "traj";

// For Block traj/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_traj_desired_msgs_Desired> Pub_traj_9;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

