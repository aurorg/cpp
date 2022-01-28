#include<stdio.h>
void Temperature(double Fahrenheit_tem);
int main(void)
{
 double Fahrenheit_tem = 0.0;
 
 printf("Please enter the Fahrenheit temperature: \n");
 while(scanf("%lf",&Fahrenheit_tem) == 1)
 {
  Temperature(Fahrenheit_tem);
  printf("Please enter the Fahrenheit temperature(enter q to quit): \n");
 }
 
 return 0;
}
void Temperature(double Fahrenheit_tem)
{
 const double FAHRENHEIT_VAL = 32.0;
 const double KELLOGGS_VAL = 273.16;
 const double CELSIUS_TEM = 5.0/9.0*(Fahrenheit_tem - FAHRENHEIT_VAL);
 const double KELLOGGS_TEM = CELSIUS_TEM + KELLOGGS_VAL;

 printf("Celsius: %.2lf  Fahrenheit:%.2lf  Kellogg's:%.2lf\n",CELSIUS_TEM , Fahrenheit_tem, KELLOGGS_TEM);
 
}