#!/usr/bin/env python

import rospy
from gain_msgs.msg import pd
from std_msgs.msg import Float64
import dynamic_reconfigure.client

def listener():
    rospy.Subscriber("gain", pd , Callback)
    
def Callback(gain):
    #rospy.loginfo("proportional position controller ,%f", gain.kp_z)
    client.update_configuration({"kp_z":gain.kp_z})  
         
    
def configCallback(config):
    rospy.loginfo("Config set to ,{kp_z}".format(**config))

if __name__ == "__main__":
    rospy.init_node("dynamic_client")
   
    client = dynamic_reconfigure.client.Client("pd_controller", timeout=30, config_callback=configCallback)
    
    listener()
    rospy.spin()
    
         
       
      
    
    
