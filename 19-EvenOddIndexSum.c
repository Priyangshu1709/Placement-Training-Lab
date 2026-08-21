#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Even Pos Sum: %d\n", evenSum);
    printf("Odd Pos Sum: %d", oddSum);

    return 0;
}
