// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char name[MAX], ch;
    int len = 0, i, last = 0;

    printf("Enter a name: ");
    if (fgets(name, MAX, stdin) == NULL) {
        return 0;
    }

    while (name[len] != '\0' && name[len] != '\n') {
        len++;
    }
    while (len > 0 && name[len - 1] == ' ') {
        len--;
    }
    name[len] = '\0';

    // The surname starts after the last space.
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            last = i + 1;
        }
    }

    for (i = 0; i < last; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            ch = name[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - ('a' - 'A');
            }
            printf("%c.", ch);
        }
    }

    if (last > 0) {
        printf(" ");
    }
    printf("%s\n", name + last);

    return 0;
}
