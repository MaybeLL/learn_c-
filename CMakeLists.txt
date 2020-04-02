#CMake最低版本号要求
cmake_minimum_required(VERSION 3.12)
#项目信息
project(learn_c++)
# set(变量 值)
set(CMAKE_CXX_STANDARD 11)
# Where to find CMake modules and OpenCV
# OpenCV_DIR路径下的OpenCVConfig.cmake文件会帮忙找opencv的位置，设置相应的变量
#set(OpenCV_DIR "D:/opencv4.1.2/build/install")
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
#去找OpenCVConfig.cmake，OpenCV-config.cmake 两个文件，
#进而确定你要引入的opencv头文件和库函数在哪里。
#find_package(OpenCV REQUIRED)
#此时include路径和库路径已经获得
#include_directories(${OpenCV_INCLUDE_DIRS})

# 指定源文件
set(SOURCE_FILES main.cpp C++/Polymorphism.cpp)
# 指定生成目标
add_executable(learn_c++ ${SOURCE_FILES})

# 添加准备链接的库
#set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

# 链接
#target_link_libraries(learn_opencv ${OpenCV_LIBS})


#cmake_minimum_required(VERSION 3.2)
#
#PROJECT(geometry)
#设置目录
#include_directories("/usr/local/include/eigen3")
#
#add_executable(Geometry useGeometry.cpp)