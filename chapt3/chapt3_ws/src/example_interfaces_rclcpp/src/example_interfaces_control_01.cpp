#include "rclcpp/rclcpp.hpp"
#include "example_ros2_interfaces/srv/move_robot.hpp"
#include "example_ros2_interfaces/msg/robot_status.hpp"

class ExampleInterfacesControl : public rclcpp::Node {
public:
    ExampleInterfacesControl(std::string name) : Node(name) {
        RCLCPP_INFO(this->get_logger(), "节点已启动：%s", name.c_str());
    }
private:

};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ExampleInterfacesControl>("example_interfaces_control_01");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}