#include <stdio.h>

// Recursive function to find sum of digits
int sumDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main()
{
    int num, sum;

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    sum = sumDigits(num);

    // Display result
    printf("Sum of digits = %d", sum);
    return 0;
}
