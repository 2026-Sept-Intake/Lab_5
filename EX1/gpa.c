#include <stdio.h>

int main(void){

        float GPA;

        printf("Enter the GPA:");
        scanf("%f", &GPA);

	if(GPA>=0.00&&GPA<=4.00){

	if(GPA<1){
                printf("Failed semester-registration suspended");
        }
        else if(GPA<2){
                printf("On probation for next semester");
        }
        else if(GPA<3){
                printf("No message");
        }
        else if(GPA<3.5){
                printf("Dean's list for semester");
        }
        else if(GPA<4.0){
                printf("Highest honors for semester");
        }
	}
	else{
		printf("Invalid GPA");
	}


        return 0;

}

