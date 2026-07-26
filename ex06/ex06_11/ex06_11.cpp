#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  array<int, 10> scores = {65, 78, 90, 45, 66, 95, 100, 25, 39, 88};

  cout << "Original scores: ";
  for (int score: scores) {
    cout << score << " ";
  }
  cout << endl;
  cout << "Score between 50 to 70: ";
  for_each(scores.begin(), scores.end(), [](int score) {
    if (score >= 50 && score <= 70) cout << score << " ";
  });
  cout << endl;
  cout << "Score above 70: ";
  for_each(scores.begin(), scores.end(), [](int score) {
    if (score > 70) cout << score << " ";
  });
  cout << endl;
  cout << "Score after adjusting: ";
  for_each(scores.begin(), scores.end(), [](int score) {
    cout << round(sqrt(score)*10) << " ";
  });
  cout << endl;
  return 0;
}