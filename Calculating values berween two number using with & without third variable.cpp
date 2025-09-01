#include <stdio.h>
int main() {
    int a, b, temp;
    
    
    // Taking two inputs from the User.
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    
    
    // Swaping using third variable.
    temp = b;
    b = a;
    a = temp;
    
    printf("\nAfter swapping using third variable:\n");
    printf("a = %d, b = %d\n", a, b);
    
    
    // Taking new/same inputs from the user without third variable,
    printf("\nEnter first number (a) again: ");
    scanf("%d", &a);
    printf("Enter second number (b) again: ");
    scanf("%d", &b);
    
    
    // Swaping without third variable.
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nAfter swapping without using third variable:\n");
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
