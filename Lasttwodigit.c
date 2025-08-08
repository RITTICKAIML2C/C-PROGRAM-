#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num / 100; // removes last two digits

    printf("Number after deleting last two digits = %d\n", result);

    return 0;
}
