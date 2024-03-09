// Write a program in C to separate individual characters from a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Individual characters separated from the string: \n");
    for (i = 0; i < length; i++) {
        if (str[i] != '\n') { // ignore newline character
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
