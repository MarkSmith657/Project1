#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int age;
    double height;
    char initial;

    printf("Enter your first initial: ");
    scanf(" %c", &initial); // Note the space before %c to consume any whitespace characters

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%lf", &height); // Use %lf for double

    printf("\nAge = %d, Height = %.1f, Initial = %c\n", age, height, initial);

    getchar(); // Consume newline character left in the buffer
    getchar(); // Wait for a key press before exiting

    return 0;
}
