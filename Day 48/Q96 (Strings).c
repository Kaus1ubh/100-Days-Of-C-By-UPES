// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX], temp;
    int i = 0, start, end;

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
        end = i - 1;
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}
