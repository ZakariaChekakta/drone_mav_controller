/*
 * control.cpp
 *
 *  Created on: Dec 1, 2018
 *      Author: zakaria
 */

#include "m_uav_controller/control.h"

namespace Controller {




control::control(ros::NodeHandle& nh):
nh_(nh),reconfigure_server()
{
      sub_= nh.subscribe("/hummingbird/ground_truth/odometry", 1,&Controller::control::Callback,this);
      sub_reference=nh.subscribe("/reference/desired",1,&Controller::control::RefeCallback,this);
      pub_=nh.advertise<mav_msgs::RollPitchYawrateThrust>("/hummingbird/command/roll_pitch_yawrate_thrust",1);
      reconfigure_server.setCallback(boost::bind(&control::onConfig, this, _1, _2));
}

control::~control() {

}

void control::onConfig(m_uav_controller::paramConfig& cfg, uint32_t level)
{
  current_cfg = cfg;
  setPidParameters(cfg);
}

void control::setPidParameters(m_uav_controller::paramConfig &config)
  {


    pid_x.c_proportional=pid_y.c_proportional=config.c_prop_trans;
    pid_x.c_integral=pid_y.c_integral=config.c_int_trans;
    pid_x.c_derivative=pid_y.c_derivative=config.c_deriv_trans;

    pid_z.c_proportional=config.c_prop_alt;
    pid_z.c_integral=config.c_int_alt;
    pid_z.c_derivative=config.c_deriv_alt;


  }

void control::RefeCallback(const geometry_msgs::PoseStamped::ConstPtr& ref){
  reference=*ref;
}

void control::Callback(const nav_msgs::Odometry::ConstPtr& msg){

double error_x=reference.pose.position.x-msg->pose.pose.position.x;
double derror_x=0-msg->twist.twist.linear.x;

double error_y=reference.pose.position.y-msg->pose.pose.position.y;
double derror_y=0-msg->twist.twist.linear.y;

double error_z=reference.pose.position.z-msg->pose.pose.position.z;
double derror_z=0-msg->twist.twist.linear.z;

double u_x=pid_x.getCommand(msg->header.stamp,error_x,derror_x);
double u_y=pid_y.getCommand(msg->header.stamp,error_y,derror_y);

command.roll=(u_x*cos(0)-u_y*sin(0))/9.81;
command.pitch=(u_x*sin(0)-u_y*cos(0))/9.81;
command.thrust.z=pid_z.getCommand(msg->header.stamp,error_z,derror_z);

pub_.publish(command);


}





}
