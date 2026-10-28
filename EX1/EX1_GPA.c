#include <stdio.h>
int main(void)
{
	float GPA;
        printf ("enter the GPA");
	scanf ("%f",&GPA);
	if(GPA>=0.0&&GPA<=0.99){
	printf("input as fail the semester exam");
        }else if(GPA>=1.0&&GPA<=1.99){
	printf("input as on probation for next semester");
	}else if(GPA>=2.0&&GPA<=2.99){
	printf("No message");
        }else if(GPA>=3.0&&GPA<=3.49){
	printf("Dean's list for semester");
        }else if(GPA>=3.5&&GPA<=4.0){
	printf("Highest honors for semester");
	}
        return 0;
}
