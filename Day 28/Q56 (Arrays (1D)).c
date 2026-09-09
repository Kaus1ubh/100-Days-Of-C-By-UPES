// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
10 20 30 40 50

Input 2:
3
-1 0 7
Output 2:
-1 0 7

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;

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

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
