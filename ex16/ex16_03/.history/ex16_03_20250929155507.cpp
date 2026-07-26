#include <stdio.h>
#include <opencv2/opencv.hpp>
void myHistogram(const cv::Mat image);
int main(int argc, char** argv ) {
    cv::Mat img_src;
    cv::Mat img_gray;
    cv::Mat img_edge;
    int roi[] = {700, 150, 500, 400}; // x, y, width, height
    
    img_src = cv::imread("leaves.jpg");
    if ( !img_src.data ) {
        printf("Image not found \n");
        return -1;
    }
    
    cv::cvtColor(img_src, img_gray, cv::COLOR_BGR2GRAY);
    myHistogram(img_gray);
    cv::Canny(img_gray(cv::Rect(roi[0], roi[1], roi[2], roi[3])), img_edge, 50, 150);
    cv::imshow("Original image", img_src(cv::Rect(roi[0], roi[1], roi[2], roi[3])));
    // cv::imshow("Gray image", img_gray);
    cv::imshow("Canny image", img_edge);
    cv::waitKey(0);
    cv::destroyAllWindows();
    img_src.release();
    img_gray.release();
    img_edge.release();
    return 0;
}
void myHistogram(const cv::Mat image) {
  def myHistogram(image):
    color = ('b','g','r')
    for i,col in enumerate(color):
        histo = cv::calcHist([image], [i], None, [256], [0,256])
        plt.plot(histo, color = col)
        plt.xlim([0,256])
    plt.show()
// Define parameters for the histogram
    int histSize = 256; // Number of bins
    float range[] = {0, 256}; // Range of intensity values
    const float* histRange = {range};
    bool uniform = true, accumulate = false;
    cv::Mat hist;
    cv::calcHist(&image, 1, 0, cv::Mat(), hist, 1, &histSize, &histRange, uniform, accumulate);

    // Normalize the histogram for visualization
    cv::Mat histImage(400, 512, CV_8UC3, cv::Scalar(0, 0, 0));
    cv::normalize(hist, hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    // Draw the histogram
    int binWidth = cvRound((double) histImage.cols / histSize);
    for (int i = 1; i < histSize; i++) {
        cv::line(histImage,
             cv::Point(binWidth * (i - 1), histImage.rows - cvRound(hist.at<float>(i - 1))),
             cv::Point(binWidth * i, histImage.rows - cvRound(hist.at<float>(i))),
             cv::Scalar(0, 255, 0, 0), 2, 8, 0);
    }
    // Display the results
    cv::imshow("Histogram", histImage);
    cv::waitKey(0);
    cv::destroyAllWindows();
    hist.release();
  }