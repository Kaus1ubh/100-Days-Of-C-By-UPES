// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
// A hash table accepts the full signed int range; the input is consumed in one pass.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    size_t n, capacity, i;
    int *keys;
    unsigned char *used;
    int repeated = 0, found = 0;
    if (scanf("%zu", &n) != 1 || n == 0 ||
        n > (SIZE_MAX - 1) / 2) return 1;
    capacity = 2 * n + 1;
    if (capacity > SIZE_MAX / sizeof(*keys)) return 1;
    keys = malloc(capacity * sizeof(*keys));
    used = calloc(capacity, sizeof(*used));
    if (keys == NULL || used == NULL) {
        free(keys);
        free(used);
        return 1;
    }
    for (i = 0; i < n; i++) {
        int value;
        size_t slot;
        if (scanf("%d", &value) != 1) {
            free(keys);
            free(used);
            return 1;
        }
        slot = (size_t)(unsigned int)value % capacity;
        while (used[slot] && keys[slot] != value) slot = (slot + 1) % capacity;
        if (used[slot]) {
            if (!found) repeated = value;
            found = 1;
        } else {
            used[slot] = 1;
            keys[slot] = value;
        }
    }
    if (found) printf("%d\n", repeated);
    else printf("No repeated element\n");
    free(keys);
    free(used);
    return 0;
}
