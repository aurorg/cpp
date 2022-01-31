/*#include<stdio.h>
int main(void)
{
 double number1;
 double number2;
 
 printf("Enter a float number.\n");
 scanf("%lf",&number1);
 printf("The input is %2.1lf or %.1e.\n",number1,number1);
 
 printf("Enter another number.\n");
 scanf("%lf",&number2);
 printf("The input is %+5.3lf or %5.3E.",number2,number2);
 
 return 0;
}*/
#include <stdio.h>
int main(void)
{
    double number1;
    double number2;
    printf("Enter a float number.\n");
    scanf("%lf",&number1);
    printf("The input is %2.1lf or %.1e.\n",number1,number2);

    printf("Enter another number.\n");
    scanf("%lf",&number2);
    printf("The input is %+5.3lf or %5.3E.",number2,number2);
    return 0;
}