#include <stdio.h>

int main(){
  int score = 85;
  printf("Initial score: %d\n", score);

  score = score + 15;
  printf("Updated score: %d\n", score);

  score += 10;
  printf("Final score: %d\n", score);

  return 0;
}
