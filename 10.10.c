/*#include<stdio.h>
void arry(double source_1[] , double source_2[] , double target[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        target[i] = source_1[i] + source_2[i];
    }
}
int main()
{
    double source_1[3] = { 1, 2, 3 };
    double source_2[3] = { 4, 5, 6 };
    double target[3] = { 0 };

    arry(source_1 , source_2 , target , 3);

    for (int i = 0; i < 3; i++)
        printf("%.2lf ", target[i]);
}*/
#include <stdio.h>
void arry(double source_1[],double source_2[],double target[],int n)
{
    for(int i=0;i<n;i++)
    {
        target[i]=source_1[i]+source_2[i];
    }
}
int main()
{
    double source_1[4]={1,2,1,1};
    double source_2[4]={1,1,1,1};
    double target[4]={0};
    arry(source_1,source_2,target,4);
    for(int i=0;i<4;i++)
        printf("%.2lf ",target[i]);
}