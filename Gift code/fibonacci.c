#include <stdio.h>

int main()
{
int n,i,sum,no1=0,no2=1;
printf("Enter a number\n");
scanf("%d", &n);
printf("0\t");

for(i=0;i<n;i++){
	sum=no1+no2;
    no1=no2;
    no2=sum;
printf("%d\t", sum);
}

return 0;
}
