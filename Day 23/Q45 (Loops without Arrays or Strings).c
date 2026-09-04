// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
// The nth term is (2n) / (4n - 1).

/*
Sample Test Cases:
Input 1:
4
Output 1:
Sum = 2.32

Input 2:
1
Output 2:
Sum = 0.67

*/

#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2 * i) / (4 * i - 1);
    }

    printf("Sum = %.2lf\n", sum);

    return 0;
}
