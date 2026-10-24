#include<stdio.h>
int main(void)
{
	int count = 5;
	while (count >= 0) {
		printf( "%d \n", count);
		count = count - 1;
	}
	printf("countdown complete.\n");
	return 0;
}
