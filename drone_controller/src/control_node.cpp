/*
 * control_node.cpp
 *
 *  Created on: Nov 19, 2018
 *      Author: zakaria
 */

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
#include "std_msgs/Float64.h"
#include "geometry_msgs/PoseStamped.h"
#include "dynamic_reconfigure/server.h"
#include "drone_controller/paramConfig.h"
#include "drone_controller/filter_state.h"
#include "ardrone_autonomy/Navdata.h"
#include "geometry_msgs/Pose.h"



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

  double getCommand(const ros::Time& t, double error,double derror)
  {

    sum_error=sum_error+error*(t.sec-last_time.sec);
    last_time=t;

    return c_proportional*error+c_integral*sum_error+c_derivative*derror;
  }



  // resets the internal state
  void reset()
  {
  }
private:
  double sum_error=0;
  ros::Time last_time;
};







class Controller {

 private:

 ros::NodeHandle nh_;
 ros::NodeHandle private_nh_;
 ros::Subscriber sub_;
 ros::Subscriber sub_reference;
 ros::Subscriber sub_state;
 ros::Publisher pub_vel;
 ros::Publisher pub_error;
 geometry_msgs::Twist cmd;
 geometry_msgs::PoseStamped reference;
 geometry_msgs::Pose error;
 PidController pid_x,pid_y,pid_z,pid_yaw;
 drone_controller::filter_state state;





 public:
  Controller(ros::NodeHandle& nh):nh_(nh)
 {


    sub_= nh.subscribe("/ground_truth/state", 1,&Controller::Callback,this);
    sub_reference=nh.subscribe("reference",1,&Controller::RefeCallback,this);
    sub_state=nh.subscribe("/ardrone/predictedPose",1,&Controller::StateCallback,this);
    pub_vel=nh.advertise<geometry_msgs::Twist>("/cmd_vel",1);
    pub_error=nh.advertise<geometry_msgs::Twist>("/error",1);


 }



  void RefeCallback(const geometry_msgs::PoseStamped::ConstPtr& ref){
   reference=*ref;
  }

  void StateCallback(const drone_controller::filter_state::ConstPtr& s){
state=*s;

pid_x.c_proportional = pid_y.c_proportional =1;
pid_x.c_integral = pid_y.c_integral =0.1;
pid_x.c_derivative = pid_y.c_derivative =0.01;
double yaw = -(state.yaw + M_PI_2);

    double error_x=0-state.x;
    double derror_x=0-state.dx;
    double error_y=0-state.y;
    double derror_y=0-state.dy;



    double u_x=pid_x.getCommand(s->header.stamp,error_x,derror_x);

    cmd.linear.x=u_x;

 cmd.linear.x=std::min(cmd.linear.x,1.0);
 cmd.linear.y=std::min(cmd.linear.y,1.0);
 cmd.linear.x=std::max(cmd.linear.x,-1.0);
 cmd.linear.y=std::max(cmd.linear.y,-1.0);




    pub_vel.publish(cmd);
  }


 void Callback(const  nav_msgs::Odometry::ConstPtr& msg){

  }


};



int main(int argc, char **argv)
{
  ros::init(argc, argv, "drone_controller");
  ros::NodeHandle nh;

  Controller controller(nh);

  ros::spin();

  return 0;
}







