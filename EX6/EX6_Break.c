#include <stdio.h>
int main(void)
{
	char status;
	int i;
	for(i = 1;i<=5;i++) {
		printf("enter status for order %d (V/I/S): ", i);
		scanf(" %c",&status);
	if(status == 'I') {
		printf("skipping order %d\n",i);
		continue;
	}
	if(status== 'S') {
		printf("stopping at order %d\n",i);
		break;
	}
	printf("processing order %d\n",i);
        }
          return 0;
}
