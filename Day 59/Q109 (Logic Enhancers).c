// Q109: Take an integer array arr and an integer k. Print the maximum sum of all the
// subarrays of size k.

/*
Sample Test Cases:
Input 1:
4
100 200 300 400
2
Output 1:
700

Input 2:
9
1 4 2 10 23 3 1 0 20
4
Output 2:
39

Input 3:
4
100 200 300 400
1
Output 3:
400

*/

#include <stdio.h>

#define MAX 100

int main(void) {
    int arr[MAX], n, i, k;
    long long sum = 0, best;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Size must be between 1 and %d\n", MAX);
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("k must be between 1 and %d\n", n);
        return 0;
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    best = sum;

    // Slide the window one step: add the element entering, drop the one leaving.
    for (i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        if (sum > best) {
            best = sum;
        }
    }

    printf("%lld\n", best);

    return 0;
}
