#include <stdio.h>

// Recursive function for factorial
int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num, fact;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    fact = factorial(num);

    // Display result
    printf("Factorial of %d = %d", num, fact);

    return 0;
}
