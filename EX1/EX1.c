#include <stdio.h>
int main()
{
	float GPA=0;
	printf("Enter the GPA ");
	scanf("%f", &GPA);

	if (GPA>=0.0 && GPA<=4.0)
        {
              if(GPA<1.0)
              {
		 printf("Failed semester — registration suspended");
              }
	      else if(GPA<2.0) // 1.0 to 1.99
              {
                 printf("On probation for next semester");
	      }
	      else if(GPA<3.0) // 2.0 to 2.99
	      {  
		 printf("(No message)");
	      }
	      else if(GPA<3.5) // 3.0 to 3.49
	      {
	         printf("Dean's list for semester");
	      }
              else
	      {
	         printf("Highest honors for semester");
	      }
        }
	else // 3.5 to 4.0
	{
              printf("INVALID GPA");
	}
	return 0;
}

