#include <stdio.h>
int main()
{
   int arr[] = {311,52,3,4,5,6,67};
   int* arrpntr = arr;
   printf("Value at postion 3 is %d\n", arr[3]);
   printf("gitchange");
   printf("The address of first element of the array is %d \n", &arr[0]);
   
   
   printf("The address of first element of the array is %d \n", arr[0]);
   
   
   printf("The address of second element of the array is %d \n", arr[1]);
   
   
   printf("The address of second element of the array is %d \n", arr+ 1);
   
   
   printf("The address of third element of the array is %d \n", arr[2]);
   
   
   printf("The address of third element of the array is %d \n", arr+ 2);
   // arr--; // this line will throw an error (because arr is a constant)
   
   printf("The value at address of first element of the array is  %d \n", *(&arr[0]));
   
   
    printf("The value at address of first element of the array is  %d \n", arr[0]);
  
   printf("The value at address of first element of the array is  %d \n", *(arr));
   
   
    printf("The value at address of second element of the array is  %d \n", *(&arr[1]));
								
									
    printf("The value at address of second element of the array is  %d \n", arr[1]);
									
 printf("The value at address  of   second element of the array is  %d \n", *(arr+1));
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   return 0;














}