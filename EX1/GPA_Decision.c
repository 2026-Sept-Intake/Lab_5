#include <stdio.h>

int main (void)
{
    float gpa;

    printf("Enter Your GPA: ");
    scanf("%f", &gpa);

    if((0.0 <= gpa) && (0.99 >= gpa))
    {
        printf("Failed Semester!!! -Registration Suspended-\n");
    }
    else if((1.0 <= gpa) && (1.99 >= gpa))
    {
        printf("On Probation for Next Semester\n");
    }
    else if((2.0 <= gpa) && (2.99 >= gpa))
    {
        printf("\n");
    }
    else if((3.0 <= gpa) && (3.49 >= gpa))
    {
        printf("Dean's List for Semester\n");
    }
    else if((3.5 <= gpa) && (4.0 >= gpa))
    {
        printf("Highest Honors For Semester\n");
    }
    else
    {
        printf("Invalid GPA!!!\n");
    }

    return 0;
}

