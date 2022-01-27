/*#include<stdio.h>
#define CM_PER_FEET 30.48
#define CM_PER_INCHES 2.54
int main(void)
{
 float height_cm;
 int height_feet;
 float height_inches;
 
 printf("Enter a height in centimeters: ");
 scanf("%f",&height_cm);
 while(height_cm > 0)
  {
   height_feet = (int)(height_cm/CM_PER_FEET);
   height_inches = (height_cm - height_feet*CM_PER_FEET) / CM_PER_INCHES;
   printf("%.1f cm = %d feet, %.1f inches\n",height_cm, height_feet, height_inches);
   printf("Enter a height in centimeters (<=0 to quit): ");
   scanf("%f",&height_cm); 
  }
  printf("bye");
  
  return 0;
}*/
#include <stdio.h>
#define CM_PER_FEET 30.48
#define CM_PER_INCHES 2.54
int main(void)
{
  float height_cm;
  int height_feet;
  float height_inches;

  printf("Enter a height in centimeters:");
  scanf("%f",&height_cm);
  while(height_cm>0)
  {
    height_feet=(int)(height_cm/CM_PER_FEET);
    height_inches=(height_cm-height_feet*CM_PER_FEET)/CM_PER_INCHES;
    printf("%.1f cm=%d feet,%.1f inches\n",height_cm,height_feet,height_inches);
    printf("Enter a height in centimeters(<=0 to quit):");
    scanf("%f",&height_cm);

  }
  printf("bye");
  return 0;
}