#include <stdio.h>
int main()
{
	int count=5; // Start countdown from 5
	while(count>=0) // Run until it reaches 0
	{ 
	  printf("%d\n", count);
	  count--; // Reduce count each time
	}
	printf("Countdown complete.");
	return 0;
}
