// Q127: Read text from input.txt, convert every lowercase letter to uppercase, and write the
// result to output.txt.

/*
Sample Test Cases:
Input 1:
input.txt containing:
Hello World
C programming
Output 1:
Converted input.txt to uppercase in output.txt

output.txt after running:
HELLO WORLD
C PROGRAMMING

*/

#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: could not open input.txt\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted input.txt to uppercase in output.txt\n");

    return 0;
}
