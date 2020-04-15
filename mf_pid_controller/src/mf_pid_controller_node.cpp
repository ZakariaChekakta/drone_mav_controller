/*
 * mf_pid_controller_node.cpp
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#include "ros/ros.h"
#include "mf_pid_controller/MfPidController.h"



int main(int argc,char** argv)
{
ros::init(argc,argv,"mf_pid_controller");
ros::NodeHandle nodeHandle("~");

Controller::MfPidController zaki(nodeHandle);

//ros::Timer timer = nodeHandle.createTimer(ros::Duration(0.02), boost::bind(&MfPidController::Callback, &zaki, _1));



ros::spin();
return 0;
}



