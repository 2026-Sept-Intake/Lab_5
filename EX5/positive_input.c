#include<stdio.h>
int main(void)
{
	int n;
	do{
		printf("please input a positive number\n");
		scanf("%d",&n);
	}while(n<0);
	printf("You Entered %d \n",n);
	return 0;
}
