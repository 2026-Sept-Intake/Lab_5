#include<stdio.h>
int main(void)
{
	int num;
        int i=1 ;
	printf("enter the any number : ");
	scanf("%d",&num);
	while(i <= num){
		printf("%d\n",i);
		i = i+1;
	}
	return 0;
}


