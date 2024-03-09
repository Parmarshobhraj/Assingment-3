//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the sum of the digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Output the sum of the digits
    printf("Sum of the digits: %d\n", sum);

}
