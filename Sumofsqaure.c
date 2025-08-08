#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i; // Square of i and add to sum
    }

    printf("Sum of squares of first %d natural numbers = %d\n", n, sum);

    return 0;
}
