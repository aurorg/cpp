/*#include<stdio.h>
int max_bot(double *arry, int n)
{
    int max = 0;
    int temp = arry[0];
    for (int i = 0; i < n; i++)
    {
        if (temp < arry[i])
        {
            temp = arry[i];
            max = i;
        }
    }
  return max;
}
int main()
{
    double arry[6] = { 2.1, 3.4, 5.6, 2.3, 8.7, 1.2 };
    int max = max_bot(arry , 6);
    printf("%d", max);
    return 0;
}*/
#include <stdio.h>
int max_bot(double *arry,int n)
{
    int max=0;
    int temp =arry[0];
    for(int i=0;i<n;i++)
    {
        if(temp<arry[i])
        {
            temp=arry[i];
            max=i;
        }
    }
    return max;
}
int main()
{
    double arry[6]={2.1,3.2,2.4,2.5,2.8,9.9};
    int max=max_bot(arry,6);
    printf("%d",max);
    return 0;
}