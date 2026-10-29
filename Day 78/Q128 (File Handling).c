// Q128: Read a text file and count how many vowels and consonants it contains.
// Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
text.txt
(text.txt containing "Welcome to C language")
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>

#define MAX 256

int main(void) {
    FILE *fp;
    char filename[MAX];
    int ch, vowels = 0, consonants = 0;

    printf("Enter the filename: ");
    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
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

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
