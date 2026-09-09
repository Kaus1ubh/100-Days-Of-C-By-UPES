// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
20
Output 1:
2 3 5 7 11 13 17 19

Input 2:
1
Output 2:
No prime numbers in range

*/

#include <stdio.h>

int main(void) {
    int n, i, j, isPrime, found = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("No prime numbers in range");
    }
    printf("\n");

    return 0;
}
