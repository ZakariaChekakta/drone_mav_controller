/*
 * control.h
 *
 *  Created on: Dec 1, 2018
 *      Author: zakaria
 */
#include "ros/ros.h"
#include "ros/time.h"
#include <iostream>
#include <stdio.h>
#include "geometry_msgs/PoseStamped.h"
#include "nav_msgs/Odometry.h"
#include "mav_msgs/RollPitchYawrateThrust.h"
#include "dynamic_reconfigure/server.h"
#include "m_uav_controller/paramConfig.h"


#ifndef SRC_CONTROL_H_
#define SRC_CONTROL_H_

namespace Controller {

class PidController
{
public:
  double c_proportional;
  double c_integral;
  double c_derivative;
PidController()
  {
    c_proportional = c_integral = c_derivative = 0;

  }

  double getCommand(const ros::Time& t, double error, double derror)
  {

    sum_error=sum_error+error*(t.sec-last_time.sec);
    last_time=t;

    return c_proportional*error+c_integral*sum_error+c_derivative*derror;}

private:
  double sum_error=0;
  ros::Time last_time;
};





class control {
 public:
  control(ros::NodeHandle& nh);
  ~control();

 void onConfig(m_uav_controller::paramConfig& cfg, uint32_t level);
 void setPidParameters(m_uav_controller::paramConfig &config);
 void Callback(const nav_msgs::Odometry::ConstPtr& msg);
 void RefeCallback(const geometry_msgs::PoseStamped::ConstPtr& msg);

 private:
  ros::NodeHandle nh_;
  ros::NodeHandle private_nh_;
  ros::Subscriber sub_;
  ros::Subscriber sub_reference;
  ros::Subscriber sub_state;
  ros::Publisher pub_;
  ros::Publisher pub_error;
  Controller::PidController pid_x,pid_y,pid_z,pid_yaw;


  geometry_msgs::PoseStamped reference;
  mav_msgs::RollPitchYawrateThrust command;


  dynamic_reconfigure::Server<m_uav_controller::paramConfig> reconfigure_server;
  m_uav_controller::paramConfig current_cfg;

};

}

#endif
