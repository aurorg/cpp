/*#include<stdio.h>
int main(void)
{
 double sum1 = 100.0; //Daphne's money
 double sum2 = 100.0; //Deirdre's money
 double money = 100.0;
 int years = 0;
 
 do
 {
  years++;
  sum1 += money*0.1;
  sum2 += sum2*0.05;
 }while(sum1 >= sum2);
 printf("years: %d \n Daphne's money: %lf \n Deirdre's money: %lf\n",years,sum1,sum2);
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    double sum1=100.0;
    double sum2=100.0;
    double money=100.0;
    int years =0;\
    do{
        years++;
        sum1+=money*0.1;
        sum2+=sum2*0.05;
    }while(sum1>=sum2);
    printf("years: %d \n  Daphne's money:%lf \n  Deirdre's money:%lf\n",years,sum1,sum2);

    return 0;
}