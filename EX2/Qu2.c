#include<stdio.h>
int main(void)
{
	float wt , ht , bmi ;
	printf("Enter your weight(lbs):\n");
		scanf("%f", &wt);
	printf("Enter your height(inch):\n");
		scanf("%f", &ht);
	bmi = ( wt/ (ht*ht))*703;
	printf("Your BMI is:%.2f\n" , bmi);

	if ( bmi < 18.5 )
	{
		printf("Underweight\n");
	}
	else if ( bmi < 25 )
	{
		printf("Normal weight\n");
	}
	else if ( bmi < 30 )
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obese\n");
	}

	return 0;
}


