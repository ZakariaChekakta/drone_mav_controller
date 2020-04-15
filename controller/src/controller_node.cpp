/*
 * controller_node.cpp
 *
 *  Created on: Oct 24, 2018
 *      Author: zakaria
 */

#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/Twist.h>
#include <visualization_msgs/Marker.h>
#include <controller/State.h>
#include "nav_msgs/Odometry.h"
#include <controller/paramConfig.h>

class PidController
{
public:
  double c_proportional;
  double c_integral;
  double c_derivative;



  PidController()

  {
    c_proportional = c_integral = c_derivative = 0;
    reset();
  }

  double getCommand(const ros::Time& t, double error)
  {

    double derror = 0;


       return getCommand(t, error, derror);
  }

  double getCommand(const ros::Time& t, double error, double derror)
  {



    return c_proportional*error;}

  // resets the internal state
  void reset()
  { }
private:


};






class ArdroneController
{
private:
  ros::NodeHandle& nh;
  ros::Subscriber sub_pose, sub_enabled;
  ros::Publisher pub_vel;
  ros::Publisher pub_cmd_marker;

  dynamic_reconfigure::Server<controller::paramConfig> reconfigure_server;
  controller::paramConfig current_cfg;

  geometry_msgs::Twist cmd;
  nav_msgs::Odometry  state;

  std_msgs::Float64 derror;
  std_msgs::Float64 integral_error;

  PidController pid_x, pid_y,pid_z, pid_yaw;

  bool enabled;
  double goal_x, goal_y, goal_z, goal_yaw;

public:
  ArdroneController(ros::NodeHandle& nh) :
      nh(nh),
      reconfigure_server(),
      enabled(false)
  {
    pub_vel = nh.advertise<geometry_msgs::Twist>("/cmd_vel", 1);

    pub_cmd_marker = nh.advertise<visualization_msgs::Marker>("visualization_marker", 10);

    reconfigure_server.setCallback(boost::bind(&ArdroneController::onConfig, this, _1, _2));

    cmd.linear.x = cmd.linear.y = cmd.linear.z = 0;
    cmd.angular.x =cmd.angular.y = cmd.angular.z = 0;
    setGoalPose(0, 0, 2,0);

    sub_enabled = nh.subscribe<std_msgs::Bool>("/ardrone/enable_controller", 1, boost::bind(&ArdroneController::onEnableController, this, _1));
    sub_pose = nh.subscribe<nav_msgs::Odometry>("/ground_truth/state", 1, boost::bind(&ArdroneController::onFilteredPose, this, _1));
  }

  void onFilteredPose(const nav_msgs::Odometry::ConstPtr& pose_msg)
    {
      state = *pose_msg;
    }


 void setPidParameters(controller::paramConfig &config)
  {
    pid_z.c_proportional=config.c_prop_alt;
    pid_z.c_integral=config.c_int_alt;
    pid_z.c_derivative=config.c_deriv_alt;

    pid_x.c_proportional = pid_y.c_proportional = config.c_prop_trans;
    pid_x.c_integral = pid_y.c_integral = config.c_int_trans;
    pid_x.c_derivative = pid_y.c_derivative = config.c_deriv_trans;

    pid_yaw.c_proportional = config.c_prop_yaw;
    pid_yaw.c_integral = config.c_int_yaw;
    pid_yaw.c_derivative = config.c_deriv_yaw;
  }

  void setGoalPose(double x, double y, double z, double yaw)
  {
    goal_x = x;
    goal_y = y;
    goal_z = z;
    goal_yaw = yaw;
  }

  void setEnabled(bool v)
  {
    enabled = v;

    if(!enabled)
    {
      pid_x.reset();
      pid_yaw.reset();
    }
  }

  void onTimerTick(const ros::TimerEvent& e)
  {
    calculateContolCommand(e.current_real);

    if(enabled)
      pub_vel.publish(cmd);

    //sendCmdMarker(e.current_real);
  }

  void onConfig(controller::paramConfig& cfg, uint32_t level)
  {
    current_cfg = cfg;
    setEnabled(cfg.enable);
    setPidParameters(cfg);
  }

  void onEnableController(const std_msgs::Bool::ConstPtr& msg)
  {
    setEnabled(msg->data);
    current_cfg.enable = msg->data;
    reconfigure_server.updateConfig(current_cfg);
  }



  // control in xy and yaw
  void calculateContolCommand(const ros::Time& t)
  {//resets the internal state
    // TODO: implement error computation and calls to pid controllers to get the commands

    double error_x;
    double error_y;
    double error_z;
    double error_yaw;

    error_x=state.pose.pose.position.x-goal_x;
    error_y=state.pose.pose.position.y-goal_y;
    error_z=state.pose.pose.position.z-goal_z;
    error_yaw=state.pose.pose.orientation.z-goal_yaw;






    // use this yaw to rotate commands from global to local frame
  // float yaw = -(state.pose.pose.orientation.z + M_PI_2);

 //double u_x=pid_x.getCommand(t,error_x);
 // double u_y=pid_y.getCommand(t,error_y);
 //double u_z=pid_z.getCommand(t,error_z);

   //cmd.linear.x = state.twist.twist.linear.x+u_x;
   //cmd.linear.y = state.twist.twist.linear.y+u_y;


 //cmd.linear.z = u_z;


    //double u_yaw = pid_yaw.getCommand(t,error_yaw);

    // normalize angular control command
    //cmd.angular.z = atan2(sin(u_yaw), cos(u_yaw));
  }



};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ardrone_controller");
  ros::NodeHandle nh;

  ArdroneController controller(nh);

  ros::Timer timer = nh.createTimer(ros::Duration(0.02), boost::bind(&ArdroneController::onTimerTick, &controller, _1));

  ros::spin();

  return 0;
}




