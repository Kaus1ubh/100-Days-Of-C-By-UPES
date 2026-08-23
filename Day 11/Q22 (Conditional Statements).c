// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
500 650
Output 1:
Profit = 150.00
Profit Percentage = 30.00%

Input 2:
800 600
Output 2:
Loss = 200.00
Loss Percentage = 25.00%

Input 3:
400 400
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main(void) {
    double cp, sp;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);

    if (cp <= 0) {
        printf("Cost price must be greater than zero\n");
    } else if (sp > cp) {
        printf("Profit = %.2lf\n", sp - cp);
        printf("Profit Percentage = %.2lf%%\n", (sp - cp) * 100 / cp);
    } else if (sp < cp) {
        printf("Loss = %.2lf\n", cp - sp);
        printf("Loss Percentage = %.2lf%%\n", (cp - sp) * 100 / cp);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
