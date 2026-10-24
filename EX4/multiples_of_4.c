#include<stdio.h>
int main(void)
{
	int n=4,x; //x is used as a memory cell
	for (int i=1;i<=5;i++)
	{
		x=n*i;
		printf("%d\n",x);
	}
	return 0;
}
