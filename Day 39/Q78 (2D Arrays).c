// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>
#define MAX 20

int main(void) {
    int rows, cols, i, j, value;
    long long sum = 0;
    if (scanf("%d %d", &rows, &cols) != 2 || rows != cols ||
        rows < 1 || rows > MAX) return 1;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &value) != 1) return 1;
            if (i == j) sum += value;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
