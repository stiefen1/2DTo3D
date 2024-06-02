cmake_minimum_required(VERSION 3.10)

project(pointcloud-colorization)

set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x64-windows/share/opencv4")
find_package(OpenCV REQUIRED)

add_executable(pointcloud-colorization src/main.cpp)

target_link_libraries(pointcloud-colorization PRIVATE ${OpenCV_LIBS})