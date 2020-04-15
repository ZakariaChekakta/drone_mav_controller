#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "Trajectory_Desired";

// For Block Trajectory_Desired/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_Trajectory_Desired_desired_msgs_Desired> Pub_Trajectory_Desired_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

