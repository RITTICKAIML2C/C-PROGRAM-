#include <stdio.h>

int main() {
    int n, i;
    int term = 2; // first term

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term *= 2; // multiply by common ratio
    }

    printf("\n");
    return 0;
}
