// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, position, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Size must be between 1 and %d\n", MAX - 1);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (index) and the value to insert: ");
    scanf("%d %d", &position, &value);

    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
