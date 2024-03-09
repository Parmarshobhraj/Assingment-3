// WAP to find the largest of three numbers
#include <stdio.h>

int main() {
    int num1, num2, num3, larg;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using ternary operator to find the maximum number
    larg = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("Largest number: %d\n", larg);

}
