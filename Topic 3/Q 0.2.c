// 2. WAP to aceept 5 number from user and display all numbers
#include <stdio.h>

int main() {
    int i,numbers[5];

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display all the numbers
    printf("\nEntered numbers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

}
