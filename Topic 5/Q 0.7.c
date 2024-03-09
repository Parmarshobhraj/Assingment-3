// Write a program in C to copy one string to another string
#include <stdio.h>

void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Add null terminator to mark end of string
}

int main() {
    char source[20];
    char destination[20]; 
    
    printf("Enter string :");   // user input string
    scanf("%s",&source);

    stringCopy(source, destination);  // calling function

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
