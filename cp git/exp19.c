#include <stdio.h>
int main()  {
    int a[10][10], transpose[10][10];
    int rows, cols;
    int i, j;
    // Taking matrix size
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        } 
    }

    // Finding transpose
    for(i = 0; i < rows; i++)    {
        for(j = 0; j < cols; j++)    {
            transpose[j][i] = a[i][j];
        }
    }

    // Display transpose matrix
    printf("Transpose Matrix:\n");
    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
