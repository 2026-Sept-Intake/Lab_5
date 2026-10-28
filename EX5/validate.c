#include<stdio.h>
int main(void){
	int num;
	printf("Enter a number: ");
	do{
		scanf("%d", &num);
		if (num <0)
			printf("Please enter a positive number"":\n");
	} while(num < 0);
	printf("You entered: %d\n", num);
	return 0;
}
