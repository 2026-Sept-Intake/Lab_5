#include <stdio.h>

int main(void)
{
    float gpa;

    printf("Enter your GPA (0.0 - 4.0): ");
    scanf("%f", &gpa);

    if (gpa < 0.0 || gpa > 4.0)
    {
        printf("Invalid GPA.\n");
    }
    else
    {
        if (gpa < 1.0)
        {
            printf("Failed semester - registration suspended\n");
        }
        else
        {
            if (gpa < 2.0)
            {
                printf("On probation for next semester\n");
            }
            else
            {
                if (gpa < 3.0)
                {
                    printf(" ");
                }
                else
                {
                    if (gpa < 3.5)
                    {
                        printf("Dean's list for semester\n");
                    }
                    else
                    {
                        printf("Highest honors for semester\n");
                    }
                }
            }
        }
    }

    return 0;
}
