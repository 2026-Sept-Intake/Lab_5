#include <stdio.h>
#include <math.h>

int main(void)
{
	float bmi, height, weight;
	printf("Enter Height: ");
	scanf("%f", &height);
	printf("Enter Weight: ");
	scanf("%f", &weight);

	bmi = (weight/(height*height))*703;
	bmi = round(bmi);

	if(bmi < 18.5)
	{
		printf("Underweight");
	}
	else if(bmi < 25)
	{
		printf("Normal Weight");
	}
	else if(bmi < 30)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}
	printf("\n");
	return 0;
}

