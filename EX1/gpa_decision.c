#include<stdio.h>
int main(void)
{
	float gpa;
	printf("enter your gpa");
	scanf("%f" ,&gpa);
	if (gpa >= 0.0 && gpa <= 4.0) {
		if (gpa >= 0.0 && gpa < 1.0) {
			printf("failed semester - registration suspend");
		}
		else if (gpa >= 1.0 && gpa < 2.0) {
			printf("on probation for next semester");
		}
		else if (gpa >= 2.0 && gpa < 3.0) {
			printf("(No message)");
		}
		else if (gpa >= 3.0 && gpa < 3.5) {
			printf("Dean's lsit for semester");
		} 
		else {
			printf("Highest honors for semester");
		}

	}       
	else{ ("Invalid gpa");
	}
return 0;
}
