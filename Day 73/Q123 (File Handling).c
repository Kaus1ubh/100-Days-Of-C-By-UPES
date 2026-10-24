// Q123: Read a text file and count the total number of characters, words, and lines.
// A word is a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
sample.txt
(sample.txt contains "Hello world\nThis is C programming", without a trailing newline)
Output 1:
Characters: 33
Words: 6
Lines: 2

*/

#include <stdio.h>

#define MAX 256

int main(void) {
    FILE *fp;
    char filename[MAX];
    int ch, last = '\n';
    int characters = 0, words = 0, lines = 0, inWord = 0;

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
        characters++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
        last = ch;
    }

    // A last line with no newline after it still counts.
    if (last != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
