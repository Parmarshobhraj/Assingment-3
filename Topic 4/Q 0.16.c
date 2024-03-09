// Accept 5 numbers from user and perform sum of array
#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array to store 5 numbers
    int i,sum = 0;    // Variable to store the sum

    // The user to enter 5 numbers
    printf("Enter 5 numbers:\n");
    
    // Loop to read input from the user and store in the array
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the numbers in the array
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
