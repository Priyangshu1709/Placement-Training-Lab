#include <stdio.h>

int main() {
    int arr[] = {15, 2, 98, 43, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("Min: %d\n", min);
    printf("Max: %d", max);

    return 0;
}
