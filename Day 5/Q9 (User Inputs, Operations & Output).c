// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 10 2
Output 1:
Simple Interest = 200.00
Compound Interest = 210.00

Input 2:
5000 8 3
Output 2:
Simple Interest = 1200.00
Compound Interest = 1298.56

*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time, si, ci;

    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    si = (principal * rate * time) / 100;
    ci = principal * pow(1 + rate / 100, time) - principal;

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}
