// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char a[MAX], b[MAX];
    int count[256] = {0};
    int i, anagram = 1;

    printf("Enter the first string: ");
    if (fgets(a, MAX, stdin) == NULL) {
        return 0;
    }
    printf("Enter the second string: ");
    if (fgets(b, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++) {
        count[(unsigned char)a[i]]++;
    }
    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++) {
        count[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
