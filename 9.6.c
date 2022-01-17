#include<stdio.h>
void sorting(double *x,double *y,double *z)
{
 double temp = 0.0;
 if( *x>*y )
 {
  temp = *x;
  *x = *y;
  *y = temp;
 }
 if( *x>*z )
 {
  temp = *x;
  *x = *z;
  *z = temp;
 }
 if( *y>*z )
 {
  temp = *y;
  *y = *z;
  *z = temp;
 }
}
int main()
{
 double x,y,z;
 scanf("%lf %lf %lf",&x,&y,&z);
 printf("Before:%lf %lf %lf\n",x,y,z);
 sorting( &x, &y, &z);
 printf("After:%lf %lf %lf\n",x,y,z);
 
 return 0;
}