#include <stdio.h>

int main(){
  unsigned int a=60; //60 = 0011 1100 in binary
  unsigned int b=13; //13 = 0000 1101 in binary

  printf("a = %u (binary: 0011 1100)\n", a);
  printf("b = %u (binary: 0000 1101)\n", b);
  printf("a&b = %u\n", a&b); //12 = 0000 1100
  printf("a|b = %u\n", a|b); //61 = 0011 1101
  printf("a^b = %u\n", a^b); //49 = 0011 0001
  printf("~a = %u\n", ~a); // Compliment of a
  printf("a<<2 = %u\n", a<<2); //240 = 1111 0000
  printf("a>>2 = %u\n", a>>2); //15 = 0000 1111

  return 0;
}
