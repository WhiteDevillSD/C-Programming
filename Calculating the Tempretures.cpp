#include <stdio.h>
int main() 
{
    float celsius, fahrenheit, kelvin;
    
    
    // Taking inputs of tempreture from the User.
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    
    // Calculating Fahrenheit using F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;
    
    
    // Calculating Kelvin using K = C + 273.15
    kelvin = celsius + 273.15;
    
    // Displaying the result:
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f\n", kelvin);
    
    return 0;
}
