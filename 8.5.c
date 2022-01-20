#include<stdio.h>
char get_first(void);
int main(void)
{
 char ch;
 int guess = 50;
 int up_limit = 100, low_limit = 1;
 
 printf("Pick an integer from 1 to 100. I will try to guess ");
 printf("it.\nRespond with a y if my guess is right.\n");
 printf("If my guess is too big,respond with b,\n"
   "if my guess is too small,respond with s\n");
 printf("Uh...is your number %d?\n",guess);
 while ((ch = get_first()) != 'y')
 {
  if (ch == 'b')
  {
   up_limit = guess;
   guess = (low_limit + up_limit) / 2;
  }
  if (ch == 's')
  {
   low_limit = guess;
   guess = (low_limit + up_limit) / 2;
  }
  printf("Well, then, is it %d?\n",guess);
 }
 printf("I knew i could do it!\n");
 
 return 0;
}
char get_first(void)
{
 char ch;
 ch = getchar();
 while (getchar() != '\n')
  continue;
 
 return ch;
} 