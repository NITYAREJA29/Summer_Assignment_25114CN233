#include <stdio.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice, searchRoll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", name[i]);

                    printf("Enter Marks: ");
                    scanf("%d", &marks[i]);
                }
                break;

            case 2:
                printf("\nStudent Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", roll[i]);
                    printf("\nName    : %s", name[i]);
                    printf("\nMarks   : %d\n", marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Student Not Found!\n");
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