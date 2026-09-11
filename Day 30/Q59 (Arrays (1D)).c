// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even = 3
Odd = 3

Input 2:
4
2 4 6 8
Output 2:
Even = 4
Odd = 0

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}
