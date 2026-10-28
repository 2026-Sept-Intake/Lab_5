#include <stdio.h>
int main (void)
{
	float bmi,weight,height;

	printf("Enter your weight in pounds:");
	scanf("%f",&weight);
	printf("Enter your height in inches:");
	scanf("%f",&height);

	//calculation of bmi
	
	bmi = (weight/(height*height))*703;
	printf("Your BMI is %.2f\n",bmi);

	if(bmi<18.5)
	{
		printf("Underweight\n");
	}
	else if ( bmi < 25)
	{
		printf("Normal weight\n");
	}
	else if ( bmi < 30)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obese\n");
	}
	return 0;
}
