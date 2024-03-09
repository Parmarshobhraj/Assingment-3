//  WAP to print Fibonacci series up to given numbers
#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;

    // Input the number
    printf("Enter the number: ");
    scanf("%d", &num);

    // Print the Fibonacci series
    printf("Fibonacci series up to %d:\n", num);
    printf("%d, %d, ", first, second);

    next = first + second;
    while (next <= num) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");


}
