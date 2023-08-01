#include "ag_motor_driver/motor.hpp"

namespace ag_motor_driver
{

MotorAG::MotorAG(std::shared_ptr<ros2_canopen::LelyDriverBridge> driver)
{
    this->driver_ = driver;
}
}