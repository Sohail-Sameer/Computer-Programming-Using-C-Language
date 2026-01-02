#include <stdio.h>
#define PI 3.14159

int main(){
  //Integer literals
  int students = 30;
  unsigned int population = 1000000U;

  //Floating Point Literals
  float temperature = 36.5f;
  double precision = 2.718281828;

  //Character Literals
  char grade = 'A';
  char newline = '\n';

  //String Literals
  char school[] = "Tech University";
  char course[] = "Computer Science";

  //Constant using #define
  float circumference = 2*PI*5.0;

  printf("=== STUDENT REPORT ===\n");
  printf("School: %s\n", school);
  printf("Course: %s\n", course);
  printf("Total Students: %d\n", students);
  printf("City Population: %u\n", population);
  printf("Average Temperature: %.1f°C\n", temperature);
  printf("Mathematical Constant e: %.9lf\n", precision);
  printf("Top Grade: %c\n", grade);
  printf("Circle Circumference (r=5): %.2f\n", circumference);

  return 0;
}
