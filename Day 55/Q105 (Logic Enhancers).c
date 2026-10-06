// Q105: Take an integer array nums of size n and print the majority element, the one that
// appears strictly more than n / 2 times. Print -1 if no such element exists.
// Follow-up: O(n).

/*
Sample Test Cases:
Input 1:
3
3 2 3
Output 1:
3

Input 2:
7
2 2 1 1 1 2 2
Output 2:
2

Input 3:
8
2 2 1 1 1 2 2 3
Output 3:
-1

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int nums[MAX], n, i;
    int candidate = 0, votes = 0, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Boyer-Moore voting: a majority element survives every pairing-off with a different one.
    for (i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            votes++;
        } else {
            votes--;
        }
    }

    // The survivor is only a candidate; count it to confirm.
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
