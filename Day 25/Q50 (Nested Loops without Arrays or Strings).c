// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
// Fixed pattern: no input is required.

/*
Sample Test Cases:
Input 1:
(none)
Output 1:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++) putchar(' ');
        for (j = 0; j < 5 - i; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
