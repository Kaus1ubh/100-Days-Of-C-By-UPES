// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main(void) {
    int count[10] = {0};
    int digit, i, best;
    long long number;

    printf("Enter a number: ");
    scanf("%lld", &number);

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        printf("0\n");
        return 0;
    }

    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    best = 0;
    for (i = 1; i < 10; i++) {
        if (count[i] > count[best]) {
            best = i;
        }
    }

    printf("%d\n", best);

    return 0;
}
