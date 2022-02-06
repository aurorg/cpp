#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int time;
    char name[100];
}sub;
sub num[1000000];
int c(const void*a,const void*b)
{
    return((sub*)a)->time-((sub*)b)->time;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s%d",num[i].name,&(num[i].time));
    }
    qsort(num,n,sizeof(sub),c);//排序函数
    for(int i=0;i<n;i++)
    {
        printf("%s ",num[i].name);
    }
    return 0;
}