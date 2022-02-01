/*#include<stdio.h>
#define PER_GALLONS 3.785
#define PER_KM 1.609
int main(void)
{
    const double MILES = 3.785; 
 double mileage;
 double gasoline;
 
 printf("Enter the mileage and the amount of gasoline consumed.\n");
 scanf("%lf %lf",&mileage,&gasoline);
 printf("Consumed one gasoline oil can drive %.1lf miles.\n",mileage/gasoline);
 printf("Translate in rise/km: %.1lf\n",(gasoline*PER_GALLONS)/(PER_KM*mileage*100));
 
 return 0;
 
 }*/     
 #include <stdio.h>
 #define PEG_GALLONS 3.785
 #define PEG_KM 1.609
 int main(void)
 {
     const double MILES=3.785;
     double mileage;
     double gasoline;

     printf("Enter the mileage and the amount of gasoline consumed.\n");
     scanf("%lf %lf",&mileage,&gasoline);
     printf("Consumed one gasoline oil can drive %.1lf miles.\n",mileage/gasoline);
     printf("Translate in rise/km:%.1lf\n",(gasoline*PEG_GALLONS)/(PEG_KM*mileage*100));

     return 0;

 }