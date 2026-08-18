// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.

/*
Sample Test Cases:
Input 1:
25
Output 1:
Positive

Input 2:
-7
Output 2:
Negative

Input 3:
0
Output 3:
Zero

*/

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
