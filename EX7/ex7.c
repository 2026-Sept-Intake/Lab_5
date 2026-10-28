#include <stdio.h>
int main (void)
{
	int count = 5;

	while(count!= -1)
	{
		printf("%d\n",count);
		count = count - 1;
	}
	printf("Countdown complete.\n");
	return 0;
}
