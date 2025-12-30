#include <stdio.h>
int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ((a==b)&&(b==c)){
      printf("All numbers are equal");
  }
  else if ((a==b)||(b==c)||(c==a)){
      if ((a>c)&&(a==b)){
          printf("a and b are big");
      }
      else if ((c>a)&&(a==b)){
          printf("c is big");
      }
      else if ((a>c)&&(b==c)){
          printf("a is big");
      }
      else if ((c>a)&&(b==c)){
          printf("b and c are big");
      }
      else if ((b>c)&&(c==a)){
          printf("b is big");
      }
      else if ((c>b)&&(a==c)){
          printf("a and c are big");
      }
  }
  else{
      if (a>b){
          if (a>c){
              printf("a is big");
          }
          else{
              printf("c is big");
          }
      }
      else if (b>c){
          printf("b is big");
      }
      else{
          printf("c is big");
      }
  }
}
