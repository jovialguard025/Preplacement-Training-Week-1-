#include <stdlib.h>

int* frequencyCount(int arr[], int n) {
    int* result = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) {
            result[arr[i] - 1]++;
        }
    }
    return result;
}