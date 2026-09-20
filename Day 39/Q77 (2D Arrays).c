// Q77: Multiply two matrices.

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
19 22
43 50

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int a[MAX][MAX], b[MAX][MAX];
    int r1, c1, r2, c2, i, j, k;
    long long sum;

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

    if (c1 != r2) {
        printf("Columns of the first matrix must equal rows of the second\n");
        return 0;
    }

    if (c2 < 1 || c2 > MAX) {
        printf("Dimensions must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }
            printf("%lld ", sum);
        }
        printf("\n");
    }

    return 0;
}
