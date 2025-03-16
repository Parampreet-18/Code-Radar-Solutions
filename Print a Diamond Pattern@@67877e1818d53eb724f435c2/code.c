#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    // Upper Part (Mirrored Right-Angled Triangle)
    for (int i = 1; i <= a; i += 2) {
        for (int j = 1; j <= (a - i) / 2; j++) { // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= i; k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Lower Part (Inverted Mirrored Right-Angled Triangle)
    for (int i = a - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= (a - i) / 2; j++) { // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= i; k++) { // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
