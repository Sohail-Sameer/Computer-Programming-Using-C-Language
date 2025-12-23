#include <stdio.h>
int main(){
  int a=5, b=3, c, d, e, g;
  float f;
  c = a+b;
  d = a-b;
  e = a*b;
  f = (float)a/b;
  g = a%b;
  printf("a+b is %d\n", c);
  printf("a-b is %d\n", d);
  printf("a*b is %d\n", e);
  printf("a/b is %.2f\n", f);
  printf("a%b is %d\n", g);
}
