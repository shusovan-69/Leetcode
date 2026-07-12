/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;

    for (i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        } else {
            digits[i] = 0;
        }
    }

    int *result = malloc((digitsSize + 1) * sizeof(int));

    *returnSize = digitsSize + 1;

    result[0] = 1;

    // Fill the remaining elements with 0
    for (i = 1; i <= digitsSize; i++) {
        result[i] = 0;
    }

    return result;
}