// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Reversed = 4321

Input 2:
1200
Output 2:
Reversed = 21

*/

#include <stdio.h>

int main(void) {
    int n, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed = %d\n", reversed);

    return 0;
}
