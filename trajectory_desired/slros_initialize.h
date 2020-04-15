#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block Trajectory_Desired/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_Trajectory_Desired_desired_msgs_Desired> Pub_Trajectory_Desired_4;

void slros_node_init(int argc, char** argv);

#endif
