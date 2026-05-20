#include <stdio.h>
int main() {
    float num1, num2;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing operations
    printf("Addition = %.2f\n", num1 + num2);
    printf("Subtraction = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);
    printf("Division = %.2f\n", num1 / num2);
    return 0; }
