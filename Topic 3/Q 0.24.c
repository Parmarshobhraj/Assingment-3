//1 + 2 +3+4 +5 +... + n
#include <stdio.h>

int main() {
    int i,n, sum = 0;

    // Input the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a for loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the sum of the series
    printf("Sum of the series: %d\n", sum);
}
