/*#include<stdio.h>
#define SIZE 8
int main(void)
{
 double a[SIZE];
 double b[SIZE];
 int i;
 double sum;
 
 for (i = 0;i < SIZE;i++)
 {
  scanf("%lf",&a[i]);
  sum += a[i];
  b[i] = sum;
 }
 for (i = 0;i < 8;i++)
  printf("%.2lf ",a[i]); 
 printf("\n");
 
 for (i = 0;i < 8;i++)
  printf("%.2lf ",b[i]);
  
 return 0;
} */
#include <stdio.h>
#define SIZE 8
int main(void)
{
    double a[SIZE];
    double b[SIZE];
    int i;
    double sum;
    for(i=0;i<8;i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
        b[i]=sum;
    }
    for(i=0;i<8;i++)
     printf("%.2lf ",a[i]);
    printf("\n");
    for(i=0;i<8;i++)
     printf("%.2lf ",b[i]);
    return 0;
}