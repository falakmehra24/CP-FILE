#include <stdio.h>
int main()  {
    int i, j;

    // Pattern (a)
    printf("Pattern (a):\n");
    for(i = 1; i <= 6; i++)   {
        for(j = 1; j <= i; j++)    {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern (b)
    printf("\nPattern (b):\n");
    for(i = 1; i <= 6; i++)   {
        // Printing spaces
        for(j = 1; j <= 6 - i; j++)    {
            printf("  ");
        }
        // Printing stars
        for(j = 1; j <= i; j++)    {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
