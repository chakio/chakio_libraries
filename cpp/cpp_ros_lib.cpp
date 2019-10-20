//--------------------------------------------------------------
/**
*covert RPY to tf::quatanion
*argument: roll pitch yaw
*return: tf::Quaternion
*dependency: <geometry_msgs/Pose.h>, <tf/transform_broadcaster.h>
*/
tf::Quaternion rpy2tfQuat(double roll, double pitch, double yaw){
    return tf::createQuaternionFromRPY(roll, pitch, yaw);
}
//--------------------------------------------------------------
/**
*covert RPY to geometry_msgs::Quaternion
*argument: roll pitch yaw
*return: geometry_msgs::Quaternion
*dependency: <geometry_msgs/Pose.h>, <tf/transform_broadcaster.h>
*/
geometry_msgs::Quaternion rpy2geometryQuat(double roll, double pitch, double yaw){
    tf::Quaternion quat=tf::createQuaternionFromRPY(roll,pitch,yaw);
    geometry_msgs::Quaternion geometry_quat;
    quaternionTFToMsg(quat, geometry_quat);
    return geometry_quat;
}
//--------------------------------------------------------------
/**
*covert RPY to tf::Quaternion
*argument: tf::Quaternion& roll pitch yaw
*return: none
*dependency: <geometry_msgs/Pose.h>, <tf/transform_broadcaster.h>
*/
void tfQuat2rpy(tf::Quaternion quat,double& roll, double& pitch, double& yaw){
    tf::Quaternion quat;
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);  //rpy are Pass by Reference
}
//--------------------------------------------------------------
/**
*covert RPY to geometry_msgs::Quaternion
*argument: geometry_msgs::Quaternion& roll pitch yaw
*return: none
*dependency: <geometry_msgs/Pose.h>, <tf/transform_broadcaster.h>
*/
void geometryQuat2rpy(geometry_msgs::Quaternion geometry_quat, double& roll, double& pitch, double& yaw){
    tf::Quaternion quat;
    quaternionMsgToTF(geometry_quat, quat);
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);  //rpy are Pass by Reference
}
//--------------------------------------------------------------
/**
*convert geometry_msgs::Pose2D to geometry_msgs::Pose
*argument: geometry_msgs::Pose2D
*return: geometry_msgs::Pose
*dependency: <geometry_msgs/Pose.h>, <geometry_msgs/Pose2D.h>, <tf/transform_broadcaster.h>
*/
geometry_msgs::Pose pose2D2pose(geometry_msgs::Pose2D pose2D)
{   
    geometry_msgs::Pose outputPose;

    outputPose.position.x = pose2D.x;
    outputPose.position.y = pose2D.y;
    outputPose.position.z = 0;

    tf::Quaternion quat=tf::createQuaternionFromRPY(0,0,pose2D.theta);
    geometry_msgs::Quaternion geometry_quat;
    quaternionTFToMsg(quat, geometry_quat);
    outputPose.orientation = geometry_quat;

    return outputPose;
}
//--------------------------------------------------------------
/**
*convert geometry_msgs::Pose to geometry_msgs::Pose2D
*argument: geometry_msgs::Pose
*return: geometry_msgs::Pose2D
*dependency: <geometry_msgs/Pose.h>, <geometry_msgs/Pose2D.h>, <tf/transform_broadcaster.h>
*/
geometry_msgs::Pose2D pose2pose2D(geometry_msgs::Pose pose)
{
    geometry_msgs::Pose2D outputPose2D;

    outputPose2D.x = pose.position.x;
    outputPose2D.y = pose.position.y;

    double roll,pitch,yaw;
    tf::Quaternion quat;
    quaternionMsgToTF(pose.orientation, quat);
    tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);  //rpy are Pass by Reference
    outputPose2D.theta = yaw;

    return outputPose2D;
}
//--------------------------------------------------------------
/**
*getNewTrackedObjects
*argument:  std::array<geometry_msgs::PoseArray,4> _untrackedObjects
*return: none
*/
tf::

//--------------------------------------------------------------
/**
* getRosParam
*ros paramを用いた実行時のパラメータ設定
*/
void getRosParam()
{
    ros::NodeHandle _pnh("~");
    _pnh.getParam("param_name", PARAM_NAME);
}