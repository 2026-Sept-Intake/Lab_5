#include <stdio.h>
int main (void)
{
	int count = 1;
	int number = 4;

	while(count <= 5)
	{
		printf("%d\n",number);
		number = number + 4;
		count = count + 1;
	}
	return 0;
}

