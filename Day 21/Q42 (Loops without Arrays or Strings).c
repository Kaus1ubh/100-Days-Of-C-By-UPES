// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
28
Output 1:
Perfect Number

Input 2:
12
Output 2:
Not a Perfect Number

*/

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not a Perfect Number\n");
        return 0;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }

    return 0;
}
