// Q120: Take a string as input and change it to sentence case (capitalise the first letter of every word).
// The website calls this sentence case, but its samples capitalize each word; punctuation is preserved.

/*
Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

Input 2:
The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>

#define MAX 1000

int main(void) {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    if (fgets(str, MAX, stdin) == NULL) {
        return 0;
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if ((i == 0 || str[i - 1] == ' ') && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}
