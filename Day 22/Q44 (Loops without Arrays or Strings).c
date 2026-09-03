// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
// The first term is 1. Website sample totals are inconsistent with the written series.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Sum = 2.58

Input 2:
5
Output 2:
Sum = 4.36

Input 3:
1
Output 3:
Sum = 1.00

*/

#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0.0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    if (n > 0) sum = 1.0;
    for (i = 2; i <= n; i++) sum += (2.0 * i - 1.0) / (2.0 * i);
    printf("Sum = %.2f\n", sum);
    return 0;
}
