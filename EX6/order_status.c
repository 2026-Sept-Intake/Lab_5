#include<stdio.h>
int main (void)
{
	char x[5]; //take input of statuses into an array to store all of the inputs one by one similar to the test scenario given
	printf("input the 5 order statuses respectively\n");
	for(int i=0;i<5;i++)
	{
           scanf(" %c",&x[i]);
        }
        for(int i=1;i<=5;i++)
        {
           switch(x[i-1]) //i-1 because an array index start from 0
           {
              case 'I':
                printf("Skipping order %d\n", i);
                break; // Exits switch, moves to next loop iteration
            
              case 'S':
                printf("Stopping at order %d\n", i);
                return 0; // Exits the whole program immediately
            
              case 'V':
                printf("Processing order %d\n", i);
                break;
           }
        }
        return 0;
}

