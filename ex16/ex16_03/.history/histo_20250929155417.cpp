#include <vector>
#include <opencv2/opencv.hpp>
#include <matplot/matplot.h>

int main() {
  namespace plt = matplot;
  
  // Load the image
  cv::Mat img = cv::imread("leaves.jpg");
  if (img.empty()) {
    std::cerr << "Error: Image cannot be loaded." << std::endl;
    return -1;
  }

  // Split the image into its respective Blue, Green, and Red channels
  std::vector<cv::Mat> bgr_planes;
  cv::split(img, bgr_planes);

  // Set the number of bins and the range for the histogram
  int histSize = 256;
  float range[] = {0, 256};  // the upper boundary is exclusive
  const float* histRange = {range};
  bool uniform = true;
  bool accumulate = false;

  // Vector to store histograms
  // Calculate the histograms for the Blue, Green, and Red channels
  cv::Mat b_hist, g_hist, r_hist;
  std::vector<cv::Mat> hist_planes = {b_hist, g_hist, r_hist};
  for (int i = 0; i < 3; i++) {
    cv::calcHist(&bgr_planes[i], 1, nullptr, cv::Mat(), hist_planes[i], 1,
                 &histSize, &histRange, uniform, accumulate);
  }

  // Convert histograms to vectors for plotting
  std::array color = {"b", "g", "r"};
  for (int i = 0; i < 3; i++) {
    std::vector<double> hist_vec;
    hist_vec.assign(hist_planes[i].begin<float>(), hist_planes[i].end<float>());
    plt::plot(hist_vec, color[i])->line_width(2);
    plt::hold(plt::on);
  }

  plt::save("Color Histogram.png");
  return 0;
}
