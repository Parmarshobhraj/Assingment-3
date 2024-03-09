// Write a program in C to count the total number of vowels or consonants in a
// string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i,vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (strchr("aeiouAEIOU", str[i])) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
