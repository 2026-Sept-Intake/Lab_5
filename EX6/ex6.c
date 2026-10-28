#include<stdio.h>
int main(void)
{
	int n;
	char status;

	for (n=1; n<=5; n++){

		printf("Orders status : ");
		scanf(" %c", &status);

		if (status == 'I'){
			printf("Skipping order %d\n", n);
			continue;
		}

		if (status == 'S'){
			printf("Stopping at order %d\n", n);
			break;
		}

		if (status == 'V'){
			printf("Processing order %d\n", n);
		}
		
	}

	return 0;
}	
