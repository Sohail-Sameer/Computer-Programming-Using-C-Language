#include <stdio.h>

int main(){
  int age = 25;
  char grade = 'A';
  float height = 5.9;
  double pi = 3.14159265359;
  
  printf("Age: %d\n", age);
  printf("Grade: %c\n", grade);
  printf("Height: %.1f\n", height);
  printf("Pi Value: %.5lf\n", pi);

  return 0;
}
