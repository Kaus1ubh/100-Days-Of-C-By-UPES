// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
8
Output 1:
Product = 384

Input 2:
5
Output 2:
Product = 8

*/

#include <stdio.h>

int main(void) {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    if (n < 2) {
        printf("No even numbers in range\n");
    } else {
        printf("Product = %lld\n", product);
    }

    return 0;
}
