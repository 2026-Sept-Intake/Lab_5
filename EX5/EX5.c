#include <stdio.h>
int main (void)
{ 
	int num;

	do {
		printf("Enter a positive number: ");
		scanf("%d", &num);
	}
	while (num < 0);

	printf("You entered: %d", num);
	return 0;
}



