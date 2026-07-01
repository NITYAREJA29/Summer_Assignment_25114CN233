#include <stdio.h>

int main()
{
    int bookId[100];
    char bookName[100][50];
    int n = 0, choice, i, searchId;

    while(1)
    {
        printf("\n1.Add Book\n");
        printf("2.Display Books\n");
        printf("3.Search Book\n");
        printf("4.Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Name: ");
                scanf("%s", bookName[n]);

                n++;
                break;

            case 2:
                for(i = 0; i < n; i++)
                {
                    printf("ID: %d  Name: %s\n",
                           bookId[i], bookName[i]);
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == searchId)
                    {
                        printf("Book Found\n");
                        printf("ID: %d\n", bookId[i]);
                        printf("Name: %s\n", bookName[i]);
                    }
                }
                break;

            case 4:
                return 0;
        }
    }
}