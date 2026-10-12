// Q111: Take an integer array arr and an integer k. Print the first negative integer of each
// subarray of size k, moving from left to right, or 0 if a window has no negative.
// Separate the results with spaces.

/*
Sample Test Cases:
Input 1:
5
-8 2 3 -6 10
2
Output 1:
-8 0 -6 -6

Input 2:
8
12 -1 -7 8 -15 30 16 28
3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
4
12 1 3 5
3
Output 3:
0 0

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, k, neg = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("k must be between 1 and %d\n", n);
        return 0;
    }

    // neg points at the earliest negative not yet behind the window.
    // It only moves forward, so the whole scan is O(n).
    for (i = 0; i + k <= n; i++) {
        if (neg < i) {
            neg = i;
        }
        while (neg < i + k && arr[neg] >= 0) {
            neg++;
        }
        if (i > 0) {
            printf(" ");
        }
        if (neg < i + k) {
            printf("%d", arr[neg]);
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
