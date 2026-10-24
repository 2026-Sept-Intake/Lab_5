#include<stdio.h>
int main(void)
{
	char status;
	int i;

	for (i=1; i <= 5; i=i+1) {
		printf("Enter the status of oder %d (V/I/S):", i);
		scanf("%c", &status);

		if (status == 'I') {
			printf("skipping oder %d \n", i);
			continue;
		}
		if(status == 'S') {
			printf("stopping at oder %d \n", i);
			break;
		}
		if(status == 'V') {
			printf("processing order %d \n", i);
		}
	}
	return 0;
}
