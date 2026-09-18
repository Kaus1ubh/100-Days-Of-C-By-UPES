// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int matrix[MAX][MAX];
    int rows, cols, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > MAX || cols < 1 || cols > MAX) {
        printf("Dimensions must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
