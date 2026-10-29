#include <stdio.h>
int main(void)
{
	int n;

	do 
	{
	
		printf("Enter a Number: ");
		scanf("%d", &n);

		if (n>=0)
		{ 
			printf("You entered %d\n", n);
		}
		
		else
		{ 
			printf("Please enter a positive number.\n");
		}

	
	}

	while (n<=0);

	return 0;

}	
