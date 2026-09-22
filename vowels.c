#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    else {
        printf("Not an alphabet");
        return 0;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }

    return 0;
}
