#include<stdio.h>
int main(void)
{
	float BMI, wt_lb, ht_in;

	printf("Enter Your weight in pounds : ");
	scanf("%f", &wt_lb);

	printf("Enter Your height in inches : ");
        scanf("%f", &ht_in);

	BMI = (wt_lb/(ht_in*ht_in))*703;

	printf("Your BMI value : %.2f\n", BMI);

	if (BMI<=0 && BMI<18.5){
		printf("Underweight\n");
	}
	else if (BMI<25){          
                printf("Normal weight\n");
        }
	else if (BMI<30){
                printf("Overweight\n");
        }
	 else if (BMI>=30){
                printf("Overweight\n");
        }
	  else{
                printf("Incorrect BMI value\n");
        }
	  return 0;

}
