// Write a program in C to remove characters from a string except alphabets
#include <stdio.h>
#include <string.h>

void removeNonAlphabets(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
