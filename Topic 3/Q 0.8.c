//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>

int main() {
    int num, max_digit = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the maximum digit
    while (num != 0) {
        digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }

    // Output the maximum digit
    printf("Maximum digit: %d\n", max_digit);

}
