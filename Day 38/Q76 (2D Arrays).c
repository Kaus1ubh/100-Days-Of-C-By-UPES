// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

#define MAX 20

int main(void) {
    int matrix[MAX][MAX];
    int rows, cols, i, j, symmetric = 1;

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

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    for (i = 0; i < rows && symmetric == 1; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
