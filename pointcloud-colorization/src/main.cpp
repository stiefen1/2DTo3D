#include <iostream>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char** argv)
{
    cv::Mat img = cv::imread("C:\\Users\\Steph\\Desktop\\projects\\2DTo3D\\pointcloud-colorization\\data\\autonomous_driving.png");
    if(img.empty())
    {
        std::cerr << "Could not read the image" << std::endl;
        return 1;
    }
    std::cout << "Hello World!" << std::endl;
    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}