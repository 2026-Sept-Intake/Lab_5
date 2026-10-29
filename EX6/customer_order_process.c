#include<stdio.h>
int main (void)
{
	char status;
	int i;

	for (i=1; i<=5; i++)
	{
		printf("Enter the status of the order %d (V,I,S): ",i);
		scanf(" %c",&status);

		if (status == 'V')
		{
			printf("Processing Order %d\n" ,i);
		}
		else if(status == 'I')
		{
			printf("Skipping Order %d\n" ,i);
			continue;
		}
		else if(status == 'S')
		{
			printf("Stopping at Order %d\n",i);
			break;
		}
		else
		{
			printf("INVALID STATUS !!!\n");
		}
	}

	return 0;
}
