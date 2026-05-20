#include <stdio.h>
// Function using pointer arguments
void add(int *a, int *b, int *sum)   {
    *sum = *a + *b;
}
int main()   {
    int x, y, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    // Function call with addresses
    add(&x, &y, &result);
    printf("Sum = %d", result);
    return 0;      }
