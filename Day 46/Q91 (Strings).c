// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX], result[MAX], ch;
    int i, j = 0;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
