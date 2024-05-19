#include<stdio.h>

int main()
{
	void ptrfunc(int*ptr)
	{  
	*ptr=8;
	
	}
	
	int x =5;
	printf("x=%d\n",x);
	printf("x=%d\n", &x);
	printf("x=%d",x);
	return 0;
}