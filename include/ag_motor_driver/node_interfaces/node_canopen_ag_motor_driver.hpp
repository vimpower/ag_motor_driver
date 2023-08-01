#pragma once

#include <canopen_proxy_driver/node_interfaces/node_canopen_proxy_driver.hpp>

#include "ag_motor_driver/motor.hpp"

namespace ag_motor_driver
{
    namespace node_interfaces
    {
        template<class NODETYPE>
        class NodeCanopenAGMotorDriver : public ros2_canopen::node_interfaces::NodeCanopenProxyDriver<NODETYPE>
        {
        
        protected:
            std::shared_ptr<MotorAG> motor_;
        
        public:
            explicit NodeCanopenAGMotorDriver(NODETYPE * node);

            virtual void init(bool called_from_base) override;
            virtual void configure(bool called_from_base) override;
            virtual void activate(bool called_from_base) override;
            virtual void deactivate(bool called_from_base) override;
            virtual void add_to_master() override;


            virtual double get_velocity();  
            virtual double get_position(); 
            virtual void set_target(double target);
        };
    }
}