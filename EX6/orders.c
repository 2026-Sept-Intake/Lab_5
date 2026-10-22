#include <stdio.h>

int main(void){
	
	char orderStatus;

	for(int i = 1; i<=5; i++){
	
		printf("Enter The status of the order: ");
		scanf(" %c",&orderStatus);

		if(orderStatus == 'v' || orderStatus == 'V'){
			printf("Processing the Order%d \n",i);
			
		}else if(orderStatus == 's' || orderStatus == 'S'){
			printf("Stopping at order%d \n",i);
			break;
		}else if(orderStatus == 'i' || orderStatus == 'I'){
			printf("Skipping the order%d \n", i);
			continue;
		}
	}

	return 0;
}
