// Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
    int marks;

    // Accept marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Check if the marks are greater than or equal to 50
    if (marks >= 50) {
        printf("You are passed.\n");
    } else {
        printf("you are failed.\n");
    }
}
