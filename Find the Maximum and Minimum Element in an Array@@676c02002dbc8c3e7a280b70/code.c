// Your code here...
#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 20, 5, 8, 30, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("%d", min);
    printf("%d", max);

    return 0;
}