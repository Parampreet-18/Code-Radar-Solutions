#include <ctype.h>

void caesarCipher(char* message, int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            message[i] = (ch - base + shift) % 26 + base;
        }
        // Non-alphabetic characters remain unchanged
    }
}