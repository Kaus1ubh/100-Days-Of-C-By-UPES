// Q17: Write a program to input three numbers and find the largest among them using the conditional (ternary) operator.

/*
Sample Test Cases:
Input 1:
3 9 5
Output 1:
Largest = 9

Input 2:
15 2 15
Output 2:
Largest = 15

*/

#include <stdio.h>

int main(void) {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest = %d\n", largest);

    return 0;
}
