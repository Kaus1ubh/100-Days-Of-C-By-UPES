// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
// Fixed pattern: no input is required.

/*
Sample Test Cases:
Input 1:
(none)
Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j < i; j++) putchar(' ');
        for (j = i; j <= 5; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
