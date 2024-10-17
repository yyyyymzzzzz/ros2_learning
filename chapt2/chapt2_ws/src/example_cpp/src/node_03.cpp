#include "rclcpp/rclcpp.hpp"

class Node3 : public rclcpp::Node
{
public:
    Node3(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "大家好，我是%s", name.c_str());
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Node3>("node_3");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}