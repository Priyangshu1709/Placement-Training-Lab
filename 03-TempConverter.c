#include <stdio.h>

int main() {
    int choice;
    float temperature, result;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);

        result = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
    }
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);

        result = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", result);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
