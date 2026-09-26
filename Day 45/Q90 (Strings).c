// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}
