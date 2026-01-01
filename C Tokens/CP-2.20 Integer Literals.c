#include <stdio.h>

int main(){
  //Different types of integer literals
  int decimal = 255; //Decimal literal
  int octal = 0377; //Octal literal (255 in decimal)
  int hex = 0xFF; //Hexadecimal literal (255 in decimal)
  int binary = 0b11111111;
  //Binary literal (255 in decimal) - C99 standard

  //Integer literals with suffixes
  unsigned int uns = 100U; //Unsigned Literal
  long int lng = 1000L; //Long Literal
  unsigned long ul = 500UL; //Unsigned Long Literal

  printf("Decimal 255: %d\n", decimal);
  printf("Octal 0377: %d\n", octal);
  printf("Hexadecimal 0xFF: %d\n", hex);
  printf("Binary 0b11111111: %d\n", binary);
  printf("Unsigned 100U: %u\n", uns);
  printf("Long 1000U: %ld\n", lng);
  printf("Unsigned Long 500UL: %lu\n", ul);

  return 0;
}
