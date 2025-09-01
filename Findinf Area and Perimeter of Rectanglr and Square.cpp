#include <stdio.h>
int main() 
{
    float side1, side2;
    float rectangle_area, rectangle_perimeter;
    float square_area, square_perimeter;
    
    
    // Taking inputs of sides from the User.
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    
    
    // Calculating area and perimeter of Rectangle.
    rectangle_area = side1 * side2;
    rectangle_perimeter = 2 * (side1 + side2);
    
    
    // Calculating area and perimeter of Square (All sides of the square are equal, so side1 is used.)
    square_area = side1 * side1;
    square_perimeter = 4 * side1;
    
    
    // ????? ??????? ???
    printf("\nRectangle Area: %.2f\n", rectangle_area);
    printf("Rectangle Perimeter: %.2f\n", rectangle_perimeter);
    printf("Square Area (using side1): %.2f\n", square_area);
    printf("Square Perimeter (using side1): %.2f\n", square_perimeter);
    return 0;
}
