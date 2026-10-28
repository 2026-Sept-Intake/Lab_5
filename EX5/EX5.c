#include <stdio.h>
int main()

{      
       	int num;

	// Repeat until a positive number is given as input
	do
        {
	   printf("Please enter a positive number: ");
	   scanf("%d", &num);
	}
	while(num <=0); // Loops if input is zero or negative

	printf("You entered: %d\n", num);

	return 0;

}

