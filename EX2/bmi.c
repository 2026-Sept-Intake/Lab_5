#include <stdio.h>

int  main(void){

	float weight = 0;
	float height = 0;
	double bmi = 0;

	printf("Enter the weight in pounds: ");
	scanf("%f",&weight);

	printf("Enter the height in inches: ");
	scanf("%f",&height);
	

	bmi = (weight/(height*height))*703;

	if(bmi<18.5){
		printf("Underweight\n");
	}else if(bmi>= 18.5 && bmi<25){
		printf("Normal\n");
	}else if(bmi>= 25 && bmi < 30){
		printf("Overweight\n");
	}else if(bmi>= 30){
		printf("Obese\n");
	}


	return 0;
}
