/*
 * PDController.h
 *
 *  Created on: Mar 19, 2018
 *      Author: zakaria
 */

#ifndef INCLUDE_PD_CONTROLLER_PDCONTROLLER_H_
#define INCLUDE_PD_CONTROLLER_PDCONTROLLER_H_
#include "ros/ros.h"
#include "ros/time.h"
#include <iostream>
#include <stdio.h>
#include "std_msgs/Float64.h"
#include "std_msgs/Bool.h"
#include "std_msgs/String.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/PoseStamped.h"
#include "desired_msgs/Desired.h"
#include "error_msgs/Error.h"
#include "dynamic_reconfigure/server.h"
#include "pd_controller/my_paramConfig.h"
#include "ardrone_autonomy/Navdata.h"
#include "pd_controller/pid.h"



namespace Controller {








class PDController {
 public:
  PDController(ros::NodeHandle& nh);
  ~PDController();



  void onConfig(pd_controller::my_paramConfig& cfg, uint32_t level);
  void setPidParameters(pd_controller::my_paramConfig &config);
  void onTimerTick(const ros::TimerEvent& t);
  void calculateContolCommand(const ros::Time& t);
  void refecallback(const desired_msgs::Desired::ConstPtr& ref);
  void Callback(const  nav_msgs::Odometry::ConstPtr& msg);



 private:

 std_msgs::String  subscriber_topic_;
 ros::NodeHandle nh_;
 ros::NodeHandle private_nh_;
 ros::Subscriber sub_;
 ros::Subscriber sub_1;
 ros::Publisher pub_;
 ros::Publisher pub_error_;

 desired_msgs::Desired reference;


  double kp_x_;
  double kd_x_;
  double kp_y_;
  double kd_y_;
  double kp_z_;
  double kd_z_;


  error_msgs::Error err;
  error_msgs::Error last_error;
  geometry_msgs::Twist cmd;


  PidController pid_x,pid_y,pid_z;


  double last_time;

  double sum_error=0;

  dynamic_reconfigure::Server<pd_controller::my_paramConfig> reconfigure_server;
  pd_controller::my_paramConfig current_cfg;


void initializeParameters();


};


}

#endif
