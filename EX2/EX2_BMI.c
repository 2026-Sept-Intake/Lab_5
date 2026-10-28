#include<stdio.h>
int main (void)
{
	float BMI;
	printf("enter the BMI");
	scanf("%f",&BMI);
	if (BMI<18.5){
	printf("Underweight");
	}else if (BMI>=18.5&&BMI<25.0){
	printf("normal weight");
        }else if (BMI>=25.0&&BMI<30.0){
        printf("Overweight");
	}else if (BMI>=30.0){
        printf("Obese");}

    return 0;
}

