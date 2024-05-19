#include <stdio.h>
void assign(int *Addition ){

*Addition=7;
}
void give( int *subtraction )
{
  
  *subtraction=1;

}
                                  
int main()	
{
int a=4, b=3;
assign(&a);
give(&b);

printf("The value of a is now %d\n", a );


printf("The value of b is now %d\n", b);



return 0;													 
}