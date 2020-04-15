/*
 * PDController.cpp
 *
 *  Created on: Mar 19, 2018
 *      Author:Zakaria
 */

#include "pd_controller/PDController.h"

namespace Controller {

PDController::PDController(ros::NodeHandle& nh)
:nh_(nh),
kp_x_(0),kd_x_(0),kp_y_(0),kd_y_(0),kp_z_(0),kd_z_(0),reconfigure_server()
{
  sub_1= nh.subscribe("/reference_desired", 1,&PDController::refecallback,this);
  sub_= nh.subscribe("/ground_truth/state", 1,&PDController::Callback,this);
  pub_=nh.advertise<geometry_msgs::Twist>("/cmd_vel",1);
  pub_error_=nh.advertise<error_msgs::Error>("/error",1);
  reconfigure_server.setCallback(boost::bind(&PDController::onConfig, this, _1, _2));

 initializeParameters();

}

PDController::~PDController()
{
}

void PDController::onConfig(pd_controller::my_paramConfig& cfg, uint32_t level)
{
  current_cfg = cfg;
  setPidParameters(cfg);
}

void PDController::setPidParameters(pd_controller::my_paramConfig &config)
  {


    pid_x.c_proportional=pid_y.c_proportional=config.c_prop_trans;
    pid_x.c_integral=pid_y.c_integral=config.c_int_trans;
    pid_x.c_derivative=pid_y.c_derivative=config.c_deriv_trans;
    pid_z.c_proportional=config.c_prop_alt;
    pid_z.c_integral=config.c_int_alt;
    pid_z.c_derivative=config.c_deriv_alt;


  }

void PDController::initializeParameters()
{

  if (!private_nh_.getParam("/pd_controller/kp_x", kp_x_)) {
        ROS_ERROR("kp_x gain is not loaded from ros parameter server");
        }
  if (!private_nh_.getParam("/pd_controller/kd_x", kd_x_)) {
          ROS_ERROR("kd_x gain is not loaded from ros parameter server");
          }
  if (!private_nh_.getParam("/pd_controller/kp_y", kp_y_)) {
          ROS_ERROR("kp_y gain is not loaded from ros parameter server");
          }
  if (!private_nh_.getParam("/pd_controller/kd_y", kd_y_)) {
          ROS_ERROR("kd_y gain  is not loaded from ros parameter server");
          }
  if (!private_nh_.getParam("/pd_controller/kp_z", kp_z_)) {
          ROS_ERROR("kp_z gain  is not loaded from ros parameter server");
          }
  if (!private_nh_.getParam("/pd_controller/kd_z", kp_z_)) {
          ROS_ERROR("kp_z gain is not loaded from ros parameter server");
          }
}
void PDController::refecallback(const desired_msgs::Desired::ConstPtr& ref)
{
   reference.position_desired.pose.position.x=ref->position_desired.pose.position.x;
   reference.position_desired.pose.position.y=ref->position_desired.pose.position.y;
   reference.position_desired.pose.position.z=ref->position_desired.pose.position.z;
   reference.velocite_desired.twist.linear.x=ref->velocite_desired.twist.linear.x;
   reference.velocite_desired.twist.linear.y=ref->velocite_desired.twist.linear.y;
   reference.velocite_desired.twist.linear.z=ref->velocite_desired.twist.linear.z;
   reference.acceleration_desired.accel.linear.x=ref->acceleration_desired.accel.linear.x;
   reference.acceleration_desired.accel.linear.y=ref->acceleration_desired.accel.linear.y;
   reference.acceleration_desired.accel.linear.z=ref->acceleration_desired.accel.linear.z;
}

void PDController::Callback(const nav_msgs::Odometry::ConstPtr& msg)
{
err.Error_position_x=reference.position_desired.pose.position.x-msg->pose.pose.position.x;
err.Error_velocite_x=reference.velocite_desired.twist.linear.x-msg->twist.twist.linear.x;
err.Error_position_y=reference.position_desired.pose.position.y-msg->pose.pose.position.y;
err.Error_velocite_y=reference.velocite_desired.twist.linear.y-msg->twist.twist.linear.y;
err.Error_position_z=reference.position_desired.pose.position.z-msg->pose.pose.position.z;
err.Error_velocite_z=reference.velocite_desired.twist.linear.z-msg->twist.twist.linear.z;
}

void PDController::onTimerTick(const ros::TimerEvent& e)
  {
    calculateContolCommand(e.current_real);

   //if(enabled)
      pub_.publish(cmd);

    //sendCmdMarker(e.current_real);
  }

void PDController::calculateContolCommand(const ros::Time& t)
  {

double u_x=pid_x.getCommand(t,err.Error_position_x,err.Error_velocite_x);
double u_y=pid_y.getCommand(t,err.Error_position_y,err.Error_velocite_y);
double u_z=pid_z.getCommand(t,err.Error_position_z,err.Error_velocite_z);

if (u_x>=1)  u_x=1;
 else if (u_x<=-1)  u_x=-1;
if (u_y>=1)  u_y=1;
 else if (u_y<=-1)  u_y=-1;
if (u_z>=1)  u_z=1;
 else if (u_z<=-1)  u_z=-1;

cmd.linear.x=u_x;
cmd.linear.y=u_y;
cmd.linear.z=u_z;

  }


}
