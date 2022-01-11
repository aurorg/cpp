/*#include<stdio.h>
double minus(double arry[] , int n)
{
    double max = arry[0];
    double min = arry[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arry[i])
            max = arry[i];
        if (min > arry[i])
            min = arry[i];
    }
    double two_minus = max - min;
    return two_minus; 
}
int main()
{
    double arry[6] = { 2.1, 3.4, 5.6, 2.3, 8.7, 1.2 };
    double result = minus(arry , 6);
    printf("%.2lf", result);
    return 0;}*/
#include <stdio.h>
double minus(double arry[],int n)
{
    double max=arry[0];
    double min=arry[0];
    for(int i=0;i<n;i++)
    {
        if(max<arry[i])
           max=arry[i];
        if(min>arry[i])
           min=arry[i];
    }
    double two_minus=max-min;
    return two_minus;
}
int main()
{
    double arry[6]={1.0,2.0,3.0,4.0,5.0,6.0};
    double result=minus(arry,6);
    printf("%.2lf",result);
    return 0;
}