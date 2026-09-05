// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345
// Fixed pattern: no input is required.

/*
Sample Test Cases:
Input 1:
(none)
Output 1:
1
12
123
1234
12345

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
