// Q118: Take an array of size n that contains every integer from 0 to n except one.
// Print the missing number.

/*
Sample Test Cases:
Input 1:
4
0 3 2 4
Output 1:
1

Input 2:
3
1 2 3
Output 2:
0

Input 3:
5
0 4 3 1 5
Output 3:
2

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i;
    long long expected, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // 0 + 1 + ... + n, minus what is actually there.
    expected = (long long)n * (n + 1) / 2;

    printf("%lld\n", expected - sum);

    return 0;
}
