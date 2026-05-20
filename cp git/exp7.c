#include <stdio.h>
int main()
{
    int a, b, temp;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using temporary variable:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping again without temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping without temporary variable:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
