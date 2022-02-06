#include <stdio.h>
int main()
{
  long long int A;
  long long int B;
  int t;
  long long int sum[100];
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
      scanf("%lld %lld",&A,&B);
      sum[i]=A+B;
  }
  for(int i=0;i<t;i++)
  {
    printf("%lld\n",sum[i]);
     }
  }