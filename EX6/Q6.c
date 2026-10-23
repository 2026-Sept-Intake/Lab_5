#include<stdio.h>
int main(void)
{
	char status;
	int i;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter status for order %d :", i);
		scanf("%c", &status);

		if (status == 'I' || status == 'i')
		{
			printf("Skipping order %d\n", i);
			continue;
		}
		if (status == 'S' || status == 's')
		{
			printf("Stopping at order %d\n", i);
			break;
		}
		if (status == 'V' || status == 'v' )
		{
			printf("Processing prder %d\n", i);
		} else {
			printf("Invalid status\n");
		}
	}
	return 0;
}

