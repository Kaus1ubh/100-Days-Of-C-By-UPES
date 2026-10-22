// Q121: Create a text file named info.txt in write mode. Take the user's name and age as input,
// write them to the file using fprintf(), then confirm that the data was saved.

/*
Sample Test Cases:
Input 1:
Rahul
23
Output 1:
File created successfully! Data written to info.txt

info.txt after running:
Name: Rahul
Age: 23

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    FILE *fp;
    char name[MAX];
    int age, i;

    printf("Enter your name: ");
    if (fgets(name, MAX, stdin) == NULL) {
        return 0;
    }
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create info.txt\n");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
