#include<stdio.h>
int f(int n)
{    
if(n==1||n==2)     
    return 1;   
else       
    return f(n-1)+f(n-2);
}
int main()
{   
   int i;   
   scanf("%d",&i);   
   printf("%d",f(i));    
   return 0;