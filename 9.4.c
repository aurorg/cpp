/*#include<stdio.h>
double average( double x , double y )
{
 double average;
 x = 1/x;//倒数 
 y = 1/y;
 average = (x+y)/2.0;//倒数平均值
 average = 1/average;//结果倒数 
 
 return average;
} 
int main()
{
 double x,y,aver;
 scanf("%lf %lf",&x,&y);
 aver = average(x,y);
 printf("%lf",aver);
 
 return 0;
}*/
#include <stdio.h>
double average(double x,double y)
{
    double average;
    x=1/x;
    y=1/y;
    average=(x+y)/2.0;
    average=1/average;
    return average;
}
int main()
{
    double x,y,aver;
    scanf("%lf %lf",&x,&y);
    aver=average(x,y);
    printf("%lf",aver);
    return 0;
}