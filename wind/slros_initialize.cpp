#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "wind";

// For Block wind/Publish
SimulinkPublisher<rotors_comm::WindSpeed, SL_Bus_wind_rotors_comm_WindSpeed> Pub_wind_5;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

