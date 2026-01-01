#include <stdio.h>

int main(){
  short int smallNum = 32000;
  long int bigNum = 1234567890L;
  unsigned int positiveNum = 4000000000U;

  printf("Short int: %d\n", smallNum);
  printf("Long int: %ld\n", bigNum);
  printf("Unsigned int: %u\n", positiveNum);

  printf("Size of short: %zu bytes\n", sizeof(short));
  printf("Size of long: %zu bytes\n", sizeof(long));

  return 0;
}
