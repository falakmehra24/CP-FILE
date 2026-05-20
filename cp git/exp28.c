#include <stdio.h>

// Structure declaration
struct Distance
{
    int feet;
    int inch;
};

int main()
{
    struct Distance d1, d2, sum;

    // Taking first distance input
    printf("Enter first distance (feet and inches): ");
    scanf("%d %d", &d1.feet, &d1.inch);

    // Taking second distance input
    printf("Enter second distance (feet and inches): ");
    scanf("%d %d", &d2.feet, &d2.inch);

    // Adding inches and feet
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;

    // Converting inches into feet
    if(sum.inch >= 12)
    {
        sum.feet = sum.feet + (sum.inch / 12);
        sum.inch = sum.inch % 12;
    }

    // Display result
    printf("Sum of distances = %d feet %d inches",
           sum.feet, sum.inch);
    return 0;
}
