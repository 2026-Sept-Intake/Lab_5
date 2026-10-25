#include <stdio.h>

int main(void)
{
	char order;
	int count = 1;

	while(count <= 5)
	{
		printf("Enter status of order (I/S/V): ");
		scanf(" %c", &order);

		if(order == 'I')
		{
			printf("Skipping order %d\n", count);
			count ++;
			continue;
		}
		if(order == 'S')
		{
			printf("Stopping at order %d\n", count);
			count ++;
			break;
		}
		if(order == 'V')
		{
			printf("Processing order %d\n", count);
			count ++;
		}
	}

	return 0;
}
