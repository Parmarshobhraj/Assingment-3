// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>


int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            special++;
        }
        i++;
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special);

    return 0;
}
