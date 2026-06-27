#include <stdio.h>

int main()
{
    int score = 0, answer;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n3. Which language is used for C programming?\n");
    printf("1. C\n2. HTML\n3. SQL\n4. CSS\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}