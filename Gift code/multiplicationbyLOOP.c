#include <stdio.h>

int main()
{
  int table;
  
 printf("Multiplication table of--");
 scanf("%d", &table);
 
 for(int i=1; i<11;i++)
 {
 printf("%d*%d=%d\n", table, i, table*i);
 }
 return 0;




}