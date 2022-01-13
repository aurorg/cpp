/*#include<stdio.h>
double min( double x, double y )
{
 return ( x < y ? x : y);
}
int main()
{
 double x,y,result;
 scanf("%lf",&x);
 scanf("%lf",&y);
 result = min(x,y);
 printf("%lf",result);
}*/
#include <stdio.h>
double min(double x,double y)
{
    return(x<y?x:y);
}
int main()
{
    double x,y,result;
    scanf("%lf",&x);
    scanf("%lf",&y);
    result=min(x,y);
    printf("%lf",result);
}