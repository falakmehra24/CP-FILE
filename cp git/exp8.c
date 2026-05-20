#include <stdio.h>
int main() {
    int a, b, c, greatest;

    // Taking input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using Conditional Operator
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("\nUsing Conditional Operator:\n");
    printf("Greatest number = %d\n", greatest);

    // Using If-Else Statement
    if (a > b && a > c) {
        greatest = a;
    }
    else if (b > c) {
        greatest = b;
    }
    else {
        greatest = c;
    }
    printf("\nUsing If-Else Statement:\n");
    printf("Greatest number = %d\n", greatest);
    return 0;
}
