// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2024
Output 1:
Leap Year

Input 2:
1900
Output 2:
Not a Leap Year

Input 3:
2000
Output 3:
Leap Year

*/

#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap Year\n");
    } else if (year % 100 == 0) {
        printf("Not a Leap Year\n");
    } else if (year % 4 == 0) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}
