#include <stdio.h>

int main (void)
{
    float bmi, wt_lb, ht_in;

    printf("Enter The Weight (In Pounds): ");
    scanf("%f", &wt_lb);

    printf("Enter The Height (In Inches): ");
    scanf("%f", &ht_in);

    bmi = (wt_lb / (ht_in * ht_in)) * 703;

    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if ((18.5 <= bmi) && (bmi <= 25))
    {
        printf("Normal Weight\n");
    }
    else if ((25 <= bmi) && (bmi <= 30))
    {
        printf("Overweight\n");
    }
    else if (bmi > 30)
    {
        printf("Obese\n");
    }

    return 0;
}

