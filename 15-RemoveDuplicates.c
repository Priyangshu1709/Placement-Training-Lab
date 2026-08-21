#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    int newLength = j + 1;

    printf("Length: %d\n", newLength);
    printf("Array: [");

    for (int i = 0; i < newLength; i++) {
        printf("%d", arr[i]);

        if (i < newLength - 1)
            printf(", ");
    }

    printf("]");

    return 0;
}
