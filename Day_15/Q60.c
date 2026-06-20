#include <stdio.h>

int main()
{
    int arr[100], n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = 0;

    // Move non-zero elements to the front
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while(j < n)
    {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeros to end:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}