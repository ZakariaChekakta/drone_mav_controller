/*
 * fuzzy_pd_controller_node.cpp
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#include "ros/ros.h"
#include "fuzzy_pd_controller/FuzzyPdController.h"


int main(int argc,char** argv)
{
ros::init(argc,argv,"fuzzy_pd_controller");
ros::NodeHandle nodeHandle("~");

Controller::Fuzzy_Pd_Controller zaki(nodeHandle);

ros::spin();
return 0;
}






