// Perform 2D matrix array


#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to print a matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
