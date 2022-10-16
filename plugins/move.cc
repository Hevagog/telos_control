#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
// Include ROS headers so we can communicate with our robot
#include <ros/ros.h>

// Include std::string's because they're pretty darn useful.
#include <string>   

namespace gazebo
{
  class ModelPluginTest : public ModelPlugin
  {
    public: void Load(physics::ModelPtr _parent, sdf::ElementPtr _sdf)
    {
      if(!ros::isInitialized)
       {
         ROS_FATAL_STREAM("ROS node for Gazebo not established. Plugin failed.");
         return;
       }

        ROS_INFO("GIMI BREJK");
      // Listen to the update event. This event is broadcast every
      // simulation iteration.
    }

  };
  GZ_REGISTER_MODEL_PLUGIN(ModelPluginTest)
}