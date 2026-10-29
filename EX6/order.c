#include<stdio.h>
int main(void)
{
	// this program is to track the orders 
	char order;

        //track the orders entered by the user

	printf("please use V,I,S for orders\n");
        for (int i=1;i<=5;i++)
	{
		
        	printf("please enter order %d  to the system  :", i);
	        scanf(" %c",&order);
	
        if(order=='S')
	{
	        printf("stopping order %d\n", i);
	        break;
	}
        else if (order=='I')
	{
		printf("skipping order %d\n", i);
		continue;
	}
	else if (order=='V')
	{
		printf("processing order %d\n", i);
	}
	else 
	{
		printf("the order status in not from V,I,S");
	}
	}
	return 0;
}
	
	
		


        
