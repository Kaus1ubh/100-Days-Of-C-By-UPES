// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
Product of odd digits = 3

Input 2:
13579
Output 2:
Product of odd digits = 945

Input 3:
2468
Output 3:
No odd digits

*/

#include <stdio.h>

int main(void) {
    int n, digit, found = 0;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }

    if (found == 1) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits\n");
    }

    return 0;
}
