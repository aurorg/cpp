#include<stdio.h>
int main(void)
{
 int integer;
 int i, j;
 int sign = 0;
 
 printf("Please enter a postive integer: ");
 while (scanf("%d",&integer) != 0 && integer > 0)
 {
  for (i = 2;i <= integer;i++)
  {
   for (j = 2;j <= i;j++)
   {
    if (i % j == 0 && i != j)
    {
     sign = 1;
     break;
    }
   
   }
   if (sign == 0)
     printf("%d ",i);
   
   sign = 0;
  }
  printf("\n");
  printf("Please enter a postive integer: ");
 }
 
 return 0;
}