#include<stdio.h>
int main (void)
{
	float bmi,wt_lb,ht_in;
	printf("input weight in pounds and height in inches respectively\n");
	scanf("%f %f",&wt_lb,&ht_in);
	bmi=(wt_lb/(ht_in*ht_in))*703;
	if(bmi<18.5)
	{
		printf("Underweight\n");
	}
	else if(bmi>=18.5 && bmi<=25)
	{
		printf("Normal weight\n");
	}
	else if(bmi>=25 && bmi<30)
	{
		printf("Overweight\n");
	}
	else 
	{
		printf("Obese\n");
	}
	return 0;
}
