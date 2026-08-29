// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
17
Output 1:
Prime

Input 2:
1
Output 2:
Not Prime

Input 3:
91
Output 3:
Not Prime

*/

#include <stdio.h>

int main(void) {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
