// Q54: Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
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
 *****
  ***
   *

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 7; i++) {
        int level = i <= 4 ? i : 8 - i;
        for (j = 0; j < 4 - level; j++) putchar(' ');
        for (j = 0; j < 2 * level - 1; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
