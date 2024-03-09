// WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
