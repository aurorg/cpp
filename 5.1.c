/*#include<stdio.h>
#define MIN 60
int main(void)
{
 int min, hour, sec;
 
 printf("Please enter minutes.\n");
 scanf("%d",&min);
 while (min > 0)
 {
  hour = min / MIN;
  sec = min % MIN;
  if(hour > 1)
   printf("%d minutes is %d hours and %d seconds.\n",min, hour, sec);
  else
   printf("%d minutes is %d hour and %d seconds.\n",min, hour, sec);
  
  scanf("%d",&min);  
 }
 
 return 0;
} */
#include <stdio.h>
#define MIN 60
int main(void)
{
    int min,hour,sec;
    printf("please enter minutes.\n");
    scanf("%d",&min);
    while(min>0)
    {
        hour=min/MIN;
        sec=min%MIN;
        if(hour>1)
          printf("%d minutes is %d hours and %d seconds.\n",min,hour,sec);
        else
          printf("%d minutes is %d hour and %d seconds.\n",min,hour,sec);
    scanf("%d",&min);
    }
    return 0;
}
