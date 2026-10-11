// Q110: Take an integer array arr and an integer k. Print the maximum element of each
// subarray of size k, moving from left to right, separated by spaces.

/*
Sample Test Cases:
Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6

Input 2:
5
5 1 3 4 2
1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, j, k, largest;

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

    for (i = 0; i + k <= n; i++) {
        largest = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > largest) {
                largest = arr[j];
            }
        }
        if (i > 0) {
            printf(" ");
        }
        printf("%d", largest);
    }
    printf("\n");

    return 0;
}
