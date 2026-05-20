#include <stdio.h>
// Function to check prime number
void prime(int n)   {
    int i, flag = 0;
    for(i = 2; i <= n / 2; i++)   {
        if(n % i == 0)      {
            flag = 1;
            break;
        }
    }
    if(flag == 0 && n > 1)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is not a Prime Number.\n", n);
}

// Function to check Armstrong number
void armstrong(int n)    {
    int temp, rem, sum = 0;
    temp = n;
    while(temp != 0)   {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == n)
        printf("%d is an Armstrong Number.\n", n);
    else  
        printf("%d is not an Armstrong Number.\n", n);
 }

// Function to check perfect number
void perfect(int n){
    int i, sum = 0;
    for(i = 1; i < n; i++)   {
        if(n % i == 0)    {
            sum = sum + i;
        }
    }
    if(sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);
}

int main()   {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function calls
    prime(num);
    armstrong(num);
    perfect(num);
    return 0;
}
