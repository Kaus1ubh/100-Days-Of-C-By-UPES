// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, discriminant;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a == 0.0) {
        if (b != 0.0) printf("Linear equation: root = %.6g\n", -c / b);
        else if (c == 0.0) printf("Infinitely many solutions\n");
        else printf("No solution\n");
        return 0;
    }
    discriminant = b * b - 4.0 * a * c;
    if (discriminant > 0.0) {
        double root = sqrt(discriminant);
        printf("Roots are real and different: %.6g, %.6g\n",
               (-b + root) / (2.0 * a), (-b - root) / (2.0 * a));
    } else if (discriminant == 0.0) {
        printf("Roots are real and same: %.6g\n", -b / (2.0 * a));
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}
