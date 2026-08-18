// Q11: Write a program to input an integer and check whether it is even or odd using if-else.

/*
Sample Test Cases:
Input 1:
8
Output 1:
Even

Input 2:
13
Output 2:
Odd

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
