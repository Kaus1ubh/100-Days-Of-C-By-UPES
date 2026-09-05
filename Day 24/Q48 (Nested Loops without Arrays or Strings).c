// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

/*
Sample Test Cases:
Input 1:
5
Output 1:
1
12
123
1234
12345

Input 2:
3
Output 2:
1
12
123

*/

#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
