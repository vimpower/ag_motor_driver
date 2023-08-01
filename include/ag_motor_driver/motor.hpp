#pragma once
#include <canopen_base_driver/lely_driver_bridge.hpp>

namespace ag_motor_driver
{
class MotorAG
{
public:
    explicit MotorAG(std::shared_ptr<ros2_canopen::LelyDriverBridge> driver);
private:
    std::shared_ptr<ros2_canopen::LelyDriverBridge> driver_;
};
}