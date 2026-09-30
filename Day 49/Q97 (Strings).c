// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char name[MAX], ch;
    int i;

    printf("Enter a name: ");
    if (fgets(name, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            ch = name[i];
            if (ch >= 'a' && ch <= 'z') {
                ch = ch - ('a' - 'A');
            }
            printf("%c.", ch);
        }
    }
    printf("\n");

    return 0;
}
