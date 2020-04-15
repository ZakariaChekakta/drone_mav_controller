#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "wind_disturbance";

// For Block wind_disturbance/Publish
SimulinkPublisher<rotors_comm::WindSpeed, SL_Bus_wind_disturbance_rotors_comm_WindSpeed> Pub_wind_disturbance_3;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

