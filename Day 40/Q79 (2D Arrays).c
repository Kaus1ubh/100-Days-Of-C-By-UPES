// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
#define MAX 20

int main(void) {
    int matrix[MAX][MAX], rows, cols, i, j, diagonal, first = 1;
    if (scanf("%d %d", &rows, &cols) != 2 ||
        rows < 1 || rows > MAX || cols < 1 || cols > MAX) return 1;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
    for (diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        int low = diagonal >= cols ? diagonal - cols + 1 : 0;
        int high = diagonal < rows ? diagonal : rows - 1;
        int step = diagonal % 2 == 0 ? -1 : 1;
        i = step == -1 ? high : low;
        while (i >= low && i <= high) {
            if (!first) putchar(' ');
            printf("%d", matrix[i][diagonal - i]);
            first = 0;
            i += step;
        }
    }
    putchar('\n');
    return 0;
}
