#include<stdio.h>
int alpha(char ch)
{
    if( ch>='a' && ch<='z' )
 {
     return ( ch-'a'+1 );
 }
 else if( ch>='A' && ch<='Z' )
 {
  return ( ch-'A'+1 );
 }
 else
 {
  return -1;
 }
}
int main()
{
 char ch;
 int alp;
 while( (ch=getchar()) != EOF )
 {
  if( '\n'==EOF )
  {
   continue;
  }
  alp = alpha(ch);
  if( alp != -1 )
  {
   printf("%c:%d\n",ch,alp);
  }
 }
 
 return 0;
}