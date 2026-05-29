#include <stdio.h>

int main() {
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;        // Get last digit
        product = product * digit; // Multiply digit
        num = num / 10;         // Remove last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}