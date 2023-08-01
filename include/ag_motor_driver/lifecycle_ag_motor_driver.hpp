#pragma once

#include "ag_motor_driver/node_interfaces/node_canopen_ag_motor_driver.hpp"
#include <canopen_core/driver_node.hpp>

namespace ag_motor_driver
{
class LifecycleAGMotorDriver : public ros2_canopen::LifecycleCanopenDriver
{
    std::shared_ptr<node_interfaces::NodeCanopenAGMotorDriver<rclcpp_lifecycle::LifecycleNode>> node_canopen_ag_motor_driver_; 
public:
    explicit LifecycleAGMotorDriver(rclcpp::NodeOptions node_options);

    double get_velocity(); 

    double get_position(); 

    void set_target(double target);
    


};
}