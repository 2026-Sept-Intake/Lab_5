#include<stdio.h>
int main(void)
{
	int number;
	do{
		printf("Please enter a positive number: \n");
		scanf("%d", &number);
	}while(number <= 0);
	printf("You entered: %d\n",number);
	return 0;
}

