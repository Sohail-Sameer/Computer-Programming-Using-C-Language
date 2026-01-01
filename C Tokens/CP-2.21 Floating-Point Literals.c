#include <stdio.h>

int main(){
  //Different forms of floating-point literals
  float f1 = 3.14159f; //Float literal with suffix
  double d1 = 2.718281828; //Double literal (default)
  long double ld1 = 1.23456789L; //Long Double Literal

  //Scientific notation
  double sci1 = 1.23E-4; //0.000123
  float sci2 = 5.67E+2f; //567.0

  printf("Float literal: %.5f\n", f1);
  printf("Double literal: %.9lf\n", d1);
  printf("Long double literal: %.8Lf\n", ld1);
  printf("Scientific 1.23E-4: %.6lf\n", sci1);
  printf("Scientific 5.67E+2f: %.1f\n", sci2);

  return 0;
}
