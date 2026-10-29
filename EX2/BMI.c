#include<stdio.h>
int main(void)
{
	//this progarm is to calculate and determine the BMI level of an individual
	float wt_lb,ht_in,bmi;
	printf("Please enter the weight in pounds:");
	scanf("%f",& wt_lb);
	printf("Please enter the height in inches:");
	scanf("%f",& ht_in);
	bmi=(wt_lb/(ht_in*ht_in))*703;
	
	//now determine the BMI level of the individual
	if (bmi>0 )
	{
		if(bmi<18.5)
		{
			printf("Underweight\n");
		}
		else if(bmi>=18.5 && bmi<25)
		{
			printf("Normal weight\n");
		}
		else if(bmi>=25 && bmi<30)
		{
			printf("OverWeight\n");
		}
		else if(bmi>=30)
		{
			printf("Obese\n");
		}
	}
	else
	{
		printf("Invalid  Height or weight! \n");
	}
	return 0;
}


