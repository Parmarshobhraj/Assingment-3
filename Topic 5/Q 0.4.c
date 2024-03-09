// Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    printf("Individual characters in reverse order: \n");
    for(i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
