#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i;
    char temp[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(1)
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Copy String\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);

                for(i = 0; i < strlen(temp) / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[strlen(temp) - 1 - i];
                    temp[strlen(temp) - 1 - i] = ch;
                }

                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] = temp[i] - 32;
                }

                printf("Uppercase String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);
                printf("Copied String = %s\n", temp);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}