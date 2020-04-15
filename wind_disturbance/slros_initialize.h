#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block wind_disturbance/Publish
extern SimulinkPublisher<rotors_comm::WindSpeed, SL_Bus_wind_disturbance_rotors_comm_WindSpeed> Pub_wind_disturbance_3;

void slros_node_init(int argc, char** argv);

#endif
