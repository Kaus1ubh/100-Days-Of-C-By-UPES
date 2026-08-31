// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Sum of digits = 10

Input 2:
905
Output 2:
Sum of digits = 14

*/

#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
