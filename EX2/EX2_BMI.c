#include <stdio.h>

int main(void)
{
    float wt_lb, ht_in, BMI;

    printf("Enter weight in pounds: ");
    scanf("%f", &wt_lb);

    printf("Enter height in inches: ");
    scanf("%f", &ht_in);

    BMI = (wt_lb / (ht_in * ht_in)) * 703;
    printf("Calculated BMI: %.1f\n", BMI); // Rounded to tenths (.1f)

    if (BMI < 18.5) {
        printf("Underweight\n");
    } else if (BMI >= 18.5 && BMI < 25.0) {
        printf("Normal weight\n");
    } else if (BMI >= 25.0 && BMI < 30.0) {
        printf("Overweight\n");
    } else if (BMI >= 30.0) {
        printf("Obese\n");
    }

    return 0;
}	
