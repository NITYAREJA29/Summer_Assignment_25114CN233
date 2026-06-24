#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, len = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }

            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word length = %d\n", maxLen);

    printf("Longest word = ");
    for (i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}