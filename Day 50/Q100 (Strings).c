// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int len = 0, i, j, k, first = 1;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (first == 0) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
