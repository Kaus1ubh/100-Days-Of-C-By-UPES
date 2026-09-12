// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
#define MAX 100

int main(void) {
    int arr[MAX], n, i, key;
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 1;
    for (i = 0; i < n; i++) if (scanf("%d", &arr[i]) != 1) return 1;
    if (scanf("%d", &key) != 1) return 1;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
