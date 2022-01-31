/*#include<stdio.h>
int main(void)
{
 float height;
 char name[40];
 
 printf("Hello,please enter your height(feet).\n");
 scanf("%f",&height);
 printf("Then,please enter your name.\n");
 scanf("%s",&name);
 printf("%s,you are %.3f feet tall.\n",name,height);
 printf("In centimenter:%fcm\n",height*2.54);
 printf("IN meter:%fm",height*2.54*100);
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    float height;
    char name[40];

    printf("Hello,please enter your height(feet).\n");
    scanf("%f",&height);
    printf("please enter your name.\n");
    scanf("%s",&name);
    printf("%s,you are %.3f feet tall.\n",name,height);
    printf("In centimenter:%fcm\n",height*2.54);
    printf("In meter:%fm",height*2.54*100);
    return 0;
}