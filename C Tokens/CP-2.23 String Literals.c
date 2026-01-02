#include <stdio.h>

int main(){
  //Basic String Literals
  char greeting[] = "Hello, World!";
  char empty[] = "";

  //String with Escape Sequences
  char multiline[] = "Line 1\nLine 2\nLine 3";
  char tabbed[] = "Name:\tJohn\tAge:\t25";

  //String Concatenation (automatic)
  char concat[] = "This is a " "concatenated " "string literal ";
  printf("Greeting: %s\n", greeting);
  printf("Emptry string length: %zu\n", sizeof(empty));

  printf("Multiline String: \n%s\n", multiline);
  printf("Tabbed String: \n%s\n", tabbed);
  printf("Concatenated: %s\n", concat);

  //String with Special Characters
  char path[] = "C:\\Program Files\\MyApp\\data.txt";
  printf("File path: %s\n", path);

  return 0;
}
