#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Upper Part (Increasing)
    for (int i = 1; i <= a; i += 2) {
        for (int j = 0; j < (a - i) / 2; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < i; k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Lower Part (Decreasing)
    for (int i = a - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (a - i) / 2; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < i; k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
