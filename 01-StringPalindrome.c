#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int left, right, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    left = 0;
    right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            flag = 0;
            break;
        }

        left++;
        right--;
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
