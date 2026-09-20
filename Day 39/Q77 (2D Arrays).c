// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
#define MAX 20

int main(void) {
    int matrix[MAX][MAX], rows, cols, i, j, count;
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX || cols < 1 || cols > MAX) return 1;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
    count = rows < cols ? rows : cols;
    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                printf("False\n");
                return 0;
            }
        }
    }
    printf("True\n");
    return 0;
}
