/*
 * FuzzyPdController.cpp
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#include "fuzzy_pd_controller/FuzzyPdController.h"

namespace Controller {

Fuzzy_Pd_Controller::Fuzzy_Pd_Controller(ros::NodeHandle& nh)
  :nh_(nh)
  {

    sub_odometry= nh.subscribe("/ardrone/odometry", 1,&Fuzzy_Pd_Controller::Callback,this);
    sub_reference= nh.subscribe("/reference_desired", 1,&Fuzzy_Pd_Controller::refecallback,this);
    sub_gains= nh.subscribe("/gain", 1,&Fuzzy_Pd_Controller::GainsCallback,this);
    pub_command=nh.advertise<geometry_msgs::Twist>("/cmd_vel",1);
    pub_cmd=nh.advertise<geometry_msgs::Point>("/fpid_cmd",1);
    pub_error=nh.advertise<error_msgs::Error>("/error",1);
}

Fuzzy_Pd_Controller::~Fuzzy_Pd_Controller() {

}


void Fuzzy_Pd_Controller::refecallback(const desired_msgs::Desired::ConstPtr& ref)
{
  reference=*ref;
}

void Fuzzy_Pd_Controller::DisturbanceCallback(const  geometry_msgs::Point::ConstPtr& d)
{
disturbance_observer=*d;
}

void Fuzzy_Pd_Controller::GainsCallback(const gain_msgs::pid::ConstPtr& gains)
{
//pid_x.c_proportional=pid_y.c_proportional=1.1*gains->kp_x;
//pid_x.c_derivative=pid_y.c_derivative=1.8*gains->kd_x;
//pid_x.c_integral=pid_y.c_integral=0*gains->ki_x;

//pid_z.c_proportional=10*gains->kp_z;
//pid_z.c_derivative=4*gains->kd_z;
//pid_z.c_integral=4;

pid_z.c_proportional=1*gains->kp_z;
pid_z.c_derivative=1*gains->kd_z;
pid_z.c_integral=0;

pid_yaw.c_proportional=1*gains->kp_z;
pid_yaw.c_derivative=1*gains->kd_z;
pid_yaw.c_integral=0;

pid_roll.c_proportional=1*gains->kp_z;
pid_roll.c_derivative=1*gains->kd_z;
pid_roll.c_integral=0;

pid_pitch.c_proportional=1*gains->kp_z;
pid_pitch.c_derivative=1*gains->kd_z;
pid_pitch.c_integral=0;


}

void Fuzzy_Pd_Controller::Callback(const nav_msgs::Odometry::ConstPtr& msg)
{

//pid_x.c_proportional=pid_y.c_proportional=1.8;
//pid_x.c_derivative=pid_y.c_derivative=1.5;
//pid_x.c_integral=pid_y.c_integral=0;

//pid_z.c_proportional=3;
//pid_z.c_derivative=2.4;
//pid_z.c_integral=0.429779;

  tf::Quaternion q(
         msg->pose.pose.orientation.x,
         msg->pose.pose.orientation.y,
         msg->pose.pose.orientation.z,
         msg->pose.pose.orientation.w);
     tf::Matrix3x3 m(q);
     double roll, pitch, yaw;
    m.getRPY(roll, pitch, yaw);

      err.Error_position_x=reference.position_desired.pose.position.x-msg->pose.pose.position.x;
      err.Error_position_y=reference.position_desired.pose.position.y-msg->pose.pose.position.y;
      err.Error_position_z=1-msg->pose.pose.position.z;
      err.Error_velocite_x=reference.velocite_desired.twist.linear.x-msg->twist.twist.linear.x;
      err.Error_velocite_y=reference.velocite_desired.twist.linear.y-msg->twist.twist.linear.y;
      err.Error_velocite_z=0-msg->twist.twist.linear.z;

      er_pid.Error_position_x=msg->pose.pose.position.x-reference.position_desired.pose.position.x;
      er_pid.Error_position_y=msg->pose.pose.position.y-reference.position_desired.pose.position.y;
      er_pid.Error_position_z=msg->pose.pose.position.z-reference.position_desired.pose.position.z;
      er_pid.Error_velocite_x=msg->twist.twist.linear.x-reference.velocite_desired.twist.linear.x;
      er_pid.Error_velocite_y=msg->twist.twist.linear.y-reference.velocite_desired.twist.linear.y;
      er_pid.Error_velocite_z=msg->twist.twist.linear.z-reference.velocite_desired.twist.linear.z;
      pub_error.publish(er_pid);


 //double u_x=pid_x.getCommand(msg->header.stamp,err.Error_position_x,err.Error_velocite_x);
// double u_y=pid_y.getCommand(msg->header.stamp,err.Error_position_y,err.Error_velocite_y);
 double u_z=pid_z.getCommand(msg->header.stamp,err.Error_position_z,err.Error_velocite_z);
 double u_yaw=pid_yaw.getCommand(msg->header.stamp,0-yaw,0-msg->twist.twist.angular.z);
 double u_roll=pid_roll.getCommand(msg->header.stamp,0-roll,0-msg->twist.twist.angular.x);
 double u_pitch=pid_pitch.getCommand(msg->header.stamp,0-pitch,0-msg->twist.twist.angular.y);

   //   command.roll=(u_x*sin(0)-u_y*cos(0))/9.8;
   //   command.pitch=(u_x*cos(0)+u_y*sin(0))/9.8;
   //   command.thrust.z=0.716*(9.8+u_z);
  command.angular.x =0;
  command.angular.y =0;
  command.linear.z =u_z;
  command.angular.z =0;



 command.linear.z =std::min(command.linear.z,1.0);
 command.linear.z =std::max(command.linear.z,-1.0);




  //    command.roll=std::min(command.roll,0.4363);
 //     command.pitch=std::min(command.pitch,0.4363);
  //    command.thrust.z=std::min(command.thrust.z,20.0);
  //    command.roll=std::max(command.roll,-0.4363);
  //    command.pitch=std::max(command.pitch,-0.4363);
 //     command.thrust.z=std::max(command.thrust.z,0.0);

   // cmd.x=command.roll;
   // cmd.y=command.pitch;
   // cmd.z=command.thrust.z;
    pub_command.publish(command);
  //  pub_cmd.publish(cmd);

//ROS_INFO("kp_x %f",pid_x.c_proportional);
//ROS_INFO("kd_x %f",pid_x.c_derivative);

//ROS_INFO("ki_x %f",pid_x.c_integral);

}

}
