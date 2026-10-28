#include <stdio.h>
int main()
{
	float BMI, wt_lb, ht_in;
	printf("Enter your weight in pounds ");
	scanf("%f", &wt_lb);
	printf("Enter your height in inches ");
	scanf("%f", &ht_in);

	BMI=(wt_lb/(ht_in*ht_in)) * 703;

	if (BMI<18.5)
	{
           printf("Underweight");
        }
	else if (BMI<25) // 18.5 to 24.9
	{
	   printf("Normal weight");
	}
	else if (BMI<30)
	{
	   printf("Overweight"); // 25 to 29.9
	}
	else // 30 and higher
	{
	   printf("Obese");
	}
	return 0;
}
