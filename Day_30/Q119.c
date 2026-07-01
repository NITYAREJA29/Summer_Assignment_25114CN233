#include <stdio.h>

int main()
{
    int empId[100], salary[100];
    char empName[100][50];
    int n = 0, choice, i, searchId;

    while(1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf("%s", empName[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;

                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Employee Records Found!\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nID     : %d", empId[i]);
                        printf("\nName   : %s", empName[i]);
                        printf("\nSalary : %d\n", salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(empId[i] == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", empName[i]);
                        printf("Salary : %d\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Employee Not Found!\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}