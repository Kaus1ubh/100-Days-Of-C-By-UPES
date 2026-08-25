// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
// Input order is first number, second number, operator, as in 4 2 +.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    if (scanf("%d %d %c", &a, &b, &op) != 3) return 1;
    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/':
            if (b == 0) printf("Division by zero is not allowed\n");
            else printf("%.6g\n", (double)a / b);
            break;
        case '%':
            if (b == 0) printf("Division by zero is not allowed\n");
            else printf("%d\n", a % b);
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
