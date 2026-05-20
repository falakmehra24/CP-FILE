#include <stdio.h>

// Structure declaration
struct Complex
{
    int real;
    int imag;
};

int main()
{
    struct Complex c1, c2, sum;

    // Taking first complex number input
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%d %d", &c1.real, &c1.imag);

    // Taking second complex number input
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%d %d", &c2.real, &c2.imag);

    // Adding complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Display result
    printf("Sum of complex numbers = %d + %di",
           sum.real, sum.imag);
    return 0;
}
