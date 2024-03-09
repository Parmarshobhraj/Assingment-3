// WAP Find out length of string without using inbuilt function
#include <stdio.h>

int main() {
    char str[20];
    int length = 0;
    
    printf("Enter String :");
    scanf("%s",&str);

    // Iterate through the characters until the null terminator is reached
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
