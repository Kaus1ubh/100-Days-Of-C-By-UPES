// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX], temp;
    int len = 0, i;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("%s\n", str);

    return 0;
}
