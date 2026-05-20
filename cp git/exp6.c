#include <stdio.h>
#include <math.h>
int main() {
    float u, a, t, v, s;
    float b, c, p, T, H;

    // Input values
    printf("Enter values of u, a and t: ");
    scanf("%f %f %f", &u, &a, &t);
    printf("Enter values of b, c and p: ");
    scanf("%f %f %f", &b, &c, &p);

    // Equation (i)
    v = u + a * t;

    // Equation (ii)
    s = u * t + 0.5 * a * t * t;

    // Equation (iii)
    T = 2 * a + sqrt(b) + 9 * c;

    // Equation (iv)
    H = sqrt(b * b + p * p);

    // Display results
    printf("V = %.2f\n", v);
    printf("S = %.2f\n", s);
    printf("T = %.2f\n", T);
    printf("H = %.2f\n", H);
    return 0;
}
