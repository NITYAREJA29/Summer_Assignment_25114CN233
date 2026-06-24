#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // count frequency
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    // find maximum occurring character
    int max = 0;
    char maxChar;

    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", max);

    return 0;
}