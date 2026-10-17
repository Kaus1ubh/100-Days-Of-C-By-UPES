// Q116: Take an array nums of positive integers and an integer target. Print two distinct
// indices i and j with nums[i] + nums[j] == target, separated by a space, or "-1 -1" if none exist.

/*
Sample Test Cases:
Input 1:
4
2 7 11 15
9
Output 1:
0 1

Input 2:
3
3 2 4
6
Output 2:
1 2

Input 3:
2
3 3
6
Output 3:
0 1

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int nums[MAX], n, i, j, target;

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

    printf("Enter the target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");

    return 0;
}
