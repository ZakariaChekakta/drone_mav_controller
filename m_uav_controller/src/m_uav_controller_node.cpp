/*
 * m_uav_controller_node.cpp
 *
 *  Created on: Dec 1, 2018
 *      Author: zakaria
 */


#include "m_uav_controller/control.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "m_uav__controller");
  ros::NodeHandle nodeHandle("~");

  Controller::control zaki(nodeHandle);
  ros::spin();

  return 0;
}

