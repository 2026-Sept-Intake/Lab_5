#include <stdio.h>
int main(void)
{
	float gpa;

	printf("enter GPA :");
	scanf("%f",&gpa);

	if(gpa<1.0)
	printf("failed semester-registration suspended ");
	else if(gpa<2.0)
	printf("on probation for next semester");
	else if(gpa<3.0)
	{
	}
	else if(gpa<3.5)
	printf("dean's list for semester");
	else if(gpa<=4.0)
	printf("highest honors for semester");
	else
	printf("invalid GPA");
	
	return 0;
}
	
	
