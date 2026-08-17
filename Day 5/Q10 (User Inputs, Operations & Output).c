// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7325
Output 2:
2:2:5

*/

#include <stdio.h>

int main(void) {
    int total, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
