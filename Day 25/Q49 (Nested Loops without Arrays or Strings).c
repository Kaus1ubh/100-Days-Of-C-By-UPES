// Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

/*
Sample Test Cases:
Input 1:
5
Output 1:
5
45
345
2345
12345

Input 2:
3
Output 2:
3
23
123

*/

#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
