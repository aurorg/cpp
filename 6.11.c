/*#include<stdio.h>
#define SIZE 8
int main(void)
{
 int number[SIZE];
 int result;
 int i;
 
 printf("Please enter eight numbers.\n");
 for (i = 0;i < SIZE;i++)
  scanf("%d",&number[i]);
  
 for (i = SIZE - 1;i >= 0;i--)
  printf("%d",number[i]);
 printf("\n");
 
 return 0;
}*/
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int number[SIZE];
    int i;
    printf("please enter eight numbers.\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&number[i]);
    }
    
    for(i=SIZE-1;i>=0;i--)
    {
        printf("%d",number[i]);
      }
        printf("\n");
      return 0;
    

}