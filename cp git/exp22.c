#include <stdio.h>

// Function to calculate area
float area(float r)
{
    return 3.14 * r * r;
}

// Function to calculate circumference
float circumference(float r)
{
    return 2 * 3.14 * r;
}

int main()
{
    float radius, a, c;

    // Taking input
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Function calls
    a = area(radius);
    c = circumference(radius);

    // Display results
    printf("Area of circle = %.2f\n", a);
    printf("Circumference of circle = %.2f", c);

    return 0;
}
