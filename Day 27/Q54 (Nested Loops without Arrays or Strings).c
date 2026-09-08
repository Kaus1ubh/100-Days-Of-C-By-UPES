// Q54: Write a program to print the following pattern:
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

/*
Sample Test Cases:
Input 1:
4
Output 1:
   *
  ***
 *****
*******
 *****
  ***
   *

Input 2:
3
Output 2:
  *
 ***
*****
 ***
  *

*/

#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter the number of rows in the upper half: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
