// Write a C program to check whether a triangle can be formed with the given
// values for the angles.
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check if the sum of angles is 180 degrees
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle can be formed with these angles.\n");
    } else {
        printf("The triangle cannot be formed with these angles.\n");
    }

}
