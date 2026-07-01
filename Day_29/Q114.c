#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, pos, value;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Largest Element\n");
        printf("4. Insert Element\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
            {
                int max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Largest Element = %d\n", max);
                break;
            }

            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                for(i = n; i > pos - 1; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element Inserted Successfully!\n");
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}