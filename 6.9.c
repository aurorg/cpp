/*#include<stdio.h>
void result(double n1,double n2);
int main(void)
{
 double n1,n2;
 
 printf("Please enter two float number.\n");
 while(scanf("%lf %lf",&n1,&n2) == 2)
 {
  result(n1,n2);
 }
 
 return 0;
}
void result(double n1,double n2)
{
 printf("The difference between these two numbers is divided by the two-digit product is %lf\n",
 (n1-n2)/(n1*n2));   //两数之差除以两数乘积 
 printf("Enter again.\n");
}*/
#include <stdio.h>
void result(double n1,double n2);
int main(void)
{
    double n1,n2;
    printf("number\n");
    while(scanf("%lf %lf",&n1,&n2)==2)
    {
        result(n1,n2);
    }
    return 0;
}
void result(double n1,double n2)
{
    printf("%lf\n",(n1-n2)/(n1*n2));
        printf("enter again\n");
}