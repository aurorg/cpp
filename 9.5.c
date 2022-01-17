/*#include<stdio.h>
void larger_of( double *x, double *y )
{
 if( *x>*y )
 {
  *y = *x;
 }
 else
 {
  *x = *y;
 }
}
int main()
{
 double x,y;
 scanf("%lf %lf",&x,&y);
 printf("Before:%lf %lf\n",x,y);
 larger_of( &x, &y);
 printf("After:%lf %lf\n",x,y);
 return 0;}*/
#include <stdio.h>
void larger_of(double *x,double *y)
{
    if(*x>*y)
    {
        *y=*x;
    }
    else
    {
        *x=*y;
    }
}
int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("Before:%lf %lf\n",x,y);
    larger_of(&x,&y);
    printf("After:%lf %lf\n",x,y);
    return 0;
}