#include<stdio.h>
int main(void){
    int a,b,k,i;
    int yushu[30];
    //收集余数
    scanf("%d",&a);
    k=0;
    while(a!=0){
        b=a/2;
        k++;
        yushu[k]=a-b*2;
        a=a/2;
    };
    for (i=k;i>=1;i--){
        printf("%d",yushu[i]);
    } 

    return 0;
} 
