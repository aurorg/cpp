/*#include<stdio.h>
int main(void)
{
 float speed;
 float bytes;
 
 printf("What's speed when you download(Mb/s)?");
 scanf("%f",&speed);
 printf("How large is the file size(MB)?");
 scanf("%f",&bytes);
 printf("At %.2f megabits per second, a file of %.2fmegabytes download in %.2f seconds\n",
 speed,bytes,(bytes*8)/speed);
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    float speed;
    float bytes;
    printf("What's speed when you download(Mb/s)?");
    scanf("%f",&speed);
    printf("How large is the file size(MB)?");
    scanf("%f",&bytes);
    printf("At %.2f megabits per second,a file of %.2f megabytes download in %.2f second\n",
    speed,bytes,(bytes*8)/speed);

    return 0;
}   