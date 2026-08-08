#include <stdio.h>

int main() {
    int n, i;
    int largest, second_largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[1];

    if (second_largest > largest) {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element: %d", second_largest);

    return 0;
}
