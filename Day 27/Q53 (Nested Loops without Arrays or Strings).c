// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
// Fixed pattern: no input is required.

/*
Sample Test Cases:
Input 1:
(none)
Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 9; i++) {
        int width = i <= 5 ? 2 * i - 1 : 2 * (10 - i) - 1;
        for (j = 0; j < width; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
