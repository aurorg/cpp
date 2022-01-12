/*#include<stdio.h>
void copy_ptrs(double *target, double *source_begin, double *source_end)
{
    for (double *i = source_begin; i < source_end; i++)
        *(target++) = *i;
}
int main()
{
    double source[7] = { 1, 2, 3, 4, 5, 6, 7 };
    double target[3] = { 0 };
    copy_ptrs(target , source + 2 , source + 5); // 传址

    for (int i = 0; i < 3; i++)
    {
        printf("%.2lf ", target[i]);
    }
    return 0;}*/
#include <stdio.h>
void copy_ptrs(double*target,double*source_begin,double*source_end)
{
    for(double*i=source_begin;i<source_end;i++)
        *(target++)=*i;
}
int main()
{
    double source[7]={1,2,3,4,5,6,7};
    double target[3]={0};
    copy_ptrs(target,source+2,source+5);
    for(int i=0;i<3;i++)
    {
        printf("%.2lf ",target[i]);
    }
    return 0;
}