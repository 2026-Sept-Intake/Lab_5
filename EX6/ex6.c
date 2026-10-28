#include <stdio.h>

int main (void)
{
	char customer_order;

	for (int i=1; i<=5; i++){

		printf ("Enter the customer order status : ");
		scanf ("%c",&customer_order);

		if (customer_order == 'v' || customer_order == 'V'){
			printf("Prossesing the order %d\n ",i);

		}else if ( customer_order == 'i' || customer_order == 'I'){
			printf("Skipping the order %d\n ",i);
			continue;

		}else if ( customer_order == 's' || customer_order == 'S'){
			printf("Stoping the order %d\n ",i);
			break;
		}
	}
	return 0;
}
