// Q114: Take a string s and print the length of the longest substring without repeating characters.

/*
Sample Test Cases:
Input 1:
abcabcbb
Output 1:
3

Input 2:
bbbbb
Output 2:
1

Input 3:
pwwkew
Output 3:
3

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char s[MAX];
    int lastSeen[256];
    int i, left = 0, best = 0;
    unsigned char ch;

    printf("Enter a string: ");
    if (fgets(s, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    // The window s[left..i] never holds a repeat. When s[i] was already inside it,
    // move left to just past that earlier copy.
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        ch = (unsigned char)s[i];
        if (lastSeen[ch] >= left) {
            left = lastSeen[ch] + 1;
        }
        lastSeen[ch] = i;
        if (i - left + 1 > best) {
            best = i - left + 1;
        }
    }

    printf("%d\n", best);

    return 0;
}
