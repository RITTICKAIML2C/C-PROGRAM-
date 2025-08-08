#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int term = (i * i) - i + 1; // formula
        printf("%d ", term);
    }

    printf("\n");
    return 0;
}
