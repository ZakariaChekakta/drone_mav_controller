#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <error_msgs/Error.h>
#include <gain_msgs/pid.h>
#include "fuzzy_logic_system_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(error_msgs::Error* msgPtr, SL_Bus_fuzzy_logic_system_error_msgs_Error const* busPtr);
void convertToBus(SL_Bus_fuzzy_logic_system_error_msgs_Error* busPtr, error_msgs::Error const* msgPtr);

void convertFromBus(gain_msgs::pid* msgPtr, SL_Bus_fuzzy_logic_system_gain_msgs_pid const* busPtr);
void convertToBus(SL_Bus_fuzzy_logic_system_gain_msgs_pid* busPtr, gain_msgs::pid const* msgPtr);


#endif
