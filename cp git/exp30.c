#include <stdio.h>

// Structure declaration
struct Employee    {
    int id;
    char name[50];
    float salary;
};

int main()    {
    struct Employee emp[5];
    int i;
    // Taking employee details
    for(i = 0; i < 5; i++)    {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Displaying employee details
    printf("\nEmployee Information:\n");
    for(i = 0; i < 5; i++)    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID = %d\n", emp[i].id);
        printf("Name = %s\n", emp[i].name);
        printf("Salary = %.2f\n", emp[i].salary);
    }
    return 0;
}
