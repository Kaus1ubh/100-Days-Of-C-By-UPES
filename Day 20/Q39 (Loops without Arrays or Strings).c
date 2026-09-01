// Q39: Write a program to find the product of odd digits of a number.
// If no odd digit exists, the product remains 1.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15

Input 2:
2468
Output 2:
1

*/

#include <stdio.h>

int main(void) {
    long long n, product = 1;
    if (scanf("%lld", &n) != 1) return 1;
    do {
        int digit = (int)(n % 10);
        if (digit < 0) digit = -digit;
        if (digit % 2 != 0) product *= digit;
        n /= 10;
    } while (n != 0);
    printf("%lld\n", product);
    return 0;
}
