// Q78: Find the sum of the diagonal elements of a square matrix.

/*
Sample Test Cases:
Input 1:
3
1 2 3
4 5 6
7 8 9
Output 1:
Principal diagonal = 15
Secondary diagonal = 15

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int matrix[MAX][MAX];
    int n, i, j;
    long long principal = 0, secondary = 0;

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

    for (i = 0; i < n; i++) {
        principal += matrix[i][i];
        secondary += matrix[i][n - 1 - i];
    }

    printf("Principal diagonal = %lld\n", principal);
    printf("Secondary diagonal = %lld\n", secondary);

    return 0;
}
