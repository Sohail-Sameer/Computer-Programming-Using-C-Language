#include <stdio.h>

int main() {
    int age = 20;
    int marks = 85;
    
    //Simple Ternary Operator
    char *status = (age>=18) ? "Adult":"Minor";
    printf("Age: %d, Status: %s\n", age, status);
    
    //Nested Ternary Operator
    char grade = (marks>=90)?'A':(marks>=80)?'B':(marks>=70)?'C':'F';
    printf("Marks: %d, Grade: %c\n", marks, grade);
    
    //Finding Maximum of Two Numbers
    int a=15, b=25;
    int max = (a>b)?a:b;
    printf("Maximum of %d and %d is: %d\n", a, b, max);

    return 0;
}
