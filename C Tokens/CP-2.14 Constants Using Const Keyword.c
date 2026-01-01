#include <stdio.h>

int main(){
  const float PI = 3.14159;
  const int MAX_STUDENTS = 50;
  const char GRADE_A = 'A';

  printf("Value of PI: %.5f\n", PI);
  printf("Maximum students allowed: %d\n", MAX_STUDENTS);
  printf("Top Grade: %c\n", GRADE_A);

  // PI = 3.15; // This causes compilation eroor

  return 0;
}
