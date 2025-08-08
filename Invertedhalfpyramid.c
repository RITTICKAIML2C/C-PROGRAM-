#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {         // loop for rows
        for (j = 1; j <= i; j++) {     // loop for columns
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}
