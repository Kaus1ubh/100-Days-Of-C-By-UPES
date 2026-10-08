// Q107: Take an array arr[] and print the previous greater element for each element: the
// nearest element to its left that is greater, or -1 if there is none. Print comma separated.
// Use brute force (nested loop), not a stack.

/*
Sample Test Cases:
Input 1:
4
1 3 2 4
Output 1:
-1, -1, 3, -1

Input 2:
5
6 8 0 1 3
Output 2:
-1, -1, 8, 8, 8

Input 3:
4
1 2 3 5
Output 3:
-1, -1, -1, -1

Input 4:
4
5 4 3 1
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, j, previous;

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
        previous = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }
        if (i > 0) {
            printf(", ");
        }
        printf("%d", previous);
    }
    printf("\n");

    return 0;
}
