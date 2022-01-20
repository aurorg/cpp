/*#include<stdio.h>
char get_first(void);
int main(void)
{
 char ch;
 ch = get_first();
 printf("%c",ch);
 
 return 0;
}
char get_first(void)
{
 int ch;
 
 while((ch = getchar()) == '\n' || ch == ' ' || ch == '\t')
 ;
 
 return ch;
}*/
#include <stdio.h>
char get_first(void);
int main(void)
{
    char ch;
    ch=get_first();
    printf("%c",ch);
    return 0;
}
char get_first(void)
{
    int ch;
    while((ch=getchar())=='\n'||ch==' '||ch=='\t');
    return ch;
}