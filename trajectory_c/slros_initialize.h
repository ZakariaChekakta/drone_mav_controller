#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block trajectory_c/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_trajectory_c_desired_msgs_Desired> Pub_trajectory_c_11;

void slros_node_init(int argc, char** argv);

#endif
