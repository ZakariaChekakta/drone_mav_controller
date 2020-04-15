/*
 * MfPidController.h
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#ifndef SRC_MFPIDCONTROLLER_H_
#define SRC_MFPIDCONTROLLER_H_

#include "ros/ros.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Vector3.h"
#include "gain_msgs/pid.h"
#include "desired_msgs/Desired.h"
#include "error_msgs/Error.h"
#include "mav_msgs/RollPitchYawrateThrust.h"
#include "sensor_msgs/Imu.h"
#include <tf/tf.h>
#include "dynamic_reconfigure/server.h"
#include "trajectory_msgs/MultiDOFJointTrajectory.h"
#include "trajectory_msgs/MultiDOFJointTrajectoryPoint.h"
#include "ardrone_autonomy/Navdata.h"
#include "mf_pid_controller/filter_state.h"

namespace Controller {

class PidController
{
public:
  float c_proportional;
  float c_integral;
  float c_derivative;

  PidController()
  {
    c_proportional = c_integral = c_derivative = 0;
    reset();
  }

  double getCommand(const ros::Time& t, double error, double derror)
  {

    sum_error=sum_error+error*(t.sec-last_time.sec);
    last_time=t;
    last_error=error;

    return c_proportional*error+c_integral*sum_error+c_derivative*derror;
  }
  void reset()
  {
  }
private:
  double sum_error=0;
  double last_error=0;
  ros::Time last_time;
};



class MfPidController {
 public:
  MfPidController(ros::NodeHandle& nh);
  ~MfPidController();
  void refecallback(const desired_msgs::Desired::ConstPtr& ref);
  void Callback(const  nav_msgs::Odometry::ConstPtr& msg);
  void GainsCallback(const gain_msgs::pid::ConstPtr&   gains);
  void GetAcceleratin(const ardrone_autonomy::Navdata::ConstPtr&   accel);
  void GetInput(const mav_msgs::RollPitchYawrateThrust::ConstPtr&  u);
  void GetTrajectory(const trajectory_msgs::MultiDOFJointTrajectory::ConstPtr& traj);


 private:
 ros::NodeHandle nh_;
 ros::NodeHandle private_nh_;
 ros::Subscriber sub_gains;
 ros::Subscriber sub_reference;
 ros::Subscriber sub_traj;
 ros::Subscriber sub_odometry;
 ros::Subscriber sub_acceleration;
 ros::Subscriber sub_input;
 ros::Publisher pub_error;
 ros::Publisher pub_er;
 ros::Publisher pub_command;
 ros::Publisher pub_cmd;
 ros::Publisher pub_F;
 ros::Publisher pub_gain;
 gain_msgs::pid g;
 geometry_msgs::Point cmd;
 ardrone_autonomy::Navdata acceleration;
 desired_msgs::Desired reference;
 trajectory_msgs::MultiDOFJointTrajectory trajectory;
 error_msgs::Error err;
 geometry_msgs::Twist  command;
 geometry_msgs::Twist  last_command;
 mav_msgs::RollPitchYawrateThrust input;
 PidController pid_x,pid_y,pid_z,pid_yaw;
 nav_msgs::Odometry state;
 nav_msgs::Odometry last_pose;


};

}

#endif
