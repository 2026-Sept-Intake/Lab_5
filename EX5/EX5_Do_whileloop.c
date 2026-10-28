#include <stdio.h>
int main(void)
{
	int num;
	do{
		printf("enter a positive number:\n");
		scanf("%d", &num);
	} while (num <= 0);
	printf("you entered: %d\n", num);
	return 0;
}
