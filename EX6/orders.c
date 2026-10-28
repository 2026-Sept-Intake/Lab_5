#include<stdio.h>
int main(void){
	int i;
	char status;
	for (i=1; i<=5; i++)
	{
		printf("Enter status of order %d (V/I/S): ",i);
		scanf(" %c", &status);
		if(status == 'I'){
			printf("Skipping order %d\n", i);
			continue;}
		if(status == 's'){
			printf("Stoping at order %d\n", i);
			break;}
		printf("Processing order %d\n", i);
	}
	return 0;
}
