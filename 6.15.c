/*#include<stdio.h>
int main(void)
{
 int i = -1;
 char letters[255];
 
 do
 {
  i++;
  scanf("%c",&letters[i]);
 }while(letters[i] != '\n');
 for( ;i >= 0;i--)
  printf("%c",letters[i]);
  
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    int i=-1;
    char letters[255];
    do{
        i++;
        scanf("%c",&letters[i]);
    }while(letters[i]!='\n');
    for( ;i>=0;i--)
     printf("%c",letters[i]);
    return 0;
}