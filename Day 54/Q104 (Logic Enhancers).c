// Q104: Take a positive integer n and find the pivot integer x such that 1 + 2 + ... + x
// equals x + (x + 1) + ... + n. Print x, or -1 if no such integer exists.
// Follow-up: O(log n), then O(1).

/*
Sample Test Cases:
Input 1:
8
Output 1:
6

Input 2:
1
Output 2:
1

Input 3:
4
Output 3:
-1

*/

#include <stdio.h>

int main(void) {
    long long n, total, low, high, mid;

    printf("Enter n: ");
    scanf("%lld", &n);

    if (n < 1) {
        printf("n must be positive\n");
        return 0;
    }

    // x(x + 1)/2 = total - x(x - 1)/2 simplifies to x * x = n(n + 1)/2,
    // so x is the square root of the total, if the total is a perfect square.
    total = n * (n + 1) / 2;

    low = 1;
    high = n;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (mid * mid == total) {
            printf("%lld\n", mid);
            return 0;
        } else if (mid * mid < total) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("-1\n");

    return 0;
}
