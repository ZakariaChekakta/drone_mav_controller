/*
 * traj_desired.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: zakaria
 */
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/PointStamped.h"
#include <sstream>
#include "ros/time.h"

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{


  ros::init(argc, argv, "talker");


  ros::NodeHandle n;


  ros::Publisher chatter_pub = n.advertise<geometry_msgs::PointStamped>("chatter", 1000);

  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {

    geometry_msgs::PointStamped msg;

   msg.header.stamp=ros::Time::now();
    ROS_INFO("%s", msg.header.stamp.sec);

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}


