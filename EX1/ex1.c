#include <stdio.h>
int main (void)
{
	float gpa;

	printf("Enter Your GPA:");
	scanf("%f",&gpa);

	if(0.0 <= gpa && gpa <= 4.0)
	{
		if(gpa < 1.0)
		{
			printf("Failed semester. Registration suspended\n");
		}
		else if (gpa < 2.0)
		{
			printf("On probation for next semester\n");
		}
		else if (gpa < 3.0)
		{
		}
		else if (gpa < 3.5)
		{
			printf("Dean's list for semester\n");
		}
		else
		{
			printf("Highest honors for semester\n");
		}
	}
	else
	{
		printf("Invalid GPA\n");
	}
	return 0;
}
