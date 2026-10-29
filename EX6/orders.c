#include <stdio.h>
int main (void)
{
	int n = 1;
	char CS;

	for (n=1; n<=5; n++)
	{
		printf("Enter the current state of the order (V OR I OR S): ");
		scanf("%c", &CS);

	        if(CS=='V')
	        {
	                printf("Processing order %d\n",n);
	                
	        }

                if (CS=='I')
                {

                        printf("Skipping order %d\n", n);
                        continue;

	        } 

	       if (CS=='S')
             
	       {
		        printf("Stopping order %d\n", n);
		        break;
	       }

	}

	return 0;

}


