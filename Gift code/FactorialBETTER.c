#include <stdio.h>
 
 int main()
 {
 int factorial(int number)
 {
     if (number == 1 || number== 0)
	 {
	 return 1;
  }	 
  else{
   return (number*factorial(number-1));
   }
 }
  int num;
  printf("Factorial of: ");
  scanf("%d", &num);
  printf("The factorial of %d is %d\n ", num, factorial(num));
  
  
 
 return 0;
 }