// Q122: Open an existing file (info.txt) and read it with fgets(), printing every line until EOF.

/*
Sample Test Cases:
Input 1:
info.txt containing:
Name: Rahul
Age: 23
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>

#define MAX 256

int main(void) {
    FILE *fp;
    char line[MAX];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open info.txt\n");
        return 1;
    }

    while (fgets(line, MAX, fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
