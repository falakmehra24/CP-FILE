#include <stdio.h>
// Call by Value
void swapValue(int a, int b)   {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping using Call by Value:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

// Call by Reference
void swapReference(int *a, int *b)   {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()   {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Call by Value
    swapValue(x, y);
    printf("\nValues in main function after Call by Value:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Call by Reference
    swapReference(&x, &y);
    printf("\nAfter swapping using Call by Reference:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
