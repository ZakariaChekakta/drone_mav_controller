#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block Reference/Publish
extern SimulinkPublisher<desired_msgs::Desired, SL_Bus_Reference_desired_msgs_Desired> Pub_Reference_4;

// For Block Reference/Publish1
extern SimulinkPublisher<rosgraph_msgs::Clock, SL_Bus_Reference_rosgraph_msgs_Clock> Pub_Reference_81;

void slros_node_init(int argc, char** argv);

#endif
