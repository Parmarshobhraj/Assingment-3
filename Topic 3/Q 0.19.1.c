#include <stdio.h>

int main() {
    int i,j,rows;

    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (i = 1; i <= rows; i++) {
        int num = 1;
        // Print the numbers based on the pattern
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = (num == 1) ? 0 : 1;
        }
        printf("\n");
    }

    return 0;
}
