// Q24: Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at Rs.5/unit
// Next 100 units at Rs.7/unit
// Next 100 units at Rs.10/unit
// Above at Rs.12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: Rs.250

Input 2:
150
Output 2:
Bill: Rs.850

Input 3:
250
Output 3:
Bill: Rs.1700

*/

#include <stdio.h>

int main(void) {
    int units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Units cannot be negative\n");
        return 0;
    }

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Bill: Rs.%d\n", bill);

    return 0;
}
