// Q115: Take two lowercase strings s and t. Print "Anagram" if they contain the same characters
// with the same frequencies, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
anagram
nagaram
Output 1:
Anagram

Input 2:
rat
car
Output 2:
Not Anagram

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char s[MAX], t[MAX];
    int count[26] = {0};
    int i, anagram = 1;

    printf("Enter s: ");
    if (fgets(s, MAX, stdin) == NULL) {
        return 0;
    }
    printf("Enter t: ");
    if (fgets(t, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; s[i] >= 'a' && s[i] <= 'z'; i++) {
        count[s[i] - 'a']++;
    }
    for (i = 0; t[i] >= 'a' && t[i] <= 'z'; i++) {
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
