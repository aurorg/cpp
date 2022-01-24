/*#include<stdio.h>
int main(void)
{
 double n1,n2;
 
 printf("Please enter two float number.\n");
 while(scanf("%lf %lf",&n1,&n2) == 2)
 {
  printf("The difference between these two numbers is divided by the two-digit product is %lf\n",
  (n1-n2)/(n1*n2));   //两数之差除以两数乘积 
  printf("Enter again.\n");
 }
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    double n1,n2;
    printf("please enter two float number.\n");
    while(scanf("%lf %lf",&n1,&n2)==2)
    {
        printf("The difference between these two numbers is divided by the two-digit product is %lf\n",(n1-n2)/(n1*n2));
        printf("enter again\n");
    }
    return 0;
}