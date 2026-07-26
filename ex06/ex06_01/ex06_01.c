#include <stdio.h>
#include <stdbool.h>

const float SCORE_GRID[] = {
  0.0, 6.17, 12.33, 18.50, 
  24.67, 30.84, 37.00, 43.17, 
  49.34, 55.51, 61.67, 67.84, 
  74.01, 80.18, 86.34, 100.00
};

int get_rank(float score);

int main() {
  int rank_value;
  do {
    printf("Enter your score: ");
    float score;
    scanf("%f", &score);
    if (score < 0 || score > 100) {
      printf("Invalid score. Exiting.\n");
      break;
    }
    rank_value = get_rank(score);
    if (rank_value != -1) {
      printf("Your rank is: %d\n", rank_value);
    } else {
      printf("Error determining rank.\n");
    }
  } while (true);
  return 0;
}

int get_rank(float score) {
  for (int i = 0; i < sizeof(SCORE_GRID) / sizeof(SCORE_GRID[0]); i++) {
    if (score <= SCORE_GRID[i]) {
      return i;
    }
  }
  return -1;
}