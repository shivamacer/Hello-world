#include <stdio.h>
 
 int main()
 {
	 //5
   int num;
   int tmp;
   printf("Find factorial of the number:");
   scanf("%d", &num);
    
	tmp=1;
	for(int i=num;i>0 ;i--)
	{
		//5
		//tmp=i;
	//printf("Factorial of %d is %d\n",num,i*(i-1) );
	tmp=i*tmp;
	printf("i=%d * tmp=%d\n", i, tmp);
	}
	
	printf("Fact = %d", tmp);
	return 0;
 }