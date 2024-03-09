// WAP to accept 5 numbers from user and check entered number is even or odd
// using of array

#include <stdio.h>

int main() {
    int i,numbers[5];
    
    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Checking each number in the array
    printf("Even/Odd check:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }
    
}
