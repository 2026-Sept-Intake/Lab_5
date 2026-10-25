#include<stdio.h>
int main(void)
{
	float wt_lb,ht_in,BMI;
	printf("Enter weight(pounds): ");
	scanf("%f", &wt_lb);
	
	printf("Enter height(inches): ");
	scanf("%f", &ht_in);

	BMI =( (wt_lb)/(ht_in)*(ht_in) )*703;
	printf("BMI=%f\n", BMI);

	if(BMI < 18.5)
	{
		printf("Underweight");
	}
		else if(BMI < 25){
                        printf("Normal weight");
		}
	        else if(BMI < 30){
			printf("Overweight");
		}
	
	else
	{
		printf("Obese");
	}
	return 0;
}


