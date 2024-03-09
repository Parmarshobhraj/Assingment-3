// WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>

int main() {
    char student_names[5][50]; 
    int i;
    // Accepting input from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student_names[i]);
    }
    
    // Displaying the entered names
    printf("\nEntered student names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", student_names[i]);
    }
    
    return 0;
}
