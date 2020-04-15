/*
 * controller.h
 *
 *  Created on: Nov 7, 2018
 *      Author: Zakaria
 */

#ifndef INCLUDE_CONTROL_CONTROLLER_H_
#define INCLUDE_CONTROL_CONTROLLER_H_
#include "ros/ros.h"
#include "ros/time.h"
#include <iostream>
#include <stdio.h>
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/PoseStamped.h"
#include "dynamic_reconfigure/server.h"
#include "ardrone_autonomy/Navdata.h"

namespace CONTROLLER {

class Controller {
 public:
  Controller(ros::NodeHandle& nh);
  ~Controller();

  void Callback(const  nav_msgs::Odometry::ConstPtr& msg);



 private:

 ros::NodeHandle nh_;
 ros::Subscriber sub_;
 ros::Publisher pub_;
 geometry_msgs::Twist cmd;

};


}



#endif /* INCLUDE_CONTROL_CONTROLLER_H_ */
