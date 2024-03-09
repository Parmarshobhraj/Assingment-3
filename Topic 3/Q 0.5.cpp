#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate factorial
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    // Output the result
    printf("Factorial of %d = %llu\n", num, factorial);
    
}
