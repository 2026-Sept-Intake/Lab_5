#include <stdio.h>

int main (void)
{
	float weight;
	float height;
	float bmi;

	printf("Enter your weight in pounds : ");
	scanf ("%f", &weight);

	printf("Enter your height in inches :");
	scanf ( "%f", & height);

	bmi =( weight /(height * height))*703;

	if (bmi < 18.5){
		printf("Underweight");
	}else if ( bmi >= 18.5 && bmi < 25 ){
		printf ("Normal weight");
	}else if ( bmi >= 25 && bmi <= 30 ){
		printf ("Overweight");
	}else if ( bmi >= 30 ){
		printf ("Obese");
	}

	return 0;

}
