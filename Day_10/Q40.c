#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print characters
        for(int k = 1; k <= i; k++) {
            printf("%c ", 'A' + k - 1);
        }

        printf("\n");
    }

    return 0;
}