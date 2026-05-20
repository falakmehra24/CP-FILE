#include <stdio.h>
int main() {
    char name[50];
    int age;
    float marks;
    printf("====== Student Information System ======\n");

    // Taking input from user
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    // Displaying output
    printf("\n===== Student Details =====\n");
    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);
    return 0;
}
