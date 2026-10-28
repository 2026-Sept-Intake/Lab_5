#include <stdio.h>

int main (void)
{
        float GPA;
	printf (" Enter your GPA :");
	scanf ("%f", &GPA);

        if( GPA > 4.0 || GPA < 0.0 ){
		printf("Invalid GPA\n");
	}else if ( GPA >= 0.0 && GPA < 1){
		printf("Failed semester -- registration susepend\n ");
	}else if ( GPA >= 1.0 && GPA < 2){
	        printf(" On probation for next semester\n ");
	}else if ( GPA >= 2.0 && GPA < 3){
               
        }else if ( GPA >= 3.0 && GPA < 3.5){
                printf("Dean's list for semester");
        }else if ( GPA >= 3.5 && GPA <= 4.0 ){
	       printf("Highest honors for semester");
	}

        return 0;

}	
