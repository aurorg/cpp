/*   第一题    */
/*#include<stdio.h>
#define SPACE ' '
int main(void)
{
 int count_space = 0;
 int count_line_break = 0;
 int count_others = 0;
 int ch;
 printf("Please put in.\n");
 ch = getchar();
 while (ch != '#')
 {
  if (ch == SPACE)
   count_space++;
  else if (ch == '\n')
   count_line_break++;
  else
   count_others++;
  ch = getchar();
 }
 printf("count_space:%d\n  count_line_break:%d\n  count_others:%d\n",
    count_space, count_line_break, count_others);
    return 0;
}*/
#include <stdio.h>
#define SPACE ' '
int main(void)
{
   int count_space=0;
   int count_line_break=0;
   int count_others=0;
   int ch;
   printf("please put in.\n");
   ch=getchar();
   while(ch!='#')
   {
      if(ch==SPACE)
        count_space++;
      else if(ch=='\n')
        count_line_break++;
      else 
        count_others++;
      ch=getchar();

   }
   printf("count_space:%d\n  count_line_break:%d\n  count_others:%d\n",count_space,count_line_break,count_others);
   return 0;
}