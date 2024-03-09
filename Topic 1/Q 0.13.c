// Find character value from ascii
#include <stdio.h>
int main() {  
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ascii value of %c = %d", a, a);
    
}
