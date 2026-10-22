#include<stdio.h>
int main (void)
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	do{
		printf("Please enter a positive number: ");
		scanf("%d",&x);

	}while(x<=0);
	
	printf("You Entered: %d",x);
	

	return 0;

}




