// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

Input 2:
4
7 7 3 1
Output 2:
3

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;
    int largest, second, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > MAX) {
        printf("Need at least 2 elements\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != largest) {
            if (found == 0 || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No second largest element\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}
