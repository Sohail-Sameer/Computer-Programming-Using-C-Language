#include <stdio.h>
#define PI 3.14159
#define MAX_SIZE 100
#define COMPANY_NAME "TechCorp"
int main(){
  float radius = 5.0;
  float area = PI*radius*radius;

  printf("Company: %s\n", COMPANY_NAME);
  printf("Circle radius: %.1f\n", radius);
  printf("Circle area: %.2f\n", area);
  printf("Maximum array size: %d\n", MAX_SIZE);

  return 0;
}
