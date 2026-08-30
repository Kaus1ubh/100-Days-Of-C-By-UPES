// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
HCF = 6

Input 2:
17 5
Output 2:
HCF = 1

*/

#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d\n", a);

    return 0;
}
