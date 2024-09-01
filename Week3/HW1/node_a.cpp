#include "ros/ros.h"
#include "std_msgs/Int32.h"

ros::Publisher pub;

void adderCallback(const std_msgs::Int32::ConstPtr& msg)
{
    std_msgs::Int32 temp;
    temp.data = msg->data + 1;
    ROS_INFO("d + 1 = %d", temp.data);
    ros::Duration(0.5).sleep();
    pub.publish(temp);
}

int main(int argc, char **argv)
{
    // 初始化 ROS 節點
    ros::init(argc, argv, "node_a");
    ros::NodeHandle nh;

    // 創建一個 Publisher，發佈到 "topic_a" 主題
    pub = nh.advertise<std_msgs::Int32>("topic_a", 3);

    // 創建一個 Subscriber，訂閱 "topic_d" 主題
    ros::Subscriber sub = nh.subscribe("topic_d", 3, adderCallback);

    // 間隔 0.5 秒
    ros::Duration(0.5).sleep();

    // 創建一個訊息並放入資料
    std_msgs::Int32 msg;
    msg.data = 1;

    // 印出訊息資料
    ROS_INFO("a = %d", msg.data);

    // 發佈訊息
    pub.publish(msg);

    // 可以讓這個node不停止, 可以持續的監聽topic有沒有新的訊息
    ros::spin();


    return 0;
}