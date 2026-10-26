#include<stdio.h>
int main(void)
{
	float GPA;
	printf("Enter the Grade Point Average(GPA):");
	scanf("%f",&GPA);
	if (GPA > 0.0){
		if (GPA < 1.0){
			printf("Failed semester---registration suspended\n");
		}
		else if ( GPA < 2.0){
			printf("On probation for next semester\n");
		}
		else if (GPA < 3.0){
			printf("(No message)\n");
		}
		else if (GPA < 3.5){
			printf("Dean's list for semester\n");
		}
		else if (GPA <= 4.0){
			printf("Highest honors for semester\n");
		}
		else if (GPA > 4.0){
			printf("GPA range is 0.0 - 4.0 \n");
		}
	}
	else {
		printf("You can't enter the GPA in minus values\n");
	
	}
     return 0 ;
}     
