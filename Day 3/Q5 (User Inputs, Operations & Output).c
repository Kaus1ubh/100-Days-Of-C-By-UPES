// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
100
Output 1:
100.00 C = 212.00 F

Input 2:
37.5
Output 2:
37.50 C = 99.50 F

*/

#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);

    return 0;
}
