// Q117: Take two sorted arrays of size m and n and merge them into one sorted array. Print it.

/*
Sample Test Cases:
Input 1:
4
2 7 11 15
3
4 8 10
Output 1:
2 4 7 8 10 11 15

Input 2:
3
1 2 7
3
9 10 17
Output 2:
1 2 7 9 10 17

Input 3:
3
-10 -2 7
3
-3 -1 7
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int a[MAX], b[MAX], merged[2 * MAX];
    int m, n, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    if (m < 0 || m > MAX) {
        printf("Size must be between 0 and %d\n", MAX);
        return 0;
    }
    printf("Enter %d sorted elements: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    if (n < 0 || n > MAX) {
        printf("Size must be between 0 and %d\n", MAX);
        return 0;
    }
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Take the smaller front element each time; copy whatever is left over at the end.
    i = 0;
    j = 0;
    k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }

    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
