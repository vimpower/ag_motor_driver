#include "ag_motor_driver/node_interfaces/node_canopen_ag_motor_driver.hpp"
#include "ag_motor_driver/node_interfaces/node_canopen_ag_motor_driver_impl.hpp"

namespace ag_motor_driver
{
namespace node_interfaces
{
template class NodeCanopenAGMotorDriver<rclcpp::Node>;
template class NodeCanopenAGMotorDriver<rclcpp_lifecycle::LifecycleNode>;
}
}

