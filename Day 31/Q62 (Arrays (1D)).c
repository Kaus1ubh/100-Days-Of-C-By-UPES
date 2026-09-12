// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
5 4 3 2 1

Input 2:
4
10 20 30 40
Output 2:
40 30 20 10

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, start, end, temp;

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

    start = 0;
    end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
