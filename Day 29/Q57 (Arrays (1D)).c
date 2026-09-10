// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Sum = 15

Input 2:
4
-3 8 -2 1
Output 2:
Sum = 4

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;
    long long sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %lld\n", sum);

    return 0;
}
