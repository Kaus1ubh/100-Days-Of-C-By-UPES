// Q79: Check whether a matrix is an identity matrix.

/*
Sample Test Cases:
Input 1:
3
1 0 0
0 1 0
0 0 1
Output 1:
True

Input 2:
2
1 0
1 1
Output 2:
False

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int matrix[MAX][MAX];
    int n, i, j, identity = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Order must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n && identity == 1; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                identity = 0;
                break;
            }
            if (i != j && matrix[i][j] != 0) {
                identity = 0;
                break;
            }
        }
    }

    if (identity == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
