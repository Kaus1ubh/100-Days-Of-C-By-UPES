// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
#define MAX 20

int main(void) {
    int a[MAX][MAX], b[MAX][MAX], r1, c1, r2, c2, i, j, k;
    if (scanf("%d %d", &r1, &c1) != 2 ||
        r1 < 1 || r1 > MAX || c1 < 1 || c1 > MAX) return 1;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            if (scanf("%d", &a[i][j]) != 1) return 1;
    if (scanf("%d %d", &r2, &c2) != 2 || r2 != c1 ||
        c2 < 1 || c2 > MAX) return 1;
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            if (scanf("%d", &b[i][j]) != 1) return 1;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            long long sum = 0;
            for (k = 0; k < c1; k++) sum += (long long)a[i][k] * b[k][j];
            if (j != 0) putchar(' ');
            printf("%lld", sum);
        }
        putchar('\n');
    }
    return 0;
}
