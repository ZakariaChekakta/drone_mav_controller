/*
 * FuzzyPdController.h
 *
 *  Created on: Oct 11, 2018
 *      Author: zakaria
 */

#ifndef SRC_FUZZYPDCONTROLLER_H_
#define SRC_FUZZYPDCONTROLLER_H_
#include "ros/ros.h"
#include "nav_msgs/Odometry.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/Vector3.h"
#include "gain_msgs/pid.h"
#include "desired_msgs/Desired.h"
#include "error_msgs/Error.h"
#include "mav_msgs/RollPitchYawrateThrust.h"
#include <tf/tf.h>

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



  // resets the internal state
  void reset()
  {
  }
private:
  double sum_error=0;
  double last_error=0;
  ros::Time last_time;
};

class Fuzzy_Pd_Controller {
 public:
  Fuzzy_Pd_Controller(ros::NodeHandle& nh);
  ~Fuzzy_Pd_Controller();

    void refecallback(const desired_msgs::Desired::ConstPtr& ref);
    void GainsCallback(const gain_msgs::pid::ConstPtr&   gains);
    void Callback(const  nav_msgs::Odometry::ConstPtr& msg);
    void DisturbanceCallback(const  geometry_msgs::Point::ConstPtr& d);

 private:
   ros::NodeHandle nh_;
   ros::Subscriber sub_reference;
   ros::Subscriber sub_odometry;
   ros::Subscriber sub_disturbance_observer;
   ros::Subscriber sub_gains;
   ros::Publisher pub_command;
   ros::Publisher pub_cmd;
   geometry_msgs::Point disturbance_observer;
   geometry_msgs::Point cmd;
   ros::Publisher pub_error;
   desired_msgs::Desired reference;
   error_msgs::Error err;
   error_msgs::Error er_pid;
   geometry_msgs::Twist command;
   PidController pid_x,pid_y,pid_z,pid_yaw,pid_roll,pid_pitch;


};

}

#endif
