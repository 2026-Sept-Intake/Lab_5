#include <stdio.h>
int main (void)
{
	float GPA = 0;

	printf("Enter your GPA: ");
	scanf("%f", &GPA);

	if (GPA >= 0.0 && GPA <= 4.0)
	{
	  if (GPA < 1)
          { 
            printf("Failed Semester - Registration Suspended \n");
	  }

	  else if (GPA<2)
	  { 
            printf("On probation for next semester \n");
	  }

	  else if (GPA<3)
          {
            printf("\n ");
	  }

	  else if (GPA < 3.5)
	  { 
            printf("Dean's list for the semester \n");
          }	    

	  else if (GPA <= 4.0)
	  {
            printf("Highest honors for semester \n ");
	  }
	    
	}

	else 
	{
	    printf ("Invalid GPA \n");
	}

	return 0;
}

