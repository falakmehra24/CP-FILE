#include <stdio.h>

// Function to calculate sum
int sumArray(int arr[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[100], n, i, result;
    // Taking input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    result = sumArray(arr, n);
    // Display result
    printf("Sum of array elements = %d", result);
    return 0;
}
