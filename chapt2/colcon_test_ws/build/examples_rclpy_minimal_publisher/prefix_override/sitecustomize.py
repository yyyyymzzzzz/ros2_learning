import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ymz/Codes/ros2_learning/chapt2/colcon_test_ws/install/examples_rclpy_minimal_publisher'
