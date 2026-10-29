#include<stdio.h>
int main (void)
{
	//this program is to countdown from 5 to 0
	
	for (int i=5;i>=0;i=i-1)
	{
		printf("%d\n ",i);
	
		if (i==0)
		{
	        	printf("Countdown complete\n");
		}

	}


		return 0;
}


