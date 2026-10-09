// Q108: Take an integer array nums and print an array answer where answer[i] is the product of
// every element of nums except nums[i]. Every prefix and suffix product fits in 32 bits.
// Follow-up: O(n) without using division.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
[24,12,8,6]

Input 2:
5
-1 1 0 -3 3
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int nums[MAX], answer[MAX], n, i, suffix;

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

    // First pass: answer[i] holds the product of everything to the left of i.
    answer[0] = 1;
    for (i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Second pass: multiply in the product of everything to the right of i.
    suffix = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("[");
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", answer[i]);
    }
    printf("]\n");

    return 0;
}
