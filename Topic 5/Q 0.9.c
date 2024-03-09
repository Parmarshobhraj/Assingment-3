// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int maxLength = 0;

    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string using strlen function
    int i,length = strlen(str);

    // Iterate through the string to find the maximum number of characters
    for (i = 0; i < length; i++) {
        if (str[i] != '\n' && str[i] != '\0') {
            maxLength++;
        }
    }

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}
