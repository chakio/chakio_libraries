[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
# chakio_libraries
よく使用するけど、覚えていなくて検索しがちな関数や便利な関数等々を蓄積していくリポジトリ  
やりたいことから関数が検索できるような辞書を目指します

## Description
* cpp_lib.cpp:cpp全般における関数群
* cpp_ros_lib.cpp:rosのソースコードをcppで書く際に役立つ関数群
* cpp_of_lib.cpp:openframeworksのソースコードを書く際に役立つ関数群
* python_lib.py:python全般における関数群
* python_ros_lib.py:rosのソースコードをpythonで書く際に役立つ関数群

## [cpp_lib.cpp](https://github.com/chakio/chakio_libraries/blob/master/cpp/cpp_lib.cpp)
* double getAverageAngle(vector<double> radAngles)
    * 角度の平均値を求める
* double getLimitedAngle2PI(double angle)
    * 角度を0~2PIに収める
* double getLimitedAnglePI2PI(double limitedAngle2PI)
    * 角度を-PI~PIに収める

## [cpp_ros_lib.cpp](https://github.com/chakio/chakio_libraries/blob/master/cpp/cpp_ros_lib.cpp)
* geometry_msgs::Pose pose2D2pose(geometry_msgs::Pose2D pose2D)
* geometry_msgs::Pose2D pose2pose2D(geometry_msgs::Pose pose)
* geometry_msgs::quaternion rpy2quaternion(geometry_msgs::Vector3 rpy)
* geometry_msgs::quaternion rpy2quaternion(double roll, double pitch, double yaw)
* void getRosParam()

## [cpp_of_lib.cpp](https://github.com/chakio/chakio_libraries/blob/master/cpp/cpp_of_lib.cpp)
* aa

## [python_lib.py](https://github.com/chakio/chakio_libraries/blob/master/python/python_lib.py)
* aa

## [python_ros_lib.py](https://github.com/chakio/chakio_libraries/blob/master/python/python_ros_lib.py)
* aa


## Lisence
[MIT](https://github.com/chakio/ofxRosTemplate/blob/master/LICENSE)

## Author
[chakio](https://github.com/chakio)