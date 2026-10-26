#include<stdio.h>
int main(void)
{
	float BMI,wt,ht;
	printf("Enter the Weight In Pounds:");
	scanf("%f",&wt);
	printf("Enter the Height In Inches:");
	scanf("%f",&ht);
	BMI = (wt/(ht*ht))*703;
        if (BMI < 18.5)
	{
		printf("Underweight\n", BMI);
	}
	else if (18.5 <= BMI < 25)
	{
		printf("Normal Weight\n", BMI);
        }
	else if (25 <= BMI < 30)
	{
		printf("Overweight\n",BMI);
  	}
	else if  (BMI >= 30)
	{
		printf("Obese\n" , BMI);
	}
        return 0;
}

