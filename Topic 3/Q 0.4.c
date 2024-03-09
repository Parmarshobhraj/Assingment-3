// WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int num, i;
    
    // Input the number
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Print the multiplication table
    printf("Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
