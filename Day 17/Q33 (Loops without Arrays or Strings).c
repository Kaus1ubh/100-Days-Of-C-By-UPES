// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong Number

Input 2:
9474
Output 2:
Armstrong Number

Input 3:
123
Output 3:
Not an Armstrong Number

*/

#include <stdio.h>

int main(void) {
    int n, original, temp, digits = 0, i;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        long long power = 1;
        for (i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
