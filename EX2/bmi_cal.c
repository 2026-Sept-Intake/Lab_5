#include<stdio.h>
int main(void)
{
	float wt_lb , ht_in , bmi;
	printf("Enter weight in pounds");
	scanf("%f" , &wt_lb);

	printf("Enter height in inches");
	scanf("%f" , &ht_in);
	 
	if (wt_lb > 0.0 && ht_in > 0.0) {
		bmi = (wt_lb / (ht_in * ht_in)) * 703;
		printf("BMI  = %f \n", bmi);
		if(bmi < 18.5) {
			printf("Underweight \n");
		}
		else if (18.5 <= bmi < 25) {
			printf("Normmalweight \n");
		}
		else if (25 <= bmi < 30) {
			printf("Overwweight \n");
		}
		else  {
			printf("obese \n");
		}
	}
	else {
		printf("Invalid weight or height \n");
	}
	return 0;
}
