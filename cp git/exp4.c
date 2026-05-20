#include <stdio.h>
int main() {
    float radius, area, circumference;
    float pi = 3.14;

    // Taking radius as input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Displaying results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);
    return 0;   }
