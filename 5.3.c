/*#inc,weeklude<stdio.h>
#define WEEK 7
int main(void)
{
 int first_days, last_days, weeks;
 
 printf("How many days?\n");
 scanf("%d",&first_days);
 
 while(first_days > 0)
  {
   weeks = first_days/WEEK;
   last_days = first_days%WEEK;
   printf("%d days are %d weeks, %d days.\n",first_days, weeks, last_days);
   scanf("%d",&first_days);
  }
  
 return 0;
}*/
#include <stdio.h>
#define WEEK 7
int main(void)
{
    int first_days,last_days,weeks;
    printf("How many days?\n");
    scanf("%d",&first_days);

    while(first_days>0)
    {
        weeks =first_days/WEEK;
        last_days=first_days%WEEK;
        printf("%d days are %d weeks,%d days.\n",first_days,weeks,last_days);
        scanf("%d",&first_days);
    }
    return 0;
}