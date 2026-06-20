#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}