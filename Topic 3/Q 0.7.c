// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746
#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

}
