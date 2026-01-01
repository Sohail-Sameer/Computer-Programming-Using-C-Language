#include <stdio.h>

int main(){
  int number = 42;
  char letter = 'z';
  float decimal = 3.14f;
  double precise = 2.718281828;

  printf("Integer: %d\n", number);
  printf("Character: %c\n", letter);
  printf("Float: %.2f\n", decimal);
  printf("Double: %.9lf\n", precise);

  return 0;
}
