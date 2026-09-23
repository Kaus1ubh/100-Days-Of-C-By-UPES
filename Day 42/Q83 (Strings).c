// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX], ch;
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
