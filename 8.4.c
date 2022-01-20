/*#include<stdio.h>
#include<ctype.h>
int main(void)
{
 int ch;
 int words = 0, sign = 0, count = 0;
 double average;
 while((ch = getchar()) != '&')
 {
  if (!isspace(ch) && !sign)//判断空格
  {
   words++;
   sign = 1;
  }
  if (isalpha(ch))//测试字符是否是英文字母
   count++;
  if (isspace(ch) && sign) 
   sign = 0;
 }
 average = (double)count / (double)words;
 printf("%d 个单词，评价每个单词有 %lf 个字母。\n",words,average);
 return 0;
}*/
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int ch;
  int words=0,sign=0,count=0;
  double average;
  while((ch=getchar())!='&')
  {
    if(!isspace(ch) &&!sign)
  {
    words++;
    sign=1;
  }
  if (isalpha(ch))
   count++;
  if (isspace(ch) &&sign)
    sign=0;
  }
average=(double)count/(double)words;
printf("%d,%lf",words,average);
return 0;}