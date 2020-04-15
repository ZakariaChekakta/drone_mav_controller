#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block reference_trajectory/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_reference_trajectory_desired_msgs_Desired> Pub_reference_trajectory_9;

void slros_node_init(int argc, char** argv);

#endif
