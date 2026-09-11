// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
6
-1 0 4 -7 0 9
Output 1:
Positive = 2
Negative = 2
Zero = 2

Input 2:
3
1 2 3
Output 2:
Positive = 3
Negative = 0
Zero = 0

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
