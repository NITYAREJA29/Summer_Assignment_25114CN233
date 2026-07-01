#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i;

    while(1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Contacts Available!\n");
                }
                else
                {
                    printf("\nContact List:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name : %s\n", c[i].name);
                        printf("Phone: %s\n", c[i].phone);
                    }
                }
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}