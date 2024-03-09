// WAP to accept the height of a person in centimeters and categorize the
// person according to their height.
#include <stdio.h>

int main() {
    float height_cm;

    // Accept height from the user
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    // Categorize the person based on height
    if (height_cm < 150) {
        printf("You are short.\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("You are of average height.\n");
    } else if (height_cm >= 170 && height_cm < 190) {
        printf("You are tall.\n");
    } else {
        printf("You are very tall.\n");
    }

}
