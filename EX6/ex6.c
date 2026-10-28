#include <stdio.h>
int main (void)
{
	int i;
	char status;

	for(i = 1;i<=5;i = i+1)
	{
		printf("Enter the order status with V or I or S for order %d:",i);
		scanf(" %c",&status);

		if(status == 'V')
		{
			printf("Processing order %d\n",i);
		}
		else if (status == 'I')
		{
			printf("Skipping order %d\n",i);
			continue;
		}
		else if (status == 'S')
		{
			printf("Stopping at order %d\n",i);
			break;
		}
	}
	return 0;
}
