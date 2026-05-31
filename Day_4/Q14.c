#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("The %dth Fibonacci number is %d", n, first);
    else if (n == 1)
        printf("The %dth Fibonacci number is %d", n, second);
    else {
        for (i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci number is %d", n, second);
    }

    return 0;
}