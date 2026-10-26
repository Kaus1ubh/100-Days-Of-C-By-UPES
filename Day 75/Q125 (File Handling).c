// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
data.txt
This is appended text.
(data.txt initially contains Hello world, without a trailing newline)
Output 1:
File updated successfully with appended text.

data.txt after running:
Hello world
This is appended text.

*/

#include <stdio.h>
#define MAX 256

int main(void) {
    FILE *fp;
    char filename[MAX], text[MAX];
    int i, ch, last = EOF;
    if (fgets(filename, MAX, stdin) == NULL) return 1;
    for (i = 0; filename[i] != '\0'; i++)
        if (filename[i] == '\n') { filename[i] = '\0'; break; }
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: %s does not exist\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) last = ch;
    if (ferror(fp)) { fclose(fp); return 1; }
    fclose(fp);
    if (fgets(text, MAX, stdin) == NULL) return 1;
    fp = fopen(filename, "a");
    if (fp == NULL) return 1;
    if (last != EOF && last != '\n') fputc('\n', fp);
    fputs(text, fp);
    if (fclose(fp) == EOF) return 1;
    printf("File updated successfully with appended text.\n");
    return 0;
}
