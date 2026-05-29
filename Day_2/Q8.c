#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;                 // Get last digit
        reverse = reverse * 10 + digit;  // Reverse the number
        num = num / 10;                  // Remove last digit
    }

    if (original == reverse)
        printf("The number is a Palindrome\n");
    else
        printf("The number is not a Palindrome\n");

    return 0;
}