#include <stdio.h>
int main (void)
{
	float GPA;
	printf("Enter GPA");
	scanf("%f", &GPA);

	if (GPA >= 0.0 && GPA <= 4.0) {
        if (GPA < 1.0)
            printf("Failed semester — registration suspended");
        else if (GPA < 2.0)
            printf("On probation for next semester");
        else if (GPA < 3.0)
            printf("No message");
        else if (GPA < 3.5)
            printf("Dean's list for semester");
        else
            printf("Highest honors for semester");
    } else {
        printf("Invalid GPA");
    }

    return 0;
}
