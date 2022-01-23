/*#include<stdio.h>
int main(void)
{
 char letters[6];
 int i,j;
 
 for (i = 0;i < 6;i++)
 {
  for(j = 0;j <= i;j++)
  {
   letters[j] = 'F' - j;
   printf("%c",letters[j]);
  }
  printf("\n");
 }
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    char letters[6];
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<+i;j++)
        {   letters[j]='F'-j;
            printf("%c",letters[j]);
        }
        printf("\n");
    }
    return 0;
}