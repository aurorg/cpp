/*#include<stdio.h>
int main(void)
{
 int count_big = 0;
 int count_small = 0;
 char ch;
 
 while ((ch = getchar()) !=  '&' && ch != '#')
 {
  if (ch >= 'a' && ch <= 'z')
   count_small++;
  else if (ch >= 'A' && ch <= 'Z')
   count_big++;
 }
 printf("Number of capital letters: %d\n",count_big);    //大写字母个数 
 printf("Lowercase number of letters: %d\n",count_small);//小写字母个数 
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
  int count_big;
  int count_small;
  char ch;
  while((ch=getchar())!='&' && ch!='#')
  {
    if(ch>='a'&& ch<='z')
      count_small++;
    else if(ch>='A'&& ch<='Z')
      count_big++;
  }
  printf("Number of capital letters:%d\n",count_big);
  printf("Lowercase number of letters:%d\n",count_small);
  return 0;
}