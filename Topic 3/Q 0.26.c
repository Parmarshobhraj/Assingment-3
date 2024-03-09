//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...tn)
#include <stdio.h>

int main() {
    int i,n, sum = 0, currentSum = 0;

    // Input the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a for loop
    for (i = 1; i <= n; i++) {
        currentSum += i;
        sum += currentSum;
    }

    // Display the sum of the series
    printf("Sum of the series: %d\n", sum);

    return 0;
}
