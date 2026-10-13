// Q112: Take an integer array arr and print the maximum sum of any contiguous subarray using
// Kadane's algorithm. If every element is negative, print the largest one.

/*
Sample Test Cases:
Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
2
-2 -4
Output 2:
-2

Input 3:
5
5 4 1 7 8
Output 3:
25

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;
    long long current, best;

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

    // current is the best sum of a subarray ending at i: extend the previous one,
    // or start fresh at arr[i] if the previous one had gone negative.
    current = arr[0];
    best = arr[0];
    for (i = 1; i < n; i++) {
        if (current < 0) {
            current = arr[i];
        } else {
            current = current + arr[i];
        }
        if (current > best) {
            best = current;
        }
    }

    printf("%lld\n", best);

    return 0;
}
