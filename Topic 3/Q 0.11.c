// Accept 5 names from user at run time
#include <stdio.h>

int main() {
	int i;
    char names[5][50]; // Array to store 5 names, each with a maximum length of 50 characters

    // Input names from the user
    printf("Enter 5 names:\n");
    for ( i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Reading a single word without spaces
    }

    // Display the entered names
    printf("\nEntered names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
