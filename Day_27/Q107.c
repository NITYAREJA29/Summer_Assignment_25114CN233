#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e[100];
    int n, choice;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        // Salary calculation
        e[i].hra = 0.20 * e[i].basic;
        e[i].da  = 0.10 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Salary Slip\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");
                for(int i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           e[i].id,
                           e[i].name,
                           e[i].basic,
                           e[i].hra,
                           e[i].da,
                           e[i].gross);
                }
                break;

            case 2:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 2);

    return 0;
}