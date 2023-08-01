#include "ag_motor_driver/ag_motor_driver.hpp"

namespace ag_motor_driver
{
    AGMotorDriver::AGMotorDriver(rclcpp::NodeOptions node_options) 
    : ros2_canopen::CanopenDriver(node_options)
    {
        node_canopen_ag_motor_driver_ =
            std::make_shared<node_interfaces::NodeCanopenAGMotorDriver<rclcpp::Node>>(this);
        node_canopen_driver_ = 
            std::static_pointer_cast<ros2_canopen::node_interfaces::NodeCanopenDriverInterface>(node_canopen_ag_motor_driver_);
    }
    double AGMotorDriver::get_position()
    {
        return node_canopen_ag_motor_driver_->get_position();
    }

    double AGMotorDriver::get_velocity()
    {
        return node_canopen_ag_motor_driver_->get_position();
    }

    void AGMotorDriver::set_target(double target)
    {
        node_canopen_ag_motor_driver_->set_target(target);
    }
}

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(ag_motor_driver::AGMotorDriver)