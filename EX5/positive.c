#include <stdio.h>

int main(void){
	
	int user;
	printf("Enter the number: ");
	scanf("%d" , &user);

	do{
		if(user< 0){
			printf("Please enter a positive number \n");
			printf("Enter the number: ");
			scanf("%d",&user);	
		
		}else{
			break;
		}
	
	
	}while(1);


	printf("You entered:%d \n ",user);


	return 0;

}
