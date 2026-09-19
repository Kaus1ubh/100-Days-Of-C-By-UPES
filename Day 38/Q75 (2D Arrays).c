// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2, i, j;

    printf("Enter the rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);

    if (r1 < 1 || r1 > MAX || c1 < 1 || c1 > MAX) {
        printf("Dimensions must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices must have the same dimensions\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
