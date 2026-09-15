// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, position;

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

    printf("Enter the position (index) to delete: ");
    scanf("%d", &position);

    if (position < 0 || position > n - 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    if (n == 0) {
        printf("Array is now empty\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
