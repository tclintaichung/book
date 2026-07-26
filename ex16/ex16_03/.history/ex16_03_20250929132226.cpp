#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv ) {
    cv::Mat img_src;
    cv::Mat img_gray;
    cv::Mat img_edge;
    
    img_src = cv::imread("leaves.jpg");
    if ( !img_src.data ) {
        printf("Image not found \n");
        return -1;
    }
    cv::cvtColor(img_src, img_gray, cv::COLOR_BGR2GRAY);
    cv::Canny(img_gray(cv::Rect(700, 150, 500, 400)), img_edge, 50, 150);  
    cv::imshow("Original image", img_src(cv::Rect(700, 150, 500, 400)));
    // cv::imshow("Gray image", img_gray);
    cv::imshow("Canny image", img_edge);
    cv::waitKey(0);
    cv::destroyAllWindows();
    img_src.release();
    img_gray.release();
    img_edge.release();
    return 0;
}