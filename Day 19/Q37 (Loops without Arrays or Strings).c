// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 6
Output 1:
LCM = 12

Input 2:
21 6
Output 2:
LCM = 42

*/

#include <stdio.h>

int main(void) {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter two positive numbers\n");
        return 0;
    }

    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("LCM = %d\n", (a / x) * b);

    return 0;
}
