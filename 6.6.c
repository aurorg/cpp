/*#include<stdio.h>
int main(void)
{
 int i,j;
 int ceiling,lower;
 int square_num,cubic_num;
 
 printf("Please enter the upper and lower limits of this form: \n");
 while(scanf("%d %d",&ceiling,&lower) == 2)
 {
  for(j = lower;j <= ceiling;j++)
  {
   square_num = j*j;
   cubic_num = j*square_num;
   printf("number:%5d  square_num:%10d  cubic_num:%15d\n",j,square_num,cubic_num);
   }
   
  printf("Please enter the upper and lower limits of this form: \n");
 }
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    int i,j;
    int ceiling,lower;
    int square_num,cubic_num;
    printf("please enter the upper and lower limits of this form:\n");
    while(scanf("%d %d",&ceiling,&lower)==2)
    {
        for(j=lower;j<=ceiling;j++)
        {
            square_num=j*j;
            cubic_num=j*square_num;
            printf("number:%5d square_num:%10d cubic_num:%15d\n",j,square_num,cubic_num);
        }
        printf("please enter the upper and lower limits of this form:\n");
    }
    return 0;
}