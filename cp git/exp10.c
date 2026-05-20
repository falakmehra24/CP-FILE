#include <stdio.h>
int main()   {
    int n, i = 1, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // While loop to calculate sum
    while(i <= n){
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    return 0;      }
