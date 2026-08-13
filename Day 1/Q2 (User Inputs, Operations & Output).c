// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
// Integer division follows the website samples (7 / 3 gives 2).

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Sum=%d, Diff=%d, Product=%d, ", a + b, a - b, a * b);
    if (b == 0) printf("Quotient=undefined (division by zero)\n");
    else printf("Quotient=%d\n", a / b);
    return 0;
}
