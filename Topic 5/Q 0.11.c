// Write a program in C to read a sentence and replace lowercase characters with
// uppercase and vice versa.
#include <stdio.h>

int main() {
    char i,sentence[100];

    // Input a sentence from the user
    printf("Enter a sentence: ");
    gets(sentence);

    // Iterate through each character of the sentence
    for (i = 0; sentence[i] != '\0'; i++) {
        // Check if the character is lowercase
        if (islower(sentence[i])) {
            // Convert lowercase to uppercase
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            // Convert uppercase to lowercase
            sentence[i] = tolower(sentence[i]);
        }
    }

    // Display the converted sentence
    printf("Modified sentence: %s\n", sentence);

}
