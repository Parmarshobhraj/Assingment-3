// Write a program in C to compare two strings without using string library
// functions.
#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    
    if (*str1 == *str2)
        return 0;
    else if (*str1 < *str2)
        return -1;
    else
        return 1;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    int result = compareStrings(str1, str2);
    
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("First string is smaller than the second string.\n");
    else
        printf("First string is greater than the second string.\n");
    
    return 0;
}
