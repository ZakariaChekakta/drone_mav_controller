#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block traj/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_traj_desired_msgs_Desired> Pub_traj_9;

void slros_node_init(int argc, char** argv);

#endif
