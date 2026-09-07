// Q52: Write a program to print the following pattern:
//
// *
//
// *
// *
// *
//
// *
// *
// *
// *
// *
//
// *
// *
// *
//
// *
//
// Fixed pattern: no input is required. Q52 follows the literal vertical layout published on the website.

/*
Sample Test Cases:
Input 1:
(none)
Output 1:
*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {
        int height = i <= 3 ? 2 * i - 1 : 2 * (6 - i) - 1;
        putchar('\n');
        for (j = 0; j < height; j++) puts("*");
    }
    putchar('\n');
    return 0;
}
