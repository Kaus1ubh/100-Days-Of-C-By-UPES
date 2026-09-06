// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:
5
Output 1:
*****
 ****
  ***
   **
    *

Input 2:
3
Output 2:
***
 **
  *

*/

#include <stdio.h>

int main(void) {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
