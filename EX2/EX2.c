#include <stdio.h>

int main(){

double wt_lb,ht_in,BMI;

printf("Enter weight in punds: ");
scanf("%lf",&wt_lb);

printf("Enter height in inches: ");
scanf("%lf",&ht_in);

BMI = (wt_lb/(ht_in*ht_in))*703;

if (BMI < 18.5) {
        printf("Underweight");
    }
    else {
        if (BMI >= 18.5 && BMI < 25) {
            printf("Normal Weight");
        }
        else {
            if (BMI >= 25 && BMI < 30) {
                printf("Overweight");
            }
            else {
                if (BMI >= 30) {
                    printf("Obese");
                }
            }
        }
    }

return 0;
}
