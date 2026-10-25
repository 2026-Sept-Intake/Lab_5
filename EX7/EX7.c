#include<stdio.h>
int main(void)
{
	int timer = 5;
	while(timer >= 0){
		printf("%d\n", timer);
		timer--;
	}
	printf("Countdown complete. \n");
	return 0;
}

