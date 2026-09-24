// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int len = 0, i, palindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
