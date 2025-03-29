#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half including middle row
    for (int i = 1; i <= n; i++) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int s = 0; s < stars; s++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int s = 0; s < stars; s++)
            printf("*");
        printf("\n");
    }

    return 0;
}
