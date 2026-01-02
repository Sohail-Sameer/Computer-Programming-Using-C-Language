#include <stdio.h>

int main(){
  //Regular character literals
  char letter = 'A';
  char digit = '5';
  char symbol = '@';

  //Escape Sequence Literals
  char newline = '\n';
  char tab = '\t';
  char backslash = '\\';
  char quote = '\'';

  printf("Letter: %c (ASCII: %d)\n", letter, letter);
  printf("Digit: %c (ASCII: %d)\n", digit, digit);
  printf("Symbol: %c (ASCII: %d)\n", symbol, symbol);

  printf("Demonstrating escape sequences:\n");
  printf("Line 1%cLine 2\n", newline); //Newline
  printf("Column1%cColumn2\n", tab); //tab
  printf("Backslash: %c\n", backslash);
  printf("Single quote: %c\n", quote);

  return 0;
}
