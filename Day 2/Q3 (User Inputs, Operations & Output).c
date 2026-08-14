// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 3
Output 1:
Area = 15.00
Perimeter = 16.00

Input 2:
2.5 4
Output 2:
Area = 10.00
Perimeter = 13.00

*/

#include <stdio.h>

int main(void) {
    float length, breadth;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    printf("Area = %.2f\n", length * breadth);
    printf("Perimeter = %.2f\n", 2 * (length + breadth));

    return 0;
}
