#include<stdio.h>
#define OR_RATE 0.15
#define OV_RATE 0.28
void star(void);
void interface(void);
int main(void)
{
 int choice;
 double money, Boundaries, tax;
 
 star();
 interface();
 star();
 
 while (scanf("%d",&choice) == 1 )
 {
  int x = 1;
  while (x)
  {
   switch(choice)
   {
    case 1:
     x = 0;
     Boundaries = 17850;
     break;
    case 2:
     x = 0;
     Boundaries = 23900;
     break;
    case 3:
     x = 0;
     Boundaries = 29750;
     break;
    case 4:
     x = 0;
     Boundaries = 14875;
     break;
    case 5:
     return 0;
    default:
     printf("please input number from 1 to 5: \n");
     scanf("%d",&choice);
   }
  }
  printf("Enter your salary: \n");
  scanf("%lf",&money);
  if (money <= Boundaries)
   tax = money * 0.15;
  else
   tax = Boundaries * 0.15 + (money - Boundaries) * 0.28;
  printf("Tax: %.2lf\n",tax);
  printf("Enter 1 to 4 to continue or 5 to quit.\n");
 }
  
 return 0; 
}
void star(void)
{
 int i;
 
 for (i = 0;i <= 100;i++)
  printf("*");
 printf("\n");
}
void interface(void)
{
 printf("Enter your category: \n");
 printf("1) Single     2) Household\n");
 printf("3) Married    4) Divorced\n");
 printf("5) Quit\n");
}