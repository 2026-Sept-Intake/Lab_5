#include <stdio.h>

int main(void)
{
    float GPA;
    printf("Enter the GPA: ");
    scanf("%f", &GPA);

    // Outer if checks valid range (0.0 through 4.0)
    if (GPA >= 0.0 && GPA <= 4.0) {
        // Nested if-else 
        if (GPA <= 0.99) {
            printf("Failed semester - registration suspended\n");
        } else if (GPA >= 1.0 && GPA <= 1.99) {
            printf("On probation for next semester\n");
        } else if (GPA >= 2.0 && GPA <= 2.99) {
            printf("\n");
        } else if (GPA >= 3.0 && GPA <= 3.49) {
            printf("Dean's list for semester\n");
        } else if (GPA >= 3.5) {
            printf("Highest honors for semester\n");
        }
    } else {
        printf("Enter a valid GPA\n");
    }

    return 0;
}
