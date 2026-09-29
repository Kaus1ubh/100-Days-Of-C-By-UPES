// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char a[MAX], b[MAX];
    int lenA = 0, lenB = 0, shift, i, match, rotation = 0;

    printf("Enter the first string: ");
    if (fgets(a, MAX, stdin) == NULL) {
        return 0;
    }
    printf("Enter the second string: ");
    if (fgets(b, MAX, stdin) == NULL) {
        return 0;
    }

    while (a[lenA] != '\0' && a[lenA] != '\n') {
        lenA++;
    }
    while (b[lenB] != '\0' && b[lenB] != '\n') {
        lenB++;
    }

    if (lenA == lenB && lenA == 0) {
        rotation = 1;
    } else if (lenA == lenB) {
        // Try every starting point in a, wrapping around to the front.
        for (shift = 0; shift < lenA; shift++) {
            match = 1;
            for (i = 0; i < lenA; i++) {
                if (a[(shift + i) % lenA] != b[i]) {
                    match = 0;
                    break;
                }
            }
            if (match == 1) {
                rotation = 1;
                break;
            }
        }
    }

    if (rotation == 1) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
