// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong Number

Input 2:
123
Output 2:
Not a Strong Number

*/

#include <stdio.h>

int main(void) {
    int n, temp, digit, i;
    long long sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Not a Strong Number\n");
        return 0;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        factorial = 1;
        for (i = 2; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}
