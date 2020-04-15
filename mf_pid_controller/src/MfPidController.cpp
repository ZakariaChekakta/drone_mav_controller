/*
 * MfPidController.cpp
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#include "mf_pid_controller/MfPidController.h"


namespace Controller {

MfPidController::MfPidController(ros::NodeHandle& nh)
:nh_(nh)
{
  sub_reference= nh.subscribe("/reference_desired", 1,&MfPidController::refecallback,this);
  sub_odometry= nh.subscribe("/ardrone/odometry", 1,&MfPidController::Callback,this);
  sub_gains= nh.subscribe("/gain", 1,&MfPidController::GainsCallback,this);
  sub_acceleration= nh.subscribe("/ardrone/navdata", 1,&MfPidController::GetAcceleratin,this);
  //sub_input= nh.subscribe("/hummingbird/command/roll_pitch_yawrate_thrust", 1,&MfPidController::GetInput,this);
  //sub_traj=nh.subscribe("/command/trajectory", 1,&MfPidController::GetTrajectory,this);
  pub_command=nh.advertise<geometry_msgs::Twist>("/cmd_vel",1);
  //pub_cmd=nh.advertise<geometry_msgs::Point>("/fmfc_cmd",1);
  pub_error=nh.advertise<error_msgs::Error>("/error",1);
  //pub_er=nh.advertise<error_msgs::Error>("/fmfc_error",1);
  //pub_F=nh.advertise<geometry_msgs::Point>("/error_F_basic",1);
 // pub_gain=nh.advertise<gain_msgs::pid>("/gain_u",1);

  }


MfPidController::~MfPidController() {}







void MfPidController::refecallback(const desired_msgs::Desired::ConstPtr& ref)
{
 reference=*ref;
}

void MfPidController::GetTrajectory(const trajectory_msgs::MultiDOFJointTrajectory::ConstPtr& traj){
  trajectory=*traj;
}

void  MfPidController::GainsCallback(const gain_msgs::pid::ConstPtr& gains)
{
//pid_x.c_proportional=pid_y.c_proportional=0.6*gains->kp_x;
//pid_x.c_derivative=pid_y.c_derivative=1.6*gains->kd_x;
//pid_x.c_integral=pid_y.c_integral=0*gains->ki_x;

//pid_z.c_proportional=10*gains->kp_z;
//pid_z.c_derivative=4*gains->kd_z;
//pid_z.c_integral=0*gains->ki_z;

pid_z.c_proportional=30*gains->kp_z;
pid_z.c_derivative=5*gains->kd_z;
pid_z.c_integral=0*gains->ki_z;

g=*gains;
}

void MfPidController::GetAcceleratin(const ardrone_autonomy::Navdata::ConstPtr& accel){

 acceleration=*accel;

}
void MfPidController::GetInput(const mav_msgs::RollPitchYawrateThrust::ConstPtr& u){
input=*u;
}

void MfPidController::Callback(const nav_msgs::Odometry::ConstPtr& msg)
{

  state=*msg;
geometry_msgs::Point F;
double u_x,u_y,u_z,u_yaw,u_last_x,u_last_y,u_last_z,u_last_yaw;
//pid_x.c_proportional=pid_y.c_proportional=0.65;
//pid_x.c_derivative=pid_y.c_derivative=1.3;
//pid_x.c_integral=pid_y.c_integral=0.000;

//pid_z.c_proportional=8.305448;
//pid_z.c_derivative=4.636124;
//pid_z.c_integral=0;




  //tf::Quaternion q(
    //     msg->pose.pose.orientation.x,
     //    msg->pose.pose.orientation.y,
     //    msg->pose.pose.orientation.z,
     //    msg->pose.pose.orientation.w);
    // tf::Matrix3x3 m(q);
    // double roll, pitch, yaw;
   // m.getRPY(roll, pitch, yaw);

        err.Error_position_x=state.pose.pose.position.x-reference.position_desired.pose.position.x;
        err.Error_position_y=state.pose.pose.position.y-reference.position_desired.pose.position.y;
        err.Error_position_z=state.pose.pose.position.z-1;
        err.Error_velocite_x=state.twist.twist.linear.x-reference.velocite_desired.twist.linear.x;
        err.Error_velocite_y=state.twist.twist.linear.y-reference.velocite_desired.twist.linear.y;
        err.Error_velocite_z=state.twist.twist.linear.z-0;

         pub_error.publish(err);

        double u_pid_z=pid_z.getCommand(msg->header.stamp,err.Error_position_z,err.Error_velocite_z);
        double u_pid_x=pid_x.getCommand(msg->header.stamp,err.Error_position_x,err.Error_velocite_x);
        double u_pid_y=pid_y.getCommand(msg->header.stamp,err.Error_position_y,err.Error_velocite_y);

//         double u_pid_yaw=pid_yaw.getCommand(msg->header.stamp,state.yaw-0,state.dyaw-0);

       //  double F_yaw=state.dyaw-30*u_last_yaw;

         double F_z=state.twist.twist.linear.z-40*u_last_z;
      //  double F_x=acceleration.linear_acceleration.x-1*u_last_x;
     //    double F_y=acceleration.linear_acceleration.y-1*u_last_y;


         //u_yaw=(0-F_yaw-u_pid_yaw)/30;
        u_z=(0-F_z-u_pid_z)/30;


     //   u_x=(reference.acceleration_desired.accel.linear.x-F_x-u_pid_x)/1;
     //   u_y=(reference.acceleration_desired.accel.linear.y-F_y-u_pid_y)/1;

         command.linear.x =0;
         command.linear.y =0;
         command.linear.z =u_z;
         command.angular.z =0;

         command.linear.z =std::min(command.linear.z,1.0);
         command.linear.z =std::max(command.linear.z,-1.0);

         u_last_z=command.linear.z;
         u_last_x=command.linear.x;
         u_last_y=command.linear.y;
         //   command.roll=(u_x*sin(0)-u_y*cos(0))/9.8;
     //   command.pitch=(u_x*cos(0)+u_y*sin(0))/9.8;
     ///   command.yaw_rate=u_pid_yaw;
     //   command.thrust.z=u_z;

    //          command.roll=std::min(command.roll,0.4363);
    //          command.pitch=std::min(command.pitch,0.4363);
     //         command.thrust.z=std::min(command.thrust.z,20.0);
     //         command.roll=std::max(command.roll,-0.4363);
   //         command.pitch=std::max(command.pitch,-0.4363);
     //         command.thrust.z=std::max(command.thrust.z,0.0);

//          ROS_INFO("kp_x %f",pid_x.c_proportional);
//          ROS_INFO("kd_x %f",pid_x.c_derivative);
    //          ROS_INFO("ki_x %f",pid_x.c_integral);


  //            cmd.x=command.roll;
 //             cmd.y=command.pitch;
 //             cmd.z=command.thrust.z;
//
  //    F.x=acceleration.linear_acceleration.x-reference.acceleration_desired.accel.linear.x+u_pid_x;
 //     F.y=acceleration.linear_acceleration.y-reference.acceleration_desired.accel.linear.y+u_pid_y;
 //     F.z=acceleration.linear_acceleration.z-(9.8+reference.acceleration_desired.accel.linear.z)+u_pid_z;

 //     pub_F.publish(F);
      //   ROS_INFO("yaw %f",yaw);
  //    u_last_x=u_x;
   //   u_last_y=u_y;
   //      last_command=command;

       //  pub_er.publish(err);
         pub_command.publish(command);
       //  pub_cmd.publish(cmd);
       //  pub_gain.publish(g);




}


}
