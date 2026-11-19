#include <stdio.h>
int main(void)
{
	float wt_lb, ht_in, bmi;

	printf("enter weight in pounds :");
	scanf("%f",&wt_lb);

	printf("enter height in inches :");
	scanf("%f",&ht_in);

	bmi=(wt_lb/(ht_in*ht_in))*703;
	printf("BMI:%.1f\n",bmi);

	if(bmi<18.5)
	printf("underwieght\n");
	else if(bmi<25)
	printf("normal weight\n");
	else if(bmi<30)
	printf("overweight\n");
	else
	printf("obese\n");

	return 0;
}
