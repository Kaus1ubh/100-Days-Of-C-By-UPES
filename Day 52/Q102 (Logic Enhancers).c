// Q102: Take a sorted array arr[] and an integer x. Print the 0-based index of the ceil of x,
// the smallest element greater than or equal to x (first occurrence), or -1 if none exists.
// Follow-up: O(log n).

/*
Sample Test Cases:
Input 1:
7
1 2 8 10 11 12 19
5
Output 1:
2

Input 2:
7
1 2 8 10 11 12 19
20
Output 2:
-1

Input 3:
8
1 1 2 8 10 11 12 19
0
Output 3:
0

Input 4:
8
1 1 2 8 10 11 12 19
2
Output 4:
2

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, x;
    int low, high, mid, answer = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}
