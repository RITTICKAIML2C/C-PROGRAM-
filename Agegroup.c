#include <stdio.h>

int main() {
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid Age !!!\n");
    }
    if (age >= 0 && age <= 12) {
        printf("You are a child !!!\n");
    }
    if (age >= 13 && age <= 19) {
        printf("You are a Teen now !!!\n");
    }
    if (age >= 20 && age <= 64) {
        printf("You are an Adult !!!\n");
    }
    if (age >= 65 && age <= 100) {
        printf("You are a Senior !!!\n");
    }

    return 0;
}
