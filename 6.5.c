/*#include<stdio.h>
int main(void)
{
 int i,j,k;
 char letter;
 printf("Please enter a capital letter.\n");
 scanf("%c",&letter);
 k = letter - 'A' + 1;
 
 for (i = 0; i < k;i++)         //确定行数 
 {
  for (j = 0; j <=k-i; j++)  //除输出的那个字符外，其余用空格填充 
   printf(" ");
  for (j = 0;j <= i;j++)     //升序输出 
   printf("%c",'A' + j);
  for (j = i - 1;j >= 0;j--) //降序输出 
   printf("%c",'A' + j);
  printf("\n");
 }
 
 return 0;
} */
#include <stdio.h>
int main(void)
{
    int i,j,k;
    char letter;
    printf("please enter a capital letter.\n");
    scanf("%c",&letter);
    k=letter-'A'+1;
    for(i=0;i<k;i++)
    {
        for(j=0;j<=k-i;j++)
         printf(" ");
        for(j=0;j<=i;j++)
         printf("%c",'A'+j);
        for(j=i-1;j>=0;j--)
         printf("%c",'A'+j);
        printf("\n");
        
    }
    return 0;
}