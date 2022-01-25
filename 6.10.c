/*#include<stdio.h>
int main(void)
{
 int square_lower,square_upper;
 int lower,upper;
 int i;
 
 printf("Enter lower and upper integer limits: \n");
 while(scanf("%d %d",&lower,&upper) == 2&&lower < upper)
 {
  int sum=0;                       //不要忘记每次 for 循环结束 sum 都要归零 
  for (i = lower;i <= upper;i++)
  {
   sum += i*i;
   square_lower = lower*lower;
   square_upper = upper*upper;
  } 
  printf("The sums of the square from %d to %d is %d\n",square_lower,square_upper,sum);
  printf("Enter next set of limits: ");
 }
 printf("Done\n");
 
 return 0; 
}*/
#include <stdio.h>
int main(void)
{
    int square_lower,square_upper;
    int lower,upper;
    int i;
    printf("enter lower and upper:\n");
    while(scanf("%d %d",&lower,&upper)==2&&lower<upper)
    {
        int sum=0;
        for(i=lower;i<=upper;i++)
        {
            sum+=i*i;
            square_lower=lower*lower;
            square_upper=upper*upper;
        }
        printf("The sums of the square from %d to %d is %d\n",square_lower,square_upper,sum);
        printf("Enter next set of limits:");

    }
    printf("Done\n");
    return 0;
}