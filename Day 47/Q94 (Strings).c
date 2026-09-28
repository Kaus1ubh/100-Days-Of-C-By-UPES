// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int i = 0, start, len;
    int bestStart = 0, bestLen = 0;

    printf("Enter a sentence: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    while (str[i] != '\0' && str[i] != '\n') {
        while (str[i] == ' ') {
            i++;
        }
        start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        len = i - start;
        if (len > bestLen) {
            bestLen = len;
            bestStart = start;
        }
    }

    for (i = bestStart; i < bestStart + bestLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
