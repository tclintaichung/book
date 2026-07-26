#include <iostream>
#include <array>

const std::array<float, 16> SCORE_GRID = {
  0.0, 6.17, 12.33, 18.50, 
  24.67, 30.84, 37.00, 43.17, 
  49.34, 55.51, 61.67, 67.84, 
  74.01, 80.18, 86.34, 100.00
};

int get_rank(float score);

int main() {
  int rank_value;
  do {
    std::cout << "Enter your score: ";
    float score;
    std::cin >>  score; 
    if (score < 0 || score > 100) {
      std::cout << "Invalid score. Exiting." << std::endl;
      break;
    }
    rank_value = get_rank(score);
    if (rank_value != -1) {
      std::cout << "Your rank is: " << rank_value << std::endl;
    } else {
      std::cout << "Error determining rank." << std::endl;
    }
  } while (true);
  return 0;
}

int get_rank(float score) {
  for (int i = 0; i < SCORE_GRID.size(); i++) {
    if (score <= SCORE_GRID[i]) {
      return i;
    }
  }
  return -1;
}