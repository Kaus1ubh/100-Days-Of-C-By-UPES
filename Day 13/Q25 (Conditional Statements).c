// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
12 + 8
Output 1:
Result = 20

Input 2:
9 / 2
Output 2:
Result = 4.50

Input 3:
17 % 5
Output 3:
Result = 2

*/

#include <stdio.h>

int main(void) {
    int a, b;
    char op;

    printf("Enter an expression (for example 12 + 8): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Division by zero is not allowed\n");
            } else {
                printf("Result = %.2f\n", (float)a / b);
            }
            break;
        case '%':
            if (b == 0) {
                printf("Division by zero is not allowed\n");
            } else {
                printf("Result = %d\n", a % b);
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
