#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        // print leading spaces
        for (int j = 1; j <= a - i; j++) {
            printf(" ");
        }

        // print numbers
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
