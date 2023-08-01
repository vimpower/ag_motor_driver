cmake_minimum_required(VERSION 3.8)
project(ag_motor_driver)

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

ament_auto_add_library(motor_lib SHARED
    src/motor.cpp
)

ament_auto_add_library(node_canopen_ag_motor_driver
    src/node_interfaces/node_canopen_ag_motor_driver.cpp
)

ament_auto_add_library(lifecycle_ag_motor_driver
    src/lifecycle_ag_motor_driver.cpp
)

rclcpp_components_register_nodes(lifecycle_ag_motor_driver "ag_motor_driver::LifecycleAGMotorDriver")


ament_auto_add_library(ag_motor_driver
    src/ag_motor_driver.cpp
)

rclcpp_components_register_nodes(ag_motor_driver "ag_motor_driver::AGMotorDriver")

ament_auto_package(INSTALL_TO_SHARE param launch)


