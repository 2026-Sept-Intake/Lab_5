#include<stdio.h>
#include<unistd.h> //for sleep function
int main (void)
{
	int t=5;
	while (t>=0) //t is the timer
        {
            printf("%d\n",t);
	    if (t==0)
	    {
	        break;
	    }
            sleep(1); //pauses program for 1 second
            t--;
	}
	printf("Countdown complete.\n");
return 0;
}

