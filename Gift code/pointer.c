
#include<stdio.h>


int main()
{	
int sum;
	printf("Pointer Basics\n");
	int a =76,b=4;
	int *ptra=&a;
	int *ptrb=&b;
	sum=*ptra+*ptrb;
	*ptrb=sum;
	
	//int **ptr1= ptra;
	int **ptr2= &ptra;
	
 	    
	
	
	int *ptr3= NULL;

	printf("The Address of pointer is %p\n", &ptra );
	printf("The Address of a is %p\n", ptra);
	
	
	printf("The Address of a is %p\n,", &a);
	
	printf("The Address of a is %p\n", ptra);
	
	printf("The Address of some garbage is %p\n", ptr2);
	
	printf("The Value of a is %d\n", *ptra);
	
	printf("The Value of a is %d\n", a);
	
	return 0;
}