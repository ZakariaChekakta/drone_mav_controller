#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "square_trajectory";

// For Block square_trajectory/Publish
SimulinkPublisher<desired_msgs::Desired, SL_Bus_square_trajectory_desired_msgs_Desired> Pub_square_trajectory_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

