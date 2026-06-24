#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;

        if(freq[(int)str[i]] == 2)
        {
            printf("First repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found");

    return 0;
}