#include <stdio.h>

int main() {
    int a=5, b=5;
    
    printf("Initial: a = %d, b = %d\n", a, b);
    
    printf("Pre-increment ++a: %d\n", ++a);
    printf("Value of a after pre-increment: %d\n", a);
    
    printf("Post-increment b++: %d\n", b++);
    printf("Value of b after post-increment: %d\n", b);
    
    printf("Pre-decrement --a: %d\n", --a);
    printf("Value of a after pre-decrement: %d\n", a);
    
    printf("Post-decrement b--: %d\n", b--);
    printf("Value of b after post-decrement: %d\n", b);
    
    printf("Final Values: a = %d, b = %d\n", a, b);

    return 0;
}
