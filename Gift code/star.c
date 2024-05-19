#include <stdio.h>


	void starpattern(int rows)
{
	
	 for(int i=0;i<rows;i++)
	{	 
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
		}
	}
	
	void reverse_starpattern(int rows)
{	
	
	for(int i=0;i<rows;i++)
	{	 
		for(int j=0;j<=rows-i-1;j++)
		{
			printf("*");
		}
			printf("\n");
	}
}
int main()
{
int rows,type;

printf("Enter 0 for star printing or 1 for reverse star printing\n");
scanf("%d", &type);
printf("Enter how many rows you want?\n");
scanf("%d", &rows);



	switch(type)	
	{
	
	case 0:
	        starpattern(rows);
	break;
	
	case 1:
	         reverse_starpattern(rows);
	break;
default:
printf("You have entered invalid choice");
break;
	}
return 0;
}