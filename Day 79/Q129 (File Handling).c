// Q129: numbers.txt holds a list of integers separated by spaces. Read them all and print
// their sum and average.

/*
Sample Test Cases:
Input 1:
numbers.txt containing:
10 20 30 40 50
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main(void) {
    FILE *fp;
    int value, count = 0;
    long long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(fp, "%d", &value) == 1) {
        sum += value;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("numbers.txt has no integers\n");
        return 0;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", (double)sum / count);

    return 0;
}
