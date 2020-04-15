/*
 * pid.h
 *
 *  Created on: Nov 5, 2018
 *      Author: Zakaria
 */

#ifndef INCLUDE_PD_CONTROLLER_PID_H_
#define INCLUDE_PD_CONTROLLER_PID_H_
#include <ros/ros.h>
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

  double getCommand(const ros::Time& t, double error, double derror)
  {

    sum_error=sum_error+error*(t.sec-last_time.sec);
    last_time=t;

    return c_proportional*error+c_integral*sum_error+c_derivative*derror;}

  // resets the internal state
  void reset()
  { }
private:
  double sum_error=0;
  ros::Time last_time;


};





#endif /* INCLUDE_PD_CONTROLLER_PID_H_ */
