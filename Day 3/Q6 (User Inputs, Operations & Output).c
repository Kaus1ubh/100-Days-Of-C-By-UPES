// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
5 9
Output 1:
Before swap: a = 5, b = 9
After swap: a = 9, b = 5

Input 2:
-3 12
Output 2:
Before swap: a = -3, b = 12
After swap: a = 12, b = -3

*/

#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
