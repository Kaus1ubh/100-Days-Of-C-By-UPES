// Q113: Take an integer array arr and an integer k. Print the kth smallest element.

/*
Sample Test Cases:
Input 1:
10
10 5 4 3 48 6 2 33 53 10
4
Output 1:
5

Input 2:
6
7 10 4 3 20 15
3
Output 2:
7

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, j, k, smallest, temp;

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

    // Selection sort, stopped after k passes: the first k slots are then the k smallest in order.
    for (i = 0; i < k; i++) {
        smallest = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}
