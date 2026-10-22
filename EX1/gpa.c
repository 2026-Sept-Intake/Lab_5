#include <stdio.h>

int main(void){
	float gpa = 0;

	printf("Enter the gpa: ");
	scanf("%f",&gpa);
	
	if(gpa > 4.0 || gpa < 0.0 ){
		printf("invalid gpa\n");
	}else if(gpa >= 0.0 &&  gpa <1 ){
		printf("Failed semester — registration suspended\n");
	}else if(gpa>=1.0 &&  gpa < 2){
		printf("On probation for next semester\n ");
	}else if(gpa>=2.0 && gpa < 3){
		
	}else if(gpa>=3.0 && gpa < 3.5){
		printf("Dean's list for semester\n");
	}else if(gpa>=3.5 && gpa<=4.0){
		printf("Highest honors for semester\n");
	}
	

	return 0;

}
