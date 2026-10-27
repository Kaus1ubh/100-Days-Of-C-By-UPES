// Q126: Ask the user for a filename and try to open it in read mode. If the file pointer is NULL,
// print an error message; otherwise read and display its content.

/*
Sample Test Cases:
Input 1:
sample.txt
(sample.txt exists)
Output 1:
File opened successfully.
(contents of sample.txt)

Input 2:
nofile.txt
(nofile.txt does not exist)
Output 2:
Error: File does not exist!

*/

#include <stdio.h>

#define MAX 256

int main(void) {
    FILE *fp;
    char filename[MAX], line[MAX];

    printf("Enter the filename: ");
    if (scanf("%255s", filename) != 1) {
        return 0;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    while (fgets(line, MAX, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
