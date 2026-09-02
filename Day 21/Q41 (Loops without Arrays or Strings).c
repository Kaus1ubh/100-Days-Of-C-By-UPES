// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Swapped = 4231

Input 2:
7
Output 2:
Swapped = 7

*/

#include <stdio.h>

int main(void) {
    int n, first, last, digits = 0, temp, i, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number\n");
        return 0;
    }

    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    if (digits <= 1) {
        printf("Swapped = %d\n", n);
        return 0;
    }

    for (i = 1; i < digits; i++) {
        power *= 10;
    }

    first = n / power;
    last = n % 10;

    n = n - first * power - last;
    n = n + last * power + first;

    printf("Swapped = %d\n", n);

    return 0;
}
