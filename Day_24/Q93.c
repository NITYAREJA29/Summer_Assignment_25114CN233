#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    char temp[200];

    // concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;

    return 0;
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Strings are rotation of each other");
    else
        printf("Strings are NOT rotation of each other");

    return 0;
}