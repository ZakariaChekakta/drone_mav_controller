/*
 * controller.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: Zakaria
 */

#include "ros/ros.h"
#include "ros/time.h"
#include <iostream>
#include <stdio.h>
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/PoseStamped.h"
#include "dynamic_reconfigure/server.h"
#include "ardrone_autonomy/Navdata.h"
#include "control/paramConfig.h"
#include "control/filter_state.h"

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




class Controller {

 private:

 ros::NodeHandle nh_;
 ros::Subscriber sub_;
 ros::Subscriber sub_reference;
 ros::Publisher pub_;
 geometry_msgs::Twist cmd;
 geometry_msgs::PoseStamped reference;
 PidController pid_x,pid_y,pid_z;

 dynamic_reconfigure::Server<control::paramConfig> reconfigure_server;
 control::paramConfig current_cfg;

 public:
  Controller(ros::NodeHandle& nh):nh_(nh)
 {  reconfigure_server.setCallback(boost::bind(&Controller::onConfig, this, _1, _2));

    sub_= nh.subscribe("/ground_truth/state", 1,&Controller::Callback,this);
    sub_reference=nh.subscribe("reference",1,&Controller::RefeCallback,this);
    pub_=nh.advertise<geometry_msgs::Twist>("/cmd_vel",1);
 }


  void onConfig(control::paramConfig& cfg, uint32_t level)
  {
    current_cfg = cfg;
    setPidParameters(cfg);
  }
  void setPidParameters(control::paramConfig &config)
    {
      pid_z.c_proportional=config.c_prop_alt;
      pid_z.c_integral=config.c_int_alt;
      pid_z.c_derivative=config.c_deriv_alt;

      pid_x.c_proportional = pid_y.c_proportional = config.c_prop_trans;
      pid_x.c_integral = pid_y.c_integral = config.c_int_trans;
      pid_x.c_derivative = pid_y.c_derivative = config.c_deriv_trans;

    }

  void RefeCallback(const geometry_msgs::PoseStamped::ConstPtr& ref){
   reference=*ref;
  }
void Callback(const  nav_msgs::Odometry::ConstPtr& msg){

  double error_x=reference.pose.position.x-msg->pose.pose.position.x;
  double derror_x=0-msg->twist.twist.linear.x;
  double error_y=reference.pose.position.y-msg->pose.pose.position.y;
  double derror_y=0-msg->twist.twist.linear.y;
  double error_z=reference.pose.position.z-msg->pose.pose.position.z;
  double derror_z=0-msg->twist.twist.linear.z;

 // cmd.linear.x=pid_x.getCommand(msg->header.stamp,error_x,derror_x);
 // cmd.linear.y=pid_y.getCommand(msg->header.stamp,error_y,derror_y);
  cmd.linear.z=pid_z.getCommand(msg->header.stamp,error_z,derror_z);

  pub_.publish(cmd);

  }


};



int main(int argc, char **argv)
{
  ros::init(argc, argv, "ardrone_controller");
  ros::NodeHandle nh;

  Controller controller(nh);

  ros::spin();

  return 0;
}


