#include <stdio.h>

int main (void)
{
	int user;

	do {
		printf("Please enter a positive number :");
		scanf("%d" , &user);

	}

	while (user <= 0);

	printf ("You entered  : %d\n",user);



	return 0;

}


