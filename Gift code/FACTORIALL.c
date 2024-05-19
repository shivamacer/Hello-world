#include <stdio.h>

int main()

{
int num,fac;
printf("Enter the number ");
scanf("%d", &num);
fac=1;

for(int i=num;i>0;i--)
{
   fac=fac*i;
}
printf("The factorial is %d\n",fac);
return 0;
}















