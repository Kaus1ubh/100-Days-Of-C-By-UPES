// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 4
Output 1:
Sum = 14
Difference = 6
Product = 40
Quotient = 2.50

Input 2:
7 2
Output 2:
Sum = 9
Difference = 5
Product = 14
Quotient = 3.50

*/

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b == 0) {
        printf("Quotient = undefined (division by zero)\n");
    } else {
        printf("Quotient = %.2f\n", (float)a / b);
    }

    return 0;
}
