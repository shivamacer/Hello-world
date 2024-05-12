#include <stdio.h>

int main(){

int maths_marks;

int science_marks;

printf("Enter your maths marks: ");
    
    scanf("%d", &maths_marks);
    
	
	printf("Enter your science marks: ");
    
    scanf("%d", &science_marks);
    
	//new comment
	
    if  (maths_marks>=30 && science_marks>=40){
    printf("You are passed in maths and science .You will recieve a ******gift of DAIRY MILK CHOCLATE worth Rs 45*****");
    
    }
    
    
    
    else if (maths_marks>=30 && science_marks<=39)

		{
     printf("You are passed in maths and failed in science.You will recieve a $$$$$$gift of DAIRY MILK CHOCLATE worth Rs 15$$$$$");
    }
    
    
    else if(maths_marks<=29 &&science_marks>=40 )
	{
    printf("You are passed in science failed in maths.You will recieve a @@@@@@gift of DAIRY MILK CHOCLATE worth Rs 15@@@@@@@");
	}
		
	else{
		printf("You are failed do more *HARDWORK* ");
		
    }
    
    return 0;
   
}
    
    
    

    





