// Q14: Write a program to input a character and check whether it is a vowel or consonant using if-else.

/*
Sample Test Cases:
Input 1:
e
Output 1:
Vowel

Input 2:
k
Output 2:
Consonant

Input 3:
7
Output 3:
Not an alphabet

*/

#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch < 'a' || ch > 'z') {
        printf("Not an alphabet\n");
    } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
