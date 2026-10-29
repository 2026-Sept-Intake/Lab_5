#include<stdio.h>
int main (void)
{	
	float wt_lb,ht_in,BMI;
	printf("Enter your weight(in pounds): ");
	scanf("%f",&wt_lb);
	printf("Enter your height(in inches): ");
	scanf("%f",&ht_in);

	BMI = (wt_lb/(ht_in*ht_in))*703;

	if (BMI<18.5)
	{
		printf("You are Underweight");
	}
	else if(BMI>=18.5&&BMI<25)
	{
		printf("You have a Normal Weight");
	}
	else if(BMI>=25&&BMI<30)
	{
		printf("You are Overweight");
	}
	else if(BMI>=30)
	{
		printf("You are Obese");
	}
	else 
	{
		printf("Invalid Inputs" );
	}
	



	return 0;
}

