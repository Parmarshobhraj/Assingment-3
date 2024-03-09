// calculate the Factorial of a Given Number using while loop
#include <stdio.h>

int main() {
    int number, originalNumber;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Error checking for negative numbers
    if (number < 0)
        printf("Factorial is not defined for negative numbers\n");
    else {
        while (number > 1) {
            factorial *= number;
            number--;
        }
        printf("Factorial of %d = %lld\n", originalNumber, factorial);
    }

}

