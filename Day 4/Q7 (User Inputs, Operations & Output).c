// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
5 9
Output 1:
Before swap: a = 5, b = 9
After swap: a = 9, b = 5

Input 2:
20 8
Output 2:
Before swap: a = 20, b = 8
After swap: a = 8, b = 20

*/

#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
