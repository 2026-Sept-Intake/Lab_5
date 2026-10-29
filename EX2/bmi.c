#include <stdio.h>
int main() 
{

    float wt_lb, ht_in, bmi;

    printf("Enter weight in pounds: ");
    scanf("%f", &wt_lb);

    printf("Enter height in inches: ");
    scanf("%f", &ht_in);

    bmi = (wt_lb / (ht_in * ht_in)) * 703;

    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi < 25) {
        printf("Category: Normal weight\n");
    }
    else if (bmi < 30) {
        printf("Category: Overweight\n");
    }
    else {
        printf("Category: Obese\n");
    }

    return 0;
}

