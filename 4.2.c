/*#include<stdio.h>
#include<string.h>
int main(void)
{
 char first_name[20];
 char last_name[20];
 int length_first = 0;
 int length_last = 0;
 
 length_first = strlen(first_name);
 length_last = strlen(last_name);
 
 printf("Please input your first_name.\n");
 scanf("%s",first_name);
 printf("Please input your last_name.\n");
 scanf("%s",last_name);
 printf("\"%s %s\"\n",first_name,last_name);  //a
 printf("\"%20s %20s\"\n",first_name,last_name);//b
 printf("\"%-20s %-20s\"\n",first_name,last_name);//c
 printf("%*s %*s\n",length_first,first_name,length_last,last_name); //d
 
 return 0;
}*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[20];
    char last_name[20];
    int length_first=0;
    int length_last=0;
    length_first=strlen(first_name);
    length_last=strlen(last_name);
    printf("PLease input your first_name.\n");
    scanf("%s",first_name);
    printf("PLease input your last_name.\n");
    scanf("%s",last_name);
    printf("\"%s %s\"\n",first_name,last_name);
    printf("\"%20s %20s\"\n",first_name,last_name);
    printf("\"%-20s %-20s\"\n",first_name,last_name);
    printf("%*s %*s\n",length_first,first_name,length_last,last_name);
    return 0;
}