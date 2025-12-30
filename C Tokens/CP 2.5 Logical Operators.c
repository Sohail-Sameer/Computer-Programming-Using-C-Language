#include <stdio.h>

int main(){
  int a=5, b=0;

  printf("a = %d, b = %d\n", a, b);
  printf("(a>0)&&(b>0): %d\n", (a>0)&&(b>0));
  printf("(a>0)||(b>0): %d\n", (a>0)||(b>0));
  printf("!(a>0): %d\n", !(a>0));
  printf("!(b>0): %d\n", !(b>0));

  return 0;
}
