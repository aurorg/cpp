/*#include<stdio.h>
void f(double arry[] , int n)
{
    double temp = arry[n];
    for (int i = 0; i < n/2; i++) //过半交换
    {
        double temp = arry[i];
        arry[i] = arry[n - 1 - i];
        arry[n - 1 - i] = temp;
    }
}
int main()
{
    double arry[6] = { 2.1, 3.4, 5.6, 2.3, 8.7, 1.2 };
    f(arry , 6);
    for (int i = 0; i < 6; i++)
        printf("%.2lf ", arry[i]);
    printf("\n");
    return 0;
}*/
#include <stdio.h>
void f(double arry[],int n)
{
    double temp=arry[n];
    for(int i=0;i<n/2;i++)
    {
        double temp=arry[i];
        arry[i]=arry[n-1-i];
        arry[n-1-i]=temp;
    }
}
int main()
{
    double arry[6]={1,2,3,4,5,6};
    f(arry ,6);
    for (int i=0;i<6;i++)
        printf("%.2lf  ",arry[i]);
    printf("\n");
    return 0;
}