#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    if (n % 5 == 0)
        printf(", Multiple of 5");
    else
        printf(", Not a Multiple of 5");

    return 0;
}
