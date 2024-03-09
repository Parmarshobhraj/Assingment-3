#include <stdio.h>

int main() {
    int i,j,k,rows;
    
    // Input the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through each row
    for (i = 0; i < rows; i++) {
        // Print leading spaces
        for (j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }
        // Print stars
        for (k = 0; k < 2 * i + 1; k++) {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
