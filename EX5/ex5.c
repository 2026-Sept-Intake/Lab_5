#include <stdio.h>
int main (void)
{
	int number;

	do
	{
		printf("Please enter a postive number:");
		scanf("%d",&number);
	}  while(number <  0);
	printf("You entered: %d\n",number);
	return 0;
}
