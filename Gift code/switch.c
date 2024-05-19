#include <stdio.h>

int main()
{
    int age;
	printf("Enter your age\n");
	scanf("%d", &age);
	
	
	switch(age)
	{
	    case 3:
		  
		  printf("The age is 3\n You can start your Worldcup prepration -__-");
		  break;
		  
		  
		case 15:
          printf("The age is 15 \n You can play under 20 World cup and IPL too ^__^");
           
		   break;
  
        case 26:
          printf("The age is 26\n You cannot play under 20 World cup but you can appear for IPL ^__*  ");		
            
			
			 break;
      
		  
           default:
		   printf("You can only play IPL *__*");
             
			 break;
	}
 return 0;
 

}