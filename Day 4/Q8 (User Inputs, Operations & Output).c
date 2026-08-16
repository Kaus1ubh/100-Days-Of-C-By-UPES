// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
10
Output 1:
Sum = 55

Input 2:
100
Output 2:
Sum = 5050

*/

#include <stdio.h>

int main(void) {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n must be a positive integer\n");
        return 0;
    }

    sum = n * (n + 1) / 2;

    printf("Sum = %d\n", sum);

    return 0;
}
