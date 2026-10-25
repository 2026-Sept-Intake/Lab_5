#include <stdio.h>

int main(void)
{	
	float gpa;
	printf("Enter GPA: ");
	scanf("%f", &gpa);

	if(gpa >= 0.0 && gpa <= 4.0)
	{
		if(gpa >= 1.0)
		{
			if(gpa >= 2.0)
			{
				if(gpa >= 3.0)
				{
					if(gpa >= 3.5)
					{
						printf("Highest honors for semester\n");
						return 0;
					}
					printf("Dean's list for semester\n");
					return 0;
				}
				return 0;
			}
			printf("On probation for next semester\n");
			return 0;
		}
		printf("Failed semester -- registration suspended\n");
		return 0;
	}
	else
	{
		printf("Invalid GPA\n");
		return 0;
	}
}
	
