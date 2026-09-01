// Q40: Write a program to find the 1's complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
1s complement = 0101

Input 2:
1111
Output 2:
1s complement = 0000

*/

#include <stdio.h>

int main(void) {
    long long binary, temp, place = 1;
    long long complement = 0;
    int valid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1) {
            valid = 0;
            break;
        }
        temp /= 10;
    }

    if (valid == 0) {
        printf("Not a valid binary number\n");
        return 0;
    }

    temp = binary;
    while (temp > 0) {
        int digit = temp % 10;
        complement += (digit == 0 ? 1 : 0) * place;
        place *= 10;
        temp /= 10;
    }

    printf("1s complement = ");
    place /= 10;
    while (place > 0) {
        printf("%lld", (complement / place) % 10);
        place /= 10;
    }
    printf("\n");

    return 0;
}
