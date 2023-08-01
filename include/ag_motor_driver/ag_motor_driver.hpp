#pragma once

#include "ag_motor_driver/node_interfaces/node_canopen_ag_motor_driver.hpp"
#include <canopen_core/driver_node.hpp>

namespace ag_motor_driver
{
class AGMotorDriver : public ros2_canopen::CanopenDriver
{
    std::shared_ptr<node_interfaces::NodeCanopenAGMotorDriver<rclcpp::Node>> node_canopen_ag_motor_driver_; 
public:
    explicit AGMotorDriver(rclcpp::NodeOptions node_options);

    double get_velocity(); 

    double get_position(); 

    void set_target(double target);



};
}