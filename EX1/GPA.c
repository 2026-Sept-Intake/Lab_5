#include<stdio.h>
int main(void)
{
	//this program is to make decisions according to GPA values
	float gpa;
	printf("Please enter your semester GPA :");
	scanf("%f",&gpa);
	
	//decision maker
	if (gpa>=0 && gpa<=4)
	{
		if(gpa<1)
		{
			printf("Failed semster - registration suspended\n");
		}
		else if (gpa>=1 && gpa<2)
		{
			printf("On probation for next semester\n");
		}
		else if (gpa>=2 && gpa<3)
		{
			printf("...\n");
		}
		else if (gpa>=3 && gpa<3.5)
		{
			printf("Dean's list for semester\n");
		}
		else if (gpa>=3.5 && gpa<=4)
		{
			printf("Highest honors for semester\n");
		}
	}
	else 
	{
		printf("Invaild GPA!\n");
	}
	return 0;
}

