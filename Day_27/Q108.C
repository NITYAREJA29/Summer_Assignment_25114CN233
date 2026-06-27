#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3, total;
    float percentage;
};

int main()
{
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        // Calculate total and percentage
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    printf("\n----- MARKSHEET -----\n");
    printf("Roll\tName\tM1\tM2\tM3\tTotal\t%%\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].m1,
               s[i].m2,
               s[i].m3,
               s[i].total,
               s[i].percentage);
    }

    return 0;
}