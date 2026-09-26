// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX], target;
    int i, count = 0;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    printf("Enter the character: ");
    scanf(" %c", &target);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
