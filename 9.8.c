#include<stdio.h>
#include<math.h>
double power( double x,double y )
{
 double temp;
 if( y>0 )
 {
  return pow( x,y );
 }
 if( y==0 )
 {
  if( 0==x )
  {
   printf("0 to the 0 is undefined\n");
  }
  
  return 1;
 }
 if( y<0 )
 {
  temp = pow( x,-y );
  return (1/temp);
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