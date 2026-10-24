#include<stdio.h>
int main (void)
{
	float gpa; //grade point average is gpa
	printf("input gpa\n");
	scanf("%f",&gpa);
	if (gpa>=0.0 && gpa<=4.0) //checking if the gpa is within the range 4.0 and 0
        {
		 if (gpa < 1.0)
		 {
			 printf("Failed semester , registration is suspended\n");
		 } 
		 else if (gpa < 2.0)
		 {
			 printf("On probation for next semester\n");
		 }
		 else if (gpa < 3.0)
		 {
			 printf("\n");
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
		printf("Input Valid gpa, within 0.0 and 4.0\n");
        }
        return 0;
}
