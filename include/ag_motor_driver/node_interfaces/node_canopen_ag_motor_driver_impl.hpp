#pragma once

#include "ag_motor_driver/node_interfaces/node_canopen_ag_motor_driver.hpp"

namespace ag_motor_driver
{
    namespace node_interfaces 
    {
        template <class NODETYPE> NodeCanopenAGMotorDriver<NODETYPE>::NodeCanopenAGMotorDriver(NODETYPE * node)
        : ros2_canopen::node_interfaces::NodeCanopenProxyDriver<NODETYPE>(node)
        {
            
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::init(bool called_from_base)
        {
            RCLCPP_INFO(this->node_->get_logger(), "Inited");
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::configure(bool called_from_base)
        {
            RCLCPP_INFO(this->node_->get_logger(), "Configure");
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::activate(bool called_from_base)
        {
            RCLCPP_INFO(this->node_->get_logger(), "Activate");
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::deactivate(bool called_from_base)
        {
            RCLCPP_INFO(this->node_->get_logger(), "Deactivate");
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::add_to_master()
        {
        ros2_canopen::node_interfaces::NodeCanopenProxyDriver<NODETYPE>::add_to_master();
        motor_ = std::make_shared<MotorAG>(this->lely_driver_);
        }

        template <class NODETYPE>
        double NodeCanopenAGMotorDriver<NODETYPE>::get_position()
        {
            return 0.0f;
        }

        template <class NODETYPE>
        double NodeCanopenAGMotorDriver<NODETYPE>::get_velocity()
        {
            return 0.0f;
        }

        template <class NODETYPE>
        void NodeCanopenAGMotorDriver<NODETYPE>::set_target(double target)
        {
            RCLCPP_INFO(this->node_->get_logger(), "Target setted %f", target);
        }
    }
}