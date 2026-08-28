// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
Binary = 1010

Input 2:
0
Output 2:
Binary = 0

*/

#include <stdio.h>

int main(void) {
    int n, i, started = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number\n");
        return 0;
    }

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    printf("Binary = ");
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) {
            started = 1;
        }
        if (started == 1) {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}
