#include <stdio.h>

int main(){
  int decimal = 255; //Decimal
  int octal = 0377; //Octal (255 in decimal)
  int hex = 0xFF; //Hexadecimal (255 in decimal)

  printf("Decimal 255: %d\n", decimal);
  printf("Octal 0377: %d\n", octal);
  printf("Hexadecimal 0xFF: %d\n", hex);
  printf("All represent the same value: %d\n", (decimal==octal && octal==hex));

  return 0;
}
