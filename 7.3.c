/*    第三题   */
/*#include<stdio.h>
int main(void)
{
 int integer; 
 int count_odd = 0;    //奇数数
 int count_even = 0;   //偶数数 
 int sum_odd = 0;      //奇数和 
 int sum_even = 0;     //偶数和 
 double odd_avr = 0.0; //奇数平均值 
 double even_avr = 0.0;//偶数平均值 
 
 while (scanf("%d",&integer) == 1 && integer)
 {
  if (integer % 2 == 0)
  { 
   count_even++;
   sum_even += integer;
  }
  else
  {
   count_odd++;
   sum_odd += integer;
  }
 }
 if (count_even)
  even_avr = (double)sum_even / (double)count_even;
 if (count_odd)
  odd_avr = (double)sum_odd / (double)count_odd;
  
 printf("count_even:%d  even_average:%lf  even_sum:%d\n",count_even,even_avr,sum_even);
 printf("count_odd:%d  odd_average:%lf  odd_sum:%d\n",count_odd,odd_avr,sum_odd);
  
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    int integer;
    int count_odd=0;
    int count_even=0;
    int sum_odd=0;
    int sum_even=0;
    double avr_odd=0;
    double avr_even=0;
    
}