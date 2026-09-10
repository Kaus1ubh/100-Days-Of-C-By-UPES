// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
3 9 1 7 4
Output 1:
Maximum = 9
Minimum = 1

Input 2:
3
-5 -2 -9
Output 2:
Maximum = -2
Minimum = -9

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, max, min;

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

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
