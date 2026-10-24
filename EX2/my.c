#include <stdio.h>

int main(){
	float wt_lb, ht_in, BMI;

	printf("Enter the weight in pounds:");
	scanf("%f" , &wt_lb);

	printf("Enter the height in inches:");
	scanf("%f" , &ht_in);

	BMI = (wt_lb/(ht_in * ht_in)) * 703;

	printf("Your BMI :%f\n" , BMI);

	if (BMI < 18.5){
		printf("BMI category:Underweight");
	} else if (BMI < 25){
		printf("BMI category:Normalweight");
	} else if (BMI <30){
		printf("BMI category:Overweight");
	} else {
		printf("BMI category:Obese");
	}
	return 0;
}
