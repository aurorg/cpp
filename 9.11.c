#include<stdio.h>
int Fibonacci(int n)
{
 int i;
 int x,y,z;
 for( i=1; i<=n; i++ )
 {
  if( i==1 )
  {
   x = 1;
   printf("%d ",x);
  }
  else if( i==2 )
  {
   y = 1;
   printf("%d ",y);
  }
  else
  {
   z = x+y;
   x = y;
   y = z;
   printf("%d ",z);
  }
 }
 putchar('\n');
}
int main()
{
 int n;
 scanf("%d",&n);
 Fibonacci(n);
 
 return 0;
}