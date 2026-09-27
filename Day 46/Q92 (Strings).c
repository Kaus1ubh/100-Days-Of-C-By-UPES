// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int seen[26] = {0};
    int i;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (seen[str[i] - 'a'] == 1) {
                printf("%c\n", str[i]);
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }

    printf("No repeating character\n");

    return 0;
}
