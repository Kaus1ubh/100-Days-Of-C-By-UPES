// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main(void) {
    const char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                              "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int day, month, year;

    printf("Enter the date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &day, &month, &year) != 3 || month < 1 || month > 12) {
        printf("Invalid date\n");
        return 0;
    }

    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
