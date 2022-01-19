#include<stdio.h>
double power(double x,double y)
{
 double temp;
 if( y>0 )
 {
  y--;
  return (x * power(x,y));
 }
 if( y==0 )
 {
  if( x==0 )
  {
   printf("0 to the 0 is undefined\n");//当底数为0但指数不为0时，这句话也会蹦出来，我自己也迷糊了。 
  }
  return 1;
 }
 if( y<0 )
 {
  y++;
  temp = 1/x;
  return (temp * power(x,y));
 }
}
int main()
{
 double x,y,result;
 
 scanf("%lf %lf",&x,&y);
 result = power(x,y);
 printf("%lf to the %lf is %lf\n",x,y,result);
 
 return 0;
}