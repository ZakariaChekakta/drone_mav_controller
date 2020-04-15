/*
 * pd_controller.cpp
 *
 *  Created on: Mar 19, 2018
 *      Author: zakaria
 */

#include "ros/ros.h"

#include "pd_controller/PDController.h"





int main(int argc,char** argv)
{
ros::init(argc,argv,"pd_controller");
ros::NodeHandle nodeHandle("~");


Controller::PDController zaki(nodeHandle);

ros::Timer timer = nodeHandle.createTimer(ros::Duration(0.02), boost::bind(&Controller::PDController::onTimerTick, &zaki, _1));
  ros::spin();



return 0;
}



