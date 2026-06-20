#include <stdio.h>

int main()
{
    int a[10][10], r, c;

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

    printf("Row-wise sum:\n");

    for(int i = 0; i < r; i++)
    {
        int sum = 0;
        for(int j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    return 0;
}