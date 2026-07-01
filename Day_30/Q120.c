#include <stdio.h>

int roll[100], marks[100], n = 0;
char name[100][50];

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

void searchStudent()
{
    int searchRoll, i;

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
            return;
        }
    }

    printf("Student Not Found!\n");
}

void findTopper()
{
    int i, maxIndex = 0;

    if(n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    for(i = 1; i < n; i++)
    {
        if(marks[i] > marks[maxIndex])
            maxIndex = i;
    }

    printf("\nTopper Details:\n");
    printf("Roll No : %d\n", roll[maxIndex]);
    printf("Name    : %s\n", name[maxIndex]);
    printf("Marks   : %d\n", marks[maxIndex]);
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Find Topper\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                findTopper();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}