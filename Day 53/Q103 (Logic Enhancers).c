// Q103: Take an array of integers and print the leftmost pivot index, where the sum of the
// elements strictly to the left equals the sum strictly to the right. Print -1 if none exists.
// Follow-up: O(n).

/*
Sample Test Cases:
Input 1:
6
1 7 3 6 5 6
Output 1:
3

Input 2:
3
1 2 3
Output 2:
-1

Input 3:
3
2 1 -1
Output 3:
0

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int nums[MAX], n, i;
    long long total = 0, left = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    // Right sum is whatever is left of the total after the left part and nums[i].
    for (i = 0; i < n; i++) {
        if (left == total - left - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += nums[i];
    }

    printf("-1\n");

    return 0;
}
