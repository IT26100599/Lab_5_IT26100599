#include<stdio.h>
int main(void)
{  
    float gpa;

    printf("Enter GPA value:");
    scanf("%f",&gpa);

    if (gpa>=0.0&&gpa<=4.0){
	    if (gpa>=3.5){
		    printf("Highest honors for semester\n");
	    }
	    else if(gpa>=3){
                    printf("Dean's list for semester\n");
	    }    
            else if(gpa>=2){
                    printf("\n");
	    }

	    else if(gpa>=1){
                    printf("On probation for next semester\n");
	    }
	    else if(gpa>=3.5){
                    printf("Failed semester - registration suspended\n");
	    
	    }
    }
	 else{
		 printf("Invalid GPA Value\n");
	    }	 
            
	    return 0;
    	
    
 }

