// Q101: Take a sorted array nums[] (elements may repeat) and an integer target.
// Print the index of the first and last occurrence of target, or -1,-1 if it is not present.
// Follow-up: O(log n).

/*
Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3,4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1,-1

Input 3:
6
5 7 7 8 8 10
10
Output 3:
5,5

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int nums[MAX], n, i, target;
    int low, high, mid, first = -1, last = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    // Binary search for the first occurrence: on a match, keep looking left.
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Binary search for the last occurrence: on a match, keep looking right.
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
