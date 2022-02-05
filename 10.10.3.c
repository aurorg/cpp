/*#include <stdio.h>
int main(void)
{
    const int days[]={31,28,31,30,31,30,31,31,30,31};
    int index;
    for(index=0;index<sizeof days/sizeof days[0];index++)
       printf("Month %2d has %d days.\n",index+1,days[index]);
       return 0;
}
*/
/*#include <stdio.h>
int main(void)
{
    const int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for(index=0;index<sizeof days/sizeof days[0];index++)
    printf("Month %d has %d days\n",index+1,days[index]);
    return 0;
}*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    a=pow(2,3);
 printf("%lf",a);
    return 0;
}