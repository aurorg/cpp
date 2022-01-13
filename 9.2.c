#include<stdio.h>
void chline (char ch, int i, int j)
{
 int a,b;
 for( a=0 ; a<j ; a++ )
 {
  for( b=0 ; b<i ; b++ )
  {
   putchar(ch);
  }
  putchar('\n');
 }

}
int main()
{
 char ch;
 int i,j;
 scanf("%c",&ch);
 scanf("%d %d",&i,&j);
 chline( ch, i, j);
 
 
 return 0;
}