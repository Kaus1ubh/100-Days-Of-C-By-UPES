// Q124: Take a source and a destination filename from the user. Copy everything from the source
// file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
source.txt
destination.txt
(source.txt containing "Learning C File Handling")
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

#define MAX 256

int main(void) {
    FILE *src, *dest;
    char srcName[MAX], destName[MAX];
    int ch;

    printf("Enter the source filename: ");
    if (scanf("%255s", srcName) != 1) {
        return 0;
    }
    printf("Enter the destination filename: ");
    if (scanf("%255s", destName) != 1) {
        return 0;
    }

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error: could not open %s\n", srcName);
        return 1;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create %s\n", destName);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
