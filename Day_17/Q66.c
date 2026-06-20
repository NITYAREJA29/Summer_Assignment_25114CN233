#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, size = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        unionArr[size++] = arr1[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);

        found = 0;

        for(int j = 0; j < size; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of arrays:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}