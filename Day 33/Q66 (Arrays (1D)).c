// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, value, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n >= MAX) {
        printf("Size must be between 1 and %d\n", MAX - 1);
        return 0;
    }

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    position = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > value) {
            position = i;
            break;
        }
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
