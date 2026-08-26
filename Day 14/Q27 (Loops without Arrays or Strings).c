// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum = 25

Input 2:
10
Output 2:
Sum = 100

*/

#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
