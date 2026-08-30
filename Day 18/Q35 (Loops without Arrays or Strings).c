// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
12
Output 1:
1 2 3 4 6 12

Input 2:
7
Output 2:
1 7

*/

#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
