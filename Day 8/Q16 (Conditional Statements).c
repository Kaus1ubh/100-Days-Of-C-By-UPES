// Q16: Write a program to input three numbers and find the largest among them using if-else.

/*
Sample Test Cases:
Input 1:
3 9 5
Output 1:
Largest = 9

Input 2:
-4 -9 -1
Output 2:
Largest = -1

*/

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest = %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest = %d\n", b);
    } else {
        printf("Largest = %d\n", c);
    }

    return 0;
}
