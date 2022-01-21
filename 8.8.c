#include<stdio.h>
char get_choice(void);
float first_input(void);
float last_input(void);
float add(void);
float subtract(void);
float multipy(void);
float divide(void);
int main(void)
{
 char choice;

 while ((choice = get_choice()) != 'q')
 { 
  switch(choice)
  {
   case 'a':add();
      break;
   case 's':subtract();
      break;
   case 'm':multipy();
      break;
   case 'd':divide();
      break;
   default :printf("Please input a right word.\n");
      continue;
  }
 }
 printf("Done!\n");
 
 return 0;
}
char get_choice(void)
{
 char choice;
 
 printf("Enter the operation of your choice:\n");
 printf("a. add        s. subtract\n");
 printf("m. multiply   d. divide\n");
 printf("q. quit\n");
 
 choice = getchar();
 while (getchar() != '\n')
  continue;
  
 return choice; 
}
float first_input(void)
{
 float input;
 char ch;
 
 printf("Enter first number: \n");
 while (scanf("%f",&input) == 0)
 {
  while((ch = getchar()) != '\n')
   putchar(ch);
  printf(" is not a number.\n");
  printf("Please enter a number, such as 2.5, -1.78E8, or 3: \n");
 }
 while (getchar() != '\n')
  continue;
 
 return input;
}
float last_input(void)
{
 float input;
 char ch;
 
 printf("Enter second number: \n");
 while (scanf("%f",&input) == 0)
 {
  while((ch = getchar()) != '\n')
   putchar(ch);
  printf(" is not a number.\n");
  printf("Please enter a number, such as 2.5, -1.78E8, or 3: \n");
 }
 while (getchar() != '\n')
  continue;
 
 return input;
}
float add(void)
{
 float first_num, last_num;
 float result;
 

 first_num = first_input();
 last_num = last_input();
 result = first_num + last_num;
 printf("%.1f + %.1f = %.1f\n",first_num, last_num, result);
 
 return result;
}
float subtract(void)
{
 float first_num, last_num;
 float result;
 
 first_num = first_input();
 last_num = last_input();
 result = first_num - last_num;
 printf("%.1f - %.1f = %.1f\n",first_num, last_num, result);
 
 return result;
}
float multipy(void)
{
 float first_num, last_num;
 float result;
 
 first_num = first_input();
 last_num = last_input();
 result = first_num * last_num;
 printf("%.1f * %.1f = %.1f\n",first_num, last_num, result);
 
 return result;
}
float divide(void)
{
 float first_num, last_num;
 float result;

 first_num = first_input();
 last_num = last_input();
 if (last_num == 0)
 {
  printf("Enter a number other than 0: \n");
  last_num = last_input();
 }
 result = first_num / last_num;
 printf("%.1f / %.1f = %.1f\n",first_num, last_num, result);
 
 return result;
}