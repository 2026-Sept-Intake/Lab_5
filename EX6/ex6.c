#include <stdio.h>
int main(void)
{
	char status;
	for (int i=1; i<=5;i++)
	{
	printf("enter status of order %d: ",i);
	scanf(" %c",&status);

	if (status == 'I')
	{
	printf("skipping order %d\n",i);
	continue;
	}
	if(status == 'S')
	{
	printf("stopping at order %d\n",i);
	break;
	}
	printf("processing order %d\n",i);
	}
	return 0;
}
