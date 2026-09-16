// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

Input 2:
4
10 20 30 40
1
Output 2:
40 10 20 30

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], rotated[MAX], n, i, k;

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

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;
    if (k < 0) {
        k = k + n;
    }

    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
