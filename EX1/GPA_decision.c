#include<stdio.h>
int main (void)
{
	float gpa;
	printf("Enter your GPA: ");
	scanf("%f",&gpa);

	if  (gpa<=0.99&&gpa>=0.0)
	{
		printf("Failed Semester--registration suspended\n");
	}
	else if(gpa<=1.99&&gpa>=1.0)
	{
		printf("On probation for next semester\n");
	}
	else if(gpa<=2.99&&gpa>=2.0)	
	{
		printf("         \n");
	}
	else if(gpa<=3.49&&gpa>=3.0)
	{
		printf("Dean's list for semester\n");
	}
	else if(gpa<=4.0&&gpa>=2.5)
	{
		printf("Highest honors for semester\n");
	}
	else
	{
		printf("Invalid GPA\n");
	}
	return 0;
}

