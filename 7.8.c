#include<stdio.h>
#define NON_OVERTIME 40.00
#define BASIC 10.00
#define FIRST_HOUR 300.00
#define NEXT_HOUR 450.00
#define FIRST_RATE 0.15
#define NEXT_RATE 0.20
#define LAST_RATE 0.25
void interface(void);
char star(void);
int main(void)
{
 int num, x = 1;
 float hour,sum,tax,gain,perhour;
 
 printf("Please enter you work hour a week.\n");
 scanf("%f",&hour);
 if (hour > NON_OVERTIME)
  hour = NON_OVERTIME + (hour - NON_OVERTIME) * 1.5;
  
 star();
 interface();
 star();
 
 printf("Which is your wages per hour.\n");
 scanf("%d",&num);
 while (x)
 {
  switch (num)
  {
   case 1:
    perhour = 8.75;
    x = 0;
    break;
   case 2:
    perhour = 9.33;
    x = 0;
    break;
   case 3:
    perhour = 10.00;
    x = 0;
    break;
   case 4:
    perhour = 11.20;
    x = 0;
    break;
   case 5:
    return 0;
    break;
   default:
    printf("please input number from 1 to 5: \n");
    scanf("%d",&num);
  }
 }
 sum = perhour * hour;
 if (sum <= FIRST_HOUR)
 {
  tax = sum * 0.15;
  gain = sum - tax;
 }
 else if (sum > FIRST_HOUR && sum <= NEXT_HOUR)
 {
  tax = FIRST_HOUR * 0.15 + (sum - FIRST_HOUR) * 0.20;
  gain = sum - tax;
 }
 else
 {
  tax = FIRST_HOUR * 0.15 + 150 * 0.2 + (hour - 450) * 0.25;
  gain = sum - tax;
 }
 printf("real hour:%.f  perhour:%.2f  tax:%.2f  gain:%.2f", hour, perhour, tax, gain);
 
 return 0;
}
 
void interface(void)
{
 printf("Enter the number corresponding to the desired pay rate or action:\n");
 printf("1) $8.75/hr        2) $9.33/hr\n");
 printf("3) $10.00/hr       4) $11.20/hr\n");
 printf("5) quit\n");
}

char star(void)
{
 int i = 1;
 
 for (i;i < 100;i++)
  printf("*");
 printf("\n");
} 