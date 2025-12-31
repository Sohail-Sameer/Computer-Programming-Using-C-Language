#include <stdio.h>

int main(){
  int num=42;
  float pi = 3.14f;
  char ch = 'A';

  //sizeof operator
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of num variable: %zu bytes\n", sizeof(num));
  printf("Size of float variable: %zu bytes\n", sizeof(float));
  printf("Size of char: %zu bytes\n", sizeof(ch));

  //Address-of Operator
  printf("Address of num: %p\n", &num);
  printf("Address of pi: %p\n", &pi);
  printf("Address of ch: %p\n", &ch);

  //Pointer and Dereference Operator
  int *ptr = &num;
  printf("Value of ptr (address): %p\n", ptr);
  printf("Value at address (*ptr): %d\n", *ptr);

  //Comma Operator
  int a, b, c;
  a = (b = 3, c = 4, b+c);
  //b=3, c=4, then a=b+c=7
  printf("After comma operator: a = %d, b = %d, c = %d\n", a, b, c);

  return 0;
}
