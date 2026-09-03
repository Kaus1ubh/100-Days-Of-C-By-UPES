// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
// The nth term is (2n - 1) / (2n).

/*
Sample Test Cases:
Input 1:
4
Output 1:
Sum = 2.96

Input 2:
1
Output 2:
Sum = 0.50

*/

#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i - 1) / (2 * i);
    }

    printf("Sum = %.2lf\n", sum);

    return 0;
}
