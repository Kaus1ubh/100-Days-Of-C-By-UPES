// Q4: Write a program to calculate the area and circumference of a circle given its radius.
// Website sample typo: for radius 7, circumference rounds to 43.98 using pi, not 43.96.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area = 153.94
Circumference = 43.98

Input 2:
2.5
Output 2:
Area = 19.63
Circumference = 15.71

*/

#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Area = %.2lf\n", PI * radius * radius);
    printf("Circumference = %.2lf\n", 2 * PI * radius);

    return 0;
}
