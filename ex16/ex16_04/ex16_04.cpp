#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv ) {
    cv::Mat img_src;
    cv::Mat img_gray;
    cv::Mat img_binary;
    double area;
    std::size_t index = 0;
    std::vector<std::vector<cv::Point>>::iterator it;
         
    img_src = cv::imread("myShapes.jpg");
    cv::cvtColor(img_src, img_gray, cv::COLOR_BGR2GRAY);
    cv::threshold(img_gray, img_binary, 20, 255, cv::THRESH_BINARY);
    // Find contours
    std::vector<std::vector<cv::Point>> contours;
    // cv::findContours(img_binary, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE); 
    cv::findContours(img_binary, contours, cv::noArray(), cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE); 
  
    for (it = contours.begin(); it != contours.end(); ++it) {
        index++;
        area = cv::contourArea(*it);
        std::cout << "Area of shape " << index << ": " << area << std::endl;
    }
    cv::imshow("Original Image", img_src);
    cv::imshow("Binary Image", img_binary);
    img_src.release();
    img_gray.release();
    img_binary.release();
    cv::waitKey();
    cv::destroyAllWindows();
    return 0;
}