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
char get_char(void);
int main(void)
{
 int x = 1;
 char num;
 float hour,sum,tax,gain,perhour;
  
 star();
 interface();
 star();
 
 scanf("%c",&num);
 while (x)
 {
  switch (num)
  {
   case 'a':
    perhour = 8.75;
    x = 0;
    break;
   case 'b':
    perhour = 9.33;
    x = 0;
    break;
   case 'c':
    perhour = 10.00;
    x = 0;
    break;
   case 'd':
    perhour = 11.20;
    x = 0;
    break;
   case 'q':
    return 0;
    break;
   default:
    printf("please input Letters from a to d(input q to quit): \n");
    continue;
  }
  printf("you have select $%.2lf\n",perhour);
        printf("Please enter you work hour a week.\n");
  scanf("%f",&hour);
  if (hour > NON_OVERTIME)
  hour = NON_OVERTIME + (hour - NON_OVERTIME) * 1.5;

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
  
  x = 1;
  
 }
 
 return 0;
}
 
void interface(void)
{
 printf("Enter the number corresponding to the desired pay rate or action:\n");
 printf("a) $8.75/hr        b) $9.33/hr\n");
 printf("c) $10.00/hr       d) $11.20/hr\n");
 printf("q) quit\n");
}

char star(void)
{
 int i = 1;
 
 for (i;i < 100;i++)
  printf("*");
 printf("\n");
}

char get_char(void)
{
 int ch;
 
 ch = getchar();
 while((ch = getchar()) != '\n')
  continue;
 
 return ch;
} 