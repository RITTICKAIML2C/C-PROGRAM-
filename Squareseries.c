#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i * i); // square of i
    }

    printf("\n");
    return 0;
}
