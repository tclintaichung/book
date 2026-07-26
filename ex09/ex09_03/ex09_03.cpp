#include <iostream>
#include <map>

int main() {
  std::map<int, float> my_scores = {
    {1, 6.17}, {2, 12.33}, {3, 18.50}, {4, 24.67},
    {5, 30.84}, {6, 37.00}, {7, 43.17}, {8, 49.34}, {9, 55.51},
    {10, 61.67}, {11, 67.84}, {12, 74.01}, {13, 80.18}, {14, 86.34},
    {15, 100.00}
  }; 
  std::map<int, float>::iterator it; 
  do {
    std::cout << "Enter your score: ";
    float score;
    std::cin >> score;
    if (score < 0) break;
    if (score <= 0) {
      std::cout << "Your score is in Level 0" << std::endl;
      continue;
    }
    for ( it = my_scores.begin(); it != my_scores.end(); ++it) {
      if (score <= it->second) {
        std::cout << "Your score is in Level " << it->first << std::endl;
        break;
      }
    }
  } while (true);
  return 0;
}