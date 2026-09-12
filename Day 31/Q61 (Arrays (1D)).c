// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Found at position 3

Input 2:
4
1 2 3 4
7
Output 2:
Not Found

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, key, position = -1;

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

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i + 1;
            break;
        }
    }

    if (position == -1) {
        printf("Not Found\n");
    } else {
        printf("Found at position %d\n", position);
    }

    return 0;
}
